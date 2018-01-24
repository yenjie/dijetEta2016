#include "plotsPAS.C"

void compareToPAS(){
  TH1D::SetDefaultSumw2();
  TH2D::SetDefaultSumw2(true);
  
  TFile *file[2];
  file[0] = new TFile("outf_pPb_pp_20170116_pPb_noL3_0330.root");
  file[1] = new TFile("outf_pPb_pp_raw.root");
 
  TH1D *hist_pp[6][2];
  TH1D *hist[6][2];
  TH1D *hist_rat[6];
  TH1D *hist_pp_rat[6];
  for(int ifile = 0; ifile < 2; ifile++){
    for(int ipt = 0; ipt < 6; ipt++){
      hist_pp[ipt][ifile] = (TH1D*)file[ifile]->Get(Form("hist_eta_pp_%d",ipt));
      hist[ipt][ifile] = (TH1D*)file[ifile]->Get(Form("hist_eta_%d",ipt));
      hist_pp[ipt][ifile]->Scale(1./hist_pp[ipt][ifile]->Integral());
      hist[ipt][ifile]->Scale(1./hist[ipt][ifile]->Integral());
      //for(int ibin = 0; ibin > hist_pp[ipt][ifile]->GetNbinsX(); ibin++){
      //}
      if(ifile == 1){
        hist_pp_rat[ipt] = (TH1D*)hist_pp[ipt][ifile]->Clone(Form("hist_pp_rat_%d",ipt));
        hist_rat[ipt] = (TH1D*)hist[ipt][ifile]->Clone(Form("hist_rat_%d",ipt));
	hist_pp_rat[ipt]->Divide(hist_pp[ipt][0]);
        hist_rat[ipt]->Divide(hist[ipt][0]);
      }
    }
  } 

  TCanvas * canvas = new TCanvas("canvas","",1200,800);
  makeMultiPanelCanvas(canvas,3,2,0.0,0.0,0.3,0.24,0.2); 
  TH1D * empty = new TH1D("empty","",10,-3.,3.);
  empty->Fill(0.,1000);
  empty->SetMaximum(2.);
  empty->SetMinimum(0.);
  for(int ipt = 0; ipt < 6; ipt++){
    canvas->cd(ipt+1);
    empty->Draw();
    hist_pp_rat[ipt]->Draw("same");
  } 
  canvas->SaveAs("pp_change.pdf");

  TCanvas * canvas2 = new TCanvas("canvas2","",1200,800);
  makeMultiPanelCanvas(canvas2,3,2,0.0,0.0,0.3,0.24,0.2); 
  for(int ipt = 0; ipt < 6; ipt++){
    canvas2->cd(ipt+1);
    empty->Draw();
    hist_rat[ipt]->Draw("same");
  } 
  canvas2->SaveAs("pPb_change.pdf");
}
