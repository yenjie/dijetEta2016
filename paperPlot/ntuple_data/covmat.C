#include "TFile.h"
#include "TTree.h"
#include "TMatrixT.h"

static const int totalbins = 18;

void display(TMatrixT<double> mat, int nbins) {
   for (int j=0; j<nbins; ++j) {
      for (int k=0; k<nbins; ++k)
         printf(" %f", mat[j][k]);
      printf("\n");
   }
}

void covmat(const char* input, TMatrixT<double>& mat, int nbins) {
   TFile* finput = new TFile(input, "read");
   TTree* t = (TTree*)finput->Get("t");

   int nBins = -1;
   int iter = -1;
   float val[100];
   float eta[100];

   t->SetBranchAddress("nBins", &nBins);
   t->SetBranchAddress("val", val);
   t->SetBranchAddress("eta", eta);
   t->SetBranchAddress("i", &iter);

   int offset = totalbins - nbins;

   double mean[totalbins] = {0};
   int nentries = t->GetEntries();
   for (int i=0; i<nentries; ++i) {
      t->GetEntry(i);

      for (int j=offset; j<totalbins; ++j)
         mean[j] += val[j];
   }

   for (int j=offset; j<totalbins; ++j)
      mean[j] /= nentries;

   for (int i=0; i<nentries; ++i) {
      t->GetEntry(i);

      for (int j=0; j<nbins; ++j)
         for (int k=0; k<nbins; ++k)
            mat[j][k] += (val[j+offset] - mean[j+offset]) * (val[k+offset] - mean[k+offset]);
   }

   mat *= (1. / nentries);
}

int main(int argc, char* argv[]) {
   if (argc > 2) {
      int nbins = atoi(argv[1]);

      TMatrixT<double> sum(nbins, nbins);
      sum.Zero();
      for (int f=2; f<argc; ++f) {
         TMatrixT<double> mat(nbins, nbins);
         mat.Zero();
         covmat(argv[f], mat, nbins);

         sum += mat;
      }

      display(sum, nbins);
   } else {
      return 1;
   }
}
