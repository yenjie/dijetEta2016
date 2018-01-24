#include "plotPDFDoubleRatio.C"
#include "plotPDFDoubleRatio_v2.C"
#include "plotPDF.C"
#include "TGraphErrors.h"
#include "TColor.h"
#include "TStyle.h"
#include "utilities.h"

void prettyLegend(TLegend *legpp){
  legpp->SetFillColor(0);
  legpp->SetBorderSize(0);
  legpp->SetFillStyle(0);
  legpp->SetTextFont(43);
  legpp->SetTextSize(25); 
}

int plotsPaper(){

 TString tag = "ppjecv1";
 gStyle->SetCanvasPreferGL(1);
 TH1D::SetDefaultSumw2();
   // int colpp[] = {TColor::GetColor("#FFE303"),TColor::GetColor("#397D02")};
   int colpp[] = {kBlack,TColor::GetColor("#388E8E")};
   int colpPb[] = {TColor::GetColor("#388E8E"),kBlack,TColor::GetColor("#0276FD")};
   int colpPbdata = TColor::GetColor("#CD0000");
   int colppdata = TColor::GetColor("#0000CD");
   int colepps = TColor::GetColor("#00FF00");
  // int col[] = {TColor::GetColor("#CD0000"),TColor::GetColor("#FF7F50"),TColor::GetColor("#FFA824"),TColor::GetColor("#BCED91"),TColor::GetColor("#397D02"),TColor::GetColor("#388E8E"),TColor::GetColor("#009ACD"),TColor::GetColor("#5B59BA")};
  TFile *file_data = new TFile("outf_pPb_pp_20170116_2.root");

  TFile *file_data_pPb = new TFile("outf_pPb_pp_raw.root");
  
  //TFile *file_data = new TFile("outf_pPb_pp_7pi8.root");
  //TFile *file_data = new TFile("outf_pPb_pp_newppMC.root");
  TFile *file_data_NB = new TFile("outf_pp_pythia_raw.root");
  
  TString modePP = "pp_boost_v4_noweight_neg_test2";
  TString modepPb = "pPb_boost_v4_noweight_test2";
//  TString modePPNB = "pp_noboost";
  TString modePPNB = "pp_boost_v4_noweight_neg_test2";
  TString stringppNLO[]={"MMHT14","CT14"};
  int npt = 6;
  int nPDFpp = 2; 
  int nPDFpPb = 3;
  int ptlow[] = {25, 55, 75, 95, 115, 150, 400};
  //!read data and NLO
  TH1D *hData[npt];
  TH1D *hDataPP[npt];
  TH1D *hDataRat[npt];
  TH1D *hDataDiff[npt];
  
  //!noboost
  TH1D *hMCNB[npt];
  TH1D *hDataPPNB[npt];
  TH1D *hDataRatNB[npt];
  TH1D *hDataDiffNB[npt];
  
  TGraphAsymmErrors *NLOpp[nPDFpp][npt];
  TGraphAsymmErrors *NLOpPb[nPDFpPb][nPDFpp][npt];
  TGraphAsymmErrors *NLOpPbpp[nPDFpPb][nPDFpp][npt];
  TGraphAsymmErrors *NLOdiff[nPDFpPb][nPDFpp][npt];
  
  TGraphAsymmErrors *NLOEPPS16[npt];
  
  for (int i=0;i<6;i++) {
     NLOEPPS16[i] = new TGraphAsymmErrors;
     NLOEPPS16[i]->SetFillColorAlpha(colepps,0.35);
  }
  
  NLOEPPS16[1]->SetPoint(0,-2.77415,0.83039685);
  NLOEPPS16[1]->SetPoint(1,-2.35165,0.86513043);
  NLOEPPS16[1]->SetPoint(2,-1.92915,0.90143609);
  NLOEPPS16[1]->SetPoint(3,-1.6475,0.92762226);
  NLOEPPS16[1]->SetPoint(4,-1.36585,0.97162487);
  NLOEPPS16[1]->SetPoint(5,-1.08415,0.97779757);
  NLOEPPS16[1]->SetPoint(6,-0.8025,1.01423694);
  NLOEPPS16[1]->SetPoint(7,-0.52085,1.02538173);
  NLOEPPS16[1]->SetPoint(8,-0.23915,1.03556133);
  NLOEPPS16[1]->SetPoint(9,0.0425,1.04280900);
  NLOEPPS16[1]->SetPoint(10,0.32415,1.03449542);
  NLOEPPS16[1]->SetPoint(11,0.60585,1.03268681);
  NLOEPPS16[1]->SetPoint(12,0.8875,1.01721857);
  NLOEPPS16[1]->SetPoint(13,1.16915,0.99396278);
  NLOEPPS16[1]->SetPoint(14,1.45085,0.97820063);
  NLOEPPS16[1]->SetPoint(15,1.7325,0.95877132);
  NLOEPPS16[1]->SetPoint(16,2.155,0.93142961);
  NLOEPPS16[1]->SetPoint(17,2.71835,0.89463838);
  
  NLOEPPS16[2]->SetPoint(0,-2.35165,0.83595595);
  NLOEPPS16[2]->SetPoint(1,-1.92915,0.85820539);
  NLOEPPS16[2]->SetPoint(2,-1.6475,0.90310815);
  NLOEPPS16[2]->SetPoint(3,-1.36585,0.92616964);
  NLOEPPS16[2]->SetPoint(4,-1.08415,0.96464679);
  NLOEPPS16[2]->SetPoint(5,-0.8025,0.98486059);
  NLOEPPS16[2]->SetPoint(6,-0.52085,1.00296407);
  NLOEPPS16[2]->SetPoint(7,-0.23915,1.01867211);
  NLOEPPS16[2]->SetPoint(8,0.0425,1.03421141);
  NLOEPPS16[2]->SetPoint(9,0.32415,1.03457949);
  NLOEPPS16[2]->SetPoint(10,0.60585,1.03989517);
  NLOEPPS16[2]->SetPoint(11,0.8875,1.02780961);
  NLOEPPS16[2]->SetPoint(12,1.16915,1.01250000);
  NLOEPPS16[2]->SetPoint(13,1.45085,0.99619275);
  NLOEPPS16[2]->SetPoint(14,1.7325,0.97015897);
  NLOEPPS16[2]->SetPoint(15,2.155,0.94474590);
  NLOEPPS16[2]->SetPoint(16,2.71835,0.93538929);

  NLOEPPS16[3]->SetPoint(0,-2.35165,0.82613468);
  NLOEPPS16[3]->SetPoint(1,-1.92915,0.84813510);
  NLOEPPS16[3]->SetPoint(2,-1.6475,0.87318126);
  NLOEPPS16[3]->SetPoint(3,-1.36585,0.88157338);
  NLOEPPS16[3]->SetPoint(4,-1.08415,0.93878820);
  NLOEPPS16[3]->SetPoint(5,-0.8025,0.96376162);
  NLOEPPS16[3]->SetPoint(6,-0.52085,0.98575613);
  NLOEPPS16[3]->SetPoint(7,-0.23915,1.01194195);
  NLOEPPS16[3]->SetPoint(8,0.0425,1.02001321);
  NLOEPPS16[3]->SetPoint(9,0.32415,1.03638058);
  NLOEPPS16[3]->SetPoint(10,0.60585,1.03965126);
  NLOEPPS16[3]->SetPoint(11,0.8875,1.03264841);
  NLOEPPS16[3]->SetPoint(12,1.16915,1.02843183);
  NLOEPPS16[3]->SetPoint(13,1.45085,1.00469604);
  NLOEPPS16[3]->SetPoint(14,1.7325,0.99181160);
  NLOEPPS16[3]->SetPoint(15,2.155,0.96261348);
  NLOEPPS16[3]->SetPoint(16,2.71835,0.91002327);

  NLOEPPS16[4]->SetPoint(0,-1.92915,0.84796196);
  NLOEPPS16[4]->SetPoint(1,-1.6475,0.84764227);
  NLOEPPS16[4]->SetPoint(2,-1.36585,0.89302753);
  NLOEPPS16[4]->SetPoint(3,-1.08415,0.91110047);
  NLOEPPS16[4]->SetPoint(4,-0.8025,0.94135667);
  NLOEPPS16[4]->SetPoint(5,-0.52085,0.96990339);
  NLOEPPS16[4]->SetPoint(6,-0.23915,0.98884985);
  NLOEPPS16[4]->SetPoint(7,0.0425,1.00894493);
  NLOEPPS16[4]->SetPoint(8,0.32415,1.02630558);
  NLOEPPS16[4]->SetPoint(9,0.60585,1.03906349);
  NLOEPPS16[4]->SetPoint(10,0.8875,1.04012519);
  NLOEPPS16[4]->SetPoint(11,1.16915,1.03244712);
  NLOEPPS16[4]->SetPoint(12,1.45085,1.02106743);
  NLOEPPS16[4]->SetPoint(13,1.7325,1.00408330);
  NLOEPPS16[4]->SetPoint(14,2.155,0.97826894);
  NLOEPPS16[4]->SetPoint(15,2.71835,0.94766484);

  NLOEPPS16[5]->SetPoint(0,-1.92915,0.87628333);
  NLOEPPS16[5]->SetPoint(1,-1.6475,0.82901463);
  NLOEPPS16[5]->SetPoint(2,-1.36585,0.86174227);
  NLOEPPS16[5]->SetPoint(3,-1.08415,0.88609254);
  NLOEPPS16[5]->SetPoint(4,-0.8025,0.91252732);
  NLOEPPS16[5]->SetPoint(5,-0.52085,0.94076203);
  NLOEPPS16[5]->SetPoint(6,-0.23915,0.96927739);
  NLOEPPS16[5]->SetPoint(7,0.0425,0.98971788);
  NLOEPPS16[5]->SetPoint(8,0.32415,1.01322596);
  NLOEPPS16[5]->SetPoint(9,0.60585,1.03000897);
  NLOEPPS16[5]->SetPoint(10,0.8875,1.04142349);
  NLOEPPS16[5]->SetPoint(11,1.16915,1.04726459);
  NLOEPPS16[5]->SetPoint(12,1.45085,1.04126149);
  NLOEPPS16[5]->SetPoint(13,1.7325,1.02782376);
  NLOEPPS16[5]->SetPoint(14,2.155,1.00116045);
  NLOEPPS16[5]->SetPoint(15,2.71835,0.96328545);

  NLOEPPS16[1]->SetPointError(0,0.14085,0.14085,0.05709870,0.04539119);
  NLOEPPS16[1]->SetPointError(1,0.28165,0.28165,0.07440033,0.05411096);
  NLOEPPS16[1]->SetPointError(2,0.14085,0.14085,0.07627342,0.05092257);
  NLOEPPS16[1]->SetPointError(3,0.1408,0.1408,0.07145351,0.05071179);
  NLOEPPS16[1]->SetPointError(4,0.14085,0.14085,0.06235248,0.04971803);
  NLOEPPS16[1]->SetPointError(5,0.14085,0.14085,0.05276372,0.04665975);
  NLOEPPS16[1]->SetPointError(6,0.1408,0.1408,0.05222794,0.04566941);
  NLOEPPS16[1]->SetPointError(7,0.14085,0.14085,0.05039537,0.04519349);
  NLOEPPS16[1]->SetPointError(8,0.14085,0.14085,0.04594986,0.04512315);
  NLOEPPS16[1]->SetPointError(9,0.1408,0.1408,0.04039915,0.04391186);
  NLOEPPS16[1]->SetPointError(10,0.14085,0.14085,0.03574879,0.03940866);
  NLOEPPS16[1]->SetPointError(11,0.14085,0.14085,0.03339590,0.03353975);
  NLOEPPS16[1]->SetPointError(12,0.1408,0.1408,0.03212991,0.03322277);
  NLOEPPS16[1]->SetPointError(13,0.14085,0.14085,0.03996325,0.04077014);
  NLOEPPS16[1]->SetPointError(14,0.14085,0.14085,0.05703583,0.05593351);
  NLOEPPS16[1]->SetPointError(15,0.1408,0.1408,0.07762898,0.07445854);
  NLOEPPS16[1]->SetPointError(16,0.2817,0.2817,0.10331502,0.10503625);
  NLOEPPS16[1]->SetPointError(17,0.28165,0.28165,0.12854073,0.13544341);

  NLOEPPS16[2]->SetPointError(0,0.28165,0.28165,0.06010712,0.05147188);
  NLOEPPS16[2]->SetPointError(1,0.14085,0.14085,0.06854447,0.05345575);
  NLOEPPS16[2]->SetPointError(2,0.1408,0.1408,0.07158742,0.05021424);
  NLOEPPS16[2]->SetPointError(3,0.14085,0.14085,0.06600584,0.04638796);
  NLOEPPS16[2]->SetPointError(4,0.14085,0.14085,0.05696711,0.04422886);
  NLOEPPS16[2]->SetPointError(5,0.1408,0.1408,0.04645116,0.04011096);
  NLOEPPS16[2]->SetPointError(6,0.14085,0.14085,0.04351831,0.03713828);
  NLOEPPS16[2]->SetPointError(7,0.14085,0.14085,0.04111695,0.03582039);
  NLOEPPS16[2]->SetPointError(8,0.1408,0.1408,0.03737911,0.03588133);
  NLOEPPS16[2]->SetPointError(9,0.14085,0.14085,0.03289530,0.03626734);
  NLOEPPS16[2]->SetPointError(10,0.14085,0.14085,0.03185235,0.03527186);
  NLOEPPS16[2]->SetPointError(11,0.1408,0.1408,0.03225010,0.03458423);
  NLOEPPS16[2]->SetPointError(12,0.14085,0.14085,0.03642089,0.03866696);
  NLOEPPS16[2]->SetPointError(13,0.14085,0.14085,0.04816671,0.04830850);
  NLOEPPS16[2]->SetPointError(14,0.1408,0.1408,0.06554044,0.06285390);
  NLOEPPS16[2]->SetPointError(15,0.2817,0.2817,0.09133227,0.08960012);
  NLOEPPS16[2]->SetPointError(16,0.28165,0.28165,0.12174406,0.12552894);
  
  NLOEPPS16[3]->SetPointError(0,0.28165,0.28165,0.05770670,0.04873593);
  NLOEPPS16[3]->SetPointError(1,0.14085,0.14085,0.06094437,0.05423305);
  NLOEPPS16[3]->SetPointError(2,0.1408,0.1408,0.06621806,0.05350265);
  NLOEPPS16[3]->SetPointError(3,0.14085,0.14085,0.06530988,0.04729348);
  NLOEPPS16[3]->SetPointError(4,0.14085,0.14085,0.06079615,0.04368576);
  NLOEPPS16[3]->SetPointError(5,0.1408,0.1408,0.05017875,0.03938808);
  NLOEPPS16[3]->SetPointError(6,0.14085,0.14085,0.04053812,0.03443433);
  NLOEPPS16[3]->SetPointError(7,0.14085,0.14085,0.03742218,0.03109965);
  NLOEPPS16[3]->SetPointError(8,0.1408,0.1408,0.03440156,0.02947924);
  NLOEPPS16[3]->SetPointError(9,0.14085,0.14085,0.03131032,0.03097900);
  NLOEPPS16[3]->SetPointError(10,0.14085,0.14085,0.02916249,0.03402676);
  NLOEPPS16[3]->SetPointError(11,0.1408,0.1408,0.03143850,0.03480305);
  NLOEPPS16[3]->SetPointError(12,0.14085,0.14085,0.03521087,0.03920396);
  NLOEPPS16[3]->SetPointError(13,0.14085,0.14085,0.04392625,0.04526593);
  NLOEPPS16[3]->SetPointError(14,0.1408,0.1408,0.05836393,0.05688527);
  NLOEPPS16[3]->SetPointError(15,0.2817,0.2817,0.08212827,0.07782860);
  NLOEPPS16[3]->SetPointError(16,0.28165,0.28165,0.10962089,0.11092664); 
  
  NLOEPPS16[4]->SetPointError(0,0.14085,0.14085,0.05782515,0.05177505);
  NLOEPPS16[4]->SetPointError(1,0.1408,0.1408,0.05984342,0.05482990);
  NLOEPPS16[4]->SetPointError(2,0.14085,0.14085,0.06382812,0.05270660);
  NLOEPPS16[4]->SetPointError(3,0.14085,0.14085,0.06113296,0.04555385);
  NLOEPPS16[4]->SetPointError(4,0.1408,0.1408,0.05383641,0.03963803);
  NLOEPPS16[4]->SetPointError(5,0.14085,0.14085,0.04275440,0.03413425);
  NLOEPPS16[4]->SetPointError(6,0.14085,0.14085,0.03397294,0.02839702);
  NLOEPPS16[4]->SetPointError(7,0.1408,0.1408,0.03077677,0.02459295);
  NLOEPPS16[4]->SetPointError(8,0.14085,0.14085,0.02868404,0.02455244);
  NLOEPPS16[4]->SetPointError(9,0.14085,0.14085,0.02720110,0.02994129);
  NLOEPPS16[4]->SetPointError(10,0.1408,0.1408,0.02942231,0.03529541);
  NLOEPPS16[4]->SetPointError(11,0.14085,0.14085,0.03446806,0.03933925);
  NLOEPPS16[4]->SetPointError(12,0.14085,0.14085,0.04153537,0.04572424);
  NLOEPPS16[4]->SetPointError(13,0.1408,0.1408,0.05353399,0.05319328);
  NLOEPPS16[4]->SetPointError(14,0.2817,0.2817,0.07400634,0.07055453);
  NLOEPPS16[4]->SetPointError(15,0.28165,0.28165,0.10487543,0.10392505);
  
  NLOEPPS16[5]->SetPointError(0,0.14085,0.14085,0.06848400,0.06165372);
  NLOEPPS16[5]->SetPointError(1,0.1408,0.1408,0.05423937,0.05044401);
  NLOEPPS16[5]->SetPointError(2,0.14085,0.14085,0.05477855,0.05393596);
  NLOEPPS16[5]->SetPointError(3,0.14085,0.14085,0.05571201,0.05069771);
  NLOEPPS16[5]->SetPointError(4,0.1408,0.1408,0.05326382,0.04337869);
  NLOEPPS16[5]->SetPointError(5,0.14085,0.14085,0.04647438,0.03517042);
  NLOEPPS16[5]->SetPointError(6,0.14085,0.14085,0.03616380,0.02815051);
  NLOEPPS16[5]->SetPointError(7,0.1408,0.1408,0.02529312,0.02122224);
  NLOEPPS16[5]->SetPointError(8,0.14085,0.14085,0.02244037,0.01678663);
  NLOEPPS16[5]->SetPointError(9,0.14085,0.14085,0.02347466,0.01982869);
  NLOEPPS16[5]->SetPointError(10,0.1408,0.1408,0.02593738,0.03139365);
  NLOEPPS16[5]->SetPointError(11,0.14085,0.14085,0.03314215,0.04116156);
  NLOEPPS16[5]->SetPointError(12,0.14085,0.14085,0.04128519,0.04762964);
  NLOEPPS16[5]->SetPointError(13,0.1408,0.1408,0.05016620,0.05432140);
  NLOEPPS16[5]->SetPointError(14,0.2817,0.2817,0.06564775,0.06361269);
  NLOEPPS16[5]->SetPointError(15,0.28165,0.28165,0.09455173,0.09081617);

  for(int ipt = 0; ipt < npt; ipt++){
    //hData[ipt] = (TH1D*)file_data->Get(Form("hist_eta_%d",ipt));
    hData[ipt] = (TH1D*)file_data_pPb->Get(Form("hist_eta_%d",ipt));
    hDataPPNB[ipt] = (TH1D*)file_data_NB->Get(Form("hist_eta_%d",ipt));
    hMCNB[ipt] = (TH1D*)file_data_NB->Get(Form("hist_eta_mc_%d",ipt));
    hDataPP[ipt] = (TH1D*)file_data->Get(Form("hist_eta_pp_%d",ipt));
	for(int ipp = 0; ipp < nPDFpp; ipp++){
	  NLOpp[ipp][ipt] = plotPDF(ptlow[ipt], ptlow[ipt+1], 0, 1, ipp);
	  for(int ipPb = 0; ipPb < nPDFpPb; ipPb++){
	    cout << ipt << " " << ipp << " " << " "<< ipPb << " " << endl;
	    NLOpPb[ipPb][ipp][ipt] = plotPDF(ptlow[ipt], ptlow[ipt+1], 1, ipPb+1, ipp);
		cout << "pPb/pp" << endl; 
	    NLOpPbpp[ipPb][ipp][ipt] = plotPDFDoubleRatio(ptlow[ipt], ptlow[ipt+1], 1, ipPb+1, ipp);
//	    NLOdiff[ipPb][ipp][ipt] = plotPDFDiff(ptlow[ipt], ptlow[ipt+1], 1, ipPb+1, ipp);
	  } 
	}
  }
  cout<<"read syst"<<endl;
  //!read systematics and unfolding
  TFile *file_systematics = new TFile("outf_unfolding_v2.root");
  TFile *file_systematics_NB = new TFile("outf_unfolding.root");
  TFile *file_systematics_rat = new TFile("outf_syst_rat_v2.root");
  TFile *file_systematics_diff = new TFile("outf_syst_diff_v2.root");
  TH1D *histTotalPos[npt];
  TH1D *histTotalNeg[npt];
  TH1D *histTotalPosPP[npt];
  TH1D *histTotalNegPP[npt];
  TH1D *histTotalPosRat[npt];
  TH1D *histTotalNegRat[npt];
  TH1D *histTotalPosDiff[npt];
  TH1D *histTotalNegDiff[npt];
  TH1D *histTotalPosNB[npt];
  TH1D *histTotalNegNB[npt];
  TH1D *histUnfolding[npt];
  TH1D *histUnfoldingPP[npt];
  
  for(int ipt = 0; ipt < npt; ipt++){
   cout << ipt<<endl;
    histTotalPos[ipt] = (TH1D*)file_systematics->Get(Form("histTotalPositive%dMode%s",ipt,modepPb.Data()));
    histTotalPosPP[ipt] = (TH1D*)file_systematics->Get(Form("histTotalPositive%dMode%s",ipt,modePP.Data()));
    histTotalPosRat[ipt] = (TH1D*)file_systematics_rat->Get(Form("histdRatTotalPos%d",ipt));
    histTotalPosDiff[ipt] = (TH1D*)file_systematics_diff->Get(Form("histdRatTotalPos%d",ipt));
    histTotalPosNB[ipt] = (TH1D*)file_systematics_NB->Get(Form("histTotalPositive%dMode%s",ipt,modePPNB.Data()));
    histTotalNeg[ipt] = (TH1D*)file_systematics->Get(Form("histTotalNegative%dMode%s",ipt,modepPb.Data()));
    histTotalNegPP[ipt] = (TH1D*)file_systematics->Get(Form("histTotalNegative%dMode%s",ipt,modePP.Data()));
    histTotalNegRat[ipt] = (TH1D*)file_systematics_rat->Get(Form("histdRatTotalNeg%d",ipt));
    histTotalNegNB[ipt] = (TH1D*)file_systematics_NB->Get(Form("histTotalNegative%dMode%s",ipt,modePPNB.Data()));
    histTotalNegDiff[ipt] = (TH1D*)file_systematics_diff->Get(Form("histdRatTotalNeg%d",ipt));
	histUnfolding[ipt] = (TH1D*)file_systematics->Get(Form("UnfoldingPt%dMode%s",ipt,modepPb.Data()));
	histUnfoldingPP[ipt] = (TH1D*)file_systematics->Get(Form("UnfoldingPt%dMode%s",ipt,modePP.Data()));
	cout <<Form("histTotalPositive%dMode%s",ipt,modePPNB.Data())<<endl;
  if (histTotalPosNB[ipt]==0) {cout <<"error reading"<<endl; return 0;}
//  cout <<histTotalPosNB[ipt]->GetNbinsX()<<end;

  }
//  return 0;
  //!apply unfolding
  int nbins = hDataPP[0]->GetNbinsX();
  for(int ipt = 0; ipt < npt; ipt++){
    /*
	for(int ibin = 0; ibin < nbins; ibin++){
	  cout << ipt << " "<< ibin << endl;
      if(histUnfoldingPP[ipt]->GetBinContent(ibin+1)>0) hDataPP[ipt]->SetBinContent(ibin+1, hDataPP[ipt]->GetBinContent(ibin+1)/histUnfoldingPP[ipt]->GetBinContent(ibin+1));
      cout << 1.1 << endl;
	  if(histUnfolding[ipt]->GetBinContent(ibin+1)>0) hData[ipt]->SetBinContent(ibin+1, hData[ipt]->GetBinContent(ibin+1)/histUnfolding[ipt]->GetBinContent(ibin+1));
	  // hData[ipt]->SetBinContent(ibin+1, hData[ipt]->GetBinContent(ibin+1));
      cout << 1.2 << endl;	  
	  cout << 1.3 << endl;
	 
    }
	*/
	hDataPP[ipt]->Scale(1./hDataPP[ipt]->Integral());
	hData[ipt]->Scale(1./hData[ipt]->Integral());
	hDataPPNB[ipt]->Scale(1./hDataPPNB[ipt]->Integral());
	hMCNB[ipt]->Scale(1./hMCNB[ipt]->Integral());
	for(int ibin = 0; ibin < nbins; ibin++){
	 hDataPP[ipt]->SetBinContent(ibin+1, hDataPP[ipt]->GetBinContent(ibin+1)/hDataPP[ipt]->GetBinWidth(ibin+1));
	 hData[ipt]->SetBinContent(ibin+1, hData[ipt]->GetBinContent(ibin+1)/hData[ipt]->GetBinWidth(ibin+1));
	 hDataPP[ipt]->SetBinError(ibin+1, hDataPP[ipt]->GetBinError(ibin+1)/hDataPP[ipt]->GetBinWidth(ibin+1));
	 hData[ipt]->SetBinError(ibin+1, hData[ipt]->GetBinError(ibin+1)/hData[ipt]->GetBinWidth(ibin+1));
	}
	for(int ibin = 0; ibin < hMCNB[ipt]->GetNbinsX(); ibin++){
     hDataPPNB[ipt]->SetBinContent(ibin+1, hDataPPNB[ipt]->GetBinContent(ibin+1)/hDataPPNB[ipt]->GetBinWidth(ibin+1));
     hDataPPNB[ipt]->SetBinError(ibin+1, hDataPPNB[ipt]->GetBinError(ibin+1)/hDataPPNB[ipt]->GetBinWidth(ibin+1));
     hMCNB[ipt]->SetBinContent(ibin+1, hMCNB[ipt]->GetBinContent(ibin+1)/hMCNB[ipt]->GetBinWidth(ibin+1));
     hMCNB[ipt]->SetBinError(ibin+1, hMCNB[ipt]->GetBinError(ibin+1)/hMCNB[ipt]->GetBinWidth(ibin+1));
	}
	hDataRat[ipt] = (TH1D*)hData[ipt]->Clone(Form("hist_eta_rat_%d",ipt));
	hDataDiff[ipt] = (TH1D*)hData[ipt]->Clone(Form("hist_eta_diff_%d",ipt));
	hDataDiffNB[ipt] = (TH1D*)hDataPPNB[ipt]->Clone(Form("hist_nb_diff_%d",ipt));
	hDataRatNB[ipt] = (TH1D*)hDataPPNB[ipt]->Clone(Form("hist_nb_rat_%d",ipt));
	hDataRat[ipt]->Divide(hDataPP[ipt]);
	hDataDiff[ipt]->Add(hDataPP[ipt],-1);
	hDataRatNB[ipt]->Divide(hMCNB[ipt]);
	hDataDiffNB[ipt]->Add(hMCNB[ipt],-1);
  }
  
  cout << "bla" << endl;
  //!scale systematics according to points
  TGraphErrors *histTotalPPScaled[npt];
  TGraphErrors *histTotalScaled[npt];
  TGraphErrors *histTotalRatScaled[npt];
  TGraphErrors *histTotalDiffScaled[npt];
  TGraphErrors *histTotalNBScaled[npt];
  for(int ipt = 0; ipt < npt; ipt++){
        cout <<ipt<<endl;
	float centerPP[nbins]; 
	float errPP[nbins]; 
	float errPPb[nbins]; 
	float centerPPb[nbins];
	float errRat[nbins]; 
	float centerRat[nbins];
	float errDiff[nbins]; 
	float centerDiff[nbins];
	float centerx[nbins];
	float centererrx[nbins];
	cout <<"ohoh"<<endl;
	float errNB[histTotalPosNB[ipt]->GetNbinsX()]; 
	cout <<"ohoh"<<endl;
	float centerNB[histTotalPosNB[ipt]->GetNbinsX()];
	cout <<"ohoh"<<endl;
	float centerxNB[histTotalPosNB[ipt]->GetNbinsX()]; 
	cout <<"ohoh"<<endl;
	float centererrxNB[histTotalPosNB[ipt]->GetNbinsX()];
	cout <<"ohoh"<<endl;
	
    for(int ibin = 0; ibin < histTotalPosNB[ipt]->GetNbinsX(); ibin++){
	
	  centerxNB[ibin] = histTotalNegNB[ipt]->GetBinCenter(ibin+1);
	cout <<"good,1 good"<<endl;
	  centererrxNB[ibin] = histTotalNegNB[ipt]->GetBinWidth(ibin+1)/2./1.3;
	cout <<"good, good"<<endl;
	  float errupNB = 1-(histTotalPosNB[ipt]->GetBinContent(ibin+1)-1);
	cout <<"good,2 good"<<endl;
	  float errdownNB = 1-(histTotalNegNB[ipt]->GetBinContent(ibin+1)-1);
	cout <<"good, good"<<endl;
	  float yNB = hDataPPNB[ipt]->GetBinContent(hDataPPNB[ipt]->FindBin(fabs(histTotalPosNB[ipt]->GetBinCenter(ibin+1))));
	cout <<"good,3 good"<<endl;
	  centerNB[ibin] = yNB*(errupNB + errdownNB)/2;
	cout <<"good,4 good"<<endl;
	  errNB[ibin] = yNB*(errupNB - errdownNB)/2;
	  cout << 2 << endl;
	  
	  // float errupDiffMB = histTotalPosDiffMB[ipt]->GetBinContent(ibin+1);
	  // float errdownDiffMB = histTotalNegDiffMB[ipt]->GetBinContent(ibin+1);
	  // float yDiff = hDataDiff[ipt]->GetBinContent(ibin+1);
	  // centerDiff[ibin] = yDiff+(errupDiff+errdownDiff)/2.;
	  // cout << "up diff" << errupDiff << " "<< "down diff" << errdownDiff <<endl;
	  // errDiff[ibin] = (errupDiff - errdownDiff)/2;
	}
	cout <<"good, good"<<endl;
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
	 cout << 2 << endl;
	 
	  
	  float errupPPb = 1-(histTotalPos[ipt]->GetBinContent(ibin+1)-1);
	  float errdownPPb = 1-(histTotalNeg[ipt]->GetBinContent(ibin+1)-1);
	  float yPPb = hData[ipt]->GetBinContent(ibin+1);
	  centerPPb[ibin] = yPPb*(errupPPb + errdownPPb)/2;
	  errPPb[ibin] = yPPb*(errupPPb - errdownPPb)/2;
	 cout << 3 << endl;
	  
	  float errupRat = 1-(histTotalPosRat[ipt]->GetBinContent(ibin+1)-1);
	  cout << 3.1<<endl;
	  float errdownRat = 1-(histTotalNegRat[ipt]->GetBinContent(ibin+1)-1);
	  // if(ibin < 2 || ibin > nbins-2){
	   // errupRat*=2;
	   // errdownRat*=2;
	  // }
	  float yRat = hDataRat[ipt]->GetBinContent(ibin+1);
	  centerRat[ibin] = yRat*(errupRat + errdownRat)/2;
	  errRat[ibin] = yRat*(errupRat - errdownRat)/2;
	 cout << 4 << endl;

	  float errupDiff = histTotalPosDiff[ipt]->GetBinContent(ibin+1);
	  float errdownDiff = histTotalNegDiff[ipt]->GetBinContent(ibin+1);
	  // if(ibin < 2 || ibin > nbins-2){
	   // errupDiff*=0.05;
	   // errdownDiff*=0.05;
	  // }
	  float yDiff = hDataDiff[ipt]->GetBinContent(ibin+1);
	  centerDiff[ibin] = yDiff+(errupDiff+errdownDiff)/2.;
	  cout << "up diff" << errupDiff << " "<< "down diff" << errdownDiff <<endl;
	  errDiff[ibin] = (errupDiff - errdownDiff)/2;
	  
	}
	if (ipt==2) centerx[0]=10000;
	if (ipt==4) centerx[1]=10000;
	histTotalPPScaled[ipt] = new TGraphErrors(nbins, centerx, centerPP, centererrx, errPP);
	histTotalScaled[ipt] = new TGraphErrors(nbins, centerx, centerPPb, centererrx, errPPb);
	histTotalRatScaled[ipt] = new TGraphErrors(nbins, centerx, centerRat, centererrx, errRat);
	histTotalDiffScaled[ipt] = new TGraphErrors(nbins, centerx, centerDiff, centererrx, errDiff);
	histTotalNBScaled[ipt] = new TGraphErrors(histTotalPosNB[ipt]->GetNbinsX(), centerxNB, centerNB, centererrxNB, errNB);
	
  }
  
  //!plot pp
  
  TH1D * emptyDist = new TH1D("emptyDist",";#eta_{dijet};#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ",10,-2.999,2.999);
  emptyDist->Fill(1.,1000.);
  makePretty(emptyDist,2.5);
  emptyDist->SetMaximum(0.4999);
  emptyDist->SetMinimum(0.0001);
  emptyDist->GetXaxis()->CenterTitle();
  emptyDist->GetYaxis()->CenterTitle();
  emptyDist->SetStats(0);
  TCanvas * cpp = new TCanvas("cpp","",1300,800);
  makeMultiPanelCanvas(cpp,3,2,0.0,0.0,0.24,0.24,0.11);
  for(int ipt = 0; ipt < npt; ipt++){
    cpp->cd(ipt+1);
	emptyDist->Draw();
	histTotalPPScaled[ipt]->SetFillColorAlpha(colppdata,0.35);
	histTotalPPScaled[ipt]->SetLineColor(0);
	if (ipt!=0) histTotalPPScaled[ipt]->Draw("same 2");
	double *EY = histTotalPPScaled[ipt]->GetEY();
	double *EX = histTotalPPScaled[ipt]->GetEX();
	double *centY = histTotalPPScaled[ipt]->GetY();
	double *centX = histTotalPPScaled[ipt]->GetX();
	NLOpp[0][ipt]->SetLineColor(0);
	NLOpp[1][ipt]->SetLineColor(0);
	NLOpp[0][ipt]->SetFillColorAlpha(colpp[0],0.30);
	NLOpp[1][ipt]->SetFillColorAlpha(colpp[1],0.30);
    if (ipt!=0){ NLOpp[0][ipt]->Draw("same 2");
    NLOpp[1][ipt]->Draw("same 2");
	hDataPP[ipt]->SetMarkerColor(colppdata);
	hDataPP[ipt]->SetLineColor(colppdata);
	hDataPP[ipt]->Draw("same");
	hDataPP[ipt]->Print("all");
	for(int ibin = 0; ibin < nbins; ibin++){
	 TBox box(centX[ibin]-EX[ibin],centY[ibin]-EY[ibin],centX[ibin]+EX[ibin],centY[ibin]+EY[ibin]);
	 box.SetLineColor(colppdata);
	 if (ipt!=0) box.Draw("same");
	}
	
	
	}
    if(ipt == 0){
 	 drawText("#bf{CMS}",0.32,0.8);
 //	 drawText("#it{Preliminary}",0.32,0.73);
     drawText("#sqrt{s_{NN}} = 5.02 TeV",0.22,0.93,26);
    }
	if(ipt == 2){
	 drawText("pp 25.8 pb^{-1}",0.65,0.93,26);
    }
	if(ipt == 1){	
	 drawText("p_{T,1} > 20, p_{T,2} > 30 GeV, #Delta#phi_{1,2} > 2#pi/3",0.05,0.93,24);
	}
	//if(ipt == 0 )drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.45,0.08,26);
    if(ipt == 1 || ipt == 2)drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.30,0.08,26);
    if(ipt == 3) drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.45,0.29,26);
    if(ipt == 4) drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.28,0.29,26);
    if(ipt ==5) drawText(Form("p_{T}^{ave} > %d GeV", ptlow[ipt]),0.35,0.29,26);
  }
  
  TLegend *legpp = new TLegend(0.35,0.15,0.9,0.75);
  prettyLegend(legpp);
  legpp->AddEntry(hDataPP[1], "pp", "p");
  legpp->AddEntry(histTotalPPScaled[1], "Exp. Uncer.", "f");
  legpp->AddEntry(NLOpp[0][1], "MMHT14", "f");
  legpp->AddEntry(NLOpp[1][1], "CT14", "f");
  cpp->cd(1);
  legpp->Draw("same");
  cpp->SaveAs(Form("ppDists%s.png",tag.Data()));
  cpp->SaveAs(Form("ppDists%s.pdf",tag.Data()));
  cpp->SaveAs(Form("ppDists%s.C",tag.Data()));
  
  //!plot ratio

  TH1D * emptyRat = new TH1D("emptyRat",";#eta_{dijet};pPb/pp ",10,-2.999,2.999);
  emptyRat->Fill(1.,1000.);
  makePretty(emptyRat,2.5);
  emptyRat->SetMaximum(1.15);
  emptyRat->SetMinimum(0.601);
  emptyRat->GetXaxis()->CenterTitle();
  emptyRat->GetYaxis()->CenterTitle();  
  emptyRat->SetStats(0);
  TLine *line = new TLine(-2.999,1.,2.999,1.);

   
  TCanvas * cRat[2];
  for(int ipp = 0; ipp < 2; ipp++){
  cRat[ipp] = new TCanvas(Form("cRat%d",ipp),"",1300,800);
  makeMultiPanelCanvas(cRat[ipp],3,2,0.0,0.0,0.24,0.24,0.11);
  for(int ipt = 0; ipt < npt; ipt++){
    cRat[ipp]->cd(ipt+1);
	emptyRat->Draw();
	histTotalRatScaled[ipt]->SetFillColorAlpha(colpPbdata,0.35);
	histTotalRatScaled[ipt]->SetLineColor(2);
	double *y[3];
	for(int ipdf = 0; ipdf < 3; ipdf++){
		y[ipdf] = NLOpPbpp[ipdf][ipp][ipt]->GetY();
	}
	if(ipt > 1){
		hDataRat[ipt]->SetBinContent(1,1000.);
	   	for(int ipdf = 0; ipdf < 3; ipdf++){
		    y[ipdf][0] = 1000.;
		}
	}
	if(ipt > 3){
		hDataRat[ipt]->SetBinContent(2,1000.);
		for(int ipdf = 0; ipdf < 3; ipdf++){
		    y[ipdf][1] = 1000.;
		}
	}
	NLOpPbpp[0][ipp][ipt]->SetLineColor(colpPb[0]);
	NLOpPbpp[1][ipp][ipt]->SetLineColor(colpPb[1]);
	NLOpPbpp[2][ipp][ipt]->SetLineColor(colpPb[2]);
	NLOpPbpp[0][ipp][ipt]->SetFillColorAlpha(colpPb[0],0.35);
//	NLOpPbpp[0][ipp][ipt]->SetFillStyle(3365);
	NLOpPbpp[1][ipp][ipt]->SetFillColorAlpha(colpPb[1],0.35);
	NLOpPbpp[2][ipp][ipt]->SetFillColorAlpha(colpPb[2],0.35);
	if (ipt!=0) {
//        NLOpPbpp[0][ipp][ipt]->Draw("same 2");
//        NLOpPbpp[1][ipp][ipt]->Draw("same 2");
        NLOpPbpp[2][ipp][ipt]->Draw("same 2");	
	}
	if (ipt!=0&&ipp==1) {
   	   NLOEPPS16[ipt]->SetFillColorAlpha(colepps,0.7);
	   NLOEPPS16[ipt]->SetLineWidth(0);
	   NLOEPPS16[ipt]->SetLineColor(colepps);
	   NLOEPPS16[ipt]->SetFillStyle(3356);
	   NLOEPPS16[ipt]->Draw("same 5");
        }	

	if (ipt!=0) {
	histTotalRatScaled[ipt]->Draw("same 5");
	}
	hDataRat[ipt]->SetMarkerColor(colpPbdata);
	hDataRat[ipt]->SetLineColor(colpPbdata);
        if (ipt!=0) {
	hDataRat[ipt]->Draw("same");
	hDataRat[ipt]->Print("all");
	line->Draw("same");
	}
    if(ipt == 0){
 	 drawText("#bf{CMS}",0.32,0.8);
 //	 drawText("#it{Preliminary}",0.32,0.73);
     drawText("#sqrt{s_{NN}} = 5.02 TeV",0.22,0.93,26);
    }
	if(ipt == 2){
	 drawText("pp 25.8 pb^{-1} pPb 35 nb^{-1}",0.35,0.93,26);
    }
	if(ipt == 1){	
	 drawText("p_{T,1} > 20, p_{T,2} > 30 GeV, #Delta#phi_{1,2} > 2#pi/3",0.05,0.93,24);
	}
//	if(ipt == 0 )drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.45,0.08,26);
    if(ipt == 1 || ipt == 2)drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.30,0.08,26);
    if(ipt == 3) drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.45,0.29,26);
    if(ipt == 4) drawText(Form("%d < p_{T}^{ave} < %d GeV", ptlow[ipt], ptlow[ipt+1]),0.28,0.29,26);
    if(ipt ==5) drawText(Form("p_{T}^{ave} > %d GeV", ptlow[ipt]),0.35,0.29,26);
  }
  
  TLegend *legRat = new TLegend(0.35,0.15,0.9,0.75);
  prettyLegend(legRat);
  TLegend *legRat2 = new TLegend(0.1,0.65,0.4,0.85);
  prettyLegend(legRat2);
  legRat->AddEntry(hDataRat[0], "pPb", "p");
  legRat->AddEntry(histTotalRatScaled[0], "Exp. Uncer.", "f");
//  legRat->AddEntry(NLOpPbpp[0][0][1], "DSSZ", "f");
//  legRat->AddEntry(NLOpPbpp[1][0][1], "EPS09", "f");
  //legRat2->AddEntry(NLOpPbpp[2][0][1], "nCTEQ15", "f");
  legRat->AddEntry(NLOpPbpp[2][0][1], "nCTEQ15", "f");
  if (ipp==1) legRat->AddEntry(NLOEPPS16[1], "EPPS16", "f");
  cRat[ipp]->cd(2);
  drawText(Form("pp NLO: %s",stringppNLO[ipp].Data()),0.05,0.8,26);
  cRat[ipp]->cd(1);
  legRat->Draw("same");
  //legRat2->Draw("same");
  if(ipp==0){
   cRat[ipp]->SaveAs("pPbppRatMM.png");
   cRat[ipp]->SaveAs("pPbppRatMM.pdf");
   cRat[ipp]->SaveAs("pPbppRatMM.C");
  }else{
   cRat[ipp]->SaveAs(Form("pPbppRatCT%s.png",tag.Data()));
   cRat[ipp]->SaveAs(Form("pPbppRatCT%s.pdf",tag.Data()));
   cRat[ipp]->SaveAs(Form("pPbppRatCT%s.C",tag.Data()));
  }
  }

}
