#include "TFile.h"
#include "TH1.h"
#include "TMatrixT.h"
#include "TMath.h"

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
          int startb, int endb) {
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
   chisqval *= 2000;

   double prob = TMath::Prob(chisqval, nbins);

   printf("chisq: %f, prob: %f\n", chisqval, prob);
   printf("............................................................\n");

   return 0;
}

int main(int argc, char* argv[]) {
   if (argc == 7)
      return chisq(argv[1], argv[2], argv[3], argv[4], atoi(argv[5]), atoi(argv[6]));
   else
      return 1;
}
