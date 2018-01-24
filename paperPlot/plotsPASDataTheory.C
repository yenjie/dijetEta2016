#include "plotPDFDoubleRatio.C"
#include "plotPDFDoubleRatio_v2.C"
#include "plotPDF.C"
#include "TGraphErrors.h"
#include "TColor.h"
#include "TStyle.h"
#include "/afs/cern.ch/user/d/dgulhan/workDir/private/thesisPlots/dijetpPb/utilities.h"

void prettyLegend(TLegend *legpp){
  legpp->SetFillColor(0);
  legpp->SetBorderSize(0);
  legpp->SetFillStyle(0);
  legpp->SetTextFont(43);
  legpp->SetTextSize(25); 
}

void plotsPAS(){
 gStyle->SetCanvasPreferGL(1);
 TH1D::SetDefaultSumw2();
   // int colpp[] = {TColor::GetColor("#FFE303"),TColor::GetColor("#397D02")};
   int colpp[] = {kBlack,TColor::GetColor("#388E8E")};
   int colpPb[] = {TColor::GetColor("#388E8E"),kBlack,TColor::GetColor("#0276FD")};
   int colpPbdata = TColor::GetColor("#CD0000");
   int colppdata = TColor::GetColor("#0000CD");
   TString stringnPDF[] = {"DSSZ","EPS09","nCTEQ15"};
  // int col[] = {TColor::GetColor("#CD0000"),TColor::GetColor("#FF7F50"),TColor::GetColor("#FFA824"),TColor::GetColor("#BCED91"),TColor::GetColor("#397D02"),TColor::GetColor("#388E8E"),TColor::GetColor("#009ACD"),TColor::GetColor("#5B59BA")};

  // TFile *file_data = new TFile("outf_pPb_pp_raw.root");
  TFile *file_data = new TFile("outf_pPb_pp_7pi8.root");
  // TFile *file_data = new TFile("outf_pPb_pp_newppMC.root");
  TFile *file_data_NB = new TFile("outf_pp_pythia_raw.root");
  
  TString modePP = "pp_boost_v4_noweight_neg_test2";
  TString modepPb = "pPb_boost_v4_noweight_test2";
  TString modePPNB = "pp_noboost";
  TString stringppNLO[]={"MMHT14","CT14"};
  int npt = 6;
  int nPDFpp = 2; 
  int nPDFpPb = 3;
  int ptlow[] = {25, 55, 75, 95, 115, 150, 400};
  //!read data and NLO
  TH1D *hData[npt];
  TH1D *hDataPP[npt];
  TH1D *hDataRat[nPDFpPb][nPDFpp][npt];
  TH1D *hDataPPRat[nPDFpp][npt];
  TH1D *hDataDiff[nPDFpPb][nPDFpp][npt];
  TH1D *hDataPPDiff[nPDFpp][npt];
  
  
  TGraphAsymmErrors *NLOpp[nPDFpp][npt];
  TGraphAsymmErrors *NLOpPb[nPDFpPb][nPDFpp][npt];
  
  TGraphAsymmErrors *NLOppRat[nPDFpp][npt];
  TGraphAsymmErrors *NLOpPbRat[nPDFpPb][nPDFpp][npt];
  
  TGraphAsymmErrors *NLOppDiff[nPDFpp][npt];
  TGraphAsymmErrors *NLOpPbDiff[nPDFpPb][nPDFpp][npt];
  
  for(int ipt = 0; ipt < 6; ipt++){
    hData[ipt] = (TH1D*)file_data->Get(Form("hist_eta_%d",ipt));
    hDataPP[ipt] = (TH1D*)file_data->Get(Form("hist_eta_pp_%d",ipt));
  }
  int nbins = hDataPP[0]->GetNbinsX();
  for(int ipt = 0; ipt < 6; ipt++){
	hDataPP[ipt]->Scale(1./hDataPP[ipt]->Integral());
	hData[ipt]->Scale(1./hData[ipt]->Integral());
	for(int ibin = 0; ibin < nbins; ibin++){
	 hDataPP[ipt]->SetBinContent(ibin+1, hDataPP[ipt]->GetBinContent(ibin+1)/hDataPP[ipt]->GetBinWidth(ibin+1));
	 hData[ipt]->SetBinContent(ibin+1, hData[ipt]->GetBinContent(ibin+1)/hData[ipt]->GetBinWidth(ibin+1));
	 hDataPP[ipt]->SetBinError(ibin+1, hDataPP[ipt]->GetBinError(ibin+1)/hDataPP[ipt]->GetBinWidth(ibin+1));
	 hData[ipt]->SetBinError(ibin+1, hData[ipt]->GetBinError(ibin+1)/hData[ipt]->GetBinWidth(ibin+1));
	}
  }
  for(int ipt = 0; ipt < 6; ipt++){

	for(int ipp = 0; ipp < nPDFpp; ipp++){
	  NLOpp[ipp][ipt] = plotPDF(ptlow[ipt], ptlow[ipt+1], 0, 1, ipp);
	  NLOppDiff[ipp][ipt] = plotPDF(ptlow[ipt], ptlow[ipt+1], 0, 1, ipp);
	  NLOppRat[ipp][ipt] = plotPDF(ptlow[ipt], ptlow[ipt+1], 0, 1, ipp);
	  cout << ipp << endl;

	  double *yNLOpp = NLOpp[ipp][ipt]->GetY();
	  double *yerrhNLOpp = NLOpp[ipp][ipt]->GetEYhigh();
	  double *yerrlNLOpp = NLOpp[ipp][ipt]->GetEYlow();
	  double *yNLOppDiff = NLOppDiff[ipp][ipt]->GetY();
	  double *yerrhNLOppDiff = NLOppDiff[ipp][ipt]->GetEYhigh();
	  double *yerrlNLOppDiff = NLOppDiff[ipp][ipt]->GetEYlow();
	  hDataPPRat[ipp][ipt] = (TH1D*)hDataPP[ipt]->Clone(Form("hDataPPRat%d%d",ipp,ipt));
	  hDataPPDiff[ipp][ipt] = (TH1D*)hDataPP[ipt]->Clone(Form("hDataPPRat%d%d",ipp,ipt));
	  cout << 1<< endl;
	  for(int ibin = 0; ibin < hData[ipt]->GetNbinsX(); ibin++){
	    cout << 1.2<< endl;
	    hDataPPRat[ipp][ipt]->SetBinError(ibin+1, hDataPP[ipt]->GetBinError(ibin+1)/yNLOpp[ibin]);
	    hDataPPRat[ipp][ipt]->SetBinContent(ibin+1, hDataPP[ipt]->GetBinContent(ibin+1)/yNLOpp[ibin]);
	    cout << 1.3<< endl;
	    hDataPPDiff[ipp][ipt]->SetBinContent(ibin+1, hDataPP[ipt]->GetBinContent(ibin+1)-yNLOpp[ibin]);
		
		  yNLOppDiff[ibin] = hDataPPDiff[ipp][ipt]->GetBinContent(ibin+1);
	  }
	  cout << 2 << endl;
	  for(int ipPb = 0; ipPb < nPDFpPb; ipPb++){
	    NLOpPb[ipPb][ipp][ipt] = plotPDF(ptlow[ipt], ptlow[ipt+1], 1, ipPb+1, ipp);
	    NLOpPbDiff[ipPb][ipp][ipt] = plotPDF(ptlow[ipt], ptlow[ipt+1], 1, ipPb+1, ipp);
	    NLOpPbRat[ipPb][ipp][ipt] = plotPDF(ptlow[ipt], ptlow[ipt+1], 1, ipPb+1, ipp);
		cout << ipp << " " << ipPb << endl;
 	    hDataRat[ipPb][ipp][ipt] = (TH1D*)hData[ipt]->Clone(Form("hDataRat%d%d%d",ipPb,ipp,ipt));
 	    hDataDiff[ipPb][ipp][ipt] = (TH1D*)hData[ipt]->Clone(Form("hDataDiff%d%d%d",ipPb,ipp,ipt));
		double *yNLOpPb = NLOpPb[ipPb][ipp][ipt]->GetY();
	    double *yerrhNLOpPb = NLOpPb[ipPb][ipp][ipt]->GetEYhigh();
	    double *yerrlNLOpPb = NLOpPb[ipPb][ipp][ipt]->GetEYlow();
		double *yNLOpPbDiff = NLOpPbDiff[ipPb][ipp][ipt]->GetY();
	    double *yerrlNLOpPbDiff = NLOpPbDiff[ipPb][ipp][ipt]->GetEYlow();
	    double *yerrhNLOpPbDiff = NLOpPbDiff[ipPb][ipp][ipt]->GetEYhigh();
		double *yNLOpPbRat = NLOpPbRat[ipPb][ipp][ipt]->GetY();
	    double *yerrlNLOpPbRat = NLOpPbRat[ipPb][ipp][ipt]->GetEYlow();
	    double *yerrhNLOpPbRat = NLOpPbRat[ipPb][ipp][ipt]->GetEYhigh();
	    for(int ibin = 0; ibin < hData[ipt]->GetNbinsX(); ibin++){
	      hDataRat[ipPb][ipp][ipt]->SetBinError(ibin+1, hData[ipt]->GetBinError(ibin+1)/yNLOpPb[ibin]);
	      hDataRat[ipPb][ipp][ipt]->SetBinContent(ibin+1, hData[ipt]->GetBinContent(ibin+1)/yNLOpPb[ibin]);
		  
	      hDataDiff[ipPb][ipp][ipt]->SetBinContent(ibin+1, hData[ipt]->GetBinContent(ibin+1)-yNLOpPb[ibin]);
		  yerrhNLOpPbRat[ibin] = yerrhNLOpPbRat[ibin]/yNLOpPbRat[ibin];
		  yerrlNLOpPbRat[ibin] = yerrlNLOpPbRat[ibin]/yNLOpPbRat[ibin];
		  
		  yNLOpPbDiff[ibin] = hDataDiff[ipPb][ipp][ipt]->GetBinContent(ibin+1);
		  yNLOpPbRat[ibin] = hDataRat[ipPb][ipp][ipt]->GetBinContent(ibin+1);
	    }
	  } 
	}
  }
  cout<<"read syst"<<endl;
  //!read systematics and unfolding
  TFile *file_systematics = new TFile("outf_unfolding_v2.root");
  TH1D *histTotalPos[npt];
  TH1D *histTotalNeg[npt];
  TH1D *histTotalPosPP[npt];
  TH1D *histTotalNegPP[npt];
  
  for(int ipt = 0; ipt < npt; ipt++){
   cout << ipt<<endl;
    histTotalPos[ipt] = (TH1D*)file_systematics->Get(Form("histTotalPositive%dMode%s",ipt,modepPb.Data()));
    histTotalPosPP[ipt] = (TH1D*)file_systematics->Get(Form("histTotalPositive%dMode%s",ipt,modePP.Data()));
    histTotalNeg[ipt] = (TH1D*)file_systematics->Get(Form("histTotalNegative%dMode%s",ipt,modepPb.Data()));
    histTotalNegPP[ipt] = (TH1D*)file_systematics->Get(Form("histTotalNegative%dMode%s",ipt,modePP.Data()));
  }
  
  //!apply unfolding

  
  cout << "bla" << endl;
  //!scale systematics according to points
  TGraphErrors *histTotalPPScaled[npt];
  TGraphErrors *histTotalScaled[npt];
  TGraphErrors *histTotalPPRatScaled[nPDFpp][npt];
  TGraphErrors *histTotalPPDiffScaled[nPDFpp][npt];
  TGraphErrors *histTotalRatScaled[nPDFpPb][nPDFpp][npt];
  TGraphErrors *histTotalDiffScaled[nPDFpPb][nPDFpp][npt];
  for(int ipt = 0; ipt < npt; ipt++){
	float centerPP[nbins]; 
	float errPP[nbins]; 
	float errPPb[nbins]; 
	float centerPPb[nbins];
	float errDiff[nPDFpPb][nPDFpp][nbins]; 
	float centerDiff[nPDFpPb][nPDFpp][nbins];
	float errRat[nPDFpPb][nPDFpp][nbins]; 
	float centerRat[nPDFpPb][nPDFpp][nbins];
	
	float errDiffPP[nPDFpp][nbins]; 
	float centerDiffPP[nPDFpp][nbins];
	float errRatPP[nPDFpp][nbins]; 
	float centerRatPP[nPDFpp][nbins];
	float centerx[nbins];
	float centererrx[nbins];
    
    for(int ibin = 0; ibin < nbins; ibin++){
	 cout << 1 << endl;
	  centerx[ibin] = histTotalPosPP[ipt]->GetBinCenter(ibin+1);
	  centererrx[ibin] = histTotalPosPP[ipt]->GetBinWidth(ibin+1)/2./1.3;
	  cout << ipt << " " << ibin << endl;
	  float errupPP = 1-(histTotalPosPP[ipt]->GetBinContent(ibin+1)-1);
	  float errdownPP = 1-(histTotalNegPP[ipt]->GetBinContent(ibin+1)-1);
	  float yPP = hDataPP[ipt]->GetBinContent(ibin+1);
	  centerPP[ibin] = yPP*(errupPP + errdownPP)/2;
	  errPP[ibin] = yPP*(errupPP - errdownPP)/2;
	 
	  
	  float errupPPb = 1-(histTotalPos[ipt]->GetBinContent(ibin+1)-1);
	  float errdownPPb = 1-(histTotalNeg[ipt]->GetBinContent(ibin+1)-1);
	  float yPPb = hData[ipt]->GetBinContent(ibin+1);
	  centerPPb[ibin] = (errupPPb + errdownPPb)/2;
	  errPPb[ibin] = (errupPPb - errdownPPb)/2;
	  for(int ipp = 0; ipp < nPDFpp; ipp++){
	  
	    float errupDiffPP = 1-(histTotalPosPP[ipt]->GetBinContent(ibin+1)-1);
	    float errdownDiffPP = 1-(histTotalNegPP[ipt]->GetBinContent(ibin+1)-1);
	    // float yDiffPP = hDataPPDiff[ipp][ipt]->GetBinContent(ibin+1);
	    float yDiffPP = hDataPP[ipt]->GetBinContent(ibin+1);
	    centerDiffPP[ipp][ibin] = 0;
	    errDiffPP[ipp][ibin] = yDiffPP*(errupDiffPP - errdownDiffPP)/2;
		
	    float errupRatPP = 1-(histTotalPosPP[ipt]->GetBinContent(ibin+1)-1);
	    float errdownRatPP = 1-(histTotalNegPP[ipt]->GetBinContent(ibin+1)-1);
	    // float yRatPP = hDataPPRat[ipp][ipt]->GetBinContent(ibin+1);
	    float yRatPP = 1.;
	    centerRatPP[ipp][ibin] = yRatPP*(errupRatPP + errdownRatPP)/2;
	    errRatPP[ipp][ibin] = yRatPP*(errupRatPP - errdownRatPP)/2;
		
	    for(int ipPb = 0; ipPb < nPDFpPb; ipPb++){
	      float errupDiff = 1-(histTotalPos[ipt]->GetBinContent(ibin+1)-1);
	      float errdownDiff = 1-(histTotalNeg[ipt]->GetBinContent(ibin+1)-1);
	      // float yDiff = hDataDiff[ipPb][ipp][ipt]->GetBinContent(ibin+1);
	      float yDiff = hData[ipt]->GetBinContent(ibin+1);
	      // centerDiff[ipPb][ipp][ibin] = yDiff*(errupDiff + errdownDiff)/2;
	      centerDiff[ipPb][ipp][ibin] = 0;
	      errDiff[ipPb][ipp][ibin] = yDiff*(errupDiff - errdownDiff)/2;
		  
	      float errupRat = 1-(histTotalPos[ipt]->GetBinContent(ibin+1)-1);
	      float errdownRat = 1-(histTotalNeg[ipt]->GetBinContent(ibin+1)-1);
	      // float yRat = hDataRat[ipPb][ipp][ipt]->GetBinContent(ibin+1);
	      float yRat = 1.;
	      centerRat[ipPb][ipp][ibin] = yRat*(errupRat + errdownRat)/2;
	      errRat[ipPb][ipp][ibin] = yRat*(errupRat - errdownRat)/2;
		}
	  }
	}
	histTotalPPScaled[ipt] = new TGraphErrors(nbins, centerx, centerPP, centererrx, errPP);
	histTotalScaled[ipt] = new TGraphErrors(nbins, centerx, centerPPb, centererrx, errPPb);
    for(int ipp = 0; ipp < nPDFpp; ipp++){
      histTotalPPDiffScaled[ipp][ipt] = new TGraphErrors(nbins, centerx, centerDiffPP[ipp], centererrx, errDiffPP[ipp]);
	  histTotalPPRatScaled[ipp][ipt] = new TGraphErrors(nbins, centerx, centerRatPP[ipp], centererrx, errRatPP[ipp]);
	  for(int ipPb = 0; ipPb < nPDFpPb; ipPb++){
	    histTotalDiffScaled[ipPb][ipp][ipt] = new TGraphErrors(nbins, centerx, centerDiff[ipPb][ipp], centererrx, errDiff[ipPb][ipp]);
	    histTotalRatScaled[ipPb][ipp][ipt] = new TGraphErrors(nbins, centerx, centerRat[ipPb][ipp], centererrx, errRat[ipPb][ipp]);
	  }
	}
  }
  
  
  //!plot ratio


  
  //!diff
  TH1D * emptyDiff = new TH1D("emptyDiff",";#eta_{dijet};Data - NLO ",10,-2.999,2.999);
  emptyDiff->Fill(1.,1000.);
  makePretty(emptyDiff,2.5);
  emptyDiff->SetMaximum(0.05);
  emptyDiff->SetMinimum(-0.05);
  emptyDiff->GetXaxis()->CenterTitle();
  emptyDiff->GetYaxis()->CenterTitle();  
  
  TH1D * emptyComb = new TH1D("emptyComb",";#eta_{dijet};Data - NLO ",10,-2.999,2.999);
  emptyComb->Fill(1.,1000.);
  makePretty(emptyComb,1.8);
  emptyComb->SetMaximum(0.05);
  emptyComb->SetMinimum(-0.05);
  emptyComb->GetXaxis()->CenterTitle();
  emptyComb->GetYaxis()->CenterTitle();  
  
  TLine *linediff = new TLine(-2.999,0.,2.999,0.);

   
  TCanvas * cDiff[nPDFpPb];
      TLegend *legDiff = new TLegend(0.05,0.68,0.4,0.85);
      prettyLegend(legDiff);
      TLegend *legDiff2 = new TLegend(0.05,0.68,0.4,0.85);
      prettyLegend(legDiff2);
      TLegend *legDiff3 = new TLegend(0.05,0.7,0.4,0.85);
      prettyLegend(legDiff3);
  for(int ipPb = 0; ipPb < 3; ipPb++){
    cDiff[ipPb] = new TCanvas(Form("cDiff%d",ipPb),"",1300,800);
    makeMultiPanelCanvas(cDiff[ipPb],3,2,0.0,0.0,0.24,0.24,0.11);

    for(int ipt = 0; ipt < npt; ipt++){
      cDiff[ipPb]->cd(ipt+1);
	  emptyDiff->Draw();
      for(int ipp = 0; ipp < 2; ipp++){
	    histTotalDiffScaled[ipPb][ipp][ipt]->SetFillColorAlpha(colpPbdata,0.35);
	    histTotalDiffScaled[ipPb][ipp][ipt]->SetFillColorAlpha(colpPbdata,0.35);
	    histTotalDiffScaled[ipPb][ipp][ipt]->SetLineColor(colpPbdata);
	    histTotalDiffScaled[ipPb][ipp][ipt]->Draw("same 2");
	  
	    NLOpPbDiff[ipPb][ipp][ipt]->SetLineColor(0);
	    NLOpPbDiff[ipPb][ipp][ipt]->SetFillColorAlpha(colpp[ipp],0.35);
        NLOpPbDiff[ipPb][ipp][ipt]->Draw("same 2");

	    hDataDiff[ipPb][ipp][ipt]->SetMarkerColor(colpp[ipp]);
	    hDataDiff[ipPb][ipp][ipt]->SetLineColor(colpp[ipp]);
	    hDataDiff[ipPb][ipp][ipt]->Draw("same");
	    hDataDiff[ipPb][ipp][ipt]->Print("all");

	    if(ipt == 0 )drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.45,0.08,26);
        if(ipt == 1 || ipt == 2)drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.30,0.08,26);
        if(ipt == 3) drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.45,0.29,26);
        if(ipt == 4) drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.28,0.29,26);
        if(ipt ==5) drawText(Form("p_{T}^{ave} > %d GeV", ptlow[ipt]),0.35,0.29,26);
       }
      }
	  // for(int ipp = 0; ipp < nPDFpp; ipp++){
	  if(ipPb==0){
      legDiff->AddEntry(hDataDiff[0][0][0], Form("%s baseline", stringppNLO[0].Data()), "p");
      legDiff->AddEntry(NLOpPbDiff[0][0][0], "Theo. Uncer.", "f");
	  legDiff2->AddEntry(hDataDiff[0][1][0], Form("%s baseline", stringppNLO[1].Data()), "p");
      legDiff2->AddEntry(NLOpPbDiff[0][1][0], "Theo. Uncer.", "f");
	  }
	  // }
      if(ipPb==0) legDiff3->AddEntry(histTotalDiffScaled[0][0][0], "Exp. Uncer.", "f");
      cDiff[ipPb]->cd(4);
	  drawText(Form("%s",stringnPDF[ipPb].Data()),0.3,0.8);
      cDiff[ipPb]->cd(3);
      legDiff->Draw("same");
      cDiff[ipPb]->cd(2);
      legDiff2->Draw("same");

	
    cDiff[ipPb]->SaveAs(Form("pPbppDiffnPDF%d.png",ipPb));
    cDiff[ipPb]->SaveAs(Form("pPbppDifnPDF%d.pdf",ipPb));

  }
  
  TCanvas * cComb = new TCanvas("cComb","",1600,600);
  makeMultiPanelCanvas(cComb,4,1,0.0,0.0,0.22,0.22,0.12);
  cComb->cd(1);
  emptyComb->Draw();
  for(int ipp = 0; ipp < nPDFpp; ipp ++){
    NLOppDiff[ipp][3]->SetLineColor(0);
    NLOppDiff[ipp][3]->SetFillColorAlpha(colpp[ipp],0.35);
    NLOppDiff[ipp][3]->Draw("same 2");
	hDataPPDiff[ipp][3]->SetMarkerColor(colpp[ipp]);
    hDataPPDiff[ipp][3]->SetLineColor(colpp[ipp]);
  
    histTotalPPDiffScaled[ipp][3]->SetFillColorAlpha(colpPbdata,0.35);
    histTotalPPDiffScaled[ipp][3]->SetFillColorAlpha(colpPbdata,0.35);
    histTotalPPDiffScaled[ipp][3]->SetLineColor(colpPbdata);
    histTotalPPDiffScaled[ipp][3]->Draw("same 2");
	  
    hDataPPDiff[ipp][3]->Draw("same"); 
  }

  drawText(Form("pp"),0.25,0.35);
  linediff->Draw("same");

  for(int ipPb = 0; ipPb < nPDFpPb; ipPb++){
   cComb->cd(ipPb+2);
   emptyComb->Draw();
   for(int ipp = 0; ipp < nPDFpp; ipp ++){
     histTotalDiffScaled[ipPb][ipp][3]->Draw("same 2");
     NLOpPbDiff[ipPb][ipp][3]->Draw("same 2");
	 hDataDiff[ipPb][ipp][3]->Draw("same");
   }
   drawText(Form("pPb %s",stringnPDF[ipPb].Data()),0.05,0.35);
  linediff->Draw("same");
  }	    
  cComb->cd(1);
  drawText("#bf{CMS}",0.32,0.8);
  drawText("#it{Preliminary}",0.32,0.73);
  drawText("#sqrt{s_{NN}} = 5.02 TeV  pp 25.8 pb^{-1}",0.22,0.94,30);
  cComb->cd(2);
  legDiff3->Draw("same");
  drawText(" pPb 35 nb^{-1}    p_{T,1} > 2 GeV",0.05,0.94,30);
  cComb->cd(3);
  legDiff2->Draw("same");
  drawText("p_{T,2} > 30 GeV  #Delta#phi_{1,2} > 2#pi/3",0.05,0.94,30);
  cComb->cd(4);  
  legDiff->Draw("same");

  drawText("95 < p_{T}^{ave} < 115 GeV",0.05,0.94,30);
  cComb->SaveAs("combined.pdf");
  
  TFile * out = new TFile("outf_check.root","recreate");
  for(int ipp = 0; ipp < nPDFpp; ipp++){
   for(int ipPb = 0; ipPb < nPDFpPb; ipPb++){
    for(int ipt = 0; ipt < npt; ipt++){
     hDataDiff[ipPb][ipp][ipt]->Write();
     hDataRat[ipPb][ipp][ipt]->Write();
    } 
   }
   out->Close();   
  }
}
