#include "TFile.h"
#include "TTree.h"
#include "TMatrixT.h"
#include "TH1.h"

void display(TMatrixT<double> mat, int nbins) {
   for (int j=0; j<nbins; ++j) {
      for (int k=0; k<nbins; ++k)
         printf(" %f", mat[j][k]);
      printf("\n");
   }
}

void covmat(const char* input, TMatrixT<double>& mat, int startb, int endb) {
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

   int nbins = endb - startb + 1;
   int offset = startb - 1;

   double* mean = new double[nbins];
   int nentries = t->GetEntries();
   for (int i=0; i<nentries; ++i) {
      t->GetEntry(i);

      for (int j=0; j<nbins; ++j)
         mean[j] += val[j+offset];
   }

   for (int j=0; j<nbins; ++j)
      mean[j] /= nentries;

   if (strstr(input, "data")) {
      TH1D* hcentre = (TH1D*)finput->Get("hcentre");
      for (int j=0; j<nbins; ++j)
         mean[j] = hcentre->GetBinContent(startb+j);
   }

   if (strstr(input, "output")) {
      t->GetEntry(0);
      for (int j=0; j<nbins; ++j)
         mean[j] = val[j+offset];
   }

   for (int i=0; i<nentries; ++i) {
      t->GetEntry(i);

      for (int j=0; j<nbins; ++j)
         for (int k=0; k<nbins; ++k)
            mat[j][k] += (val[j+offset] - mean[j]) * (val[k+offset] - mean[k]);
   }

   mat *= (1. / nentries);

   // scale by arbitrary amount or determinant will be too small
   mat *= 2000;
}

int main(int argc, char* argv[]) {
   if (argc > 3) {
      int startb = atoi(argv[1]);
      int endb = atoi(argv[2]);

      int nbins = endb - startb + 1;

      TMatrixT<double> sum(nbins, nbins);
      sum.Zero();
      for (int f=3; f<argc; ++f) {
         TMatrixT<double> mat(nbins, nbins);
         mat.Zero();
         covmat(argv[f], mat, startb, endb);

         sum += mat;
      }

      display(sum, nbins);
   } else {
      return 1;
   }
}
