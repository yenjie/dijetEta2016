#include "TFile.h"
#include "TTree.h"
#include "TMatrixT.h"
#include "TH1.h"
#include "TGraph.h"
#include "TCanvas.h"

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

   int neta = 18;
   double etabins[19]={-2.915,-2.63333333333,-2.07,-1.78833333333,-1.50666666667,-1.225,-0.94333333333,-0.66166666666,-0.38,-0.09833333333,0.18333333333,0.465,0.74666666666,1.02833333333,1.31,1.59166666667,1.87333333333,2.43666666667,3};

   TH1D* hframe = new TH1D("hframe", ";#eta_{dijet};pPb/pp", neta, etabins);
   hframe->SetStats(0);
   hframe->SetAxisRange(0.6, 1.15, "Y");

   TCanvas* c1 = new TCanvas("c1", "", 400, 400);
   hframe->Draw();

   for (int i=0; i<nentries; ++i) {
      t->GetEntry(i);

      TGraph* heigenstate = new TGraph(nbins);
      for (int j=0; j<nbins; ++j)
         heigenstate->SetPoint(j, eta[j+offset], val[j+offset]);
      heigenstate->SetMarkerColor((i%30)+20);
      heigenstate->SetLineColor((i%30)+20);
      heigenstate->Draw("same p l");

      for (int j=0; j<nbins; ++j)
         for (int k=0; k<nbins; ++k)
            mat[j][k] += (val[j+offset] - mean[j]) * (val[k+offset] - mean[k]);
   }

   c1->SaveAs(Form("pdfs-%s.png", input));

   mat *= (1. / nentries);

   // scale by arbitrary amount or determinant will be too small
   mat *= 500;
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
