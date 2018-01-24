void pPbppDiffCTppjecv1()
{
//=========Macro generated from canvas: cDiff1/
//=========  (Wed Nov 15 22:07:06 2017) by ROOT version6.10/08

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cDiff1 = new TCanvas("cDiff1", "",618,52,1300,800);
   cDiff1->Range(0,0,1,1);
   cDiff1->SetFillColor(0);
   cDiff1->SetBorderMode(0);
   cDiff1->SetBorderSize(2);
   cDiff1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.5393939,0.3825653,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-4.893105,-0.04,2.999,0.04988764);
   p_0_0->SetFillColor(0);
   p_0_0->SetBorderMode(0);
   p_0_0->SetBorderSize(2);
   p_0_0->SetLeftMargin(0.24);
   p_0_0->SetRightMargin(0);
   p_0_0->SetBottomMargin(0);
   p_0_0->SetFrameBorderMode(0);
   p_0_0->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__97 = new TH1D("emptyDiff__97","",10,-2.999,2.999);
   emptyDiff__97->SetBinContent(7,1000);
   emptyDiff__97->SetBinError(7,1000);
   emptyDiff__97->SetMinimum(-0.04);
   emptyDiff__97->SetMaximum(0.04);
   emptyDiff__97->SetEntries(1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__97->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   emptyDiff__97->SetLineColor(ci);
   emptyDiff__97->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__97->GetXaxis()->CenterTitle(true);
   emptyDiff__97->GetXaxis()->SetLabelFont(43);
   emptyDiff__97->GetXaxis()->SetLabelSize(33);
   emptyDiff__97->GetXaxis()->SetTitleSize(33);
   emptyDiff__97->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__97->GetXaxis()->SetTitleFont(43);
   emptyDiff__97->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__97->GetYaxis()->CenterTitle(true);
   emptyDiff__97->GetYaxis()->SetNdivisions(505);
   emptyDiff__97->GetYaxis()->SetLabelFont(43);
   emptyDiff__97->GetYaxis()->SetLabelSize(33);
   emptyDiff__97->GetYaxis()->SetTitleSize(33);
   emptyDiff__97->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__97->GetYaxis()->SetTitleFont(43);
   emptyDiff__97->GetZaxis()->SetLabelFont(42);
   emptyDiff__97->GetZaxis()->SetLabelSize(0.035);
   emptyDiff__97->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__97->GetZaxis()->SetTitleFont(42);
   emptyDiff__97->Draw("");
   
   Double_t syst0_fx1043[18] = {
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
   Double_t syst0_fy1043[18] = {
   -0.001363706,
   -0.008843129,
   -0.006173519,
   -0.01822525,
   -0.004743918,
   -0.01340243,
   -0.002148217,
   0.004707711,
   0.009881523,
   0.02188975,
   -0.0009007202,
   0.02046878,
   0.01052828,
   0.008273043,
   0.005536127,
   -0.007866161,
   -0.0003923656,
   -0.003995152};
   Double_t syst0_fex1043[18] = {
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
   Double_t syst0_fey1043[18] = {
   -0.001602278,
   -0.003360802,
   -0.004405221,
   -0.005115381,
   -0.006129052,
   -0.005950817,
   -0.005448212,
   -0.004353547,
   -0.003818089,
   -0.002948359,
   -0.003104661,
   -0.003606571,
   -0.004555627,
   -0.005531156,
   -0.006828363,
   -0.006632137,
   -0.00544275,
   -0.002647081};
   TGraphErrors *gre = new TGraphErrors(18,syst0_fx1043,syst0_fy1043,syst0_fex1043,syst0_fey1043);
   gre->SetName("syst0");
   gre->SetTitle("Graph");

   ci = 1343;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_syst010371043 = new TH1F("Graph_Graph_syst010371043","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst010371043->SetMinimum(-0.02223675);
   Graph_Graph_syst010371043->SetMaximum(0.02590125);
   Graph_Graph_syst010371043->SetDirectory(0);
   Graph_Graph_syst010371043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_syst010371043->SetLineColor(ci);
   Graph_Graph_syst010371043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst010371043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_syst010371043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_syst010371043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst010371043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst010371043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_syst010371043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_syst010371043->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_syst010371043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst010371043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst010371043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_syst010371043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst010371043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst010371043);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff10_fx3079[18] = {
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
   Double_t NLOdiff10_fy3079[18] = {
   -8.12597e-06,
   0.0001462378,
   0.00197728,
   0.002407165,
   0.002996894,
   0.004489627,
   0.004630708,
   0.003513606,
   0.002764298,
   0.001123403,
   0.001840853,
   -0.0008565575,
   -0.003091601,
   -0.005585962,
   -0.00518456,
   -0.004234412,
   -0.002853624,
   -0.000683922};
   Double_t NLOdiff10_felx3079[18] = {
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
   Double_t NLOdiff10_fely3079[18] = {
   0.0003361611,
   0.0009500004,
   0.003544403,
   0.003651564,
   0.005023771,
   0.001898514,
   0.004781872,
   0.003090635,
   0.002272865,
   0,
   0.007085107,
   0.004165693,
   0.002109782,
   0.001665729,
   0.004847909,
   0.003915729,
   0.002074833,
   0.000890151};
   Double_t NLOdiff10_fehx3079[18] = {
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
   Double_t NLOdiff10_fehy3079[18] = {
   0.0004907893,
   0.001326786,
   0.001348927,
   0.003079017,
   0.002316935,
   0.005834827,
   0.002813014,
   0.003388056,
   0.003076001,
   0.006678732,
   0.0001724636,
   0.001588679,
   0.005447738,
   0.006746178,
   0.002765741,
   0.003328918,
   0.002088428,
   0.0005630846};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,NLOdiff10_fx3079,NLOdiff10_fy3079,NLOdiff10_felx3079,NLOdiff10_fehx3079,NLOdiff10_fely3079,NLOdiff10_fehy3079);
   grae->SetName("NLOdiff10");
   grae->SetTitle("");

   ci = 1344;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff103079 = new TH1F("Graph_NLOdiff103079","",100,-3.5065,3.5915);
   Graph_NLOdiff103079->SetMinimum(-0.01206816);
   Graph_NLOdiff103079->SetMaximum(0.01236015);
   Graph_NLOdiff103079->SetDirectory(0);
   Graph_NLOdiff103079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff103079->SetLineColor(ci);
   Graph_NLOdiff103079->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff103079->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff103079->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff103079->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff103079->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff103079->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff103079->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff103079->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff103079->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff103079->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff103079->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff103079->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff103079->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff103079);
   
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
   -0.000760176,
   -0.002057754,
   -0.001648205,
   -0.00121749,
   0.0007006299,
   0.005888906,
   0.008839102,
   0.0112347,
   0.01040773,
   0.009848206,
   0.00701779,
   0.00188202,
   -0.002753299,
   -0.008122065,
   -0.009798984,
   -0.009109839,
   -0.007183515,
   -0.001963242};
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
   0.0006266647,
   0.002459246,
   0.00440336,
   0.004719766,
   0.004034563,
   0.005423912,
   0.007103659,
   0.009203686,
   0.005286956,
   0.005714564,
   0.002962233,
   0.001442098,
   0.004085472,
   0.005164032,
   0.008615701,
   0.009192732,
   0.004936777,
   0.001933534};
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
   0.0006962168,
   0.001668068,
   0.002489303,
   0.003415359,
   0.004202526,
   0.005032927,
   0.006114654,
   0.005756884,
   0.00984424,
   0.007073564,
   0.005980959,
   0.006442531,
   0.00529339,
   0.007166502,
   0.006653715,
   0.005251938,
   0.004830639,
   0.001133461};
   grae = new TGraphAsymmErrors(18,g_fx3080,g_fy3080,g_felx3080,g_fehx3080,g_fely3080,g_fehy3080);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1345;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3080 = new TH1F("Graph_g3080","",100,-3.5065,3.5915);
   Graph_g3080->SetMinimum(-0.02228135);
   Graph_g3080->SetMaximum(0.02411863);
   Graph_g3080->SetDirectory(0);
   Graph_g3080->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3080->SetLineColor(ci);
   Graph_g3080->GetXaxis()->SetLabelFont(42);
   Graph_g3080->GetXaxis()->SetLabelSize(0.035);
   Graph_g3080->GetXaxis()->SetTitleSize(0.035);
   Graph_g3080->GetXaxis()->SetTitleFont(42);
   Graph_g3080->GetYaxis()->SetLabelFont(42);
   Graph_g3080->GetYaxis()->SetLabelSize(0.035);
   Graph_g3080->GetYaxis()->SetTitleSize(0.035);
   Graph_g3080->GetYaxis()->SetTitleOffset(0);
   Graph_g3080->GetYaxis()->SetTitleFont(42);
   Graph_g3080->GetZaxis()->SetLabelFont(42);
   Graph_g3080->GetZaxis()->SetLabelSize(0.035);
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
   -0.0006055112,
   -0.00165048,
   0.00134744,
   0.004656902,
   0.01132645,
   0.01874596,
   0.02159245,
   0.02276775,
   0.02031247,
   0.01537253,
   0.007161703,
   -0.002107354,
   -0.01241015,
   -0.02038109,
   -0.02368856,
   -0.02149383,
   -0.01527126,
   -0.004376832};
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
   0.001405944,
   0.001471247,
   0.003301098,
   0.002696309,
   0.007557383,
   0.007539982,
   0.003371714,
   0.004537567,
   0.003595844,
   0.004426973,
   0.005468724,
   0.008836801,
   0.004174098,
   0.003693812,
   0.002408202,
   0.003378713,
   0.002084614,
   0.000760051};
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
   0.0001541725,
   0.00267139,
   0.005581537,
   0.008326848,
   0.004088245,
   0.003270846,
   0.003843231,
   0.001514775,
   0.004168982,
   0.006480876,
   0.007546687,
   0.005556072,
   0.006285087,
   0.003509201,
   0.002748563,
   0.0004684338,
   0.001682069,
   0.001058606};
   grae = new TGraphAsymmErrors(18,g_fx3081,g_fy3081,g_felx3081,g_fehx3081,g_fely3081,g_fehy3081);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1346;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3081 = new TH1F("Graph_g3081","",100,-3.5065,3.5915);
   Graph_g3081->SetMinimum(-0.03125001);
   Graph_g3081->SetMaximum(0.03058892);
   Graph_g3081->SetDirectory(0);
   Graph_g3081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3081->SetLineColor(ci);
   Graph_g3081->GetXaxis()->SetLabelFont(42);
   Graph_g3081->GetXaxis()->SetLabelSize(0.035);
   Graph_g3081->GetXaxis()->SetTitleSize(0.035);
   Graph_g3081->GetXaxis()->SetTitleFont(42);
   Graph_g3081->GetYaxis()->SetLabelFont(42);
   Graph_g3081->GetYaxis()->SetLabelSize(0.035);
   Graph_g3081->GetYaxis()->SetTitleSize(0.035);
   Graph_g3081->GetYaxis()->SetTitleOffset(0);
   Graph_g3081->GetYaxis()->SetTitleFont(42);
   Graph_g3081->GetZaxis()->SetLabelFont(42);
   Graph_g3081->GetZaxis()->SetLabelSize(0.035);
   Graph_g3081->GetZaxis()->SetTitleSize(0.035);
   Graph_g3081->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3081);
   
   grae->Draw(" 2");
   Double_t xAxis55[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_0__98 = new TH1D("hist_eta_diff_0__98","",18, xAxis55);
   hist_eta_diff_0__98->SetBinContent(0,-5.65972e-05);
   hist_eta_diff_0__98->SetBinContent(1,-0.001363706);
   hist_eta_diff_0__98->SetBinContent(2,-0.008843128);
   hist_eta_diff_0__98->SetBinContent(3,-0.006173519);
   hist_eta_diff_0__98->SetBinContent(4,-0.01822525);
   hist_eta_diff_0__98->SetBinContent(5,-0.004743918);
   hist_eta_diff_0__98->SetBinContent(6,-0.01340243);
   hist_eta_diff_0__98->SetBinContent(7,-0.002148217);
   hist_eta_diff_0__98->SetBinContent(8,0.004707711);
   hist_eta_diff_0__98->SetBinContent(9,0.009881523);
   hist_eta_diff_0__98->SetBinContent(10,0.02188975);
   hist_eta_diff_0__98->SetBinContent(11,-0.0009007203);
   hist_eta_diff_0__98->SetBinContent(12,0.02046878);
   hist_eta_diff_0__98->SetBinContent(13,0.01052828);
   hist_eta_diff_0__98->SetBinContent(14,0.008273042);
   hist_eta_diff_0__98->SetBinContent(15,0.005536127);
   hist_eta_diff_0__98->SetBinContent(16,-0.00786616);
   hist_eta_diff_0__98->SetBinContent(17,-0.0003923656);
   hist_eta_diff_0__98->SetBinContent(18,-0.003995152);
   hist_eta_diff_0__98->SetBinError(0,4.924499e-05);
   hist_eta_diff_0__98->SetBinError(1,0.0008183987);
   hist_eta_diff_0__98->SetBinError(2,0.001473512);
   hist_eta_diff_0__98->SetBinError(3,0.003532176);
   hist_eta_diff_0__98->SetBinError(4,0.004346359);
   hist_eta_diff_0__98->SetBinError(5,0.005138265);
   hist_eta_diff_0__98->SetBinError(6,0.005754518);
   hist_eta_diff_0__98->SetBinError(7,0.006345506);
   hist_eta_diff_0__98->SetBinError(8,0.006777665);
   hist_eta_diff_0__98->SetBinError(9,0.007138648);
   hist_eta_diff_0__98->SetBinError(10,0.00727002);
   hist_eta_diff_0__98->SetBinError(11,0.007326853);
   hist_eta_diff_0__98->SetBinError(12,0.007243647);
   hist_eta_diff_0__98->SetBinError(13,0.007043545);
   hist_eta_diff_0__98->SetBinError(14,0.006709013);
   hist_eta_diff_0__98->SetBinError(15,0.006168124);
   hist_eta_diff_0__98->SetBinError(16,0.005503784);
   hist_eta_diff_0__98->SetBinError(17,0.003002935);
   hist_eta_diff_0__98->SetBinError(18,0.001453432);
   hist_eta_diff_0__98->SetEntries(0.3103816);

   ci = TColor::GetColor("#33cc99");
   hist_eta_diff_0__98->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_0__98->SetLineColor(ci);
   hist_eta_diff_0__98->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_0__98->SetMarkerColor(ci);
   hist_eta_diff_0__98->SetMarkerStyle(20);
   hist_eta_diff_0__98->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_0__98->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_0__98->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_0__98->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_0__98->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_0__98->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_0__98->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_0__98->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_0__98->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_0__98->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_0__98->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_0__98->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_0__98->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_0__98->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_0__98->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_0__98->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_0__98->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_0__98->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_0__98->Draw("same");
   TLine *line = new TLine(-2.999,0,2.999,0);
   line->Draw();
   TLatex *   tex = new TLatex(0.32,0.8,"#bf{CMS}");
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
   cDiff1->cd();
  
// ------------>Primitives in pad: p_0_1
   TPad *p_0_1 = new TPad("p_0_1", "p_0_1",0,0,0.3825653,0.539394);
   p_0_1->Draw();
   p_0_1->cd();
   p_0_1->Range(-4.893105,-0.06526316,2.999,0.04);
   p_0_1->SetFillColor(0);
   p_0_1->SetBorderMode(0);
   p_0_1->SetBorderSize(2);
   p_0_1->SetLeftMargin(0.24);
   p_0_1->SetRightMargin(0);
   p_0_1->SetTopMargin(0);
   p_0_1->SetBottomMargin(0.24);
   p_0_1->SetFrameBorderMode(0);
   p_0_1->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__99 = new TH1D("emptyDiff__99","",10,-2.999,2.999);
   emptyDiff__99->SetBinContent(7,1000);
   emptyDiff__99->SetBinError(7,1000);
   emptyDiff__99->SetMinimum(-0.04);
   emptyDiff__99->SetMaximum(0.04);
   emptyDiff__99->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__99->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__99);

   ci = TColor::GetColor("#000099");
   emptyDiff__99->SetLineColor(ci);
   emptyDiff__99->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__99->GetXaxis()->CenterTitle(true);
   emptyDiff__99->GetXaxis()->SetLabelFont(43);
   emptyDiff__99->GetXaxis()->SetLabelSize(33);
   emptyDiff__99->GetXaxis()->SetTitleSize(33);
   emptyDiff__99->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__99->GetXaxis()->SetTitleFont(43);
   emptyDiff__99->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__99->GetYaxis()->CenterTitle(true);
   emptyDiff__99->GetYaxis()->SetNdivisions(505);
   emptyDiff__99->GetYaxis()->SetLabelFont(43);
   emptyDiff__99->GetYaxis()->SetLabelSize(33);
   emptyDiff__99->GetYaxis()->SetTitleSize(33);
   emptyDiff__99->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__99->GetYaxis()->SetTitleFont(43);
   emptyDiff__99->GetZaxis()->SetLabelFont(42);
   emptyDiff__99->GetZaxis()->SetLabelSize(0.035);
   emptyDiff__99->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__99->GetZaxis()->SetTitleFont(42);
   emptyDiff__99->Draw("");
   
   Double_t syst3_fx1044[18] = {
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
   Double_t syst3_fy1044[18] = {
   7.505436e-06,
   -0.0001315682,
   -0.002373581,
   -0.004792642,
   -0.008595807,
   -0.00937647,
   -0.008182826,
   -0.002644908,
   0.003629397,
   0.006068639,
   0.0158877,
   0.01117428,
   0.01450428,
   0.005265459,
   0.002934821,
   0.0006750659,
   -0.008848901,
   -0.003109985};
   Double_t syst3_fex1044[18] = {
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
   Double_t syst3_fey1044[18] = {
   -4.575747e-06,
   -0.0004146186,
   -0.001460165,
   -0.002058608,
   -0.002165576,
   -0.002265224,
   -0.001965814,
   -0.001851625,
   -0.001633552,
   -0.001601232,
   -0.001786112,
   -0.001877419,
   -0.001965375,
   -0.002170844,
   -0.002254434,
   -0.002293859,
   -0.00189933,
   -0.0007928441};
   gre = new TGraphErrors(18,syst3_fx1044,syst3_fy1044,syst3_fex1044,syst3_fey1044);
   gre->SetName("syst3");
   gre->SetTitle("Graph");

   ci = 1358;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_syst310381044 = new TH1F("Graph_Graph_syst310381044","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst310381044->SetMinimum(-0.01190289);
   Graph_Graph_syst310381044->SetMaximum(0.01841411);
   Graph_Graph_syst310381044->SetDirectory(0);
   Graph_Graph_syst310381044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_syst310381044->SetLineColor(ci);
   Graph_Graph_syst310381044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst310381044->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_syst310381044->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_syst310381044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst310381044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst310381044->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_syst310381044->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_syst310381044->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_syst310381044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst310381044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst310381044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_syst310381044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst310381044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst310381044);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff13_fx3082[18] = {
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
   Double_t NLOdiff13_fy3082[18] = {
   1000,
   -8.382133e-05,
   -0.001171963,
   -0.002181911,
   -0.002376334,
   -0.0005684199,
   0.0002441682,
   0.002940388,
   0.003228627,
   0.006163482,
   0.005186791,
   0.002358021,
   0.002093157,
   -0.002185848,
   -0.001864205,
   -0.003679063,
   -0.003034675,
   -0.0009749045};
   Double_t NLOdiff13_felx3082[18] = {
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
   Double_t NLOdiff13_fely3082[18] = {
   8.37743e-07,
   0.0001735524,
   0.001285446,
   0.002264643,
   0.002176707,
   0.003972688,
   0.00453535,
   0.005357093,
   0.003576602,
   0.006649805,
   0.003459026,
   0.0006498386,
   0.00413982,
   0.002562896,
   0.008063605,
   0.006233409,
   0.002389939,
   0.0006345318};
   Double_t NLOdiff13_fehx3082[18] = {
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
   Double_t NLOdiff13_fehy3082[18] = {
   3.150544e-07,
   0.0001624322,
   0.0004291404,
   0.001600651,
   0.003246167,
   0.00325431,
   0.004656645,
   0.004125077,
   0.007088677,
   0.001494516,
   0.00400299,
   0.007329484,
   0.00166317,
   0.006430439,
   0.004301708,
   0.003188186,
   0.003384357,
   0.0008075785};
   grae = new TGraphAsymmErrors(18,NLOdiff13_fx3082,NLOdiff13_fy3082,NLOdiff13_felx3082,NLOdiff13_fehx3082,NLOdiff13_fely3082,NLOdiff13_fehy3082);
   grae->SetName("NLOdiff13");
   grae->SetTitle("");

   ci = 1359;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff133082 = new TH1F("Graph_NLOdiff133082","",100,-3.5065,3.5915);
   Graph_NLOdiff133082->SetMinimum(-100.0109);
   Graph_NLOdiff133082->SetMaximum(1100.001);
   Graph_NLOdiff133082->SetDirectory(0);
   Graph_NLOdiff133082->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff133082->SetLineColor(ci);
   Graph_NLOdiff133082->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff133082->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff133082->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff133082->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff133082->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff133082->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff133082->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff133082->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff133082->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff133082->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff133082->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff133082->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff133082->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff133082);
   
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
   -0.000331867,
   -0.004156864,
   -0.009816396,
   -0.01230126,
   -0.01301969,
   -0.01245888,
   -0.007045396,
   -0.002271119,
   0.007352542,
   0.01427286,
   0.01683294,
   0.01561641,
   0.009919159,
   0.006286859,
   -0.0003892846,
   -0.002684957,
   -0.001394596};
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
   1.174222e-06,
   0.0002092389,
   0.002181702,
   0.002692362,
   0.007479547,
   0.009179226,
   0.008043909,
   0.008752137,
   0.004031025,
   0.004461737,
   0.009946097,
   0.01114035,
   0.009706296,
   0.006917779,
   0.007833184,
   0.004741395,
   0.003751325,
   0.0007666473};
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
   5.196919e-07,
   0.0001855447,
   0.001091193,
   0.005659908,
   0.005703668,
   0.007735803,
   0.01039216,
   0.007732388,
   0.006279996,
   0.003619135,
   0.003192377,
   0.006228342,
   0.01072711,
   0.01137356,
   0.005820472,
   0.007830326,
   0.00456305,
   0.001335957};
   grae = new TGraphAsymmErrors(18,g_fx3083,g_fy3083,g_felx3083,g_fehx3083,g_fely3083,g_fehy3083);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1360;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3083 = new TH1F("Graph_g3083","",100,-3.5065,3.5915);
   Graph_g3083->SetMinimum(-100.0244);
   Graph_g3083->SetMaximum(1100.002);
   Graph_g3083->SetDirectory(0);
   Graph_g3083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3083->SetLineColor(ci);
   Graph_g3083->GetXaxis()->SetLabelFont(42);
   Graph_g3083->GetXaxis()->SetLabelSize(0.035);
   Graph_g3083->GetXaxis()->SetTitleSize(0.035);
   Graph_g3083->GetXaxis()->SetTitleFont(42);
   Graph_g3083->GetYaxis()->SetLabelFont(42);
   Graph_g3083->GetYaxis()->SetLabelSize(0.035);
   Graph_g3083->GetYaxis()->SetTitleSize(0.035);
   Graph_g3083->GetYaxis()->SetTitleOffset(0);
   Graph_g3083->GetYaxis()->SetTitleFont(42);
   Graph_g3083->GetZaxis()->SetLabelFont(42);
   Graph_g3083->GetZaxis()->SetLabelSize(0.035);
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
   -0.0006520506,
   -0.005590623,
   -0.01132602,
   -0.01472329,
   -0.01636603,
   -0.01281166,
   -0.003028367,
   0.007986488,
   0.02104294,
   0.02333556,
   0.02129611,
   0.01964433,
   0.008097199,
   -0.002224231,
   -0.009932351,
   -0.009383249,
   -0.002664676};
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
   7.166629e-07,
   0.0001906851,
   0.001378269,
   0.003174293,
   0.007605364,
   0.002957964,
   0.001066245,
   0.0006311876,
   0.00549648,
   0.0161225,
   0.007770906,
   0.004554716,
   0.01361054,
   0.006597664,
   0.0007603505,
   0.001115224,
   0.004240857,
   0.001712675};
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
   3.35317e-07,
   0.000338126,
   0.001660757,
   0.002868758,
   0.002573468,
   0.007997313,
   0.008485706,
   0.007244786,
   0.004140693,
   3.498836e-06,
   0.008523369,
   0.01404511,
   0.001003031,
   0.002432057,
   0.007960276,
   0.007660791,
   0.00356084,
   0.0004966383};
   grae = new TGraphAsymmErrors(18,g_fx3084,g_fy3084,g_felx3084,g_fehx3084,g_fely3084,g_fehy3084);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1361;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3084 = new TH1F("Graph_g3084","",100,-3.5065,3.5915);
   Graph_g3084->SetMinimum(-100.0246);
   Graph_g3084->SetMaximum(1100.002);
   Graph_g3084->SetDirectory(0);
   Graph_g3084->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3084->SetLineColor(ci);
   Graph_g3084->GetXaxis()->SetLabelFont(42);
   Graph_g3084->GetXaxis()->SetLabelSize(0.035);
   Graph_g3084->GetXaxis()->SetTitleSize(0.035);
   Graph_g3084->GetXaxis()->SetTitleFont(42);
   Graph_g3084->GetYaxis()->SetLabelFont(42);
   Graph_g3084->GetYaxis()->SetLabelSize(0.035);
   Graph_g3084->GetYaxis()->SetTitleSize(0.035);
   Graph_g3084->GetYaxis()->SetTitleOffset(0);
   Graph_g3084->GetYaxis()->SetTitleFont(42);
   Graph_g3084->GetZaxis()->SetLabelFont(42);
   Graph_g3084->GetZaxis()->SetLabelSize(0.035);
   Graph_g3084->GetZaxis()->SetTitleSize(0.035);
   Graph_g3084->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3084);
   
   grae->Draw(" 2");
   Double_t xAxis56[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_3__100 = new TH1D("hist_eta_diff_3__100","",18, xAxis56);
   hist_eta_diff_3__100->SetBinContent(1,1000);
   hist_eta_diff_3__100->SetBinContent(2,-0.0001315682);
   hist_eta_diff_3__100->SetBinContent(3,-0.002373581);
   hist_eta_diff_3__100->SetBinContent(4,-0.004792642);
   hist_eta_diff_3__100->SetBinContent(5,-0.008595807);
   hist_eta_diff_3__100->SetBinContent(6,-0.00937647);
   hist_eta_diff_3__100->SetBinContent(7,-0.008182826);
   hist_eta_diff_3__100->SetBinContent(8,-0.002644908);
   hist_eta_diff_3__100->SetBinContent(9,0.003629397);
   hist_eta_diff_3__100->SetBinContent(10,0.00606864);
   hist_eta_diff_3__100->SetBinContent(11,0.0158877);
   hist_eta_diff_3__100->SetBinContent(12,0.01117428);
   hist_eta_diff_3__100->SetBinContent(13,0.01450428);
   hist_eta_diff_3__100->SetBinContent(14,0.005265459);
   hist_eta_diff_3__100->SetBinContent(15,0.002934821);
   hist_eta_diff_3__100->SetBinContent(16,0.0006750658);
   hist_eta_diff_3__100->SetBinContent(17,-0.008848901);
   hist_eta_diff_3__100->SetBinContent(18,-0.003109985);
   hist_eta_diff_3__100->SetBinError(1,1.739117e-05);
   hist_eta_diff_3__100->SetBinError(2,0.0001144778);
   hist_eta_diff_3__100->SetBinError(3,0.0005168273);
   hist_eta_diff_3__100->SetBinError(4,0.0009081448);
   hist_eta_diff_3__100->SetBinError(5,0.001304551);
   hist_eta_diff_3__100->SetBinError(6,0.001675618);
   hist_eta_diff_3__100->SetBinError(7,0.002001947);
   hist_eta_diff_3__100->SetBinError(8,0.002273484);
   hist_eta_diff_3__100->SetBinError(9,0.002477045);
   hist_eta_diff_3__100->SetBinError(10,0.002599723);
   hist_eta_diff_3__100->SetBinError(11,0.002694325);
   hist_eta_diff_3__100->SetBinError(12,0.002673179);
   hist_eta_diff_3__100->SetBinError(13,0.002608011);
   hist_eta_diff_3__100->SetBinError(14,0.002437619);
   hist_eta_diff_3__100->SetBinError(15,0.002225113);
   hist_eta_diff_3__100->SetBinError(16,0.001947028);
   hist_eta_diff_3__100->SetBinError(17,0.0009485532);
   hist_eta_diff_3__100->SetBinError(18,0.000360125);
   hist_eta_diff_3__100->SetEntries(4.26262);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_3__100->SetLineColor(ci);
   hist_eta_diff_3__100->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_3__100->SetMarkerColor(ci);
   hist_eta_diff_3__100->SetMarkerStyle(20);
   hist_eta_diff_3__100->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_3__100->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_3__100->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_3__100->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_3__100->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_3__100->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_3__100->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_3__100->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_3__100->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_3__100->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_3__100->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_3__100->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_3__100->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_3__100->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_3__100->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_3__100->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_3__100->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_3__100->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_3__100->Draw("same");
   line = new TLine(-2.999,0,2.999,0);
   line->Draw();
      tex = new TLatex(0.45,0.29,"95 < p_{T}^{ave} < 115 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_0_1->Modified();
   cDiff1->cd();
  
// ------------>Primitives in pad: p_1_0
   TPad *p_1_0 = new TPad("p_1_0", "p_1_0",0.3825653,0.5393939,0.673315,1);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(-2.999,-0.04,2.999,0.04988764);
   p_1_0->SetFillColor(0);
   p_1_0->SetBorderMode(0);
   p_1_0->SetBorderSize(2);
   p_1_0->SetLeftMargin(0);
   p_1_0->SetRightMargin(0);
   p_1_0->SetBottomMargin(0);
   p_1_0->SetFrameBorderMode(0);
   p_1_0->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__101 = new TH1D("emptyDiff__101","",10,-2.999,2.999);
   emptyDiff__101->SetBinContent(7,1000);
   emptyDiff__101->SetBinError(7,1000);
   emptyDiff__101->SetMinimum(-0.04);
   emptyDiff__101->SetMaximum(0.04);
   emptyDiff__101->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__101->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__101);

   ci = TColor::GetColor("#000099");
   emptyDiff__101->SetLineColor(ci);
   emptyDiff__101->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__101->GetXaxis()->CenterTitle(true);
   emptyDiff__101->GetXaxis()->SetLabelFont(43);
   emptyDiff__101->GetXaxis()->SetLabelSize(33);
   emptyDiff__101->GetXaxis()->SetTitleSize(33);
   emptyDiff__101->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__101->GetXaxis()->SetTitleFont(43);
   emptyDiff__101->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__101->GetYaxis()->CenterTitle(true);
   emptyDiff__101->GetYaxis()->SetNdivisions(505);
   emptyDiff__101->GetYaxis()->SetLabelFont(43);
   emptyDiff__101->GetYaxis()->SetLabelSize(33);
   emptyDiff__101->GetYaxis()->SetTitleSize(33);
   emptyDiff__101->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__101->GetYaxis()->SetTitleFont(43);
   emptyDiff__101->GetZaxis()->SetLabelFont(42);
   emptyDiff__101->GetZaxis()->SetLabelSize(0.035);
   emptyDiff__101->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__101->GetZaxis()->SetTitleFont(42);
   emptyDiff__101->Draw("");
   
   Double_t syst1_fx1045[18] = {
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
   Double_t syst1_fy1045[18] = {
   -0.0002017623,
   -0.001920572,
   -0.00564341,
   -0.00887805,
   -0.00462477,
   -0.006777145,
   -0.005463691,
   0.004624941,
   0.006641873,
   0.01479723,
   0.0150519,
   0.01482793,
   0.01229341,
   0.00597627,
   -0.002324215,
   -0.004353936,
   -0.009636968,
   -0.006415748};
   Double_t syst1_fex1045[18] = {
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
   Double_t syst1_fey1045[18] = {
   -0.000447888,
   -0.001964194,
   -0.002811722,
   -0.002604374,
   -0.002571638,
   -0.002195107,
   -0.00207099,
   -0.001865851,
   -0.00211726,
   -0.00236848,
   -0.002849916,
   -0.002731748,
   -0.002600471,
   -0.002698197,
   -0.00230326,
   -0.003176579,
   -0.001552712,
   -0.001360632};
   gre = new TGraphErrors(18,syst1_fx1045,syst1_fy1045,syst1_fex1045,syst1_fey1045);
   gre->SetName("syst1");
   gre->SetTitle("Graph");

   ci = 1348;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_syst110391045 = new TH1F("Graph_Graph_syst110391045","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst110391045->SetMinimum(-0.01210586);
   Graph_Graph_syst110391045->SetMaximum(0.01752079);
   Graph_Graph_syst110391045->SetDirectory(0);
   Graph_Graph_syst110391045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_syst110391045->SetLineColor(ci);
   Graph_Graph_syst110391045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst110391045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_syst110391045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_syst110391045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst110391045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst110391045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_syst110391045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_syst110391045->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_syst110391045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst110391045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst110391045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_syst110391045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst110391045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst110391045);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff11_fx3085[18] = {
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
   Double_t NLOdiff11_fy3085[18] = {
   -4.094849e-06,
   -0.0006795156,
   -0.001035873,
   -0.001064865,
   0.001495644,
   0.002321031,
   0.003404152,
   0.005620358,
   0.00442822,
   0.005364833,
   0.003597021,
   0.001247561,
   -0.001436593,
   -0.00421751,
   -0.004320197,
   -0.00427152,
   -0.003776036,
   -0.001108532};
   Double_t NLOdiff11_felx3085[18] = {
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
   Double_t NLOdiff11_fely3085[18] = {
   0.0002906762,
   0.0001591311,
   0.00406367,
   0.002078564,
   0.004638685,
   0.005267441,
   0.004318629,
   0.00923484,
   0.001863673,
   0.002960546,
   0.009417013,
   0.006996607,
   0.001750462,
   0.00157626,
   0.0066939,
   0.006487416,
   0.001537563,
   0.0009696267};
   Double_t NLOdiff11_fehx3085[18] = {
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
   Double_t NLOdiff11_fehy3085[18] = {
   0.0001047519,
   0.00161298,
   0.0005870108,
   0.003496921,
   0.003434244,
   0.004794899,
   0.006620965,
   0.002202922,
   0.009057716,
   0.00530845,
   0.0002632847,
   0.0007298108,
   0.009268788,
   0.009020778,
   0.003538738,
   0.004087104,
   0.004010107,
   0.0007845298};
   grae = new TGraphAsymmErrors(18,NLOdiff11_fx3085,NLOdiff11_fy3085,NLOdiff11_felx3085,NLOdiff11_fehx3085,NLOdiff11_fely3085,NLOdiff11_fehy3085);
   grae->SetName("NLOdiff11");
   grae->SetTitle("");

   ci = 1349;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff113085 = new TH1F("Graph_NLOdiff113085","",100,-3.5065,3.5915);
   Graph_NLOdiff113085->SetMinimum(-0.0134641);
   Graph_NLOdiff113085->SetMaximum(0.01593594);
   Graph_NLOdiff113085->SetDirectory(0);
   Graph_NLOdiff113085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff113085->SetLineColor(ci);
   Graph_NLOdiff113085->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff113085->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff113085->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff113085->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff113085->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff113085->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff113085->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff113085->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff113085->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff113085->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff113085->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff113085->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff113085->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff113085);
   
   grae->Draw(" 2");
   
   Double_t g_fx3086[18] = {
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
   Double_t g_fy3086[18] = {
   -0.0001563286,
   -0.002741492,
   -0.008135509,
   -0.008845661,
   -0.007677059,
   -0.007126687,
   -0.001774683,
   0.004430526,
   0.01011494,
   0.01586875,
   0.01271489,
   0.01054907,
   0.008642221,
   0.0002739192,
   -0.002630505,
   -0.005541658,
   -0.005456638,
   -0.002154987};
   Double_t g_felx3086[18] = {
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
   Double_t g_fely3086[18] = {
   0.0002003534,
   0.00144659,
   0.003345311,
   0.006336789,
   0.008239063,
   0.004758645,
   0.007483572,
   0.006924624,
   0.005075527,
   0.01325303,
   0.006872345,
   0.007505356,
   0.008173625,
   0.001790925,
   0.006218034,
   0.006299792,
   0.006465663,
   0.001247155};
   Double_t g_fehx3086[18] = {
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
   Double_t g_fehy3086[18] = {
   7.70403e-05,
   0.001357279,
   0.005135816,
   0.005370623,
   0.006260156,
   0.009226678,
   0.005815651,
   0.004167054,
   0.00597959,
   0.005979611,
   0.01081068,
   0.01029685,
   0.00558616,
   0.01387349,
   0.005121738,
   0.005460974,
   0.003575901,
   0.00180906};
   grae = new TGraphAsymmErrors(18,g_fx3086,g_fy3086,g_felx3086,g_fehx3086,g_fely3086,g_fehy3086);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1350;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3086 = new TH1F("Graph_g3086","",100,-3.5065,3.5915);
   Graph_g3086->SetMinimum(-0.01986029);
   Graph_g3086->SetMaximum(0.02746974);
   Graph_g3086->SetDirectory(0);
   Graph_g3086->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3086->SetLineColor(ci);
   Graph_g3086->GetXaxis()->SetLabelFont(42);
   Graph_g3086->GetXaxis()->SetLabelSize(0.035);
   Graph_g3086->GetXaxis()->SetTitleSize(0.035);
   Graph_g3086->GetXaxis()->SetTitleFont(42);
   Graph_g3086->GetYaxis()->SetLabelFont(42);
   Graph_g3086->GetYaxis()->SetLabelSize(0.035);
   Graph_g3086->GetYaxis()->SetTitleSize(0.035);
   Graph_g3086->GetYaxis()->SetTitleOffset(0);
   Graph_g3086->GetYaxis()->SetTitleFont(42);
   Graph_g3086->GetZaxis()->SetLabelFont(42);
   Graph_g3086->GetZaxis()->SetLabelSize(0.035);
   Graph_g3086->GetZaxis()->SetTitleSize(0.035);
   Graph_g3086->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3086);
   
   grae->Draw(" 2");
   
   Double_t g_fx3087[18] = {
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
   Double_t g_fy3087[18] = {
   -0.000274539,
   -0.003483145,
   -0.008777213,
   -0.009493922,
   -0.00638556,
   -0.001006547,
   0.00714109,
   0.01522418,
   0.02188117,
   0.0244382,
   0.02054028,
   0.01283784,
   0.005117647,
   -0.005818586,
   -0.01341364,
   -0.01693834,
   -0.01439242,
   -0.004660461};
   Double_t g_felx3087[18] = {
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
   Double_t g_fely3087[18] = {
   9.444292e-05,
   0.000652451,
   0.003199499,
   0.004520416,
   0.005740427,
   0.004190142,
   0.00386769,
   0.001845873,
   0.003585385,
   0.006593605,
   0.01052935,
   0.006249919,
   0.008616045,
   0.004164897,
   0.00452015,
   0.005315102,
   0.003492273,
   0.0005894071};
   Double_t g_fehx3087[18] = {
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
   Double_t g_fehy3087[18] = {
   0.0002362658,
   0.001909233,
   0.002914365,
   0.004238244,
   0.005466016,
   0.005674709,
   0.004991112,
   0.007360557,
   0.006692984,
   0.006140337,
   0.004817605,
   0.007854079,
   0.003164788,
   0.005324964,
   0.002901093,
   0.00324283,
   0.002388596,
   0.002011039};
   grae = new TGraphAsymmErrors(18,g_fx3087,g_fy3087,g_felx3087,g_fehx3087,g_fely3087,g_fehy3087);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1351;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3087 = new TH1F("Graph_g3087","",100,-3.5065,3.5915);
   Graph_g3087->SetMinimum(-0.02753664);
   Graph_g3087->SetMaximum(0.03586173);
   Graph_g3087->SetDirectory(0);
   Graph_g3087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3087->SetLineColor(ci);
   Graph_g3087->GetXaxis()->SetLabelFont(42);
   Graph_g3087->GetXaxis()->SetLabelSize(0.035);
   Graph_g3087->GetXaxis()->SetTitleSize(0.035);
   Graph_g3087->GetXaxis()->SetTitleFont(42);
   Graph_g3087->GetYaxis()->SetLabelFont(42);
   Graph_g3087->GetYaxis()->SetLabelSize(0.035);
   Graph_g3087->GetYaxis()->SetTitleSize(0.035);
   Graph_g3087->GetYaxis()->SetTitleOffset(0);
   Graph_g3087->GetYaxis()->SetTitleFont(42);
   Graph_g3087->GetZaxis()->SetLabelFont(42);
   Graph_g3087->GetZaxis()->SetLabelSize(0.035);
   Graph_g3087->GetZaxis()->SetTitleSize(0.035);
   Graph_g3087->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3087);
   
   grae->Draw(" 2");
   Double_t xAxis57[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_1__102 = new TH1D("hist_eta_diff_1__102","",18, xAxis57);
   hist_eta_diff_1__102->SetBinContent(0,-3.052647e-06);
   hist_eta_diff_1__102->SetBinContent(1,-0.0002017623);
   hist_eta_diff_1__102->SetBinContent(2,-0.001920572);
   hist_eta_diff_1__102->SetBinContent(3,-0.00564341);
   hist_eta_diff_1__102->SetBinContent(4,-0.008878051);
   hist_eta_diff_1__102->SetBinContent(5,-0.004624769);
   hist_eta_diff_1__102->SetBinContent(6,-0.006777144);
   hist_eta_diff_1__102->SetBinContent(7,-0.005463691);
   hist_eta_diff_1__102->SetBinContent(8,0.004624941);
   hist_eta_diff_1__102->SetBinContent(9,0.006641873);
   hist_eta_diff_1__102->SetBinContent(10,0.01479723);
   hist_eta_diff_1__102->SetBinContent(11,0.0150519);
   hist_eta_diff_1__102->SetBinContent(12,0.01482793);
   hist_eta_diff_1__102->SetBinContent(13,0.01229341);
   hist_eta_diff_1__102->SetBinContent(14,0.00597627);
   hist_eta_diff_1__102->SetBinContent(15,-0.002324215);
   hist_eta_diff_1__102->SetBinContent(16,-0.004353936);
   hist_eta_diff_1__102->SetBinContent(17,-0.009636968);
   hist_eta_diff_1__102->SetBinContent(18,-0.006415747);
   hist_eta_diff_1__102->SetBinError(0,2.158548e-06);
   hist_eta_diff_1__102->SetBinError(1,0.0001349069);
   hist_eta_diff_1__102->SetBinError(2,0.000479127);
   hist_eta_diff_1__102->SetBinError(3,0.00133788);
   hist_eta_diff_1__102->SetBinError(4,0.0017972);
   hist_eta_diff_1__102->SetBinError(5,0.002263363);
   hist_eta_diff_1__102->SetBinError(6,0.002622349);
   hist_eta_diff_1__102->SetBinError(7,0.002955147);
   hist_eta_diff_1__102->SetBinError(8,0.003255675);
   hist_eta_diff_1__102->SetBinError(9,0.0034497);
   hist_eta_diff_1__102->SetBinError(10,0.003611533);
   hist_eta_diff_1__102->SetBinError(11,0.003656425);
   hist_eta_diff_1__102->SetBinError(12,0.003626599);
   hist_eta_diff_1__102->SetBinError(13,0.003538155);
   hist_eta_diff_1__102->SetBinError(14,0.003341137);
   hist_eta_diff_1__102->SetBinError(15,0.003060596);
   hist_eta_diff_1__102->SetBinError(16,0.002711659);
   hist_eta_diff_1__102->SetBinError(17,0.001419186);
   hist_eta_diff_1__102->SetBinError(18,0.0006232686);
   hist_eta_diff_1__102->SetEntries(2.468409);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_1__102->SetLineColor(ci);
   hist_eta_diff_1__102->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_1__102->SetMarkerColor(ci);
   hist_eta_diff_1__102->SetMarkerStyle(20);
   hist_eta_diff_1__102->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_1__102->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_1__102->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_1__102->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_1__102->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_1__102->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_1__102->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_1__102->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_1__102->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_1__102->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_1__102->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_1__102->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_1__102->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_1__102->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_1__102->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_1__102->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_1__102->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_1__102->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_1__102->Draw("same");
   line = new TLine(-2.999,0,2.999,0);
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
   cDiff1->cd();
  
// ------------>Primitives in pad: p_1_1
   TPad *p_1_1 = new TPad("p_1_1", "p_1_1",0.3825653,0,0.673315,0.539394);
   p_1_1->Draw();
   p_1_1->cd();
   p_1_1->Range(-2.999,-0.06526316,2.999,0.04);
   p_1_1->SetFillColor(0);
   p_1_1->SetBorderMode(0);
   p_1_1->SetBorderSize(2);
   p_1_1->SetLeftMargin(0);
   p_1_1->SetRightMargin(0);
   p_1_1->SetTopMargin(0);
   p_1_1->SetBottomMargin(0.24);
   p_1_1->SetFrameBorderMode(0);
   p_1_1->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__103 = new TH1D("emptyDiff__103","",10,-2.999,2.999);
   emptyDiff__103->SetBinContent(7,1000);
   emptyDiff__103->SetBinError(7,1000);
   emptyDiff__103->SetMinimum(-0.04);
   emptyDiff__103->SetMaximum(0.04);
   emptyDiff__103->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__103->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__103);

   ci = TColor::GetColor("#000099");
   emptyDiff__103->SetLineColor(ci);
   emptyDiff__103->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__103->GetXaxis()->CenterTitle(true);
   emptyDiff__103->GetXaxis()->SetLabelFont(43);
   emptyDiff__103->GetXaxis()->SetLabelSize(33);
   emptyDiff__103->GetXaxis()->SetTitleSize(33);
   emptyDiff__103->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__103->GetXaxis()->SetTitleFont(43);
   emptyDiff__103->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__103->GetYaxis()->CenterTitle(true);
   emptyDiff__103->GetYaxis()->SetNdivisions(505);
   emptyDiff__103->GetYaxis()->SetLabelFont(43);
   emptyDiff__103->GetYaxis()->SetLabelSize(33);
   emptyDiff__103->GetYaxis()->SetTitleSize(33);
   emptyDiff__103->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__103->GetYaxis()->SetTitleFont(43);
   emptyDiff__103->GetZaxis()->SetLabelFont(42);
   emptyDiff__103->GetZaxis()->SetLabelSize(0.035);
   emptyDiff__103->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__103->GetZaxis()->SetTitleFont(42);
   emptyDiff__103->Draw("");
   
   Double_t syst4_fx1046[18] = {
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
   Double_t syst4_fy1046[18] = {
   0,
   3.724844e-05,
   -0.0008251001,
   -0.002922174,
   -0.006846657,
   -0.009121092,
   -0.00984045,
   -0.01067308,
   0.000417791,
   0.006085041,
   0.01454668,
   0.01009126,
   0.01180635,
   0.006519911,
   0.004999544,
   0.0005301459,
   -0.005450386,
   -0.001970947};
   Double_t syst4_fex1046[18] = {
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
   Double_t syst4_fey1046[18] = {
   -0,
   -0.0001192071,
   -0.0008175975,
   -0.001396145,
   -0.001940475,
   -0.002064929,
   -0.00201271,
   -0.002090804,
   -0.001623588,
   -0.001747477,
   -0.001551667,
   -0.00193748,
   -0.001749711,
   -0.001845701,
   -0.002129046,
   -0.002189118,
   -0.002087217,
   -0.0005623884};
   gre = new TGraphErrors(18,syst4_fx1046,syst4_fy1046,syst4_fex1046,syst4_fey1046);
   gre->SetName("syst4");
   gre->SetTitle("Graph");

   ci = 1363;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_syst410401046 = new TH1F("Graph_Graph_syst410401046","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst410401046->SetMinimum(-0.01319505);
   Graph_Graph_syst410401046->SetMaximum(0.01706865);
   Graph_Graph_syst410401046->SetDirectory(0);
   Graph_Graph_syst410401046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_syst410401046->SetLineColor(ci);
   Graph_Graph_syst410401046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst410401046->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_syst410401046->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_syst410401046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst410401046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst410401046->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_syst410401046->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_syst410401046->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_syst410401046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst410401046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst410401046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_syst410401046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst410401046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst410401046);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff14_fx3088[18] = {
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
   Double_t NLOdiff14_fy3088[18] = {
   1000,
   1000,
   -0.0003664868,
   -0.001478408,
   -0.003009892,
   -0.002745383,
   -0.001880523,
   0.001480079,
   0.002402799,
   0.005578022,
   0.005035975,
   0.004024393,
   0.002650619,
   -0.0007045543,
   -0.001292539,
   -0.003597504,
   -0.00254113,
   -0.0004564075};
   Double_t NLOdiff14_felx3088[18] = {
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
   Double_t NLOdiff14_fely3088[18] = {
   5.383967e-12,
   7.093159e-05,
   0.0007994604,
   0.0008105263,
   0.00154403,
   0.002053463,
   0.004548496,
   0.006899288,
   0.003642029,
   0.007059074,
   0.002581597,
   0.0008201679,
   0.005739876,
   0.001918351,
   0.007720949,
   0.00308808,
   0.001908172,
   0.0003781039};
   Double_t NLOdiff14_fehx3088[18] = {
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
   Double_t NLOdiff14_fehy3088[18] = {
   4.195948e-10,
   8.232213e-05,
   0.0001548782,
   0.0008743388,
   0.002285059,
   0.004023176,
   0.004159061,
   0.001826928,
   0.005855128,
   0.001360358,
   0.005520931,
   0.004510651,
   0.00206249,
   0.006190527,
   0.002946531,
   0.00529351,
   0.003277677,
   0.0007165186};
   grae = new TGraphAsymmErrors(18,NLOdiff14_fx3088,NLOdiff14_fy3088,NLOdiff14_felx3088,NLOdiff14_fehx3088,NLOdiff14_fely3088,NLOdiff14_fehy3088);
   grae->SetName("NLOdiff14");
   grae->SetTitle("");

   ci = 1364;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff143088 = new TH1F("Graph_NLOdiff143088","",100,-3.5065,3.5915);
   Graph_NLOdiff143088->SetMinimum(-100.0099);
   Graph_NLOdiff143088->SetMaximum(1100.001);
   Graph_NLOdiff143088->SetDirectory(0);
   Graph_NLOdiff143088->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff143088->SetLineColor(ci);
   Graph_NLOdiff143088->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff143088->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff143088->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff143088->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff143088->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff143088->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff143088->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff143088->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff143088->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff143088->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff143088->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff143088->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff143088->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff143088);
   
   grae->Draw(" 2");
   
   Double_t g_fx3089[18] = {
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
   Double_t g_fy3089[18] = {
   1000,
   1000,
   -0.001608611,
   -0.006068342,
   -0.01265572,
   -0.01486459,
   -0.01623929,
   -0.01144126,
   -0.005817603,
   0.001810833,
   0.01089336,
   0.01617023,
   0.01617044,
   0.01458328,
   0.009360699,
   0.003012858,
   -0.001165688,
   -0.0004537705};
   Double_t g_felx3089[18] = {
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
   Double_t g_fely3089[18] = {
   9.308047e-12,
   3.442925e-05,
   0.0006275321,
   0.002548458,
   0.004935371,
   0.009768599,
   0.01013762,
   0.01258875,
   0.0101753,
   0.004124923,
   0.005169531,
   0.007430219,
   0.006556217,
   0.008882022,
   0.007441656,
   0.005677771,
   0.002615484,
   0.0006122844};
   Double_t g_fehx3089[18] = {
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
   Double_t g_fehy3089[18] = {
   5.711197e-10,
   7.943143e-05,
   0.000444719,
   0.002351309,
   0.005946027,
   0.006639698,
   0.00887105,
   0.007957095,
   0.005875495,
   0.003102806,
   0.002480561,
   0.008447176,
   0.01603318,
   0.01082277,
   0.008053865,
   0.006723179,
   0.004241488,
   0.0005723514};
   grae = new TGraphAsymmErrors(18,g_fx3089,g_fy3089,g_felx3089,g_fehx3089,g_fely3089,g_fehy3089);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1365;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3089 = new TH1F("Graph_g3089","",100,-3.5065,3.5915);
   Graph_g3089->SetMinimum(-100.029);
   Graph_g3089->SetMaximum(1100.003);
   Graph_g3089->SetDirectory(0);
   Graph_g3089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3089->SetLineColor(ci);
   Graph_g3089->GetXaxis()->SetLabelFont(42);
   Graph_g3089->GetXaxis()->SetLabelSize(0.035);
   Graph_g3089->GetXaxis()->SetTitleSize(0.035);
   Graph_g3089->GetXaxis()->SetTitleFont(42);
   Graph_g3089->GetYaxis()->SetLabelFont(42);
   Graph_g3089->GetYaxis()->SetLabelSize(0.035);
   Graph_g3089->GetYaxis()->SetTitleSize(0.035);
   Graph_g3089->GetYaxis()->SetTitleOffset(0);
   Graph_g3089->GetYaxis()->SetTitleFont(42);
   Graph_g3089->GetZaxis()->SetLabelFont(42);
   Graph_g3089->GetZaxis()->SetLabelSize(0.035);
   Graph_g3089->GetZaxis()->SetTitleSize(0.035);
   Graph_g3089->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3089);
   
   grae->Draw(" 2");
   
   Double_t g_fx3090[18] = {
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
   Double_t g_fy3090[18] = {
   1000,
   1000,
   -0.002538306,
   -0.008106756,
   -0.01559529,
   -0.01998776,
   -0.01959956,
   -0.01203637,
   -0.000928974,
   0.01263428,
   0.02149398,
   0.02528032,
   0.02238941,
   0.01468011,
   0.003871148,
   -0.004287282,
   -0.006952514,
   -0.001531227};
   Double_t g_felx3090[18] = {
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
   Double_t g_fely3090[18] = {
   7.566959e-10,
   5.187608e-05,
   0.0005997878,
   0.001954745,
   0.003977547,
   0.004372005,
   0.003797204,
   0.002047115,
   0.003296172,
   0.009622554,
   0.01028216,
   0.01094527,
   0.008458939,
   0.006371085,
   0.001420837,
   0.004711127,
   0.003227693,
   0.0005251086};
   Double_t g_fehx3090[18] = {
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
   Double_t g_fehy3090[18] = {
   1.979662e-10,
   7.416036e-05,
   0.0009686533,
   0.002446133,
   0.003749575,
   0.007013836,
   0.006446914,
   0.004209277,
   0.004657771,
   0.003301384,
   0.0086424,
   0.00739744,
   0.004682562,
   0.002434718,
   0.005792276,
   0.005984483,
   0.005230288,
   0.001007429};
   grae = new TGraphAsymmErrors(18,g_fx3090,g_fy3090,g_felx3090,g_fehx3090,g_fely3090,g_fehy3090);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1366;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3090 = new TH1F("Graph_g3090","",100,-3.5065,3.5915);
   Graph_g3090->SetMinimum(-100.0268);
   Graph_g3090->SetMaximum(1100.003);
   Graph_g3090->SetDirectory(0);
   Graph_g3090->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3090->SetLineColor(ci);
   Graph_g3090->GetXaxis()->SetLabelFont(42);
   Graph_g3090->GetXaxis()->SetLabelSize(0.035);
   Graph_g3090->GetXaxis()->SetTitleSize(0.035);
   Graph_g3090->GetXaxis()->SetTitleFont(42);
   Graph_g3090->GetYaxis()->SetLabelFont(42);
   Graph_g3090->GetYaxis()->SetLabelSize(0.035);
   Graph_g3090->GetYaxis()->SetTitleSize(0.035);
   Graph_g3090->GetYaxis()->SetTitleOffset(0);
   Graph_g3090->GetYaxis()->SetTitleFont(42);
   Graph_g3090->GetZaxis()->SetLabelFont(42);
   Graph_g3090->GetZaxis()->SetLabelSize(0.035);
   Graph_g3090->GetZaxis()->SetTitleSize(0.035);
   Graph_g3090->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3090);
   
   grae->Draw(" 2");
   Double_t xAxis58[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_4__104 = new TH1D("hist_eta_diff_4__104","",18, xAxis58);
   hist_eta_diff_4__104->SetBinContent(1,1000);
   hist_eta_diff_4__104->SetBinContent(2,1000);
   hist_eta_diff_4__104->SetBinContent(3,-0.0008251);
   hist_eta_diff_4__104->SetBinContent(4,-0.002922174);
   hist_eta_diff_4__104->SetBinContent(5,-0.006846657);
   hist_eta_diff_4__104->SetBinContent(6,-0.009121092);
   hist_eta_diff_4__104->SetBinContent(7,-0.00984045);
   hist_eta_diff_4__104->SetBinContent(8,-0.01067308);
   hist_eta_diff_4__104->SetBinContent(9,0.000417791);
   hist_eta_diff_4__104->SetBinContent(10,0.006085041);
   hist_eta_diff_4__104->SetBinContent(11,0.01454668);
   hist_eta_diff_4__104->SetBinContent(12,0.01009126);
   hist_eta_diff_4__104->SetBinContent(13,0.01180635);
   hist_eta_diff_4__104->SetBinContent(14,0.006519911);
   hist_eta_diff_4__104->SetBinContent(15,0.004999544);
   hist_eta_diff_4__104->SetBinContent(16,0.0005301459);
   hist_eta_diff_4__104->SetBinContent(17,-0.005450386);
   hist_eta_diff_4__104->SetBinContent(18,-0.001970947);
   hist_eta_diff_4__104->SetBinError(2,6.663979e-05);
   hist_eta_diff_4__104->SetBinError(3,0.0003828681);
   hist_eta_diff_4__104->SetBinError(4,0.0008361038);
   hist_eta_diff_4__104->SetBinError(5,0.001352877);
   hist_eta_diff_4__104->SetBinError(6,0.001853401);
   hist_eta_diff_4__104->SetBinError(7,0.002290435);
   hist_eta_diff_4__104->SetBinError(8,0.002643399);
   hist_eta_diff_4__104->SetBinError(9,0.0029373);
   hist_eta_diff_4__104->SetBinError(10,0.003142083);
   hist_eta_diff_4__104->SetBinError(11,0.003250029);
   hist_eta_diff_4__104->SetBinError(12,0.003241442);
   hist_eta_diff_4__104->SetBinError(13,0.003152097);
   hist_eta_diff_4__104->SetBinError(14,0.00294416);
   hist_eta_diff_4__104->SetBinError(15,0.002662672);
   hist_eta_diff_4__104->SetBinError(16,0.002269071);
   hist_eta_diff_4__104->SetBinError(17,0.001076193);
   hist_eta_diff_4__104->SetBinError(18,0.0003508187);
   hist_eta_diff_4__104->SetEntries(4.605542);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_4__104->SetLineColor(ci);
   hist_eta_diff_4__104->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_4__104->SetMarkerColor(ci);
   hist_eta_diff_4__104->SetMarkerStyle(20);
   hist_eta_diff_4__104->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_4__104->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_4__104->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_4__104->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_4__104->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_4__104->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_4__104->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_4__104->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_4__104->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_4__104->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_4__104->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_4__104->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_4__104->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_4__104->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_4__104->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_4__104->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_4__104->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_4__104->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_4__104->Draw("same");
   line = new TLine(-2.999,0,2.999,0);
   line->Draw();
      tex = new TLatex(0.28,0.29,"115 < p_{T}^{ave} < 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_1->Modified();
   cDiff1->cd();
  
// ------------>Primitives in pad: p_2_0
   TPad *p_2_0 = new TPad("p_2_0", "p_2_0",0.673315,0.5393939,1,1);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(-2.999,-0.04,3.740326,0.04988764);
   p_2_0->SetFillColor(0);
   p_2_0->SetBorderMode(0);
   p_2_0->SetBorderSize(2);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetBottomMargin(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__105 = new TH1D("emptyDiff__105","",10,-2.999,2.999);
   emptyDiff__105->SetBinContent(7,1000);
   emptyDiff__105->SetBinError(7,1000);
   emptyDiff__105->SetMinimum(-0.04);
   emptyDiff__105->SetMaximum(0.04);
   emptyDiff__105->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__105->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__105);

   ci = TColor::GetColor("#000099");
   emptyDiff__105->SetLineColor(ci);
   emptyDiff__105->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__105->GetXaxis()->CenterTitle(true);
   emptyDiff__105->GetXaxis()->SetLabelFont(43);
   emptyDiff__105->GetXaxis()->SetLabelSize(33);
   emptyDiff__105->GetXaxis()->SetTitleSize(33);
   emptyDiff__105->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__105->GetXaxis()->SetTitleFont(43);
   emptyDiff__105->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__105->GetYaxis()->CenterTitle(true);
   emptyDiff__105->GetYaxis()->SetNdivisions(505);
   emptyDiff__105->GetYaxis()->SetLabelFont(43);
   emptyDiff__105->GetYaxis()->SetLabelSize(33);
   emptyDiff__105->GetYaxis()->SetTitleSize(33);
   emptyDiff__105->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__105->GetYaxis()->SetTitleFont(43);
   emptyDiff__105->GetZaxis()->SetLabelFont(42);
   emptyDiff__105->GetZaxis()->SetLabelSize(0.035);
   emptyDiff__105->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__105->GetZaxis()->SetTitleFont(42);
   emptyDiff__105->Draw("");
   
   Double_t syst2_fx1047[18] = {
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
   Double_t syst2_fy1047[18] = {
   1.535077e-05,
   -0.0007434791,
   -0.00264683,
   -0.006747932,
   -0.008360799,
   -0.008791517,
   -0.002983922,
   -0.001095788,
   0.005616006,
   0.01185525,
   0.01431828,
   0.01110858,
   0.01203701,
   0.007814697,
   0.002880965,
   -0.006743476,
   -0.008899145,
   -0.004495313};
   Double_t syst2_fex1047[18] = {
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
   Double_t syst2_fey1047[18] = {
   -8.663962e-05,
   -0.00107518,
   -0.002472978,
   -0.002694967,
   -0.002559614,
   -0.002396049,
   -0.002132542,
   -0.00161969,
   -0.001988911,
   -0.001922936,
   -0.002412444,
   -0.002773652,
   -0.002851846,
   -0.002767232,
   -0.002473939,
   -0.001896328,
   -0.00182296,
   -0.001142843};
   gre = new TGraphErrors(18,syst2_fx1047,syst2_fy1047,syst2_fex1047,syst2_fey1047);
   gre->SetName("syst2");
   gre->SetTitle("Graph");

   ci = 1353;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_syst210411047 = new TH1F("Graph_Graph_syst210411047","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst210411047->SetMinimum(-0.01122089);
   Graph_Graph_syst210411047->SetMaximum(0.01664002);
   Graph_Graph_syst210411047->SetDirectory(0);
   Graph_Graph_syst210411047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_syst210411047->SetLineColor(ci);
   Graph_Graph_syst210411047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst210411047->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_syst210411047->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_syst210411047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst210411047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst210411047->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_syst210411047->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_syst210411047->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_syst210411047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst210411047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst210411047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_syst210411047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst210411047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst210411047);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff12_fx3091[18] = {
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
   Double_t NLOdiff12_fy3091[18] = {
   1000,
   -0.0004465462,
   -0.0005879244,
   -0.001400495,
   -0.001065039,
   0.0003926218,
   0.001735975,
   0.00462382,
   0.004677657,
   0.004595667,
   0.004556737,
   0.002541063,
   -0.001115999,
   -0.001858833,
   -0.003235808,
   -0.005247513,
   -0.002920397,
   -0.0009391818};
   Double_t NLOdiff12_felx3091[18] = {
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
   Double_t NLOdiff12_fely3091[18] = {
   2.406249e-05,
   0,
   0.002872163,
   0.003072998,
   0.003204504,
   0.00517997,
   0.005038007,
   0.00645805,
   0.004943498,
   0.003616877,
   0.002161247,
   0.00181634,
   0.002781968,
   0.004474884,
   0.007992038,
   0.002719376,
   0.003837696,
   0.0007219828};
   Double_t NLOdiff12_fehx3091[18] = {
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
   Double_t NLOdiff12_fehy3091[18] = {
   1.714166e-05,
   0.0008361511,
   0.0004099977,
   0.001351633,
   0.00355641,
   0.002666815,
   0.004573556,
   0.003801565,
   0.005315445,
   0.00495988,
   0.004336193,
   0.005983629,
   0.005115491,
   0.005098238,
   0.003062537,
   0.006801726,
   0.002399884,
   0.0008191386};
   grae = new TGraphAsymmErrors(18,NLOdiff12_fx3091,NLOdiff12_fy3091,NLOdiff12_felx3091,NLOdiff12_fehx3091,NLOdiff12_fely3091,NLOdiff12_fehy3091);
   grae->SetName("NLOdiff12");
   grae->SetTitle("");

   ci = 1354;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff123091 = new TH1F("Graph_NLOdiff123091","",100,-3.5065,3.5915);
   Graph_NLOdiff123091->SetMinimum(-100.0124);
   Graph_NLOdiff123091->SetMaximum(1100.001);
   Graph_NLOdiff123091->SetDirectory(0);
   Graph_NLOdiff123091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff123091->SetLineColor(ci);
   Graph_NLOdiff123091->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff123091->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff123091->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff123091->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff123091->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff123091->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff123091->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff123091->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff123091->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff123091->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff123091->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff123091->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff123091->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff123091);
   
   grae->Draw(" 2");
   
   Double_t g_fx3092[18] = {
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
   Double_t g_fy3092[18] = {
   1000,
   -0.001438556,
   -0.006000012,
   -0.009590469,
   -0.01117775,
   -0.01139371,
   -0.008605161,
   -0.002756128,
   0.003670798,
   0.01040493,
   0.01624062,
   0.01578432,
   0.01098411,
   0.006692187,
   0.002279089,
   -0.002587309,
   -0.003998378,
   -0.001542714};
   Double_t g_felx3092[18] = {
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
   Double_t g_fely3092[18] = {
   9.542319e-06,
   0.0003813169,
   0.002447423,
   0.005496962,
   0.007244941,
   0.007226356,
   0.007041082,
   0.003927913,
   0.004191482,
   0.005114701,
   0.01169698,
   0.009703993,
   0.006520057,
   0.005820116,
   0.007783645,
   0.008105144,
   0.004855813,
   0.001146281};
   Double_t g_fehx3092[18] = {
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
   Double_t g_fehy3092[18] = {
   2.571905e-05,
   0.0007909542,
   0.003523902,
   0.004495148,
   0.006671639,
   0.008855243,
   0.007834114,
   0.008069439,
   0.005101175,
   0.004824545,
   0.003456875,
   0.007856172,
   0.009329481,
   0.009335525,
   0.00481173,
   0.004151594,
   0.004972203,
   0.001316117};
   grae = new TGraphAsymmErrors(18,g_fx3092,g_fy3092,g_felx3092,g_fehx3092,g_fely3092,g_fehy3092);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1355;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3092 = new TH1F("Graph_g3092","",100,-3.5065,3.5915);
   Graph_g3092->SetMinimum(-100.0205);
   Graph_g3092->SetMaximum(1100.002);
   Graph_g3092->SetDirectory(0);
   Graph_g3092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3092->SetLineColor(ci);
   Graph_g3092->GetXaxis()->SetLabelFont(42);
   Graph_g3092->GetXaxis()->SetLabelSize(0.035);
   Graph_g3092->GetXaxis()->SetTitleSize(0.035);
   Graph_g3092->GetXaxis()->SetTitleFont(42);
   Graph_g3092->GetYaxis()->SetLabelFont(42);
   Graph_g3092->GetYaxis()->SetLabelSize(0.035);
   Graph_g3092->GetYaxis()->SetTitleSize(0.035);
   Graph_g3092->GetYaxis()->SetTitleOffset(0);
   Graph_g3092->GetYaxis()->SetTitleFont(42);
   Graph_g3092->GetZaxis()->SetLabelFont(42);
   Graph_g3092->GetZaxis()->SetLabelSize(0.035);
   Graph_g3092->GetZaxis()->SetTitleSize(0.035);
   Graph_g3092->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3092);
   
   grae->Draw(" 2");
   
   Double_t g_fx3093[18] = {
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
   Double_t g_fy3093[18] = {
   1000,
   -0.00183679,
   -0.007717623,
   -0.01196089,
   -0.01312375,
   -0.01019274,
   -0.004646041,
   0.006946964,
   0.01587684,
   0.0223891,
   0.02471301,
   0.01963326,
   0.01146197,
   0.002622787,
   -0.007417934,
   -0.01369818,
   -0.01205763,
   -0.003542997};
   Double_t g_felx3093[18] = {
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
   Double_t g_fely3093[18] = {
   3.36031e-05,
   0.0005541562,
   0.0005578129,
   0.002460655,
   0.004416135,
   0.00674145,
   0.002825761,
   0.002484394,
   0.006896281,
   0.007976185,
   0.01166399,
   0.007524865,
   0.007917553,
   0.008526755,
   0.001907721,
   0.002953654,
   0.002687968,
   0.000779074};
   Double_t g_fehx3093[18] = {
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
   Double_t g_fehy3093[18] = {
   1.403595e-05,
   0.0006092048,
   0.005028212,
   0.004932692,
   0.005801961,
   0.004510464,
   0.006979815,
   0.005051237,
   0.002353172,
   0.00344931,
   0.004225458,
   0.009284048,
   0.003515597,
   0.000979423,
   0.004694557,
   0.004282652,
   0.00449928,
   0.001607798};
   grae = new TGraphAsymmErrors(18,g_fx3093,g_fy3093,g_felx3093,g_fehx3093,g_fely3093,g_fehy3093);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1356;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3093 = new TH1F("Graph_g3093","",100,-3.5065,3.5915);
   Graph_g3093->SetMinimum(-100.0193);
   Graph_g3093->SetMaximum(1100.002);
   Graph_g3093->SetDirectory(0);
   Graph_g3093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3093->SetLineColor(ci);
   Graph_g3093->GetXaxis()->SetLabelFont(42);
   Graph_g3093->GetXaxis()->SetLabelSize(0.035);
   Graph_g3093->GetXaxis()->SetTitleSize(0.035);
   Graph_g3093->GetXaxis()->SetTitleFont(42);
   Graph_g3093->GetYaxis()->SetLabelFont(42);
   Graph_g3093->GetYaxis()->SetLabelSize(0.035);
   Graph_g3093->GetYaxis()->SetTitleSize(0.035);
   Graph_g3093->GetYaxis()->SetTitleOffset(0);
   Graph_g3093->GetYaxis()->SetTitleFont(42);
   Graph_g3093->GetZaxis()->SetLabelFont(42);
   Graph_g3093->GetZaxis()->SetLabelSize(0.035);
   Graph_g3093->GetZaxis()->SetTitleSize(0.035);
   Graph_g3093->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3093);
   
   grae->Draw(" 2");
   Double_t xAxis59[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_2__106 = new TH1D("hist_eta_diff_2__106","",18, xAxis59);
   hist_eta_diff_2__106->SetBinContent(1,1000);
   hist_eta_diff_2__106->SetBinContent(2,-0.0007434791);
   hist_eta_diff_2__106->SetBinContent(3,-0.00264683);
   hist_eta_diff_2__106->SetBinContent(4,-0.006747932);
   hist_eta_diff_2__106->SetBinContent(5,-0.008360799);
   hist_eta_diff_2__106->SetBinContent(6,-0.008791517);
   hist_eta_diff_2__106->SetBinContent(7,-0.002983922);
   hist_eta_diff_2__106->SetBinContent(8,-0.001095788);
   hist_eta_diff_2__106->SetBinContent(9,0.005616005);
   hist_eta_diff_2__106->SetBinContent(10,0.01185525);
   hist_eta_diff_2__106->SetBinContent(11,0.01431828);
   hist_eta_diff_2__106->SetBinContent(12,0.01110858);
   hist_eta_diff_2__106->SetBinContent(13,0.01203701);
   hist_eta_diff_2__106->SetBinContent(14,0.007814697);
   hist_eta_diff_2__106->SetBinContent(15,0.002880965);
   hist_eta_diff_2__106->SetBinContent(16,-0.006743476);
   hist_eta_diff_2__106->SetBinContent(17,-0.008899145);
   hist_eta_diff_2__106->SetBinContent(18,-0.004495313);
   hist_eta_diff_2__106->SetBinError(1,3.64286e-05);
   hist_eta_diff_2__106->SetBinError(2,0.0002019178);
   hist_eta_diff_2__106->SetBinError(3,0.0007261993);
   hist_eta_diff_2__106->SetBinError(4,0.001085436);
   hist_eta_diff_2__106->SetBinError(5,0.001457026);
   hist_eta_diff_2__106->SetBinError(6,0.001771422);
   hist_eta_diff_2__106->SetBinError(7,0.002060002);
   hist_eta_diff_2__106->SetBinError(8,0.002278251);
   hist_eta_diff_2__106->SetBinError(9,0.002461232);
   hist_eta_diff_2__106->SetBinError(10,0.002567639);
   hist_eta_diff_2__106->SetBinError(11,0.002632483);
   hist_eta_diff_2__106->SetBinError(12,0.002623354);
   hist_eta_diff_2__106->SetBinError(13,0.00255506);
   hist_eta_diff_2__106->SetBinError(14,0.0023995);
   hist_eta_diff_2__106->SetBinError(15,0.002209118);
   hist_eta_diff_2__106->SetBinError(16,0.001920706);
   hist_eta_diff_2__106->SetBinError(17,0.0009906164);
   hist_eta_diff_2__106->SetBinError(18,0.0004105269);
   hist_eta_diff_2__106->SetEntries(5.07936);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_2__106->SetLineColor(ci);
   hist_eta_diff_2__106->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_2__106->SetMarkerColor(ci);
   hist_eta_diff_2__106->SetMarkerStyle(20);
   hist_eta_diff_2__106->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_2__106->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_2__106->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_2__106->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_2__106->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_2__106->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_2__106->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_2__106->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_2__106->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_2__106->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_2__106->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_2__106->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_2__106->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_2__106->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_2__106->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_2__106->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_2__106->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_2__106->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_2__106->Draw("same");
   line = new TLine(-2.999,0,2.999,0);
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
   p_2_0->Modified();
   cDiff1->cd();
  
// ------------>Primitives in pad: p_2_1
   TPad *p_2_1 = new TPad("p_2_1", "p_2_1",0.673315,0,1,0.539394);
   p_2_1->Draw();
   p_2_1->cd();
   p_2_1->Range(-2.999,-0.06526316,3.740326,0.04);
   p_2_1->SetFillColor(0);
   p_2_1->SetBorderMode(0);
   p_2_1->SetBorderSize(2);
   p_2_1->SetLeftMargin(0);
   p_2_1->SetTopMargin(0);
   p_2_1->SetBottomMargin(0.24);
   p_2_1->SetFrameBorderMode(0);
   p_2_1->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__107 = new TH1D("emptyDiff__107","",10,-2.999,2.999);
   emptyDiff__107->SetBinContent(7,1000);
   emptyDiff__107->SetBinError(7,1000);
   emptyDiff__107->SetMinimum(-0.04);
   emptyDiff__107->SetMaximum(0.04);
   emptyDiff__107->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__107->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__107);

   ci = TColor::GetColor("#000099");
   emptyDiff__107->SetLineColor(ci);
   emptyDiff__107->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__107->GetXaxis()->CenterTitle(true);
   emptyDiff__107->GetXaxis()->SetLabelFont(43);
   emptyDiff__107->GetXaxis()->SetLabelSize(33);
   emptyDiff__107->GetXaxis()->SetTitleSize(33);
   emptyDiff__107->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__107->GetXaxis()->SetTitleFont(43);
   emptyDiff__107->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__107->GetYaxis()->CenterTitle(true);
   emptyDiff__107->GetYaxis()->SetNdivisions(505);
   emptyDiff__107->GetYaxis()->SetLabelFont(43);
   emptyDiff__107->GetYaxis()->SetLabelSize(33);
   emptyDiff__107->GetYaxis()->SetTitleSize(33);
   emptyDiff__107->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__107->GetYaxis()->SetTitleFont(43);
   emptyDiff__107->GetZaxis()->SetLabelFont(42);
   emptyDiff__107->GetZaxis()->SetLabelSize(0.035);
   emptyDiff__107->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__107->GetZaxis()->SetTitleFont(42);
   emptyDiff__107->Draw("");
   
   Double_t syst5_fx1048[18] = {
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
   Double_t syst5_fy1048[18] = {
   0,
   4.068863e-05,
   -0.000231627,
   -0.0004441691,
   -0.006146464,
   -0.008650904,
   -0.01420409,
   -0.007385068,
   -0.004160683,
   0.005806692,
   0.002991025,
   0.01594112,
   0.001562034,
   0.007139726,
   0.01059329,
   5.442149e-05,
   -0.001297447,
   -0.0001758954};
   Double_t syst5_fex1048[18] = {
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
   Double_t syst5_fey1048[18] = {
   -0,
   -4.315877e-06,
   -0.000113736,
   -0.0005039157,
   -0.001178359,
   -0.001898505,
   -0.002541709,
   -0.00226703,
   -0.002238202,
   -0.00226173,
   -0.002086217,
   -0.001561524,
   -0.00148199,
   -0.001924115,
   -0.002352628,
   -0.002560969,
   -0.002115565,
   -0.0002551883};
   gre = new TGraphErrors(18,syst5_fx1048,syst5_fy1048,syst5_fex1048,syst5_fey1048);
   gre->SetName("syst5");
   gre->SetTitle("Graph");

   ci = 1368;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_syst510421048 = new TH1F("Graph_Graph_syst510421048","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst510421048->SetMinimum(-0.01721861);
   Graph_Graph_syst510421048->SetMaximum(0.01895564);
   Graph_Graph_syst510421048->SetDirectory(0);
   Graph_Graph_syst510421048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_syst510421048->SetLineColor(ci);
   Graph_Graph_syst510421048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst510421048->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_syst510421048->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_syst510421048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst510421048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst510421048->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_syst510421048->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_syst510421048->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_syst510421048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst510421048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst510421048->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_syst510421048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst510421048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst510421048);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff15_fx3094[18] = {
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
   Double_t NLOdiff15_fy3094[18] = {
   1000,
   1000,
   -0.0001034038,
   -0.0007069603,
   -0.001939851,
   -0.003235874,
   -0.004241581,
   -0.002585043,
   6.952878e-05,
   0.002933326,
   0.00396762,
   0.00449125,
   0.004523745,
   0.001662738,
   -0.0001826763,
   -0.00200756,
   -0.001145613,
   -0.0001737743};
   Double_t NLOdiff15_felx3094[18] = {
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
   Double_t NLOdiff15_fely3094[18] = {
   0,
   2.512892e-06,
   0.0001419953,
   0.0007202851,
   0.001330774,
   0.001180792,
   0.001417271,
   0.002692901,
   0.004489256,
   0.005926035,
   0.001124788,
   0.001728563,
   0.005028842,
   0.004467971,
   0.003498947,
   0.003326788,
   0.001491585,
   0.00024335};
   Double_t NLOdiff15_fehx3094[18] = {
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
   Double_t NLOdiff15_fehy3094[18] = {
   0,
   7.465334e-06,
   0.0003198337,
   0.000124667,
   0.000461185,
   0.002400866,
   0.00405068,
   0.004660981,
   0.003046227,
   0.0009853859,
   0.006056552,
   0.003049947,
   0.001123393,
   0.00271215,
   0.00412865,
   0.004238177,
   0.002018195,
   0.0001874055};
   grae = new TGraphAsymmErrors(18,NLOdiff15_fx3094,NLOdiff15_fy3094,NLOdiff15_felx3094,NLOdiff15_fehx3094,NLOdiff15_fely3094,NLOdiff15_fehy3094);
   grae->SetName("NLOdiff15");
   grae->SetTitle("");

   ci = 1369;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff153094 = new TH1F("Graph_NLOdiff153094","",100,-3.5065,3.5915);
   Graph_NLOdiff153094->SetMinimum(-100.0062);
   Graph_NLOdiff153094->SetMaximum(1100.001);
   Graph_NLOdiff153094->SetDirectory(0);
   Graph_NLOdiff153094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff153094->SetLineColor(ci);
   Graph_NLOdiff153094->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff153094->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff153094->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff153094->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff153094->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff153094->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff153094->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff153094->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff153094->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff153094->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff153094->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff153094->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff153094->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff153094);
   
   grae->Draw(" 2");
   
   Double_t g_fx3095[18] = {
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
   Double_t g_fy3095[18] = {
   1000,
   1000,
   -2.805159e-05,
   -0.002049041,
   -0.007069814,
   -0.01321812,
   -0.01877771,
   -0.01861815,
   -0.01526526,
   -0.007732138,
   0.002936492,
   0.01283611,
   0.02017953,
   0.0202108,
   0.0154617,
   0.007538945,
   0.001922824,
   -0.0001337669};
   Double_t g_felx3095[18] = {
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
   Double_t g_fely3095[18] = {
   0,
   3.58822e-06,
   7.826098e-05,
   0.0004266119,
   0.002703349,
   0.007649399,
   0.009470844,
   0.01205792,
   0.008580015,
   0.006207556,
   0.00184871,
   0.005508362,
   0.009698882,
   0.01197646,
   0.00973142,
   0.006072172,
   0.003521374,
   0.0002176576};
   Double_t g_fehx3095[18] = {
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
   Double_t g_fehy3095[18] = {
   0,
   3.236676e-06,
   0.000153568,
   0.0007571032,
   0.002135464,
   0.004585351,
   0.008686807,
   0.01022795,
   0.01120541,
   0.008449555,
   0.003469464,
   0.00607252,
   0.009424845,
   0.01208189,
   0.01035818,
   0.007064155,
   0.00216038,
   0.0002872872};
   grae = new TGraphAsymmErrors(18,g_fx3095,g_fy3095,g_felx3095,g_fehx3095,g_fely3095,g_fehy3095);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1370;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3095 = new TH1F("Graph_g3095","",100,-3.5065,3.5915);
   Graph_g3095->SetMinimum(-100.0337);
   Graph_g3095->SetMaximum(1100.003);
   Graph_g3095->SetDirectory(0);
   Graph_g3095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3095->SetLineColor(ci);
   Graph_g3095->GetXaxis()->SetLabelFont(42);
   Graph_g3095->GetXaxis()->SetLabelSize(0.035);
   Graph_g3095->GetXaxis()->SetTitleSize(0.035);
   Graph_g3095->GetXaxis()->SetTitleFont(42);
   Graph_g3095->GetYaxis()->SetLabelFont(42);
   Graph_g3095->GetYaxis()->SetLabelSize(0.035);
   Graph_g3095->GetYaxis()->SetTitleSize(0.035);
   Graph_g3095->GetYaxis()->SetTitleOffset(0);
   Graph_g3095->GetYaxis()->SetTitleFont(42);
   Graph_g3095->GetZaxis()->SetLabelFont(42);
   Graph_g3095->GetZaxis()->SetLabelSize(0.035);
   Graph_g3095->GetZaxis()->SetTitleSize(0.035);
   Graph_g3095->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3095);
   
   grae->Draw(" 2");
   
   Double_t g_fx3096[18] = {
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
   Double_t g_fy3096[18] = {
   1000,
   1000,
   -0.0003197441,
   -0.003143593,
   -0.009959785,
   -0.01831629,
   -0.02544707,
   -0.02488517,
   -0.01731973,
   -0.002961672,
   0.01268076,
   0.02405397,
   0.02947758,
   0.02348236,
   0.01398353,
   0.002893778,
   -0.001661295,
   -0.0004455799};
   Double_t g_felx3096[18] = {
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
   Double_t g_fely3096[18] = {
   0,
   2.876623e-06,
   9.691324e-05,
   0.0009367752,
   0.00162986,
   0.004782474,
   0.004294042,
   0.004604361,
   0.0008595445,
   0.008316281,
   0.01051157,
   0.01054024,
   0.01128936,
   0.001095441,
   0.004801833,
   0.004473315,
   0.003720509,
   0.0004380818};
   Double_t g_fehx3096[18] = {
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
   Double_t g_fehy3096[18] = {
   0,
   1.318263e-06,
   0.000150612,
   0.0008677118,
   0.003074669,
   0.004083886,
   0.00675368,
   0.005044308,
   0.003479525,
   0.004688588,
   0.009615234,
   0.009912833,
   0.003606079,
   0.003511345,
   0.006249249,
   0.008597997,
   0.003097817,
   0.0002534137};
   grae = new TGraphAsymmErrors(18,g_fx3096,g_fy3096,g_felx3096,g_fehx3096,g_fely3096,g_fehy3096);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1371;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3096 = new TH1F("Graph_g3096","",100,-3.5065,3.5915);
   Graph_g3096->SetMinimum(-100.0327);
   Graph_g3096->SetMaximum(1100.003);
   Graph_g3096->SetDirectory(0);
   Graph_g3096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3096->SetLineColor(ci);
   Graph_g3096->GetXaxis()->SetLabelFont(42);
   Graph_g3096->GetXaxis()->SetLabelSize(0.035);
   Graph_g3096->GetXaxis()->SetTitleSize(0.035);
   Graph_g3096->GetXaxis()->SetTitleFont(42);
   Graph_g3096->GetYaxis()->SetLabelFont(42);
   Graph_g3096->GetYaxis()->SetLabelSize(0.035);
   Graph_g3096->GetYaxis()->SetTitleSize(0.035);
   Graph_g3096->GetYaxis()->SetTitleOffset(0);
   Graph_g3096->GetYaxis()->SetTitleFont(42);
   Graph_g3096->GetZaxis()->SetLabelFont(42);
   Graph_g3096->GetZaxis()->SetLabelSize(0.035);
   Graph_g3096->GetZaxis()->SetTitleSize(0.035);
   Graph_g3096->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3096);
   
   grae->Draw(" 2");
   Double_t xAxis60[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_5__108 = new TH1D("hist_eta_diff_5__108","",18, xAxis60);
   hist_eta_diff_5__108->SetBinContent(1,1000);
   hist_eta_diff_5__108->SetBinContent(2,1000);
   hist_eta_diff_5__108->SetBinContent(3,-0.000231627);
   hist_eta_diff_5__108->SetBinContent(4,-0.0004441691);
   hist_eta_diff_5__108->SetBinContent(5,-0.006146463);
   hist_eta_diff_5__108->SetBinContent(6,-0.008650904);
   hist_eta_diff_5__108->SetBinContent(7,-0.01420409);
   hist_eta_diff_5__108->SetBinContent(8,-0.007385068);
   hist_eta_diff_5__108->SetBinContent(9,-0.004160683);
   hist_eta_diff_5__108->SetBinContent(10,0.005806692);
   hist_eta_diff_5__108->SetBinContent(11,0.002991025);
   hist_eta_diff_5__108->SetBinContent(12,0.01594112);
   hist_eta_diff_5__108->SetBinContent(13,0.001562034);
   hist_eta_diff_5__108->SetBinContent(14,0.007139726);
   hist_eta_diff_5__108->SetBinContent(15,0.01059329);
   hist_eta_diff_5__108->SetBinContent(16,5.442149e-05);
   hist_eta_diff_5__108->SetBinContent(17,-0.001297447);
   hist_eta_diff_5__108->SetBinContent(18,-0.0001758954);
   hist_eta_diff_5__108->SetBinError(2,4.210661e-05);
   hist_eta_diff_5__108->SetBinError(3,0.0002506667);
   hist_eta_diff_5__108->SetBinError(4,0.0007501734);
   hist_eta_diff_5__108->SetBinError(5,0.001504988);
   hist_eta_diff_5__108->SetBinError(6,0.002486229);
   hist_eta_diff_5__108->SetBinError(7,0.003369907);
   hist_eta_diff_5__108->SetBinError(8,0.004244332);
   hist_eta_diff_5__108->SetBinError(9,0.00487882);
   hist_eta_diff_5__108->SetBinError(10,0.005336955);
   hist_eta_diff_5__108->SetBinError(11,0.005553947);
   hist_eta_diff_5__108->SetBinError(12,0.005613235);
   hist_eta_diff_5__108->SetBinError(13,0.005352013);
   hist_eta_diff_5__108->SetBinError(14,0.004955815);
   hist_eta_diff_5__108->SetBinError(15,0.004350144);
   hist_eta_diff_5__108->SetBinError(16,0.003455892);
   hist_eta_diff_5__108->SetBinError(17,0.001455941);
   hist_eta_diff_5__108->SetBinError(18,0.0003498162);
   hist_eta_diff_5__108->SetEntries(4.008574);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_5__108->SetLineColor(ci);
   hist_eta_diff_5__108->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_5__108->SetMarkerColor(ci);
   hist_eta_diff_5__108->SetMarkerStyle(20);
   hist_eta_diff_5__108->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_5__108->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_5__108->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_5__108->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_5__108->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_5__108->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_5__108->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_5__108->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_5__108->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_5__108->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_5__108->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_5__108->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_5__108->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_5__108->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_5__108->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_5__108->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_5__108->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_5__108->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_5__108->Draw("same");
   line = new TLine(-2.999,0,2.999,0);
   line->Draw();
      tex = new TLatex(0.35,0.29,"p_{T}^{ave} > 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.05,0.65,0.5,0.9,NULL,"brNDC");
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

   ci = 1283;
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
   entry=leg->AddEntry("g","DSSZ`","f");

   ci = 1254;
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

   ci = 1255;
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

   ci = 1256;
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
   
   leg = new TLegend(0.05,0.65,0.5,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   leg->Draw();
   p_2_1->Modified();
   cDiff1->cd();
   cDiff1->Modified();
   cDiff1->cd();
   cDiff1->SetSelected(cDiff1);
}
