#include "TFile.h"
#include "TH1.h"
#include "TMatrixT.h"
#include "TMatrixDUtilsfwd.h"
#include "TMath.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TPad.h"

#include <string>
#include <iostream>
#include <sstream>

void display(TMatrixT<double> mat, int nbins) {
   for (int j=0; j<nbins; ++j) {
      for (int k=0; k<nbins; ++k)
         printf(" %9.2e", mat[j][k]);
      printf("\n");
   }
}

int chisq(const char* data, const char* datahist,
          const char* pdf, const char* pdfhist,
          int startb, int endb, const char* label) {
   TFile* fdata = new TFile(data, "read");
   TH1D* hdata = (TH1D*)fdata->Get(datahist);

   TFile* fpdf = new TFile(pdf, "read");
   TH1D* hpdf = (TH1D*)fpdf->Get(pdfhist);

   int nbins = endb - startb + 1;
   double* dataval = new double[nbins];
   double* pdfval = new double[nbins];
   for (int i=0; i<nbins; ++i) {
      dataval[i] = hdata->GetBinContent(startb+i);
      pdfval[i] = hpdf->GetBinContent(startb+i);
   }

   TMatrixT<double> covmat(nbins, nbins);
   covmat.Zero();
   for (int j=0; j<nbins; ++j) {
      std::string line;
      std::getline(std::cin, line);
      std::stringstream sstream(line);
      for (int k=0; k<nbins; ++k)
         sstream >> covmat[j][k];
   }
   // display(covmat, nbins);
   // printf("............................................................\n");

   TMatrixT<double> pcormat(nbins, nbins);
   TMatrixT<double> pcovmat = covmat;
   for (int j=0; j<nbins; ++j) {
      for (int k=0; k<nbins; ++k) {
         pcormat[j][k] = (1. / sqrt(covmat[j][j])) * covmat[j][k] * (1. / sqrt(covmat[k][k]));
         pcovmat[j][k] = fabs(pcovmat[j][k]);
      }
   }

   gStyle->SetOptStat(0);

   // TCanvas* c1 = new TCanvas("c1", "", 400, 400);
   // pcormat.Draw("colz");
   // c1->SaveAs(Form("cormat-%s-%i-%i.png", label, startb, endb));
   // gPad->SetLogz();
   // pcovmat.Draw("colz");
   // c1->SaveAs(Form("covmat-%s-%i-%i.png", label, startb, endb));

   double det;
   TMatrixT<double> invcovmat = covmat.Invert(&det);
   printf("determinant: %f\n", det);
   // display(invcovmat, nbins);
   // printf("............................................................\n");

   double chisqval = 0;
   for (int j=0; j<nbins; ++j)
      for (int k=0; k<nbins; ++k)
         chisqval += (dataval[j] - pdfval[j]) * invcovmat[j][k] * (dataval[k] - pdfval[k]);

   // scale back
   chisqval *= 500;

   double prob = TMath::Prob(chisqval, nbins);

   printf("chisq: %f, prob: %f\n", chisqval, prob);
   printf("............................................................\n");

   return 0;
}

int main(int argc, char* argv[]) {
   if (argc == 8)
      return chisq(argv[1], argv[2], argv[3], argv[4], atoi(argv[5]), atoi(argv[6]), argv[7]);
   else
      return 1;
}
