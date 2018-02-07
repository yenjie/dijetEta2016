#include "TFile.h"
#include "TTree.h"
#include "TH1.h"
#include "TRandom3.h"

static const int nptbins = 6;
static const int nbins = 18;

int samplestat(const char* input, const char* output) {
   TFile* finput = new TFile(input, "read");

   TH1D* hpp[nptbins] = {0};
   TH1D* hppb[nptbins] = {0};

   for (int i=0; i<nptbins; ++i) {
      hpp[i] = (TH1D*)finput->Get(Form("hist_eta_pp_%i", i));
      hppb[i] = (TH1D*)finput->Get(Form("hist_eta_%i", i));
   }

   TRandom3 rand;

   for (int p=0; p<nptbins; ++p) {
      TFile* foutput = new TFile(Form("%s_%i.root", output, p), "recreate");
      TTree* tout = new TTree("t", "samplestat");

      TH1D* hcentre = (TH1D*)finput->Get(Form("hist_eta_rat_%i", p))->Clone("hcentre");

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
         TH1D* hppbiter = (TH1D*)hppb[p]->Clone();

         for (int b=1; b<=nbins; ++b) {
            hppiter->SetBinContent(b, rand.Gaus(hppiter->GetBinContent(b), hppiter->GetBinError(b)));
            hppbiter->SetBinContent(b, rand.Gaus(hppbiter->GetBinContent(b), hppbiter->GetBinError(b)));
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
      hcentre->Write("", TObject::kOverwrite);
      foutput->Close();
   }

   return 0;
}

int main(int argc, char* argv[]){
   if (argc == 3)
      return samplestat(argv[1], argv[2]);
   else
      return 1;
}
