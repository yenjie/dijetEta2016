#include <vector>
#include <iostream>

#include <TFile.h>
#include <TCanvas.h>
#include <TH1D.h>
#include <TString.h>
#include <TLine.h>
#include <TBox.h>
#include <TGraphAsymmErrors.h>
#include <TTree.h>

void normalize(TH1D *h)
{
//   double intergal = h->Integral(1,h->GetNbinsX());
   double integral=0;
   for (int i=1;i<=h->GetNbinsX();i++)
   {
      integral+= h->GetBinContent(i);
   }
   for (int i=1;i<=h->GetNbinsX();i++)
   {
      double val = h->GetBinContent(i)/integral/h->GetBinWidth(i);
      //double valErr = h->GetBinError(i)/integral/h->GetBinWidth(i);
      h->SetBinContent(i,val);
      //h->SetBinError(i,valErr);
   }
}

/*
  KEY: TH1D	hist_ptave25_55;1	
  KEY: TH1D	histerr_ptave25_55;1	
  KEY: TH1D	hist_ptave55_75;1	
  KEY: TH1D	histerr_ptave55_75;1	
  KEY: TH1D	hist_ptave75_95;1	
  KEY: TH1D	histerr_ptave75_95;1	
  KEY: TH1D	hist_ptave95_115;1	
  KEY: TH1D	histerr_ptave95_115;1	
  KEY: TH1D	hist_ptave115_150;1	
  KEY: TH1D	histerr_ptave115_150;1	
  KEY: TH1D	hist_ptave150_400;1	
  KEY: TH1D	histerr_ptave150_400;1	
*/

void plotPDFDoubleRatioUncertainty(int ptMin=25,int ptMax=55, bool isPPb=1, int pdfSet=2, int isCT=0, bool isEmbed = 0)
{
   // isPPb: true: pPb PDF, false: pp PDF
   // pdfSet: only useful when isPPb
   //         1: DSSZ        25 Eigenvalues
   //         2: EPS09       15 Eigenvalues
   //         3: nCT15       16 Eigenvalues
   // isCT: 1 = CT as the pp basedline, 0 = MM as the pp baseline
   static int count = 1;

   
   // 00 is the central
   
   vector <TH1D*> hList;
   
   string fileName;
   string title;
   int nEigenvalues=0;
   
   if (isPPb && pdfSet==1) {
      // DSSZ 
      cout <<"DSSZ"<<endl;
      title = "DSSZ";
      if (isCT) {
            fileName = "parsed_pPbNLO/PPBCMSNEWCTD";
	    title="DSSZCT";
      } else {
            fileName = "parsed_pPbNLO/PPBCMSNEWMMD";
	    title="DSSZMM";
      }
      nEigenvalues = 25;
   } else if (isPPb && pdfSet==2) {
      // EPS09
      cout <<"EPS09"<<endl;
      title = "EPS09";
      if (isCT) {
            fileName = "parsed_pPbNLO/PPBCMSNEWCTE";
	    title="EPS09CT";
      } else {
            fileName = "parsed_pPbNLO/PPBCMSNEWMME";
	    title="EPS09MM";
      }
      nEigenvalues = 15;
   } else if (isPPb && pdfSet==3) {
      // nCT15
      cout <<"nCTEQ15"<<endl;
      title = "nCTEQ15";
      if (isCT) {
            title = "nCTEQ15CT";
            fileName = "parsed_pPbNLO/PPBCMSNEWQCT";
            nEigenvalues = 28;
      } else {
            title = "nCTEQ15MM";
            fileName = "parsed_pPbNLO/PPBCMSNEWQMM";
            nEigenvalues = 25;
      } 
   } else if (!isPPb) {
      if (isCT) {
            title = "PPCT";
            fileName = "parsed_ppNLO/PPCMSNEWCT";
            nEigenvalues = 28;
      } else {
            title = "PPMM";
            fileName = "parsed_ppNLO/PPCMSNEWMM";
	    nEigenvalues = 25;
      }
   
   }

   TFile *output = new TFile(Form("ntuple_PDF/output-%s-%d-%d.root",title.c_str(),ptMin,ptMax),"recreate");
   TTree *t = new TTree("t","");
   
   float val[100];
   float eta[100];
   int nBins=0;
   int iter=0;
   t->Branch("nBins",&nBins,"nBins/I");
   t->Branch("val",val,"val[nBins]/F");
   t->Branch("eta",eta,"eta[nBins]/F");
   t->Branch("i",&iter,"i/I");

   
//   TFile *infData = new TFile("../outf_pPb_pp_old.root");
   TFile *infData = new TFile("outf_pPb_pp_July12.root");

   int idx=0;
   if (ptMin==25) idx=0;
   if (ptMin==55) idx=1;
   if (ptMin==75) idx=2;
   if (ptMin==95) idx=3;
   if (ptMin==115) idx=4;
   if (ptMin==150) idx=5;
   
   TH1D *hData;
   TH1D *hDataPP;
   if (isPPb) {
      hData = (TH1D*)infData->Get(Form("hist_eta_pPb_%d",idx));
      if (hData==0) hData = (TH1D*)infData->Get(Form("hist_eta_%d",idx));
   } else {
      hData = (TH1D*)infData->Get(Form("hist_eta_pp_%d",idx));
   }
   hDataPP = (TH1D*)infData->Get(Form("hist_eta_pp_%d",idx))->Clone("hPPRef");

   TFile *infMCPP = new TFile(Form("parsed_ppNLO/PPCMSNEWCT00.out.root"));
   TH1D *hMCPP = (TH1D*)infMCPP->Get(Form("hist_ptave%d_%d",ptMin,ptMax))->Clone("hMCPP");
   
   TFile *outf = new TFile(Form("plot/output-isPPb%d-%s-isCT%d-%d-%d.root",isPPb,title.c_str(),isCT,ptMin,ptMax),"recreate");


   TCanvas *c;
 //  if (!isEmbed) c = new TCanvas(Form("c%d",count),"",600,600);
   
   normalize(hMCPP);
   normalize(hData);
   normalize(hDataPP);

   hData->Divide(hDataPP);
//   hData->Draw();  
   // read files

   
   for (int i=0;i<=2*nEigenvalues;i++)
   {
      TFile *inf;

      if (i<10) inf = new TFile(Form("%s0%d.out.root",fileName.c_str(),i));
      else inf = new TFile(Form("%s%d.out.root",fileName.c_str(),i));

      if (inf->IsZombie()) continue;
      outf->cd();
      TH1D *h = (TH1D*)inf->Get(Form("hist_ptave%d_%d",ptMin,ptMax))->Clone();
      h->SetName(Form("hist_ptave25_55_%2d",i));
      normalize(h);
      h->Divide(hMCPP);
      //cout <<"Data Area"<<hData->Integral(1,1000)<<" "<<h->Integral(1,1000)<<endl;;
      
      h->SetAxisRange(0.,2.,"Y");
      h->SetLineColor(kGray);
//      if(i!=0) h->Draw("hist same"); else h->Draw("hist");      
      nBins=h->GetNbinsX();
      for (int j=0;j<nBins;j++) {
         
	 val[j]=h->GetBinContent(j+1);
	 eta[j]=h->GetXaxis()->GetBinCenter(j+1);
	 cout <<eta[j]<<" "<<val[j]<<endl;
      }
      iter++;

      hList.push_back(h);
      inf->Close();
      t->Fill();
   }
   output->cd();
   t->Write();
   output->Close();
  

}

void doAll()
{

  // pPb DSSZ+MM
   plotPDFDoubleRatioUncertainty(25,55,1,1,0);
   plotPDFDoubleRatioUncertainty(55,75,1,1,0);
   plotPDFDoubleRatioUncertainty(75,95,1,1,0);
   plotPDFDoubleRatioUncertainty(95,115,1,1,0);
   plotPDFDoubleRatioUncertainty(115,150,1,1,0);
   plotPDFDoubleRatioUncertainty(150,400,1,1,0);

   // pPb DSSZ+CT
   plotPDFDoubleRatioUncertainty(25,55,1,1,1);
   plotPDFDoubleRatioUncertainty(55,75,1,1,1);
   plotPDFDoubleRatioUncertainty(75,95,1,1,1);
   plotPDFDoubleRatioUncertainty(95,115,1,1,1);
   plotPDFDoubleRatioUncertainty(115,150,1,1,1);
   plotPDFDoubleRatioUncertainty(150,400,1,1,1);

   // pPb EPS+MM
   plotPDFDoubleRatioUncertainty(25,55,1,2,0);
   plotPDFDoubleRatioUncertainty(55,75,1,2,0);
   plotPDFDoubleRatioUncertainty(75,95,1,2,0);
   plotPDFDoubleRatioUncertainty(95,115,1,2,0);
   plotPDFDoubleRatioUncertainty(115,150,1,2,0);
   plotPDFDoubleRatioUncertainty(150,400,1,2,0);

   // pPb EPS+CT
   plotPDFDoubleRatioUncertainty(25,55,1,2,1);
   plotPDFDoubleRatioUncertainty(55,75,1,2,1);
   plotPDFDoubleRatioUncertainty(75,95,1,2,1);
   plotPDFDoubleRatioUncertainty(95,115,1,2,1);
   plotPDFDoubleRatioUncertainty(115,150,1,2,1);
   plotPDFDoubleRatioUncertainty(150,400,1,2,1);

   // pPb nCT15
   plotPDFDoubleRatioUncertainty(25,55,1,3,1);
   plotPDFDoubleRatioUncertainty(55,75,1,3,1);
   plotPDFDoubleRatioUncertainty(75,95,1,3,1);
   plotPDFDoubleRatioUncertainty(95,115,1,3,1);
   plotPDFDoubleRatioUncertainty(115,150,1,3,1);
   plotPDFDoubleRatioUncertainty(150,400,1,3,1);

}
