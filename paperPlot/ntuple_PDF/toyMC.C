#include <TFile.h>
#include <TTree.h>
#include <TH1D.h>
#include <TF1.h>

// ToyMC for covariant matrix calculation
// Yen-Jie Lee


void toyMC(string title="stat",int ptBin=1)
{
  // intput file
  TFile *infile = new TFile("resultHistograms.root");
  
  TH1D *hRatio = (TH1D*)infile->Get(Form("hist_eta_rat_%d",ptBin));
  TH1D *hPP    = (TH1D*)infile->Get(Form("hist_eta_pp_%d",ptBin));
  float sum=0;
  for (int j=1;j<=hPP->GetNbinsX();j++){
     sum+=hPP->GetBinContent(j);
  }
  hPP->Scale(1./sum);
  TH1D *hToy;
  hToy = (TH1D*)hPP->Clone("hToy");
    
  // output file
  TFile *output = new TFile(Form("output-ratio-%s-%d.root",title.c_str(),ptBin),"recreate");
  TTree *t = new TTree("t","");
   
  float val[100], eta[100];
  int nBins=0;
  int iter=0;

  t->Branch("nBins",&nBins,"nBins/I");
  t->Branch("val",val,"val[nBins]/F");
  t->Branch("eta",eta,"eta[nBins]/F");
  t->Branch("i",&iter,"i/I");
  
  TF1 *f = new TF1("f","TMath::Gaus(x,[0],[1])");
  
  for (int j=1;j<=hRatio->GetNbinsX();j++){
     eta[j-1]=hPP->GetBinCenter(j);
  }
  
  nBins=hRatio->GetNbinsX();
  
  for (int i=0;i<1000;i++) {
     float toySum=0;
     if (i%100==0) cout <<i<<endl;
     for (int j=1;j<=hRatio->GetNbinsX();j++){
        float centralValue = hRatio->GetBinContent(j)*hPP->GetBinContent(j);
	float uncertainty = hRatio->GetBinError(j)*hPP->GetBinContent(j);
	//cout <<centralValue<<" "<<uncertainty<<endl;
	f->SetParameters(centralValue,uncertainty);
	f->SetRange(centralValue-uncertainty*5,centralValue+uncertainty*5);
	float randVal = f->GetRandom();
	toySum+=randVal;
	val[j-1]=randVal/hPP->GetBinContent(j);
     }
     //cout <<"sum="<<toySum<<endl;
     for (int j=0;j<hRatio->GetNbinsX();j++){
        val[j-1] = val[j-1]/toySum;
     }
     iter=i;
     t->Fill();
   }   
  hToy->Write();
  hPP->Write();
  hRatio->Write();
  t->Write();
  output->Close();  
}
