#include "TFile.h"
#include "TTree.h"
#include "TH1.h"
#include "TGraphAsymmErrors.h"
#include "TRandom3.h"

static const int nptbins = 6;
static const int nbins = 18;

int samplesys(const char* input, const char* output) {
   TFile* finput = new TFile(input, "read");

   TH1D* hpp[nptbins] = {0};
   TGraphAsymmErrors* gratio[nptbins] = {0};

   for (int i=0; i<nptbins; ++i) {
      hpp[i] = (TH1D*)finput->Get(Form("hist_eta_pp_%i", i));
      gratio[i] = (TGraphAsymmErrors*)finput->Get(Form("Graph_%i", i));
   }

   TRandom3 rand;

   for (int p=0; p<nptbins; ++p) {
      TFile* foutput = new TFile(Form("%s_%i.root", output, p), "recreate");
      TTree* tout = new TTree("t", "samplesys");

      int nBins = nbins;
      int iter = 0;
      float eta[100];
      float val[100];

      tout->Branch("nBins", &nBins, "nBins/I");
      tout->Branch("i", &iter, "i/I");
      tout->Branch("eta", eta, "eta[nBins]/F");
      tout->Branch("val", val, "val[nBins]/F");

      int niter = 100;
      for (; iter<niter; ++iter) {
         TH1D* hppiter = (TH1D*)hpp[p]->Clone();
         TH1D* hppbiter = (TH1D*)hpp[p]->Clone();

         for (int b=1; b<=nbins; ++b) {
            float yup = gratio[p]->GetErrorYhigh(b-1);
            float ydown = gratio[p]->GetErrorYlow(b-1);

            float direction = rand.Gaus(0, 1);
            double x, y, var;
            gratio[p]->GetPoint(b-1, x, y);
            if (direction > 0)
               var = y + fabs(rand.Gaus(y, yup) - y);
            else
               var = y - fabs(rand.Gaus(y, ydown) - y);

            hppbiter->SetBinContent(b, hppiter->GetBinContent(b) * var);
         }

         hppiter->Scale(1. / hppiter->Integral(1, nbins), "width");
         hppbiter->Scale(1. / hppbiter->Integral(1, nbins), "width");

         TH1D* hratioiter = (TH1D*)hppbiter->Clone();
         hratioiter->Divide(hppiter);

         for (int b=1; b<=nbins; ++b) {
            eta[b-1] = hratioiter->GetBinCenter(b);
            val[b-1] = hratioiter->GetBinContent(b);
         }

         tout->Fill();
      }

      tout->Write("", TObject::kOverwrite);
      foutput->Close();
   }

   return 0;
}

int main(int argc, char* argv[]){
   if (argc == 3)
      return samplesys(argv[1], argv[2]);
   else
      return 1;
}
