void pPbppRatCT()
{
//=========Macro generated from canvas: cRat1/
//=========  (Tue Aug  2 10:06:24 2016) by ROOT version6.06/01

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cRat1 = new TCanvas("cRat1", "",0,0,1300,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   cRat1->Range(0,0,1,1);
   cRat1->SetFillColor(0);
   cRat1->SetBorderMode(0);
   cRat1->SetBorderSize(0);
   cRat1->SetTickx(1);
   cRat1->SetTicky(1);
   cRat1->SetLeftMargin(0.17);
   cRat1->SetRightMargin(0.01);
   cRat1->SetTopMargin(0.01);
   cRat1->SetBottomMargin(0.15);
   cRat1->SetFrameLineColor(0);
   cRat1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.5393939,0.3825653,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-4.893105,0.5,2.999,1.623596);
   p_0_0->SetFillColor(0);
   p_0_0->SetBorderMode(0);
   p_0_0->SetBorderSize(0);
   p_0_0->SetTickx(1);
   p_0_0->SetTicky(1);
   p_0_0->SetLeftMargin(0.24);
   p_0_0->SetRightMargin(0);
   p_0_0->SetBottomMargin(0);
   p_0_0->SetFrameLineColor(0);
   p_0_0->SetFrameBorderMode(0);
   p_0_0->SetFrameLineColor(0);
   p_0_0->SetFrameBorderMode(0);
   
   TH1D *emptyRat__73 = new TH1D("emptyRat__73","",10,-2.999,2.999);
   emptyRat__73->SetBinContent(7,1000);
   emptyRat__73->SetBinError(7,1000);
   emptyRat__73->SetMinimum(0.5);
   emptyRat__73->SetMaximum(1.5);
   emptyRat__73->SetEntries(1);
   emptyRat__73->SetLineStyle(0);
   emptyRat__73->SetMarkerStyle(20);
   emptyRat__73->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__73->GetXaxis()->CenterTitle(true);
   emptyRat__73->GetXaxis()->SetLabelFont(43);
   emptyRat__73->GetXaxis()->SetLabelOffset(0.01);
   emptyRat__73->GetXaxis()->SetLabelSize(33);
   emptyRat__73->GetXaxis()->SetTitleSize(33);
   emptyRat__73->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__73->GetXaxis()->SetTitleFont(43);
   emptyRat__73->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__73->GetYaxis()->CenterTitle(true);
   emptyRat__73->GetYaxis()->SetNdivisions(505);
   emptyRat__73->GetYaxis()->SetLabelFont(43);
   emptyRat__73->GetYaxis()->SetLabelOffset(0.01);
   emptyRat__73->GetYaxis()->SetLabelSize(33);
   emptyRat__73->GetYaxis()->SetTitleSize(33);
   emptyRat__73->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__73->GetYaxis()->SetTitleFont(43);
   emptyRat__73->GetZaxis()->SetLabelFont(42);
   emptyRat__73->GetZaxis()->SetLabelSize(0.045);
   emptyRat__73->GetZaxis()->SetTitleSize(0.035);
   emptyRat__73->GetZaxis()->SetTitleFont(42);
   emptyRat__73->Draw("");
   
   Double_t Graph0_fx1031[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208334,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058334,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t Graph0_fy1031[18] = {
   0.9974562,
   0.7924848,
   1.004198,
   0.9414731,
   1.018989,
   0.964752,
   1.048233,
   1.024854,
   1.032,
   1.02918,
   0.9780832,
   1.02454,
   1.034302,
   1.028353,
   0.9961515,
   0.9536797,
   0.9477952,
   0.8124572};
   Double_t Graph0_fex1031[18] = {
   0.1083333,
   0.2166667,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083334,
   0.1083333,
   0.2166667,
   0.2166666};
   Double_t Graph0_fey1031[18] = {
   -0.3517377,
   -0.07266732,
   -0.04783516,
   -0.03513821,
   -0.03478586,
   -0.02624241,
   -0.02238151,
   -0.01515201,
   -0.0120204,
   -0.009279052,
   -0.008594588,
   -0.01146574,
   -0.01469189,
   -0.01919919,
   -0.02413711,
   -0.02848585,
   -0.03791307,
   -0.0755503};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1284;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10251031 = new TH1F("Graph_Graph_Graph10251031","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10251031->SetMinimum(0.76691);
   Graph_Graph_Graph10251031->SetMaximum(1.073808);
   Graph_Graph_Graph10251031->SetDirectory(0);
   Graph_Graph_Graph10251031->SetStats(0);
   Graph_Graph_Graph10251031->SetLineStyle(0);
   Graph_Graph_Graph10251031->SetMarkerStyle(20);
   Graph_Graph_Graph10251031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10251031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10251031->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10251031->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10251031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10251031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10251031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10251031->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10251031->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10251031->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10251031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10251031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10251031->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10251031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10251031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10251031);
   
   gre->Draw(" 2");
   
   Double_t g_fx3067[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3067[18] = {
   0.9986888,
   1.00438,
   1.025795,
   1.02097,
   1.019296,
   1.023096,
   1.019889,
   1.01314,
   1.009373,
   1.003593,
   1.005818,
   0.9972312,
   0.9893741,
   0.9786486,
   0.9766084,
   0.9756633,
   0.9719922,
   0.9729581};
   Double_t g_felx3067[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3067[18] = {
   0.0542446,
   0.02845104,
   0.04623884,
   0.03181031,
   0.03234634,
   0.009766618,
   0.02053782,
   0.01155825,
   0.007706686,
   0,
   0.02239291,
   0.0134655,
   0.007251346,
   0.00636696,
   0.02187269,
   0.02250514,
   0.02036411,
   0.03519607};
   Double_t g_fehx3067[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3067[18] = {
   0.07919616,
   0.03973517,
   0.01759756,
   0.02682261,
   0.01491795,
   0.03001639,
   0.01208171,
   0.01267054,
   0.01042991,
   0.02135831,
   0.0005450817,
   0.005135366,
   0.01872394,
   0.0257861,
   0.01247841,
   0.01913252,
   0.02049754,
   0.02226405};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,g_fx3067,g_fy3067,g_felx3067,g_fehx3067,g_fely3067,g_fehy3067);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1285;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3067 = new TH1F("Graph_g3067","",100,-3.5065,3.5915);
   Graph_g3067->SetMinimum(0.9237498);
   Graph_g3067->SetMaximum(1.091897);
   Graph_g3067->SetDirectory(0);
   Graph_g3067->SetStats(0);
   Graph_g3067->SetLineStyle(0);
   Graph_g3067->SetMarkerStyle(20);
   Graph_g3067->GetXaxis()->SetLabelFont(42);
   Graph_g3067->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3067->GetXaxis()->SetLabelSize(0.045);
   Graph_g3067->GetXaxis()->SetTitleSize(0.055);
   Graph_g3067->GetXaxis()->SetTitleFont(42);
   Graph_g3067->GetYaxis()->SetLabelFont(42);
   Graph_g3067->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3067->GetYaxis()->SetLabelSize(0.045);
   Graph_g3067->GetYaxis()->SetTitleSize(0.055);
   Graph_g3067->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3067->GetYaxis()->SetTitleFont(42);
   Graph_g3067->GetZaxis()->SetLabelFont(42);
   Graph_g3067->GetZaxis()->SetLabelSize(0.045);
   Graph_g3067->GetZaxis()->SetTitleSize(0.035);
   Graph_g3067->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3067);
   
   grae->Draw(" 2");
   
   Double_t g_fx3068[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3068[18] = {
   0.8773343,
   0.9383735,
   0.9784982,
   0.9893939,
   1.004511,
   1.030295,
   1.037963,
   1.042015,
   1.03529,
   1.031494,
   1.02218,
   1.006084,
   0.9905369,
   0.9689548,
   0.9557892,
   0.9476424,
   0.9294951,
   0.9223745};
   Double_t g_felx3068[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3068[18] = {
   0.1011217,
   0.07365061,
   0.05744445,
   0.04111587,
   0.02597717,
   0.02790249,
   0.03050974,
   0.03441963,
   0.01792668,
   0.01827494,
   0.009362319,
   0.004661548,
   0.01404182,
   0.01973862,
   0.03887213,
   0.05283402,
   0.04845356,
   0.07645084};
   Double_t g_fehx3068[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3068[18] = {
   0.1123449,
   0.04995606,
   0.03247444,
   0.02975263,
   0.02705862,
   0.02589113,
   0.02626203,
   0.0215294,
   0.03337922,
   0.02262096,
   0.01890319,
   0.02082532,
   0.01819344,
   0.02739272,
   0.03002009,
   0.03018483,
   0.04741183,
   0.04481642};
   grae = new TGraphAsymmErrors(18,g_fx3068,g_fy3068,g_felx3068,g_fehx3068,g_fely3068,g_fehy3068);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1286;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3068 = new TH1F("Graph_g3068","",100,-3.5065,3.5915);
   Graph_g3068->SetMinimum(0.746967);
   Graph_g3068->SetMaximum(1.097915);
   Graph_g3068->SetDirectory(0);
   Graph_g3068->SetStats(0);
   Graph_g3068->SetLineStyle(0);
   Graph_g3068->SetMarkerStyle(20);
   Graph_g3068->GetXaxis()->SetLabelFont(42);
   Graph_g3068->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3068->GetXaxis()->SetLabelSize(0.045);
   Graph_g3068->GetXaxis()->SetTitleSize(0.055);
   Graph_g3068->GetXaxis()->SetTitleFont(42);
   Graph_g3068->GetYaxis()->SetLabelFont(42);
   Graph_g3068->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3068->GetYaxis()->SetLabelSize(0.045);
   Graph_g3068->GetYaxis()->SetTitleSize(0.055);
   Graph_g3068->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3068->GetYaxis()->SetTitleFont(42);
   Graph_g3068->GetZaxis()->SetLabelFont(42);
   Graph_g3068->GetZaxis()->SetLabelSize(0.045);
   Graph_g3068->GetZaxis()->SetTitleSize(0.035);
   Graph_g3068->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3068);
   
   grae->Draw(" 2");
   
   Double_t g_fx3069[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3069[18] = {
   0.9022918,
   0.9505707,
   1.017578,
   1.040568,
   1.072927,
   1.096436,
   1.092738,
   1.085146,
   1.068874,
   1.049161,
   1.022635,
   0.993188,
   0.9573462,
   0.9220968,
   0.8931225,
   0.876467,
   0.8501154,
   0.8269425};
   Double_t g_felx3069[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3069[18] = {
   0.2268699,
   0.04406158,
   0.04306478,
   0.02348869,
   0.04865939,
   0.0387883,
   0.01448129,
   0.01696944,
   0.01219256,
   0.01415728,
   0.01728424,
   0.02856475,
   0.01434643,
   0.01411896,
   0.01086527,
   0.01941871,
   0.0204601,
   0.03005199};
   Double_t g_fehx3069[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3069[18] = {
   0.02487803,
   0.08000398,
   0.07281447,
   0.07253868,
   0.02632281,
   0.01682637,
   0.01650642,
   0.005664904,
   0.01413592,
   0.02072557,
   0.02385177,
   0.01795987,
   0.02160192,
   0.01341332,
   0.0124009,
   0.002692262,
   0.01650919,
   0.04185667};
   grae = new TGraphAsymmErrors(18,g_fx3069,g_fy3069,g_felx3069,g_fehx3069,g_fely3069,g_fehy3069);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1287;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3069 = new TH1F("Graph_g3069","",100,-3.5065,3.5915);
   Graph_g3069->SetMinimum(0.6316378);
   Graph_g3069->SetMaximum(1.157046);
   Graph_g3069->SetDirectory(0);
   Graph_g3069->SetStats(0);
   Graph_g3069->SetLineStyle(0);
   Graph_g3069->SetMarkerStyle(20);
   Graph_g3069->GetXaxis()->SetLabelFont(42);
   Graph_g3069->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3069->GetXaxis()->SetLabelSize(0.045);
   Graph_g3069->GetXaxis()->SetTitleSize(0.055);
   Graph_g3069->GetXaxis()->SetTitleFont(42);
   Graph_g3069->GetYaxis()->SetLabelFont(42);
   Graph_g3069->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3069->GetYaxis()->SetLabelSize(0.045);
   Graph_g3069->GetYaxis()->SetTitleSize(0.055);
   Graph_g3069->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3069->GetYaxis()->SetTitleFont(42);
   Graph_g3069->GetZaxis()->SetLabelFont(42);
   Graph_g3069->GetZaxis()->SetLabelSize(0.045);
   Graph_g3069->GetZaxis()->SetTitleSize(0.035);
   Graph_g3069->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3069);
   
   grae->Draw(" 2");
   Double_t xAxis43[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_0__74 = new TH1D("hist_eta_rat_0__74","",18, xAxis43);
   hist_eta_rat_0__74->SetBinContent(0,0.7009663);
   hist_eta_rat_0__74->SetBinContent(1,0.9780925);
   hist_eta_rat_0__74->SetBinContent(2,0.7903649);
   hist_eta_rat_0__74->SetBinContent(3,1.002554);
   hist_eta_rat_0__74->SetBinContent(4,0.9415966);
   hist_eta_rat_0__74->SetBinContent(5,1.022632);
   hist_eta_rat_0__74->SetBinContent(6,0.9673216);
   hist_eta_rat_0__74->SetBinContent(7,1.050277);
   hist_eta_rat_0__74->SetBinContent(8,1.024931);
   hist_eta_rat_0__74->SetBinContent(9,1.03395);
   hist_eta_rat_0__74->SetBinContent(10,1.030084);
   hist_eta_rat_0__74->SetBinContent(11,0.9783376);
   hist_eta_rat_0__74->SetBinContent(12,1.025516);
   hist_eta_rat_0__74->SetBinContent(13,1.034408);
   hist_eta_rat_0__74->SetBinContent(14,1.028685);
   hist_eta_rat_0__74->SetBinContent(15,0.9958378);
   hist_eta_rat_0__74->SetBinContent(16,0.9523999);
   hist_eta_rat_0__74->SetBinContent(17,0.9441907);
   hist_eta_rat_0__74->SetBinContent(18,0.8048132);
   hist_eta_rat_0__74->SetBinError(0,0.8585049);
   hist_eta_rat_0__74->SetBinError(1,0.2326733);
   hist_eta_rat_0__74->SetBinError(2,0.05011169);
   hist_eta_rat_0__74->SetBinError(3,0.0531607);
   hist_eta_rat_0__74->SetBinError(4,0.0405803);
   hist_eta_rat_0__74->SetBinError(5,0.03711422);
   hist_eta_rat_0__74->SetBinError(6,0.03117593);
   hist_eta_rat_0__74->SetBinError(7,0.0309367);
   hist_eta_rat_0__74->SetBinError(8,0.02800293);
   hist_eta_rat_0__74->SetBinError(9,0.02680612);
   hist_eta_rat_0__74->SetBinError(10,0.0260524);
   hist_eta_rat_0__74->SetBinError(11,0.02456519);
   hist_eta_rat_0__74->SetBinError(12,0.02602307);
   hist_eta_rat_0__74->SetBinError(13,0.02716959);
   hist_eta_rat_0__74->SetBinError(14,0.02835433);
   hist_eta_rat_0__74->SetBinError(15,0.02968339);
   hist_eta_rat_0__74->SetBinError(16,0.03186721);
   hist_eta_rat_0__74->SetBinError(17,0.02871787);
   hist_eta_rat_0__74->SetBinError(18,0.05029851);
   hist_eta_rat_0__74->SetEntries(4150.496);

   ci = TColor::GetColor("#33cc99");
   hist_eta_rat_0__74->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_0__74->SetLineColor(ci);
   hist_eta_rat_0__74->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_0__74->SetMarkerColor(ci);
   hist_eta_rat_0__74->SetMarkerStyle(20);
   hist_eta_rat_0__74->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_0__74->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_0__74->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_0__74->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_0__74->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_0__74->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_0__74->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_0__74->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_0__74->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_0__74->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_0__74->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_0__74->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_0__74->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_0__74->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_0__74->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_0__74->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_0__74->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_0__74->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_0__74->Draw("same");
   TLine *line = new TLine(-2.999,1,2.999,1);
   line->Draw();
   TLatex *   tex = new TLatex(0.32,0.8,"#bf{CMS}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
      tex = new TLatex(0.32,0.73,"#it{Preliminary}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
      tex = new TLatex(0.22,0.93,"#sqrt{s_{NN}} = 5.02 TeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
      tex = new TLatex(0.45,0.08,"25 < p_{T}^{ave} < 55 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_0_0->Modified();
   cRat1->cd();
  
// ------------>Primitives in pad: p_0_1
   TPad *p_0_1 = new TPad("p_0_1", "p_0_1",0,0,0.3825653,0.539394);
   p_0_1->Draw();
   p_0_1->cd();
   p_0_1->Range(-4.893105,0.1842105,2.999,1.5);
   p_0_1->SetFillColor(0);
   p_0_1->SetBorderMode(0);
   p_0_1->SetBorderSize(0);
   p_0_1->SetTickx(1);
   p_0_1->SetTicky(1);
   p_0_1->SetLeftMargin(0.24);
   p_0_1->SetRightMargin(0);
   p_0_1->SetTopMargin(0);
   p_0_1->SetBottomMargin(0.24);
   p_0_1->SetFrameLineColor(0);
   p_0_1->SetFrameBorderMode(0);
   p_0_1->SetFrameLineColor(0);
   p_0_1->SetFrameBorderMode(0);
   
   TH1D *emptyRat__75 = new TH1D("emptyRat__75","",10,-2.999,2.999);
   emptyRat__75->SetBinContent(7,1000);
   emptyRat__75->SetBinError(7,1000);
   emptyRat__75->SetMinimum(0.5);
   emptyRat__75->SetMaximum(1.5);
   emptyRat__75->SetEntries(1);
   emptyRat__75->SetLineStyle(0);
   emptyRat__75->SetMarkerStyle(20);
   emptyRat__75->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__75->GetXaxis()->CenterTitle(true);
   emptyRat__75->GetXaxis()->SetLabelFont(43);
   emptyRat__75->GetXaxis()->SetLabelOffset(0.01);
   emptyRat__75->GetXaxis()->SetLabelSize(33);
   emptyRat__75->GetXaxis()->SetTitleSize(33);
   emptyRat__75->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__75->GetXaxis()->SetTitleFont(43);
   emptyRat__75->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__75->GetYaxis()->CenterTitle(true);
   emptyRat__75->GetYaxis()->SetNdivisions(505);
   emptyRat__75->GetYaxis()->SetLabelFont(43);
   emptyRat__75->GetYaxis()->SetLabelOffset(0.01);
   emptyRat__75->GetYaxis()->SetLabelSize(33);
   emptyRat__75->GetYaxis()->SetTitleSize(33);
   emptyRat__75->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__75->GetYaxis()->SetTitleFont(43);
   emptyRat__75->GetZaxis()->SetLabelFont(42);
   emptyRat__75->GetZaxis()->SetLabelSize(0.045);
   emptyRat__75->GetZaxis()->SetTitleSize(0.035);
   emptyRat__75->GetZaxis()->SetTitleFont(42);
   emptyRat__75->Draw("");
   
   Double_t Graph0_fx1032[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208334,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058334,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t Graph0_fy1032[18] = {
   0,
   1.233958,
   0.9624653,
   0.9620264,
   0.9430621,
   0.9579047,
   0.968593,
   0.9937664,
   1.009391,
   1.011454,
   1.030022,
   1.015328,
   1.029455,
   1.00916,
   1.007609,
   1.005518,
   0.9318343,
   0.8627765};
   Double_t Graph0_fex1032[18] = {
   0.1083333,
   0.2166667,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083334,
   0.1083333,
   0.2166667,
   0.2166666};
   Double_t Graph0_fey1032[18] = {
   -0,
   -0.1764824,
   -0.05194378,
   -0.02557387,
   -0.01275509,
   -0.007697766,
   -0.00480874,
   -0.004466174,
   -0.003747023,
   -0.003844783,
   -0.004121737,
   -0.004349833,
   -0.004663339,
   -0.004892618,
   -0.005110217,
   -0.006315291,
   -0.01152612,
   -0.03716175};
   gre = new TGraphErrors(18,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1299;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10261032 = new TH1F("Graph_Graph_Graph10261032","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10261032->SetMinimum(0);
   Graph_Graph_Graph10261032->SetMaximum(1.357353);
   Graph_Graph_Graph10261032->SetDirectory(0);
   Graph_Graph_Graph10261032->SetStats(0);
   Graph_Graph_Graph10261032->SetLineStyle(0);
   Graph_Graph_Graph10261032->SetMarkerStyle(20);
   Graph_Graph_Graph10261032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10261032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10261032->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10261032->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10261032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10261032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10261032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10261032->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10261032->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10261032->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10261032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10261032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10261032->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10261032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10261032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10261032);
   
   gre->Draw(" 2");
   
   Double_t g_fx3070[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3070[18] = {
   1000,
   0.9651201,
   0.9477904,
   0.9624424,
   0.9780115,
   0.9965541,
   1.001101,
   1.010877,
   1.010424,
   1.018348,
   1.014809,
   1.006735,
   1.006284,
   0.9928053,
   0.992798,
   0.9818874,
   0.9720628,
   0.9482934};
   Double_t g_felx3070[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3070[18] = {
   13.03616,
   0.07221897,
   0.05726521,
   0.03898169,
   0.02014136,
   0.0240836,
   0.02044941,
   0.01981635,
   0.01154796,
   0.01979592,
   0.009875673,
   0.001856156,
   0.01242923,
   0.008435775,
   0.03115231,
   0.03068804,
   0.02200173,
   0.03365408};
   Double_t g_fehx3070[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3070[18] = {
   4.902577,
   0.0675916,
   0.01911773,
   0.02755228,
   0.03003721,
   0.01972858,
   0.02099632,
   0.01525902,
   0.02288758,
   0.004449051,
   0.01142872,
   0.02093546,
   0.004993438,
   0.02116579,
   0.01661889,
   0.01569594,
   0.03115632,
   0.04283207};
   grae = new TGraphAsymmErrors(18,g_fx3070,g_fy3070,g_felx3070,g_fehx3070,g_fely3070,g_fehy3070);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1300;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3070 = new TH1F("Graph_g3070","",100,-3.5065,3.5915);
   Graph_g3070->SetMinimum(0);
   Graph_g3070->SetMaximum(1105.304);
   Graph_g3070->SetDirectory(0);
   Graph_g3070->SetStats(0);
   Graph_g3070->SetLineStyle(0);
   Graph_g3070->SetMarkerStyle(20);
   Graph_g3070->GetXaxis()->SetLabelFont(42);
   Graph_g3070->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3070->GetXaxis()->SetLabelSize(0.045);
   Graph_g3070->GetXaxis()->SetTitleSize(0.055);
   Graph_g3070->GetXaxis()->SetTitleFont(42);
   Graph_g3070->GetYaxis()->SetLabelFont(42);
   Graph_g3070->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3070->GetYaxis()->SetLabelSize(0.045);
   Graph_g3070->GetYaxis()->SetTitleSize(0.055);
   Graph_g3070->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3070->GetYaxis()->SetTitleFont(42);
   Graph_g3070->GetZaxis()->SetLabelFont(42);
   Graph_g3070->GetZaxis()->SetLabelSize(0.045);
   Graph_g3070->GetZaxis()->SetTitleSize(0.035);
   Graph_g3070->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3070);
   
   grae->Draw(" 2");
   
   Double_t g_fx3071[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3071[18] = {
   1000,
   0.8619029,
   0.8148163,
   0.8310287,
   0.8861748,
   0.9210708,
   0.9438242,
   0.9739385,
   0.9926671,
   1.021888,
   1.04075,
   1.048081,
   1.046886,
   1.032649,
   1.024288,
   0.9980835,
   0.9752823,
   0.9260339};
   Double_t g_felx3071[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3071[18] = {
   18.27213,
   0.08706891,
   0.0971924,
   0.04634409,
   0.06920923,
   0.05564717,
   0.03626914,
   0.03237491,
   0.01301518,
   0.01328222,
   0.02839655,
   0.03182058,
   0.02914181,
   0.02276987,
   0.03026213,
   0.02334262,
   0.03453462,
   0.04066117};
   Double_t g_fehx3071[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3071[18] = {
   8.086951,
   0.07720921,
   0.04861144,
   0.09742498,
   0.05277678,
   0.04689671,
   0.04685714,
   0.02860277,
   0.02027655,
   0.01077387,
   0.00911438,
   0.01779023,
   0.03220666,
   0.03743607,
   0.02248637,
   0.03854991,
   0.04200734,
   0.07085604};
   grae = new TGraphAsymmErrors(18,g_fx3071,g_fy3071,g_felx3071,g_fehx3071,g_fely3071,g_fehy3071);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1301;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3071 = new TH1F("Graph_g3071","",100,-3.5065,3.5915);
   Graph_g3071->SetMinimum(0);
   Graph_g3071->SetMaximum(1108.824);
   Graph_g3071->SetDirectory(0);
   Graph_g3071->SetStats(0);
   Graph_g3071->SetLineStyle(0);
   Graph_g3071->SetMarkerStyle(20);
   Graph_g3071->GetXaxis()->SetLabelFont(42);
   Graph_g3071->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3071->GetXaxis()->SetLabelSize(0.045);
   Graph_g3071->GetXaxis()->SetTitleSize(0.055);
   Graph_g3071->GetXaxis()->SetTitleFont(42);
   Graph_g3071->GetYaxis()->SetLabelFont(42);
   Graph_g3071->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3071->GetYaxis()->SetLabelSize(0.045);
   Graph_g3071->GetYaxis()->SetTitleSize(0.055);
   Graph_g3071->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3071->GetYaxis()->SetTitleFont(42);
   Graph_g3071->GetZaxis()->SetLabelFont(42);
   Graph_g3071->GetZaxis()->SetLabelSize(0.045);
   Graph_g3071->GetZaxis()->SetTitleSize(0.035);
   Graph_g3071->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3071);
   
   grae->Draw(" 2");
   
   Double_t g_fx3072[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3072[18] = {
   1000,
   0.7286674,
   0.750944,
   0.8050433,
   0.8637635,
   0.9007843,
   0.9422336,
   0.9887978,
   1.025786,
   1.062643,
   1.066624,
   1.060829,
   1.058979,
   1.026652,
   0.9914071,
   0.9511015,
   0.913618,
   0.8586718};
   Double_t g_felx3072[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3072[18] = {
   11.15203,
   0.07934826,
   0.06140033,
   0.05463965,
   0.07037342,
   0.01793205,
   0.004807587,
   0.002334818,
   0.01774677,
   0.04799536,
   0.02218628,
   0.01300979,
   0.04086375,
   0.02171621,
   0.00293748,
   0.005490422,
   0.03904123,
   0.09083628};
   Double_t g_fehx3072[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3072[18] = {
   5.217884,
   0.1407016,
   0.07398487,
   0.04938043,
   0.02381263,
   0.04848206,
   0.03826115,
   0.02679909,
   0.01336927,
   1.041575e-05,
   0.0243346,
   0.04011753,
   0.003011461,
   0.008005117,
   0.03075312,
   0.03771527,
   0.03278101,
   0.02634053};
   grae = new TGraphAsymmErrors(18,g_fx3072,g_fy3072,g_felx3072,g_fehx3072,g_fely3072,g_fehy3072);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1302;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3072 = new TH1F("Graph_g3072","",100,-3.5065,3.5915);
   Graph_g3072->SetMinimum(0);
   Graph_g3072->SetMaximum(1105.675);
   Graph_g3072->SetDirectory(0);
   Graph_g3072->SetStats(0);
   Graph_g3072->SetLineStyle(0);
   Graph_g3072->SetMarkerStyle(20);
   Graph_g3072->GetXaxis()->SetLabelFont(42);
   Graph_g3072->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3072->GetXaxis()->SetLabelSize(0.045);
   Graph_g3072->GetXaxis()->SetTitleSize(0.055);
   Graph_g3072->GetXaxis()->SetTitleFont(42);
   Graph_g3072->GetYaxis()->SetLabelFont(42);
   Graph_g3072->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3072->GetYaxis()->SetLabelSize(0.045);
   Graph_g3072->GetYaxis()->SetTitleSize(0.055);
   Graph_g3072->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3072->GetYaxis()->SetTitleFont(42);
   Graph_g3072->GetZaxis()->SetLabelFont(42);
   Graph_g3072->GetZaxis()->SetLabelSize(0.045);
   Graph_g3072->GetZaxis()->SetTitleSize(0.035);
   Graph_g3072->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3072);
   
   grae->Draw(" 2");
   Double_t xAxis44[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_3__76 = new TH1D("hist_eta_rat_3__76","",18, xAxis44);
   hist_eta_rat_3__76->SetBinContent(1,1000);
   hist_eta_rat_3__76->SetBinContent(2,1.229353);
   hist_eta_rat_3__76->SetBinContent(3,0.9669839);
   hist_eta_rat_3__76->SetBinContent(4,0.9665762);
   hist_eta_rat_3__76->SetBinContent(5,0.9478743);
   hist_eta_rat_3__76->SetBinContent(6,0.9629507);
   hist_eta_rat_3__76->SetBinContent(7,0.9720505);
   hist_eta_rat_3__76->SetBinContent(8,0.9961309);
   hist_eta_rat_3__76->SetBinContent(9,1.010588);
   hist_eta_rat_3__76->SetBinContent(10,1.011649);
   hist_eta_rat_3__76->SetBinContent(11,1.029972);
   hist_eta_rat_3__76->SetBinContent(12,1.015178);
   hist_eta_rat_3__76->SetBinContent(13,1.02908);
   hist_eta_rat_3__76->SetBinContent(14,1.007098);
   hist_eta_rat_3__76->SetBinContent(15,1.004349);
   hist_eta_rat_3__76->SetBinContent(16,1.000708);
   hist_eta_rat_3__76->SetBinContent(17,0.9274416);
   hist_eta_rat_3__76->SetBinContent(18,0.8612056);
   hist_eta_rat_3__76->SetBinError(2,0.1041244);
   hist_eta_rat_3__76->SetBinError(3,0.03590138);
   hist_eta_rat_3__76->SetBinError(4,0.02034866);
   hist_eta_rat_3__76->SetBinError(5,0.01386378);
   hist_eta_rat_3__76->SetBinError(6,0.01095308);
   hist_eta_rat_3__76->SetBinError(7,0.009245236);
   hist_eta_rat_3__76->SetBinError(8,0.008339605);
   hist_eta_rat_3__76->SetBinError(9,0.007761978);
   hist_eta_rat_3__76->SetBinError(10,0.0074013);
   hist_eta_rat_3__76->SetBinError(11,0.007267697);
   hist_eta_rat_3__76->SetBinError(12,0.007218966);
   hist_eta_rat_3__76->SetBinError(13,0.007501821);
   hist_eta_rat_3__76->SetBinError(14,0.00785601);
   hist_eta_rat_3__76->SetBinError(15,0.008584328);
   hist_eta_rat_3__76->SetBinError(16,0.009777446);
   hist_eta_rat_3__76->SetBinError(17,0.009315331);
   hist_eta_rat_3__76->SetBinError(18,0.02288525);
   hist_eta_rat_3__76->SetEntries(20309.13);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_3__76->SetLineColor(ci);
   hist_eta_rat_3__76->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_3__76->SetMarkerColor(ci);
   hist_eta_rat_3__76->SetMarkerStyle(20);
   hist_eta_rat_3__76->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_3__76->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_3__76->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_3__76->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_3__76->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_3__76->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_3__76->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_3__76->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_3__76->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_3__76->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_3__76->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_3__76->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_3__76->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_3__76->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_3__76->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_3__76->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_3__76->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_3__76->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_3__76->Draw("same");
   line = new TLine(-2.999,1,2.999,1);
   line->Draw();
      tex = new TLatex(0.45,0.29,"95 < p_{T}^{ave} < 115 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_0_1->Modified();
   cRat1->cd();
  
// ------------>Primitives in pad: p_1_0
   TPad *p_1_0 = new TPad("p_1_0", "p_1_0",0.3825653,0.5393939,0.673315,1);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(-2.999,0.5,2.999,1.623596);
   p_1_0->SetFillColor(0);
   p_1_0->SetBorderMode(0);
   p_1_0->SetBorderSize(0);
   p_1_0->SetTickx(1);
   p_1_0->SetTicky(1);
   p_1_0->SetLeftMargin(0);
   p_1_0->SetRightMargin(0);
   p_1_0->SetBottomMargin(0);
   p_1_0->SetFrameLineColor(0);
   p_1_0->SetFrameBorderMode(0);
   p_1_0->SetFrameLineColor(0);
   p_1_0->SetFrameBorderMode(0);
   
   TH1D *emptyRat__77 = new TH1D("emptyRat__77","",10,-2.999,2.999);
   emptyRat__77->SetBinContent(7,1000);
   emptyRat__77->SetBinError(7,1000);
   emptyRat__77->SetMinimum(0.5);
   emptyRat__77->SetMaximum(1.5);
   emptyRat__77->SetEntries(1);
   emptyRat__77->SetLineStyle(0);
   emptyRat__77->SetMarkerStyle(20);
   emptyRat__77->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__77->GetXaxis()->CenterTitle(true);
   emptyRat__77->GetXaxis()->SetLabelFont(43);
   emptyRat__77->GetXaxis()->SetLabelOffset(0.01);
   emptyRat__77->GetXaxis()->SetLabelSize(33);
   emptyRat__77->GetXaxis()->SetTitleSize(33);
   emptyRat__77->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__77->GetXaxis()->SetTitleFont(43);
   emptyRat__77->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__77->GetYaxis()->CenterTitle(true);
   emptyRat__77->GetYaxis()->SetNdivisions(505);
   emptyRat__77->GetYaxis()->SetLabelFont(43);
   emptyRat__77->GetYaxis()->SetLabelOffset(0.01);
   emptyRat__77->GetYaxis()->SetLabelSize(33);
   emptyRat__77->GetYaxis()->SetTitleSize(33);
   emptyRat__77->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__77->GetYaxis()->SetTitleFont(43);
   emptyRat__77->GetZaxis()->SetLabelFont(42);
   emptyRat__77->GetZaxis()->SetLabelSize(0.045);
   emptyRat__77->GetZaxis()->SetTitleSize(0.035);
   emptyRat__77->GetZaxis()->SetTitleFont(42);
   emptyRat__77->Draw("");
   
   Double_t Graph0_fx1033[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208334,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058334,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t Graph0_fy1033[18] = {
   0.9271192,
   1.022899,
   0.9942306,
   0.9793775,
   1.018683,
   0.9907087,
   0.9910232,
   1.02339,
   1.015947,
   1.030239,
   1.025056,
   1.017099,
   1.014119,
   1.002032,
   0.9759589,
   0.9760837,
   0.9241032,
   0.7964336};
   Double_t Graph0_fex1033[18] = {
   0.1083333,
   0.2166667,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083334,
   0.1083333,
   0.2166667,
   0.2166666};
   Double_t Graph0_fey1033[18] = {
   -0.3771321,
   -0.1125101,
   -0.04055392,
   -0.02147382,
   -0.01266763,
   -0.007596318,
   -0.006067058,
   -0.005977075,
   -0.006407987,
   -0.00645275,
   -0.008113781,
   -0.006700607,
   -0.006311937,
   -0.00713037,
   -0.005860251,
   -0.009064175,
   -0.01039134,
   -0.04942623};
   gre = new TGraphErrors(18,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1289;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10271033 = new TH1F("Graph_Graph_Graph10271033","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10271033->SetMinimum(0.7730531);
   Graph_Graph_Graph10271033->SetMaximum(1.05362);
   Graph_Graph_Graph10271033->SetDirectory(0);
   Graph_Graph_Graph10271033->SetStats(0);
   Graph_Graph_Graph10271033->SetLineStyle(0);
   Graph_Graph_Graph10271033->SetMarkerStyle(20);
   Graph_Graph_Graph10271033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10271033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10271033->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10271033->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10271033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10271033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10271033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10271033->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10271033->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10271033->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10271033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10271033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10271033->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10271033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10271033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10271033);
   
   gre->Draw(" 2");
   
   Double_t g_fx3073[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3073[18] = {
   0.9959424,
   0.9615729,
   0.9826576,
   0.9892587,
   1.010504,
   1.012466,
   1.015035,
   1.021611,
   1.015402,
   1.017498,
   1.011287,
   1.003929,
   0.9952646,
   0.9849188,
   0.9822229,
   0.9782796,
   0.9675593,
   0.9590513};
   Double_t g_felx3073[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3073[18] = {
   0.2880351,
   0.008998984,
   0.06803334,
   0.02096658,
   0.03257664,
   0.02829111,
   0.01907341,
   0.03550848,
   0.006481936,
   0.009656044,
   0.0295494,
   0.0220346,
   0.005770024,
   0.005636479,
   0.02754463,
   0.03298804,
   0.01320953,
   0.03581761};
   Double_t g_fehx3073[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3073[18] = {
   0.1038001,
   0.09121526,
   0.009827647,
   0.03527362,
   0.02411806,
   0.02575311,
   0.02924177,
   0.00847036,
   0.03150313,
   0.01731391,
   0.0008261541,
   0.002298413,
   0.03055259,
   0.03225701,
   0.0145615,
   0.02078262,
   0.03445168,
   0.0289802};
   grae = new TGraphAsymmErrors(18,g_fx3073,g_fy3073,g_felx3073,g_fehx3073,g_fely3073,g_fehy3073);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1290;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3073 = new TH1F("Graph_g3073","",100,-3.5065,3.5915);
   Graph_g3073->SetMinimum(0.6687237);
   Graph_g3073->SetMaximum(1.138926);
   Graph_g3073->SetDirectory(0);
   Graph_g3073->SetStats(0);
   Graph_g3073->SetLineStyle(0);
   Graph_g3073->SetMarkerStyle(20);
   Graph_g3073->GetXaxis()->SetLabelFont(42);
   Graph_g3073->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3073->GetXaxis()->SetLabelSize(0.045);
   Graph_g3073->GetXaxis()->SetTitleSize(0.055);
   Graph_g3073->GetXaxis()->SetTitleFont(42);
   Graph_g3073->GetYaxis()->SetLabelFont(42);
   Graph_g3073->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3073->GetYaxis()->SetLabelSize(0.045);
   Graph_g3073->GetYaxis()->SetTitleSize(0.055);
   Graph_g3073->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3073->GetYaxis()->SetTitleFont(42);
   Graph_g3073->GetZaxis()->SetLabelFont(42);
   Graph_g3073->GetZaxis()->SetLabelSize(0.045);
   Graph_g3073->GetZaxis()->SetTitleSize(0.035);
   Graph_g3073->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3073);
   
   grae->Draw(" 2");
   
   Double_t g_fx3074[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3074[18] = {
   0.8450918,
   0.8449665,
   0.8637965,
   0.9107734,
   0.9460854,
   0.961723,
   0.992162,
   1.017036,
   1.03518,
   1.051757,
   1.039898,
   1.033222,
   1.028487,
   1.000979,
   0.9891758,
   0.9718211,
   0.9531209,
   0.9203957};
   Double_t g_felx3074[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3074[18] = {
   0.198533,
   0.08180576,
   0.0560067,
   0.06391951,
   0.05786143,
   0.0255584,
   0.03305151,
   0.02662557,
   0.0176529,
   0.04322576,
   0.02156455,
   0.02363682,
   0.02694262,
   0.006404091,
   0.02558649,
   0.03203398,
   0.05554789,
   0.04606938};
   Double_t g_fehx3074[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3074[18] = {
   0.07634032,
   0.07675519,
   0.08598306,
   0.05417375,
   0.04396393,
   0.04955593,
   0.02568507,
   0.01602256,
   0.02079727,
   0.01950295,
   0.03392254,
   0.03242816,
   0.01841359,
   0.04960962,
   0.02107536,
   0.02776865,
   0.03072133,
   0.06682594};
   grae = new TGraphAsymmErrors(18,g_fx3074,g_fy3074,g_felx3074,g_fehx3074,g_fely3074,g_fehy3074);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1291;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3074 = new TH1F("Graph_g3074","",100,-3.5065,3.5915);
   Graph_g3074->SetMinimum(0.6038326);
   Graph_g3074->SetMaximum(1.116546);
   Graph_g3074->SetDirectory(0);
   Graph_g3074->SetStats(0);
   Graph_g3074->SetLineStyle(0);
   Graph_g3074->SetMarkerStyle(20);
   Graph_g3074->GetXaxis()->SetLabelFont(42);
   Graph_g3074->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3074->GetXaxis()->SetLabelSize(0.045);
   Graph_g3074->GetXaxis()->SetTitleSize(0.055);
   Graph_g3074->GetXaxis()->SetTitleFont(42);
   Graph_g3074->GetYaxis()->SetLabelFont(42);
   Graph_g3074->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3074->GetYaxis()->SetLabelSize(0.045);
   Graph_g3074->GetYaxis()->SetTitleSize(0.055);
   Graph_g3074->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3074->GetYaxis()->SetTitleFont(42);
   Graph_g3074->GetZaxis()->SetLabelFont(42);
   Graph_g3074->GetZaxis()->SetLabelSize(0.045);
   Graph_g3074->GetZaxis()->SetTitleSize(0.035);
   Graph_g3074->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3074);
   
   grae->Draw(" 2");
   
   Double_t g_fx3075[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3075[18] = {
   0.7279554,
   0.8030255,
   0.8530532,
   0.9042343,
   0.9551554,
   0.9945939,
   1.031539,
   1.058538,
   1.076104,
   1.079707,
   1.064453,
   1.040431,
   1.016869,
   0.9791936,
   0.9448044,
   0.9138698,
   0.8763517,
   0.8278445};
   Double_t g_felx3075[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3075[18] = {
   0.09358483,
   0.03689661,
   0.05356552,
   0.04559767,
   0.04031397,
   0.022505,
   0.01708182,
   0.007097484,
   0.01247012,
   0.02150554,
   0.03303977,
   0.01968304,
   0.02840096,
   0.01489308,
   0.0185999,
   0.0270269,
   0.03000285,
   0.02177245};
   Double_t g_fehx3075[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3075[18] = {
   0.2341192,
   0.1079686,
   0.04879185,
   0.04275138,
   0.03838683,
   0.03047852,
   0.02204346,
   0.02830176,
   0.02327849,
   0.02002717,
   0.01511703,
   0.02473506,
   0.01043205,
   0.01904131,
   0.01193766,
   0.01648955,
   0.02052093,
   0.07428693};
   grae = new TGraphAsymmErrors(18,g_fx3075,g_fy3075,g_felx3075,g_fehx3075,g_fely3075,g_fehy3075);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1292;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3075 = new TH1F("Graph_g3075","",100,-3.5065,3.5915);
   Graph_g3075->SetMinimum(0.5878343);
   Graph_g3075->SetMaximum(1.146271);
   Graph_g3075->SetDirectory(0);
   Graph_g3075->SetStats(0);
   Graph_g3075->SetLineStyle(0);
   Graph_g3075->SetMarkerStyle(20);
   Graph_g3075->GetXaxis()->SetLabelFont(42);
   Graph_g3075->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3075->GetXaxis()->SetLabelSize(0.045);
   Graph_g3075->GetXaxis()->SetTitleSize(0.055);
   Graph_g3075->GetXaxis()->SetTitleFont(42);
   Graph_g3075->GetYaxis()->SetLabelFont(42);
   Graph_g3075->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3075->GetYaxis()->SetLabelSize(0.045);
   Graph_g3075->GetYaxis()->SetTitleSize(0.055);
   Graph_g3075->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3075->GetYaxis()->SetTitleFont(42);
   Graph_g3075->GetZaxis()->SetLabelFont(42);
   Graph_g3075->GetZaxis()->SetLabelSize(0.045);
   Graph_g3075->GetZaxis()->SetTitleSize(0.035);
   Graph_g3075->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3075);
   
   grae->Draw(" 2");
   Double_t xAxis45[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_1__78 = new TH1D("hist_eta_rat_1__78","",18, xAxis45);
   hist_eta_rat_1__78->SetBinContent(1,0.8991901);
   hist_eta_rat_1__78->SetBinContent(2,1.020067);
   hist_eta_rat_1__78->SetBinContent(3,0.9951541);
   hist_eta_rat_1__78->SetBinContent(4,0.9807586);
   hist_eta_rat_1__78->SetBinContent(5,1.022584);
   hist_eta_rat_1__78->SetBinContent(6,0.994965);
   hist_eta_rat_1__78->SetBinContent(7,0.994765);
   hist_eta_rat_1__78->SetBinContent(8,1.024517);
   hist_eta_rat_1__78->SetBinContent(9,1.016799);
   hist_eta_rat_1__78->SetBinContent(10,1.030755);
   hist_eta_rat_1__78->SetBinContent(11,1.024302);
   hist_eta_rat_1__78->SetBinContent(12,1.017353);
   hist_eta_rat_1__78->SetBinContent(13,1.013676);
   hist_eta_rat_1__78->SetBinContent(14,0.9996804);
   hist_eta_rat_1__78->SetBinContent(15,0.9743303);
   hist_eta_rat_1__78->SetBinContent(16,0.9698012);
   hist_eta_rat_1__78->SetBinContent(17,0.9218322);
   hist_eta_rat_1__78->SetBinContent(18,0.7953151);
   hist_eta_rat_1__78->SetBinError(1,0.2654167);
   hist_eta_rat_1__78->SetBinError(2,0.04189644);
   hist_eta_rat_1__78->SetBinError(3,0.02914542);
   hist_eta_rat_1__78->SetBinError(4,0.02133916);
   hist_eta_rat_1__78->SetBinError(5,0.01762502);
   hist_eta_rat_1__78->SetBinError(6,0.01477849);
   hist_eta_rat_1__78->SetBinError(7,0.01309855);
   hist_eta_rat_1__78->SetBinError(8,0.01223317);
   hist_eta_rat_1__78->SetBinError(9,0.01144872);
   hist_eta_rat_1__78->SetBinError(10,0.01107849);
   hist_eta_rat_1__78->SetBinError(11,0.01086972);
   hist_eta_rat_1__78->SetBinError(12,0.01087988);
   hist_eta_rat_1__78->SetBinError(13,0.01111328);
   hist_eta_rat_1__78->SetBinError(14,0.01160966);
   hist_eta_rat_1__78->SetBinError(15,0.01235849);
   hist_eta_rat_1__78->SetBinError(16,0.01389286);
   hist_eta_rat_1__78->SetBinError(17,0.01263902);
   hist_eta_rat_1__78->SetBinError(18,0.02503083);
   hist_eta_rat_1__78->SetEntries(4107.488);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_1__78->SetLineColor(ci);
   hist_eta_rat_1__78->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_1__78->SetMarkerColor(ci);
   hist_eta_rat_1__78->SetMarkerStyle(20);
   hist_eta_rat_1__78->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_1__78->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_1__78->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_1__78->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_1__78->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_1__78->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_1__78->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_1__78->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_1__78->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_1__78->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_1__78->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_1__78->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_1__78->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_1__78->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_1__78->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_1__78->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_1__78->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_1__78->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_1__78->Draw("same");
   line = new TLine(-2.999,1,2.999,1);
   line->Draw();
      tex = new TLatex(0.05,0.93,"p_{T,1} > 20, p_{T,2} > 30 GeV, #Delta#phi_{1,2} > 2#pi/3");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(24);
   tex->Draw();
      tex = new TLatex(0.3,0.08,"55 < p_{T}^{ave} < 75 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
      tex = new TLatex(0.05,0.8,"pp NLO: CT14");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_0->Modified();
   cRat1->cd();
  
// ------------>Primitives in pad: p_1_1
   TPad *p_1_1 = new TPad("p_1_1", "p_1_1",0.3825653,0,0.673315,0.539394);
   p_1_1->Draw();
   p_1_1->cd();
   p_1_1->Range(-2.999,0.1842105,2.999,1.5);
   p_1_1->SetFillColor(0);
   p_1_1->SetBorderMode(0);
   p_1_1->SetBorderSize(0);
   p_1_1->SetTickx(1);
   p_1_1->SetTicky(1);
   p_1_1->SetLeftMargin(0);
   p_1_1->SetRightMargin(0);
   p_1_1->SetTopMargin(0);
   p_1_1->SetBottomMargin(0.24);
   p_1_1->SetFrameLineColor(0);
   p_1_1->SetFrameBorderMode(0);
   p_1_1->SetFrameLineColor(0);
   p_1_1->SetFrameBorderMode(0);
   
   TH1D *emptyRat__79 = new TH1D("emptyRat__79","",10,-2.999,2.999);
   emptyRat__79->SetBinContent(7,1000);
   emptyRat__79->SetBinError(7,1000);
   emptyRat__79->SetMinimum(0.5);
   emptyRat__79->SetMaximum(1.5);
   emptyRat__79->SetEntries(1);
   emptyRat__79->SetLineStyle(0);
   emptyRat__79->SetMarkerStyle(20);
   emptyRat__79->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__79->GetXaxis()->CenterTitle(true);
   emptyRat__79->GetXaxis()->SetLabelFont(43);
   emptyRat__79->GetXaxis()->SetLabelOffset(0.01);
   emptyRat__79->GetXaxis()->SetLabelSize(33);
   emptyRat__79->GetXaxis()->SetTitleSize(33);
   emptyRat__79->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__79->GetXaxis()->SetTitleFont(43);
   emptyRat__79->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__79->GetYaxis()->CenterTitle(true);
   emptyRat__79->GetYaxis()->SetNdivisions(505);
   emptyRat__79->GetYaxis()->SetLabelFont(43);
   emptyRat__79->GetYaxis()->SetLabelOffset(0.01);
   emptyRat__79->GetYaxis()->SetLabelSize(33);
   emptyRat__79->GetYaxis()->SetTitleSize(33);
   emptyRat__79->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__79->GetYaxis()->SetTitleFont(43);
   emptyRat__79->GetZaxis()->SetLabelFont(42);
   emptyRat__79->GetZaxis()->SetLabelSize(0.045);
   emptyRat__79->GetZaxis()->SetTitleSize(0.035);
   emptyRat__79->GetZaxis()->SetTitleFont(42);
   emptyRat__79->Draw("");
   
   Double_t Graph0_fx1034[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208334,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058334,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t Graph0_fy1034[18] = {
   0,
   1.828289,
   0.9856958,
   0.9562706,
   0.9372001,
   0.9426511,
   0.9554017,
   0.9614722,
   0.9962622,
   1.009747,
   1.029933,
   1.01605,
   1.025047,
   1.014258,
   1.019981,
   1.01072,
   0.9652409,
   0.8882555};
   Double_t Graph0_fex1034[18] = {
   0.1083333,
   0.2166667,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083334,
   0.1083333,
   0.2166667,
   0.2166666};
   Double_t Graph0_fey1034[18] = {
   -0,
   -0.3236091,
   -0.06650364,
   -0.02696286,
   -0.0141758,
   -0.007742652,
   -0.004514958,
   -0.00424831,
   -0.003172289,
   -0.00379496,
   -0.003273342,
   -0.003781476,
   -0.003239635,
   -0.003545876,
   -0.005106598,
   -0.006693651,
   -0.01276449,
   -0.03203878};
   gre = new TGraphErrors(18,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1304;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10281034 = new TH1F("Graph_Graph_Graph10281034","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10281034->SetMinimum(0);
   Graph_Graph_Graph10281034->SetMaximum(2.011118);
   Graph_Graph_Graph10281034->SetDirectory(0);
   Graph_Graph_Graph10281034->SetStats(0);
   Graph_Graph_Graph10281034->SetLineStyle(0);
   Graph_Graph_Graph10281034->SetMarkerStyle(20);
   Graph_Graph_Graph10281034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10281034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10281034->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10281034->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10281034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10281034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10281034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10281034->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10281034->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10281034->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10281034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10281034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10281034->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10281034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10281034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10281034);
   
   gre->Draw(" 2");
   
   Double_t g_fx3076[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3076[18] = {
   1000,
   1000,
   0.9613096,
   0.9594462,
   0.964771,
   0.9814206,
   0.991243,
   1.005397,
   1.007462,
   1.015715,
   1.013559,
   1.010844,
   1.007502,
   0.9977818,
   0.9951441,
   0.9821602,
   0.9742356,
   0.9645072};
   Double_t g_felx3076[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3076[18] = {
   0.102993,
   0.1484204,
   0.0843998,
   0.02223329,
   0.01807197,
   0.01389681,
   0.02118091,
   0.025156,
   0.01131011,
   0.01988791,
   0.006950863,
   0.0022101,
   0.01624615,
   0.006039801,
   0.02900632,
   0.01531362,
   0.0193469,
   0.02940352};
   Double_t g_fehx3076[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3076[18] = {
   8.026669,
   0.1722544,
   0.01635064,
   0.02398371,
   0.02674527,
   0.02722684,
   0.01936743,
   0.006661295,
   0.01818276,
   0.00383261,
   0.01486492,
   0.01215482,
   0.005837675,
   0.01949047,
   0.01106963,
   0.02625022,
   0.03323227,
   0.05572057};
   grae = new TGraphAsymmErrors(18,g_fx3076,g_fy3076,g_felx3076,g_fehx3076,g_fely3076,g_fehy3076);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1305;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3076 = new TH1F("Graph_g3076","",100,-3.5065,3.5915);
   Graph_g3076->SetMinimum(0);
   Graph_g3076->SetMaximum(1108.742);
   Graph_g3076->SetDirectory(0);
   Graph_g3076->SetStats(0);
   Graph_g3076->SetLineStyle(0);
   Graph_g3076->SetMarkerStyle(20);
   Graph_g3076->GetXaxis()->SetLabelFont(42);
   Graph_g3076->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3076->GetXaxis()->SetLabelSize(0.045);
   Graph_g3076->GetXaxis()->SetTitleSize(0.055);
   Graph_g3076->GetXaxis()->SetTitleFont(42);
   Graph_g3076->GetYaxis()->SetLabelFont(42);
   Graph_g3076->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3076->GetYaxis()->SetLabelSize(0.045);
   Graph_g3076->GetYaxis()->SetTitleSize(0.055);
   Graph_g3076->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3076->GetYaxis()->SetTitleFont(42);
   Graph_g3076->GetZaxis()->SetLabelFont(42);
   Graph_g3076->GetZaxis()->SetLabelSize(0.045);
   Graph_g3076->GetZaxis()->SetTitleSize(0.035);
   Graph_g3076->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3076);
   
   grae->Draw(" 2");
   
   Double_t g_fx3077[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3077[18] = {
   1000,
   1000,
   0.8301774,
   0.8335412,
   0.8518722,
   0.8994039,
   0.9243788,
   0.9582832,
   0.9819338,
   1.005102,
   1.02933,
   1.043574,
   1.045769,
   1.045914,
   1.035167,
   1.014941,
   0.9881811,
   0.9647122};
   Double_t g_felx3077[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3077[18] = {
   0.178059,
   0.07204127,
   0.06624916,
   0.06990595,
   0.05776562,
   0.066109,
   0.04720771,
   0.04590076,
   0.03159879,
   0.01162137,
   0.01391879,
   0.02002215,
   0.01855673,
   0.02796446,
   0.02795706,
   0.02815575,
   0.02651832,
   0.04761473};
   Double_t g_fehx3077[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3077[18] = {
   10.92528,
   0.1662058,
   0.0469494,
   0.064498,
   0.06959476,
   0.04493416,
   0.04130968,
   0.02901295,
   0.01824601,
   0.008741703,
   0.006678828,
   0.02276254,
   0.04538034,
   0.03407477,
   0.03025703,
   0.03333987,
   0.04300432,
   0.04450931};
   grae = new TGraphAsymmErrors(18,g_fx3077,g_fy3077,g_felx3077,g_fehx3077,g_fely3077,g_fehy3077);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1306;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3077 = new TH1F("Graph_g3077","",100,-3.5065,3.5915);
   Graph_g3077->SetMinimum(0);
   Graph_g3077->SetMaximum(1111.941);
   Graph_g3077->SetDirectory(0);
   Graph_g3077->SetStats(0);
   Graph_g3077->SetLineStyle(0);
   Graph_g3077->SetMarkerStyle(20);
   Graph_g3077->GetXaxis()->SetLabelFont(42);
   Graph_g3077->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3077->GetXaxis()->SetLabelSize(0.045);
   Graph_g3077->GetXaxis()->SetTitleSize(0.055);
   Graph_g3077->GetXaxis()->SetTitleFont(42);
   Graph_g3077->GetYaxis()->SetLabelFont(42);
   Graph_g3077->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3077->GetYaxis()->SetLabelSize(0.045);
   Graph_g3077->GetYaxis()->SetTitleSize(0.055);
   Graph_g3077->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3077->GetYaxis()->SetTitleFont(42);
   Graph_g3077->GetZaxis()->SetLabelFont(42);
   Graph_g3077->GetZaxis()->SetLabelSize(0.045);
   Graph_g3077->GetZaxis()->SetTitleSize(0.035);
   Graph_g3077->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3077);
   
   grae->Draw(" 2");
   
   Double_t g_fx3078[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3078[18] = {
   1000,
   1000,
   0.7320286,
   0.7776262,
   0.8174663,
   0.8647328,
   0.908731,
   0.9561133,
   0.9971151,
   1.035595,
   1.057872,
   1.068123,
   1.063371,
   1.046219,
   1.014543,
   0.9787396,
   0.9295087,
   0.880923};
   Double_t g_felx3078[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3078[18] = {
   14.47527,
   0.1085478,
   0.06332017,
   0.05362,
   0.04655486,
   0.02958754,
   0.01768238,
   0.007464135,
   0.01023607,
   0.02711015,
   0.02768438,
   0.02949414,
   0.0239422,
   0.02005894,
   0.005337846,
   0.02336221,
   0.03272549,
   0.04083544};
   Double_t g_fehx3078[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3078[18] = {
   3.787008,
   0.1551764,
   0.1022617,
   0.06709909,
   0.04388658,
   0.04746614,
   0.03002125,
   0.01534775,
   0.01446444,
   0.009301171,
   0.02326937,
   0.01993382,
   0.01325353,
   0.00766555,
   0.02176062,
   0.02967672,
   0.05302974,
   0.0783434};
   grae = new TGraphAsymmErrors(18,g_fx3078,g_fy3078,g_felx3078,g_fehx3078,g_fely3078,g_fehy3078);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1307;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3078 = new TH1F("Graph_g3078","",100,-3.5065,3.5915);
   Graph_g3078->SetMinimum(0);
   Graph_g3078->SetMaximum(1104.099);
   Graph_g3078->SetDirectory(0);
   Graph_g3078->SetStats(0);
   Graph_g3078->SetLineStyle(0);
   Graph_g3078->SetMarkerStyle(20);
   Graph_g3078->GetXaxis()->SetLabelFont(42);
   Graph_g3078->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3078->GetXaxis()->SetLabelSize(0.045);
   Graph_g3078->GetXaxis()->SetTitleSize(0.055);
   Graph_g3078->GetXaxis()->SetTitleFont(42);
   Graph_g3078->GetYaxis()->SetLabelFont(42);
   Graph_g3078->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3078->GetYaxis()->SetLabelSize(0.045);
   Graph_g3078->GetYaxis()->SetTitleSize(0.055);
   Graph_g3078->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3078->GetYaxis()->SetTitleFont(42);
   Graph_g3078->GetZaxis()->SetLabelFont(42);
   Graph_g3078->GetZaxis()->SetLabelSize(0.045);
   Graph_g3078->GetZaxis()->SetTitleSize(0.035);
   Graph_g3078->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3078);
   
   grae->Draw(" 2");
   Double_t xAxis46[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_4__80 = new TH1D("hist_eta_rat_4__80","",18, xAxis46);
   hist_eta_rat_4__80->SetBinContent(1,1000);
   hist_eta_rat_4__80->SetBinContent(2,1000);
   hist_eta_rat_4__80->SetBinContent(3,0.9908987);
   hist_eta_rat_4__80->SetBinContent(4,0.958491);
   hist_eta_rat_4__80->SetBinContent(5,0.9426981);
   hist_eta_rat_4__80->SetBinContent(6,0.9477543);
   hist_eta_rat_4__80->SetBinContent(7,0.9598372);
   hist_eta_rat_4__80->SetBinContent(8,0.9645417);
   hist_eta_rat_4__80->SetBinContent(9,0.9982028);
   hist_eta_rat_4__80->SetBinContent(10,1.010392);
   hist_eta_rat_4__80->SetBinContent(11,1.030348);
   hist_eta_rat_4__80->SetBinContent(12,1.015993);
   hist_eta_rat_4__80->SetBinContent(13,1.023637);
   hist_eta_rat_4__80->SetBinContent(14,1.012336);
   hist_eta_rat_4__80->SetBinContent(15,1.01686);
   hist_eta_rat_4__80->SetBinContent(16,1.006532);
   hist_eta_rat_4__80->SetBinContent(17,0.9586193);
   hist_eta_rat_4__80->SetBinContent(18,0.883056);
   hist_eta_rat_4__80->SetBinError(2,0.3788104);
   hist_eta_rat_4__80->SetBinError(3,0.06913021);
   hist_eta_rat_4__80->SetBinError(4,0.03044085);
   hist_eta_rat_4__80->SetBinError(5,0.018461);
   hist_eta_rat_4__80->SetBinError(6,0.0135207);
   hist_eta_rat_4__80->SetBinError(7,0.01107217);
   hist_eta_rat_4__80->SetBinError(8,0.009637059);
   hist_eta_rat_4__80->SetBinError(9,0.008968998);
   hist_eta_rat_4__80->SetBinError(10,0.008484689);
   hist_eta_rat_4__80->SetBinError(11,0.00836453);
   hist_eta_rat_4__80->SetBinError(12,0.008267739);
   hist_eta_rat_4__80->SetBinError(13,0.008567105);
   hist_eta_rat_4__80->SetBinError(14,0.009071236);
   hist_eta_rat_4__80->SetBinError(15,0.01007977);
   hist_eta_rat_4__80->SetBinError(16,0.01171373);
   hist_eta_rat_4__80->SetBinError(17,0.01177863);
   hist_eta_rat_4__80->SetBinError(18,0.03350037);
   hist_eta_rat_4__80->SetEntries(2028.108);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_4__80->SetLineColor(ci);
   hist_eta_rat_4__80->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_4__80->SetMarkerColor(ci);
   hist_eta_rat_4__80->SetMarkerStyle(20);
   hist_eta_rat_4__80->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_4__80->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_4__80->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_4__80->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_4__80->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_4__80->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_4__80->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_4__80->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_4__80->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_4__80->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_4__80->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_4__80->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_4__80->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_4__80->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_4__80->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_4__80->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_4__80->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_4__80->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_4__80->Draw("same");
   line = new TLine(-2.999,1,2.999,1);
   line->Draw();
      tex = new TLatex(0.28,0.29,"115 < p_{T}^{ave} < 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_1->Modified();
   cRat1->cd();
  
// ------------>Primitives in pad: p_2_0
   TPad *p_2_0 = new TPad("p_2_0", "p_2_0",0.673315,0.5393939,1,1);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(-2.999,0.5,3.740326,1.623596);
   p_2_0->SetFillColor(0);
   p_2_0->SetBorderMode(0);
   p_2_0->SetBorderSize(0);
   p_2_0->SetTickx(1);
   p_2_0->SetTicky(1);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetBottomMargin(0);
   p_2_0->SetFrameLineColor(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->SetFrameLineColor(0);
   p_2_0->SetFrameBorderMode(0);
   
   TH1D *emptyRat__81 = new TH1D("emptyRat__81","",10,-2.999,2.999);
   emptyRat__81->SetBinContent(7,1000);
   emptyRat__81->SetBinError(7,1000);
   emptyRat__81->SetMinimum(0.5);
   emptyRat__81->SetMaximum(1.5);
   emptyRat__81->SetEntries(1);
   emptyRat__81->SetLineStyle(0);
   emptyRat__81->SetMarkerStyle(20);
   emptyRat__81->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__81->GetXaxis()->CenterTitle(true);
   emptyRat__81->GetXaxis()->SetLabelFont(43);
   emptyRat__81->GetXaxis()->SetLabelOffset(0.01);
   emptyRat__81->GetXaxis()->SetLabelSize(33);
   emptyRat__81->GetXaxis()->SetTitleSize(33);
   emptyRat__81->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__81->GetXaxis()->SetTitleFont(43);
   emptyRat__81->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__81->GetYaxis()->CenterTitle(true);
   emptyRat__81->GetYaxis()->SetNdivisions(505);
   emptyRat__81->GetYaxis()->SetLabelFont(43);
   emptyRat__81->GetYaxis()->SetLabelOffset(0.01);
   emptyRat__81->GetYaxis()->SetLabelSize(33);
   emptyRat__81->GetYaxis()->SetTitleSize(33);
   emptyRat__81->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__81->GetYaxis()->SetTitleFont(43);
   emptyRat__81->GetZaxis()->SetLabelFont(42);
   emptyRat__81->GetZaxis()->SetLabelSize(0.045);
   emptyRat__81->GetZaxis()->SetTitleSize(0.035);
   emptyRat__81->GetZaxis()->SetTitleFont(42);
   emptyRat__81->Draw("");
   
   Double_t Graph0_fx1035[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208334,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058334,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t Graph0_fy1035[18] = {
   2.296111,
   1.060799,
   1.012758,
   0.9661565,
   0.9690189,
   0.971059,
   0.9975873,
   0.99684,
   1.012193,
   1.024337,
   1.025903,
   1.014951,
   1.018313,
   1.012961,
   1.007703,
   0.9659782,
   0.933568,
   0.830443};
   Double_t Graph0_fex1035[18] = {
   0.1083333,
   0.2166667,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083334,
   0.1083333,
   0.2166667,
   0.2166666};
   Double_t Graph0_fey1035[18] = {
   -1.939884,
   -0.1263094,
   -0.05465583,
   -0.02530279,
   -0.01389857,
   -0.009332321,
   -0.006154733,
   -0.004419299,
   -0.005439478,
   -0.004980874,
   -0.005901091,
   -0.006437021,
   -0.00690565,
   -0.006918016,
   -0.005996891,
   -0.006056468,
   -0.01113595,
   -0.04402856};
   gre = new TGraphErrors(18,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1294;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10291035 = new TH1F("Graph_Graph_Graph10291035","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10291035->SetMinimum(0.6838763);
   Graph_Graph_Graph10291035->SetMaximum(2.442677);
   Graph_Graph_Graph10291035->SetDirectory(0);
   Graph_Graph_Graph10291035->SetStats(0);
   Graph_Graph_Graph10291035->SetLineStyle(0);
   Graph_Graph_Graph10291035->SetMarkerStyle(20);
   Graph_Graph_Graph10291035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10291035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10291035->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10291035->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10291035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10291035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10291035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10291035->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10291035->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10291035->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10291035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10291035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10291035->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10291035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10291035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10291035);
   
   gre->Draw(" 2");
   
   Double_t g_fx3079[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3079[18] = {
   1000,
   0.9397193,
   0.9846279,
   0.9820865,
   0.9915914,
   1.002223,
   1.007695,
   1.017386,
   1.01566,
   1.014264,
   1.013671,
   1.007647,
   0.9965068,
   0.9936184,
   0.9871562,
   0.9739727,
   0.9742634,
   0.9595051};
   Double_t g_felx3079[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3079[18] = {
   0.4181386,
   0,
   0.07509659,
   0.03930616,
   0.02530003,
   0.02932749,
   0.02233221,
   0.02428288,
   0.01654954,
   0.01122625,
   0.006483904,
   0.00546577,
   0.008707836,
   0.01536286,
   0.03172255,
   0.0134879,
   0.03382054,
   0.03112988};
   Double_t g_fehx3079[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3079[18] = {
   0.2978741,
   0.1128747,
   0.01071994,
   0.01728849,
   0.02807837,
   0.01509874,
   0.02027341,
   0.01429424,
   0.01779472,
   0.01539473,
   0.01300891,
   0.01800607,
   0.016012,
   0.01750291,
   0.01215603,
   0.03373604,
   0.02114951,
   0.03531897};
   grae = new TGraphAsymmErrors(18,g_fx3079,g_fy3079,g_felx3079,g_fehx3079,g_fely3079,g_fehy3079);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1295;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3079 = new TH1F("Graph_g3079","",100,-3.5065,3.5915);
   Graph_g3079->SetMinimum(0);
   Graph_g3079->SetMaximum(1100.237);
   Graph_g3079->SetDirectory(0);
   Graph_g3079->SetStats(0);
   Graph_g3079->SetLineStyle(0);
   Graph_g3079->SetMarkerStyle(20);
   Graph_g3079->GetXaxis()->SetLabelFont(42);
   Graph_g3079->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3079->GetXaxis()->SetLabelSize(0.045);
   Graph_g3079->GetXaxis()->SetTitleSize(0.055);
   Graph_g3079->GetXaxis()->SetTitleFont(42);
   Graph_g3079->GetYaxis()->SetLabelFont(42);
   Graph_g3079->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3079->GetYaxis()->SetLabelSize(0.045);
   Graph_g3079->GetYaxis()->SetTitleSize(0.055);
   Graph_g3079->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3079->GetYaxis()->SetTitleFont(42);
   Graph_g3079->GetZaxis()->SetLabelFont(42);
   Graph_g3079->GetZaxis()->SetLabelSize(0.045);
   Graph_g3079->GetZaxis()->SetTitleSize(0.035);
   Graph_g3079->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3079);
   
   grae->Draw(" 2");
   
   Double_t g_fx3080[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3080[18] = {
   1000,
   0.8058048,
   0.8431216,
   0.87733,
   0.9117501,
   0.9354921,
   0.9618555,
   0.9896367,
   1.012289,
   1.032295,
   1.048723,
   1.047499,
   1.034381,
   1.022975,
   1.009046,
   0.9871671,
   0.9647634,
   0.9334825};
   Double_t g_felx3080[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3080[18] = {
   0.1658188,
   0.05147516,
   0.06399119,
   0.07031064,
   0.05719987,
   0.04091353,
   0.03121133,
   0.01476933,
   0.01403198,
   0.01587527,
   0.03509181,
   0.02920147,
   0.02040843,
   0.01998121,
   0.03089538,
   0.04020089,
   0.04279293,
   0.04942444};
   Double_t g_fehx3080[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3080[18] = {
   0.446925,
   0.1067734,
   0.09213719,
   0.05749662,
   0.05267356,
   0.05013582,
   0.03472664,
   0.03034185,
   0.0170774,
   0.01497467,
   0.01037089,
   0.02364097,
   0.02920221,
   0.03205007,
   0.01909905,
   0.02059159,
   0.04381864,
   0.05674729};
   grae = new TGraphAsymmErrors(18,g_fx3080,g_fy3080,g_felx3080,g_fehx3080,g_fely3080,g_fehy3080);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1296;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3080 = new TH1F("Graph_g3080","",100,-3.5065,3.5915);
   Graph_g3080->SetMinimum(0);
   Graph_g3080->SetMaximum(1100.416);
   Graph_g3080->SetDirectory(0);
   Graph_g3080->SetStats(0);
   Graph_g3080->SetLineStyle(0);
   Graph_g3080->SetMarkerStyle(20);
   Graph_g3080->GetXaxis()->SetLabelFont(42);
   Graph_g3080->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3080->GetXaxis()->SetLabelSize(0.045);
   Graph_g3080->GetXaxis()->SetTitleSize(0.055);
   Graph_g3080->GetXaxis()->SetTitleFont(42);
   Graph_g3080->GetYaxis()->SetLabelFont(42);
   Graph_g3080->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3080->GetYaxis()->SetLabelSize(0.045);
   Graph_g3080->GetYaxis()->SetTitleSize(0.055);
   Graph_g3080->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3080->GetYaxis()->SetTitleFont(42);
   Graph_g3080->GetZaxis()->SetLabelFont(42);
   Graph_g3080->GetZaxis()->SetLabelSize(0.045);
   Graph_g3080->GetZaxis()->SetTitleSize(0.035);
   Graph_g3080->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3080);
   
   grae->Draw(" 2");
   
   Double_t g_fx3081[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3081[18] = {
   1000,
   0.7520459,
   0.7982123,
   0.8470104,
   0.8963861,
   0.9422917,
   0.9794053,
   1.026121,
   1.053151,
   1.069492,
   1.074141,
   1.059081,
   1.035877,
   1.009004,
   0.9705562,
   0.9320581,
   0.8937395,
   0.8472359};
   Double_t g_felx3081[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3081[18] = {
   0.5839278,
   0.07480728,
   0.01458477,
   0.0314738,
   0.03486603,
   0.03816814,
   0.01252588,
   0.009341555,
   0.02308694,
   0.0247569,
   0.03499286,
   0.02264399,
   0.02478273,
   0.02927346,
   0.007572256,
   0.0146499,
   0.02368831,
   0.0335915};
   Double_t g_fehx3081[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3081[18] = {
   0.2439055,
   0.08223847,
   0.1314694,
   0.06309317,
   0.04580733,
   0.02553694,
   0.03093975,
   0.01899313,
   0.007877803,
   0.01070615,
   0.01267669,
   0.02793776,
   0.01100417,
   0.003362486,
   0.01863396,
   0.02124163,
   0.0396509,
   0.06932376};
   grae = new TGraphAsymmErrors(18,g_fx3081,g_fy3081,g_felx3081,g_fehx3081,g_fely3081,g_fehy3081);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1297;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3081 = new TH1F("Graph_g3081","",100,-3.5065,3.5915);
   Graph_g3081->SetMinimum(0);
   Graph_g3081->SetMaximum(1100.201);
   Graph_g3081->SetDirectory(0);
   Graph_g3081->SetStats(0);
   Graph_g3081->SetLineStyle(0);
   Graph_g3081->SetMarkerStyle(20);
   Graph_g3081->GetXaxis()->SetLabelFont(42);
   Graph_g3081->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3081->GetXaxis()->SetLabelSize(0.045);
   Graph_g3081->GetXaxis()->SetTitleSize(0.055);
   Graph_g3081->GetXaxis()->SetTitleFont(42);
   Graph_g3081->GetYaxis()->SetLabelFont(42);
   Graph_g3081->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3081->GetYaxis()->SetLabelSize(0.045);
   Graph_g3081->GetYaxis()->SetTitleSize(0.055);
   Graph_g3081->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3081->GetYaxis()->SetTitleFont(42);
   Graph_g3081->GetZaxis()->SetLabelFont(42);
   Graph_g3081->GetZaxis()->SetLabelSize(0.045);
   Graph_g3081->GetZaxis()->SetTitleSize(0.035);
   Graph_g3081->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3081);
   
   grae->Draw(" 2");
   Double_t xAxis47[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_2__82 = new TH1D("hist_eta_rat_2__82","",18, xAxis47);
   hist_eta_rat_2__82->SetBinContent(1,1000);
   hist_eta_rat_2__82->SetBinContent(2,1.050456);
   hist_eta_rat_2__82->SetBinContent(3,1.012821);
   hist_eta_rat_2__82->SetBinContent(4,0.9667915);
   hist_eta_rat_2__82->SetBinContent(5,0.9704566);
   hist_eta_rat_2__82->SetBinContent(6,0.9734057);
   hist_eta_rat_2__82->SetBinContent(7,1.000051);
   hist_eta_rat_2__82->SetBinContent(8,0.9986469);
   hist_eta_rat_2__82->SetBinContent(9,1.013215);
   hist_eta_rat_2__82->SetBinContent(10,1.024397);
   hist_eta_rat_2__82->SetBinContent(11,1.026894);
   hist_eta_rat_2__82->SetBinContent(12,1.015757);
   hist_eta_rat_2__82->SetBinContent(13,1.018752);
   hist_eta_rat_2__82->SetBinContent(14,1.011963);
   hist_eta_rat_2__82->SetBinContent(15,1.004324);
   hist_eta_rat_2__82->SetBinContent(16,0.9632621);
   hist_eta_rat_2__82->SetBinContent(17,0.9297486);
   hist_eta_rat_2__82->SetBinContent(18,0.8288227);
   hist_eta_rat_2__82->SetBinError(1,1.377984);
   hist_eta_rat_2__82->SetBinError(2,0.05111463);
   hist_eta_rat_2__82->SetBinError(3,0.02701256);
   hist_eta_rat_2__82->SetBinError(4,0.0171885);
   hist_eta_rat_2__82->SetBinError(5,0.01280288);
   hist_eta_rat_2__82->SetBinError(6,0.01053717);
   hist_eta_rat_2__82->SetBinError(7,0.009291076);
   hist_eta_rat_2__82->SetBinError(8,0.008377997);
   hist_eta_rat_2__82->SetBinError(9,0.007860271);
   hist_eta_rat_2__82->SetBinError(10,0.00761183);
   hist_eta_rat_2__82->SetBinError(11,0.007439868);
   hist_eta_rat_2__82->SetBinError(12,0.007383155);
   hist_eta_rat_2__82->SetBinError(13,0.007601361);
   hist_eta_rat_2__82->SetBinError(14,0.008043143);
   hist_eta_rat_2__82->SetBinError(15,0.008678449);
   hist_eta_rat_2__82->SetBinError(16,0.009582948);
   hist_eta_rat_2__82->SetBinError(17,0.008990346);
   hist_eta_rat_2__82->SetBinError(18,0.01953039);
   hist_eta_rat_2__82->SetEntries(194.8814);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_2__82->SetLineColor(ci);
   hist_eta_rat_2__82->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_2__82->SetMarkerColor(ci);
   hist_eta_rat_2__82->SetMarkerStyle(20);
   hist_eta_rat_2__82->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_2__82->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_2__82->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_2__82->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_2__82->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_2__82->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_2__82->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_2__82->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_2__82->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_2__82->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_2__82->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_2__82->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_2__82->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_2__82->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_2__82->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_2__82->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_2__82->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_2__82->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_2__82->Draw("same");
   line = new TLine(-2.999,1,2.999,1);
   line->Draw();
      tex = new TLatex(0.35,0.93,"pp 25.8 pb^{-1} pPb 35 nb^{-1}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
      tex = new TLatex(0.3,0.08,"75 < p_{T}^{ave} < 95 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.45,0.65,0.9,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("hist_eta_rat_0","pPb","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph0","Exp. Uncer.","f");

   ci = 1284;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   
   leg = new TLegend(0.1,0.65,0.4,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("g","DSSz","f");

   ci = 1255;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("g","EPS09","f");

   ci = 1256;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("g","nCTEQ15","f");

   ci = 1257;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   p_2_0->Modified();
   cRat1->cd();
  
// ------------>Primitives in pad: p_2_1
   TPad *p_2_1 = new TPad("p_2_1", "p_2_1",0.673315,0,1,0.539394);
   p_2_1->Draw();
   p_2_1->cd();
   p_2_1->Range(-2.999,0.1842105,3.740326,1.5);
   p_2_1->SetFillColor(0);
   p_2_1->SetBorderMode(0);
   p_2_1->SetBorderSize(0);
   p_2_1->SetTickx(1);
   p_2_1->SetTicky(1);
   p_2_1->SetLeftMargin(0);
   p_2_1->SetTopMargin(0);
   p_2_1->SetBottomMargin(0.24);
   p_2_1->SetFrameLineColor(0);
   p_2_1->SetFrameBorderMode(0);
   p_2_1->SetFrameLineColor(0);
   p_2_1->SetFrameBorderMode(0);
   
   TH1D *emptyRat__83 = new TH1D("emptyRat__83","",10,-2.999,2.999);
   emptyRat__83->SetBinContent(7,1000);
   emptyRat__83->SetBinError(7,1000);
   emptyRat__83->SetMinimum(0.5);
   emptyRat__83->SetMaximum(1.5);
   emptyRat__83->SetEntries(1);
   emptyRat__83->SetLineStyle(0);
   emptyRat__83->SetMarkerStyle(20);
   emptyRat__83->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__83->GetXaxis()->CenterTitle(true);
   emptyRat__83->GetXaxis()->SetLabelFont(43);
   emptyRat__83->GetXaxis()->SetLabelOffset(0.01);
   emptyRat__83->GetXaxis()->SetLabelSize(33);
   emptyRat__83->GetXaxis()->SetTitleSize(33);
   emptyRat__83->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__83->GetXaxis()->SetTitleFont(43);
   emptyRat__83->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__83->GetYaxis()->CenterTitle(true);
   emptyRat__83->GetYaxis()->SetNdivisions(505);
   emptyRat__83->GetYaxis()->SetLabelFont(43);
   emptyRat__83->GetYaxis()->SetLabelOffset(0.01);
   emptyRat__83->GetYaxis()->SetLabelSize(33);
   emptyRat__83->GetYaxis()->SetTitleSize(33);
   emptyRat__83->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__83->GetYaxis()->SetTitleFont(43);
   emptyRat__83->GetZaxis()->SetLabelFont(42);
   emptyRat__83->GetZaxis()->SetLabelSize(0.045);
   emptyRat__83->GetZaxis()->SetTitleSize(0.035);
   emptyRat__83->GetZaxis()->SetTitleFont(42);
   emptyRat__83->Draw("");
   
   Double_t Graph0_fx1036[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208334,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058334,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t Graph0_fy1036[18] = {
   0,
   11.14375,
   0.8913839,
   0.9903814,
   0.8437812,
   0.9064138,
   0.9115006,
   0.9647633,
   0.9823294,
   1.010176,
   1.002707,
   1.034084,
   1.005668,
   1.0245,
   1.048934,
   1.011588,
   0.9993661,
   1.062396};
   Double_t Graph0_fex1036[18] = {
   0.1083333,
   0.2166667,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083333,
   0.1083334,
   0.1083333,
   0.2166667,
   0.2166666};
   Double_t Graph0_fey1036[18] = {
   -0,
   -1.86686,
   -0.05926858,
   -0.03049295,
   -0.01545547,
   -0.00935488,
   -0.00574118,
   -0.003962804,
   -0.003650461,
   -0.00379666,
   -0.003456512,
   -0.002670683,
   -0.002812707,
   -0.003374384,
   -0.004488877,
   -0.008040576,
   -0.0185585,
   -0.05357999};
   gre = new TGraphErrors(18,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1309;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10301036 = new TH1F("Graph_Graph_Graph10301036","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10301036->SetMinimum(0);
   Graph_Graph_Graph10301036->SetMaximum(12.25813);
   Graph_Graph_Graph10301036->SetDirectory(0);
   Graph_Graph_Graph10301036->SetStats(0);
   Graph_Graph_Graph10301036->SetLineStyle(0);
   Graph_Graph_Graph10301036->SetMarkerStyle(20);
   Graph_Graph_Graph10301036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10301036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10301036->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10301036->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10301036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10301036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10301036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10301036->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10301036->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10301036->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10301036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10301036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10301036->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10301036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10301036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10301036);
   
   gre->Draw(" 2");
   
   Double_t g_fx3082[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3082[18] = {
   1000,
   1000,
   0.9120705,
   0.9395417,
   0.9563313,
   0.9692571,
   0.9772073,
   0.9904817,
   1.000202,
   1.007371,
   1.00934,
   1.010566,
   1.011399,
   1.004842,
   0.9993194,
   0.9889321,
   0.9834162,
   0.9626159};
   Double_t g_felx3082[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3082[18] = {
   0,
   0.3251969,
   0.1207459,
   0.06159785,
   0.02995758,
   0.01121828,
   0.00761591,
   0.009915473,
   0.01302231,
   0.01489194,
   0.002647796,
   0.00406656,
   0.01267121,
   0.01301077,
   0.01303662,
   0.01834101,
   0.02159209,
   0.05235195};
   Double_t g_fehx3082[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3082[18] = {
   0,
   0.9660995,
   0.2719709,
   0.01066136,
   0.01038192,
   0.02280976,
   0.02176692,
   0.0171621,
   0.008836414,
   0.002476244,
   0.01425737,
   0.007175204,
   0.002830622,
   0.007897801,
   0.01538281,
   0.02336561,
   0.02921528,
   0.0403166};
   grae = new TGraphAsymmErrors(18,g_fx3082,g_fy3082,g_felx3082,g_fehx3082,g_fely3082,g_fehy3082);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1310;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3082 = new TH1F("Graph_g3082","",100,-3.5065,3.5915);
   Graph_g3082->SetMinimum(0);
   Graph_g3082->SetMaximum(1100.984);
   Graph_g3082->SetDirectory(0);
   Graph_g3082->SetStats(0);
   Graph_g3082->SetLineStyle(0);
   Graph_g3082->SetMarkerStyle(20);
   Graph_g3082->GetXaxis()->SetLabelFont(42);
   Graph_g3082->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3082->GetXaxis()->SetLabelSize(0.045);
   Graph_g3082->GetXaxis()->SetTitleSize(0.055);
   Graph_g3082->GetXaxis()->SetTitleFont(42);
   Graph_g3082->GetYaxis()->SetLabelFont(42);
   Graph_g3082->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3082->GetYaxis()->SetLabelSize(0.045);
   Graph_g3082->GetYaxis()->SetTitleSize(0.055);
   Graph_g3082->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3082->GetYaxis()->SetTitleFont(42);
   Graph_g3082->GetZaxis()->SetLabelFont(42);
   Graph_g3082->GetZaxis()->SetLabelSize(0.045);
   Graph_g3082->GetZaxis()->SetTitleSize(0.035);
   Graph_g3082->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3082);
   
   grae->Draw(" 2");
   
   Double_t g_fx3083[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3083[18] = {
   1000,
   1000,
   0.9761463,
   0.8247687,
   0.8408487,
   0.8744194,
   0.8990952,
   0.9314465,
   0.9557189,
   0.9805694,
   1.006913,
   1.030198,
   1.050846,
   1.058854,
   1.057608,
   1.041563,
   1.027835,
   0.9712227};
   Double_t g_felx3083[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3083[18] = {
   0,
   0.4643567,
   0.06654931,
   0.0364833,
   0.06085613,
   0.07267416,
   0.05089295,
   0.04439822,
   0.02488868,
   0.0155994,
   0.004351938,
   0.01295879,
   0.02443834,
   0.03487554,
   0.036258,
   0.03347666,
   0.0509752,
   0.04682474};
   Double_t g_fehx3083[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3083[18] = {
   0,
   0.4188629,
   0.1305867,
   0.06474648,
   0.04807226,
   0.04356375,
   0.04667982,
   0.03766013,
   0.03250436,
   0.02123347,
   0.008167256,
   0.01428601,
   0.02374784,
   0.03518256,
   0.03859324,
   0.03894559,
   0.03127354,
   0.06180419};
   grae = new TGraphAsymmErrors(18,g_fx3083,g_fy3083,g_felx3083,g_fehx3083,g_fely3083,g_fehy3083);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1311;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3083 = new TH1F("Graph_g3083","",100,-3.5065,3.5915);
   Graph_g3083->SetMinimum(0);
   Graph_g3083->SetMaximum(1100.383);
   Graph_g3083->SetDirectory(0);
   Graph_g3083->SetStats(0);
   Graph_g3083->SetLineStyle(0);
   Graph_g3083->SetMarkerStyle(20);
   Graph_g3083->GetXaxis()->SetLabelFont(42);
   Graph_g3083->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3083->GetXaxis()->SetLabelSize(0.045);
   Graph_g3083->GetXaxis()->SetTitleSize(0.055);
   Graph_g3083->GetXaxis()->SetTitleFont(42);
   Graph_g3083->GetYaxis()->SetLabelFont(42);
   Graph_g3083->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3083->GetYaxis()->SetLabelSize(0.045);
   Graph_g3083->GetYaxis()->SetTitleSize(0.055);
   Graph_g3083->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3083->GetYaxis()->SetTitleFont(42);
   Graph_g3083->GetZaxis()->SetLabelFont(42);
   Graph_g3083->GetZaxis()->SetLabelSize(0.045);
   Graph_g3083->GetZaxis()->SetTitleSize(0.035);
   Graph_g3083->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3083);
   
   grae->Draw(" 2");
   
   Double_t g_fx3084[18] = {
   -2.774167,
   -2.351667,
   -1.929167,
   -1.6475,
   -1.365833,
   -1.084167,
   -0.8025,
   -0.5208333,
   -0.2391667,
   0.0425,
   0.3241667,
   0.6058333,
   0.8875,
   1.169167,
   1.450833,
   1.7325,
   2.155,
   2.718333};
   Double_t g_fy3084[18] = {
   1000,
   1000,
   0.7281053,
   0.7311641,
   0.7757914,
   0.8259836,
   0.8632565,
   0.9083709,
   0.9497594,
   0.9925574,
   1.029851,
   1.056589,
   1.074275,
   1.068381,
   1.052101,
   1.015954,
   0.9759512,
   0.9041423};
   Double_t g_felx3084[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fely3084[18] = {
   0,
   0.3722679,
   0.08241028,
   0.0801118,
   0.0366904,
   0.04543655,
   0.02307466,
   0.01695362,
   0.002493344,
   0.02089856,
   0.02474466,
   0.02479663,
   0.02844586,
   0.003189932,
   0.017891,
   0.02466196,
   0.05385787,
   0.09424468};
   Double_t g_fehx3084[18] = {
   0.1408333,
   0.2816667,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.1408333,
   0.2816667,
   0.2816667};
   Double_t g_fehy3084[18] = {
   0,
   0.1705983,
   0.128073,
   0.07420558,
   0.06921507,
   0.03879951,
   0.03629188,
   0.01857354,
   0.01009331,
   0.01178228,
   0.02263465,
   0.0233206,
   0.009086259,
   0.01022506,
   0.02328389,
   0.04740186,
   0.04484382,
   0.05451696};
   grae = new TGraphAsymmErrors(18,g_fx3084,g_fy3084,g_felx3084,g_fehx3084,g_fely3084,g_fehy3084);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1312;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3084 = new TH1F("Graph_g3084","",100,-3.5065,3.5915);
   Graph_g3084->SetMinimum(0);
   Graph_g3084->SetMaximum(1100.123);
   Graph_g3084->SetDirectory(0);
   Graph_g3084->SetStats(0);
   Graph_g3084->SetLineStyle(0);
   Graph_g3084->SetMarkerStyle(20);
   Graph_g3084->GetXaxis()->SetLabelFont(42);
   Graph_g3084->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3084->GetXaxis()->SetLabelSize(0.045);
   Graph_g3084->GetXaxis()->SetTitleSize(0.055);
   Graph_g3084->GetXaxis()->SetTitleFont(42);
   Graph_g3084->GetYaxis()->SetLabelFont(42);
   Graph_g3084->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3084->GetYaxis()->SetLabelSize(0.045);
   Graph_g3084->GetYaxis()->SetTitleSize(0.055);
   Graph_g3084->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3084->GetYaxis()->SetTitleFont(42);
   Graph_g3084->GetZaxis()->SetLabelFont(42);
   Graph_g3084->GetZaxis()->SetLabelSize(0.045);
   Graph_g3084->GetZaxis()->SetTitleSize(0.035);
   Graph_g3084->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3084);
   
   grae->Draw(" 2");
   Double_t xAxis48[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_5__84 = new TH1D("hist_eta_rat_5__84","",18, xAxis48);
   hist_eta_rat_5__84->SetBinContent(1,1000);
   hist_eta_rat_5__84->SetBinContent(2,1000);
   hist_eta_rat_5__84->SetBinContent(3,0.8870872);
   hist_eta_rat_5__84->SetBinContent(4,0.9936676);
   hist_eta_rat_5__84->SetBinContent(5,0.8467346);
   hist_eta_rat_5__84->SetBinContent(6,0.9103075);
   hist_eta_rat_5__84->SetBinContent(7,0.9149816);
   hist_eta_rat_5__84->SetBinContent(8,0.9686298);
   hist_eta_rat_5__84->SetBinContent(9,0.9848296);
   hist_eta_rat_5__84->SetBinContent(10,1.011455);
   hist_eta_rat_5__84->SetBinContent(11,1.003333);
   hist_eta_rat_5__84->SetBinContent(12,1.034198);
   hist_eta_rat_5__84->SetBinContent(13,1.005249);
   hist_eta_rat_5__84->SetBinContent(14,1.022242);
   hist_eta_rat_5__84->SetBinContent(15,1.044678);
   hist_eta_rat_5__84->SetBinContent(16,1.006172);
   hist_eta_rat_5__84->SetBinContent(17,0.9896288);
   hist_eta_rat_5__84->SetBinContent(18,1.061912);
   hist_eta_rat_5__84->SetBinError(2,12.74774);
   hist_eta_rat_5__84->SetBinError(3,0.2477981);
   hist_eta_rat_5__84->SetBinError(4,0.09197665);
   hist_eta_rat_5__84->SetBinError(5,0.03903801);
   hist_eta_rat_5__84->SetBinError(6,0.02534206);
   hist_eta_rat_5__84->SetBinError(7,0.01878364);
   hist_eta_rat_5__84->SetBinError(8,0.01578038);
   hist_eta_rat_5__84->SetBinError(9,0.01395718);
   hist_eta_rat_5__84->SetBinError(10,0.01310372);
   hist_eta_rat_5__84->SetBinError(11,0.01249012);
   hist_eta_rat_5__84->SetBinError(12,0.01274022);
   hist_eta_rat_5__84->SetBinError(13,0.01299128);
   hist_eta_rat_5__84->SetBinError(14,0.01426728);
   hist_eta_rat_5__84->SetBinError(15,0.01661486);
   hist_eta_rat_5__84->SetBinError(16,0.02014486);
   hist_eta_rat_5__84->SetBinError(17,0.02352586);
   hist_eta_rat_5__84->SetBinError(18,0.1059296);
   hist_eta_rat_5__84->SetEntries(8.187656);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_5__84->SetLineColor(ci);
   hist_eta_rat_5__84->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_5__84->SetMarkerColor(ci);
   hist_eta_rat_5__84->SetMarkerStyle(20);
   hist_eta_rat_5__84->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_5__84->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_5__84->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_5__84->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_5__84->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_5__84->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_5__84->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_5__84->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_5__84->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_5__84->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_5__84->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_5__84->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_5__84->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_5__84->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_5__84->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_5__84->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_5__84->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_5__84->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_5__84->Draw("same");
   line = new TLine(-2.999,1,2.999,1);
   line->Draw();
      tex = new TLatex(0.35,0.29,"p_{T}^{ave} > 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_2_1->Modified();
   cRat1->cd();
   cRat1->Modified();
   cRat1->cd();
   cRat1->SetSelected(cRat1);
}
