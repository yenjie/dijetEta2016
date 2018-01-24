void pPbppDiffCT()
{
//=========Macro generated from canvas: cDiff1/
//=========  (Tue Aug  2 10:06:25 2016) by ROOT version6.06/01

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cDiff1 = new TCanvas("cDiff1", "",0,0,1300,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   cDiff1->Range(0,0,1,1);
   cDiff1->SetFillColor(0);
   cDiff1->SetBorderMode(0);
   cDiff1->SetBorderSize(0);
   cDiff1->SetTickx(1);
   cDiff1->SetTicky(1);
   cDiff1->SetLeftMargin(0.17);
   cDiff1->SetRightMargin(0.01);
   cDiff1->SetTopMargin(0.01);
   cDiff1->SetBottomMargin(0.15);
   cDiff1->SetFrameLineColor(0);
   cDiff1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.5393939,0.3825653,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-4.893105,-0.04,2.999,0.04988764);
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
   
   TH1D *emptyDiff__97 = new TH1D("emptyDiff__97","",10,-2.999,2.999);
   emptyDiff__97->SetBinContent(7,1000);
   emptyDiff__97->SetBinError(7,1000);
   emptyDiff__97->SetMinimum(-0.04);
   emptyDiff__97->SetMaximum(0.04);
   emptyDiff__97->SetEntries(1);
   emptyDiff__97->SetLineStyle(0);
   emptyDiff__97->SetMarkerStyle(20);
   emptyDiff__97->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__97->GetXaxis()->CenterTitle(true);
   emptyDiff__97->GetXaxis()->SetLabelFont(43);
   emptyDiff__97->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__97->GetXaxis()->SetLabelSize(33);
   emptyDiff__97->GetXaxis()->SetTitleSize(33);
   emptyDiff__97->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__97->GetXaxis()->SetTitleFont(43);
   emptyDiff__97->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__97->GetYaxis()->CenterTitle(true);
   emptyDiff__97->GetYaxis()->SetNdivisions(505);
   emptyDiff__97->GetYaxis()->SetLabelFont(43);
   emptyDiff__97->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__97->GetYaxis()->SetLabelSize(33);
   emptyDiff__97->GetYaxis()->SetTitleSize(33);
   emptyDiff__97->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__97->GetYaxis()->SetTitleFont(43);
   emptyDiff__97->GetZaxis()->SetLabelFont(42);
   emptyDiff__97->GetZaxis()->SetLabelSize(0.045);
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
   -7.867815e-05,
   -0.006040556,
   0.0001819847,
   -0.006536377,
   0.003402429,
   -0.006435731,
   0.01130003,
   0.006604965,
   0.009938616,
   0.009274246,
   -0.006981939,
   0.007833979,
   0.009811033,
   0.007450904,
   -0.000942083,
   -0.008778105,
   -0.006260033,
   -0.005722047};
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

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1344;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_syst010371043 = new TH1F("Graph_Graph_syst010371043","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst010371043->SetMinimum(-0.01078592);
   Graph_Graph_syst010371043->SetMaximum(0.01330784);
   Graph_Graph_syst010371043->SetDirectory(0);
   Graph_Graph_syst010371043->SetStats(0);
   Graph_Graph_syst010371043->SetLineStyle(0);
   Graph_Graph_syst010371043->SetMarkerStyle(20);
   Graph_Graph_syst010371043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst010371043->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst010371043->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_syst010371043->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_syst010371043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst010371043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst010371043->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst010371043->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_syst010371043->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_syst010371043->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_syst010371043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst010371043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst010371043->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_syst010371043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst010371043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst010371043);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff10_fx3103[18] = {
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
   Double_t NLOdiff10_fy3103[18] = {
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
   Double_t NLOdiff10_felx3103[18] = {
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
   Double_t NLOdiff10_fely3103[18] = {
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
   Double_t NLOdiff10_fehx3103[18] = {
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
   Double_t NLOdiff10_fehy3103[18] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,NLOdiff10_fx3103,NLOdiff10_fy3103,NLOdiff10_felx3103,NLOdiff10_fehx3103,NLOdiff10_fely3103,NLOdiff10_fehy3103);
   grae->SetName("NLOdiff10");
   grae->SetTitle("");

   ci = 1345;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff103103 = new TH1F("Graph_NLOdiff103103","",100,-3.5065,3.5915);
   Graph_NLOdiff103103->SetMinimum(-0.01206816);
   Graph_NLOdiff103103->SetMaximum(0.01236015);
   Graph_NLOdiff103103->SetDirectory(0);
   Graph_NLOdiff103103->SetStats(0);
   Graph_NLOdiff103103->SetLineStyle(0);
   Graph_NLOdiff103103->SetMarkerStyle(20);
   Graph_NLOdiff103103->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff103103->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff103103->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff103103->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff103103->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff103103->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff103103->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff103103->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff103103->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff103103->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff103103->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff103103->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff103103->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff103103->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff103103->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff103103);
   
   grae->Draw(" 2");
   
   Double_t g_fx3104[18] = {
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
   Double_t g_fy3104[18] = {
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
   Double_t g_felx3104[18] = {
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
   Double_t g_fely3104[18] = {
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
   Double_t g_fehx3104[18] = {
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
   Double_t g_fehy3104[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3104,g_fy3104,g_felx3104,g_fehx3104,g_fely3104,g_fehy3104);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1346;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3104 = new TH1F("Graph_g3104","",100,-3.5065,3.5915);
   Graph_g3104->SetMinimum(-0.02228135);
   Graph_g3104->SetMaximum(0.02411863);
   Graph_g3104->SetDirectory(0);
   Graph_g3104->SetStats(0);
   Graph_g3104->SetLineStyle(0);
   Graph_g3104->SetMarkerStyle(20);
   Graph_g3104->GetXaxis()->SetLabelFont(42);
   Graph_g3104->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3104->GetXaxis()->SetLabelSize(0.045);
   Graph_g3104->GetXaxis()->SetTitleSize(0.055);
   Graph_g3104->GetXaxis()->SetTitleFont(42);
   Graph_g3104->GetYaxis()->SetLabelFont(42);
   Graph_g3104->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3104->GetYaxis()->SetLabelSize(0.045);
   Graph_g3104->GetYaxis()->SetTitleSize(0.055);
   Graph_g3104->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3104->GetYaxis()->SetTitleFont(42);
   Graph_g3104->GetZaxis()->SetLabelFont(42);
   Graph_g3104->GetZaxis()->SetLabelSize(0.045);
   Graph_g3104->GetZaxis()->SetTitleSize(0.035);
   Graph_g3104->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3104);
   
   grae->Draw(" 2");
   
   Double_t g_fx3105[18] = {
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
   Double_t g_fy3105[18] = {
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
   Double_t g_felx3105[18] = {
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
   Double_t g_fely3105[18] = {
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
   Double_t g_fehx3105[18] = {
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
   Double_t g_fehy3105[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3105,g_fy3105,g_felx3105,g_fehx3105,g_fely3105,g_fehy3105);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1347;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3105 = new TH1F("Graph_g3105","",100,-3.5065,3.5915);
   Graph_g3105->SetMinimum(-0.03125001);
   Graph_g3105->SetMaximum(0.03058892);
   Graph_g3105->SetDirectory(0);
   Graph_g3105->SetStats(0);
   Graph_g3105->SetLineStyle(0);
   Graph_g3105->SetMarkerStyle(20);
   Graph_g3105->GetXaxis()->SetLabelFont(42);
   Graph_g3105->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3105->GetXaxis()->SetLabelSize(0.045);
   Graph_g3105->GetXaxis()->SetTitleSize(0.055);
   Graph_g3105->GetXaxis()->SetTitleFont(42);
   Graph_g3105->GetYaxis()->SetLabelFont(42);
   Graph_g3105->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3105->GetYaxis()->SetLabelSize(0.045);
   Graph_g3105->GetYaxis()->SetTitleSize(0.055);
   Graph_g3105->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3105->GetYaxis()->SetTitleFont(42);
   Graph_g3105->GetZaxis()->SetLabelFont(42);
   Graph_g3105->GetZaxis()->SetLabelSize(0.045);
   Graph_g3105->GetZaxis()->SetTitleSize(0.035);
   Graph_g3105->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3105);
   
   grae->Draw(" 2");
   Double_t xAxis55[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_0__98 = new TH1D("hist_eta_diff_0__98","",18, xAxis55);
   hist_eta_diff_0__98->SetBinContent(0,-1.406952e-05);
   hist_eta_diff_0__98->SetBinContent(1,-7.867816e-05);
   hist_eta_diff_0__98->SetBinContent(2,-0.006040556);
   hist_eta_diff_0__98->SetBinContent(3,0.0001819847);
   hist_eta_diff_0__98->SetBinContent(4,-0.006536377);
   hist_eta_diff_0__98->SetBinContent(5,0.003402429);
   hist_eta_diff_0__98->SetBinContent(6,-0.006435732);
   hist_eta_diff_0__98->SetBinContent(7,0.01130003);
   hist_eta_diff_0__98->SetBinContent(8,0.006604966);
   hist_eta_diff_0__98->SetBinContent(9,0.009938616);
   hist_eta_diff_0__98->SetBinContent(10,0.009274247);
   hist_eta_diff_0__98->SetBinContent(11,-0.006981939);
   hist_eta_diff_0__98->SetBinContent(12,0.007833979);
   hist_eta_diff_0__98->SetBinContent(13,0.009811034);
   hist_eta_diff_0__98->SetBinContent(14,0.007450904);
   hist_eta_diff_0__98->SetBinContent(15,-0.000942083);
   hist_eta_diff_0__98->SetBinContent(16,-0.008778106);
   hist_eta_diff_0__98->SetBinContent(17,-0.006260033);
   hist_eta_diff_0__98->SetBinContent(18,-0.005722047);
   hist_eta_diff_0__98->SetBinError(0,4.684612e-05);
   hist_eta_diff_0__98->SetBinError(1,0.000843362);
   hist_eta_diff_0__98->SetBinError(2,0.001592677);
   hist_eta_diff_0__98->SetBinError(3,0.003783313);
   hist_eta_diff_0__98->SetBinError(4,0.004656884);
   hist_eta_diff_0__98->SetBinError(5,0.0055279);
   hist_eta_diff_0__98->SetBinError(6,0.00622536);
   hist_eta_diff_0__98->SetBinError(7,0.006812581);
   hist_eta_diff_0__98->SetBinError(8,0.007343075);
   hist_eta_diff_0__98->SetBinError(9,0.007738899);
   hist_eta_diff_0__98->SetBinError(10,0.007932794);
   hist_eta_diff_0__98->SetBinError(11,0.007990034);
   hist_eta_diff_0__98->SetBinError(12,0.007906279);
   hist_eta_diff_0__98->SetBinError(13,0.007638776);
   hist_eta_diff_0__98->SetBinError(14,0.007278803);
   hist_eta_diff_0__98->SetBinError(15,0.006730243);
   hist_eta_diff_0__98->SetBinError(16,0.005997296);
   hist_eta_diff_0__98->SetBinError(17,0.003299181);
   hist_eta_diff_0__98->SetBinError(18,0.001614166);
   hist_eta_diff_0__98->SetEntries(0.4890708);

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
   cDiff1->cd();
  
// ------------>Primitives in pad: p_0_1
   TPad *p_0_1 = new TPad("p_0_1", "p_0_1",0,0,0.3825653,0.539394);
   p_0_1->Draw();
   p_0_1->cd();
   p_0_1->Range(-4.893105,-0.06526316,2.999,0.04);
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
   
   TH1D *emptyDiff__99 = new TH1D("emptyDiff__99","",10,-2.999,2.999);
   emptyDiff__99->SetBinContent(7,1000);
   emptyDiff__99->SetBinError(7,1000);
   emptyDiff__99->SetMinimum(-0.04);
   emptyDiff__99->SetMaximum(0.04);
   emptyDiff__99->SetEntries(1);
   emptyDiff__99->SetLineStyle(0);
   emptyDiff__99->SetMarkerStyle(20);
   emptyDiff__99->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__99->GetXaxis()->CenterTitle(true);
   emptyDiff__99->GetXaxis()->SetLabelFont(43);
   emptyDiff__99->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__99->GetXaxis()->SetLabelSize(33);
   emptyDiff__99->GetXaxis()->SetTitleSize(33);
   emptyDiff__99->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__99->GetXaxis()->SetTitleFont(43);
   emptyDiff__99->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__99->GetYaxis()->CenterTitle(true);
   emptyDiff__99->GetYaxis()->SetNdivisions(505);
   emptyDiff__99->GetYaxis()->SetLabelFont(43);
   emptyDiff__99->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__99->GetYaxis()->SetLabelSize(33);
   emptyDiff__99->GetYaxis()->SetTitleSize(33);
   emptyDiff__99->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__99->GetYaxis()->SetTitleFont(43);
   emptyDiff__99->GetZaxis()->SetLabelFont(42);
   emptyDiff__99->GetZaxis()->SetLabelSize(0.045);
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
   1.676376e-05,
   0.0002533288,
   -0.0004682001,
   -0.001474718,
   -0.004848146,
   -0.00561844,
   -0.006011639,
   -0.00105104,
   0.003374013,
   0.004087568,
   0.01112855,
   0.005620214,
   0.0101241,
   0.002199555,
   0.001125199,
   0.0001407211,
   -0.00729529,
   -0.002130288};
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

   ci = 1359;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_syst310381044 = new TH1F("Graph_Graph_syst310381044","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst310381044->SetMinimum(-0.009137674);
   Graph_Graph_syst310381044->SetMaximum(0.01297093);
   Graph_Graph_syst310381044->SetDirectory(0);
   Graph_Graph_syst310381044->SetStats(0);
   Graph_Graph_syst310381044->SetLineStyle(0);
   Graph_Graph_syst310381044->SetMarkerStyle(20);
   Graph_Graph_syst310381044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst310381044->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst310381044->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_syst310381044->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_syst310381044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst310381044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst310381044->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst310381044->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_syst310381044->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_syst310381044->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_syst310381044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst310381044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst310381044->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_syst310381044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst310381044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst310381044);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff13_fx3106[18] = {
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
   Double_t NLOdiff13_fy3106[18] = {
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
   Double_t NLOdiff13_felx3106[18] = {
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
   Double_t NLOdiff13_fely3106[18] = {
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
   Double_t NLOdiff13_fehx3106[18] = {
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
   Double_t NLOdiff13_fehy3106[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff13_fx3106,NLOdiff13_fy3106,NLOdiff13_felx3106,NLOdiff13_fehx3106,NLOdiff13_fely3106,NLOdiff13_fehy3106);
   grae->SetName("NLOdiff13");
   grae->SetTitle("");

   ci = 1360;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff133106 = new TH1F("Graph_NLOdiff133106","",100,-3.5065,3.5915);
   Graph_NLOdiff133106->SetMinimum(-100.0109);
   Graph_NLOdiff133106->SetMaximum(1100.001);
   Graph_NLOdiff133106->SetDirectory(0);
   Graph_NLOdiff133106->SetStats(0);
   Graph_NLOdiff133106->SetLineStyle(0);
   Graph_NLOdiff133106->SetMarkerStyle(20);
   Graph_NLOdiff133106->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff133106->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff133106->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff133106->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff133106->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff133106->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff133106->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff133106->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff133106->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff133106->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff133106->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff133106->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff133106->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff133106->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff133106->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff133106);
   
   grae->Draw(" 2");
   
   Double_t g_fx3107[18] = {
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
   Double_t g_fy3107[18] = {
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
   Double_t g_felx3107[18] = {
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
   Double_t g_fely3107[18] = {
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
   Double_t g_fehx3107[18] = {
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
   Double_t g_fehy3107[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3107,g_fy3107,g_felx3107,g_fehx3107,g_fely3107,g_fehy3107);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1361;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3107 = new TH1F("Graph_g3107","",100,-3.5065,3.5915);
   Graph_g3107->SetMinimum(-100.0244);
   Graph_g3107->SetMaximum(1100.002);
   Graph_g3107->SetDirectory(0);
   Graph_g3107->SetStats(0);
   Graph_g3107->SetLineStyle(0);
   Graph_g3107->SetMarkerStyle(20);
   Graph_g3107->GetXaxis()->SetLabelFont(42);
   Graph_g3107->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3107->GetXaxis()->SetLabelSize(0.045);
   Graph_g3107->GetXaxis()->SetTitleSize(0.055);
   Graph_g3107->GetXaxis()->SetTitleFont(42);
   Graph_g3107->GetYaxis()->SetLabelFont(42);
   Graph_g3107->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3107->GetYaxis()->SetLabelSize(0.045);
   Graph_g3107->GetYaxis()->SetTitleSize(0.055);
   Graph_g3107->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3107->GetYaxis()->SetTitleFont(42);
   Graph_g3107->GetZaxis()->SetLabelFont(42);
   Graph_g3107->GetZaxis()->SetLabelSize(0.045);
   Graph_g3107->GetZaxis()->SetTitleSize(0.035);
   Graph_g3107->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3107);
   
   grae->Draw(" 2");
   
   Double_t g_fx3108[18] = {
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
   Double_t g_fy3108[18] = {
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
   Double_t g_felx3108[18] = {
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
   Double_t g_fely3108[18] = {
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
   Double_t g_fehx3108[18] = {
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
   Double_t g_fehy3108[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3108,g_fy3108,g_felx3108,g_fehx3108,g_fely3108,g_fehy3108);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1362;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3108 = new TH1F("Graph_g3108","",100,-3.5065,3.5915);
   Graph_g3108->SetMinimum(-100.0246);
   Graph_g3108->SetMaximum(1100.002);
   Graph_g3108->SetDirectory(0);
   Graph_g3108->SetStats(0);
   Graph_g3108->SetLineStyle(0);
   Graph_g3108->SetMarkerStyle(20);
   Graph_g3108->GetXaxis()->SetLabelFont(42);
   Graph_g3108->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3108->GetXaxis()->SetLabelSize(0.045);
   Graph_g3108->GetXaxis()->SetTitleSize(0.055);
   Graph_g3108->GetXaxis()->SetTitleFont(42);
   Graph_g3108->GetYaxis()->SetLabelFont(42);
   Graph_g3108->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3108->GetYaxis()->SetLabelSize(0.045);
   Graph_g3108->GetYaxis()->SetTitleSize(0.055);
   Graph_g3108->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3108->GetYaxis()->SetTitleFont(42);
   Graph_g3108->GetZaxis()->SetLabelFont(42);
   Graph_g3108->GetZaxis()->SetLabelSize(0.045);
   Graph_g3108->GetZaxis()->SetTitleSize(0.035);
   Graph_g3108->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3108);
   
   grae->Draw(" 2");
   Double_t xAxis56[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_3__100 = new TH1D("hist_eta_diff_3__100","",18, xAxis56);
   hist_eta_diff_3__100->SetBinContent(1,1000);
   hist_eta_diff_3__100->SetBinContent(2,0.0002533288);
   hist_eta_diff_3__100->SetBinContent(3,-0.0004682001);
   hist_eta_diff_3__100->SetBinContent(4,-0.001474718);
   hist_eta_diff_3__100->SetBinContent(5,-0.004848146);
   hist_eta_diff_3__100->SetBinContent(6,-0.005618441);
   hist_eta_diff_3__100->SetBinContent(7,-0.006011639);
   hist_eta_diff_3__100->SetBinContent(8,-0.00105104);
   hist_eta_diff_3__100->SetBinContent(9,0.003374013);
   hist_eta_diff_3__100->SetBinContent(10,0.004087568);
   hist_eta_diff_3__100->SetBinContent(11,0.01112855);
   hist_eta_diff_3__100->SetBinContent(12,0.005620214);
   hist_eta_diff_3__100->SetBinContent(13,0.0101241);
   hist_eta_diff_3__100->SetBinContent(14,0.002199555);
   hist_eta_diff_3__100->SetBinContent(15,0.001125199);
   hist_eta_diff_3__100->SetBinContent(16,0.0001407211);
   hist_eta_diff_3__100->SetBinContent(17,-0.007295291);
   hist_eta_diff_3__100->SetBinContent(18,-0.002130288);
   hist_eta_diff_3__100->SetBinError(1,1.676376e-05);
   hist_eta_diff_3__100->SetBinError(2,0.0001122616);
   hist_eta_diff_3__100->SetBinError(3,0.0005111119);
   hist_eta_diff_3__100->SetBinError(4,0.0009013821);
   hist_eta_diff_3__100->SetBinError(5,0.001297525);
   hist_eta_diff_3__100->SetBinError(6,0.001668332);
   hist_eta_diff_3__100->SetBinError(7,0.001995131);
   hist_eta_diff_3__100->SetBinError(8,0.002266491);
   hist_eta_diff_3__100->SetBinError(9,0.002470511);
   hist_eta_diff_3__100->SetBinError(10,0.002593627);
   hist_eta_diff_3__100->SetBinError(11,0.002689247);
   hist_eta_diff_3__100->SetBinError(12,0.002668425);
   hist_eta_diff_3__100->SetBinError(13,0.002603055);
   hist_eta_diff_3__100->SetBinError(14,0.002432504);
   hist_eta_diff_3__100->SetBinError(15,0.002220043);
   hist_eta_diff_3__100->SetBinError(16,0.00194207);
   hist_eta_diff_3__100->SetBinError(17,0.0009448609);
   hist_eta_diff_3__100->SetBinError(18,0.0003574402);
   hist_eta_diff_3__100->SetEntries(3.30906);

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
   
   TH1D *emptyDiff__101 = new TH1D("emptyDiff__101","",10,-2.999,2.999);
   emptyDiff__101->SetBinContent(7,1000);
   emptyDiff__101->SetBinError(7,1000);
   emptyDiff__101->SetMinimum(-0.04);
   emptyDiff__101->SetMaximum(0.04);
   emptyDiff__101->SetEntries(1);
   emptyDiff__101->SetLineStyle(0);
   emptyDiff__101->SetMarkerStyle(20);
   emptyDiff__101->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__101->GetXaxis()->CenterTitle(true);
   emptyDiff__101->GetXaxis()->SetLabelFont(43);
   emptyDiff__101->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__101->GetXaxis()->SetLabelSize(33);
   emptyDiff__101->GetXaxis()->SetTitleSize(33);
   emptyDiff__101->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__101->GetXaxis()->SetTitleFont(43);
   emptyDiff__101->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__101->GetYaxis()->CenterTitle(true);
   emptyDiff__101->GetYaxis()->SetNdivisions(505);
   emptyDiff__101->GetYaxis()->SetLabelFont(43);
   emptyDiff__101->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__101->GetYaxis()->SetLabelSize(33);
   emptyDiff__101->GetYaxis()->SetTitleSize(33);
   emptyDiff__101->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__101->GetYaxis()->SetTitleFont(43);
   emptyDiff__101->GetZaxis()->SetLabelFont(42);
   emptyDiff__101->GetZaxis()->SetLabelSize(0.045);
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
   -4.906778e-05,
   0.0002258451,
   -0.0002191903,
   -0.001597103,
   0.002880423,
   -0.0008855846,
   -0.001171814,
   0.006504828,
   0.005045488,
   0.01001822,
   0.008164894,
   0.005774759,
   0.004344218,
   -9.156792e-05,
   -0.006305573,
   -0.005839335,
   -0.008625813,
   -0.004886829};
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

   ci = 1349;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_syst110391045 = new TH1F("Graph_Graph_syst110391045","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst110391045->SetMinimum(-0.01049022);
   Graph_Graph_syst110391045->SetMaximum(0.01188262);
   Graph_Graph_syst110391045->SetDirectory(0);
   Graph_Graph_syst110391045->SetStats(0);
   Graph_Graph_syst110391045->SetLineStyle(0);
   Graph_Graph_syst110391045->SetMarkerStyle(20);
   Graph_Graph_syst110391045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst110391045->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst110391045->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_syst110391045->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_syst110391045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst110391045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst110391045->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst110391045->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_syst110391045->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_syst110391045->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_syst110391045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst110391045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst110391045->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_syst110391045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst110391045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst110391045);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff11_fx3109[18] = {
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
   Double_t NLOdiff11_fy3109[18] = {
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
   Double_t NLOdiff11_felx3109[18] = {
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
   Double_t NLOdiff11_fely3109[18] = {
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
   Double_t NLOdiff11_fehx3109[18] = {
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
   Double_t NLOdiff11_fehy3109[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff11_fx3109,NLOdiff11_fy3109,NLOdiff11_felx3109,NLOdiff11_fehx3109,NLOdiff11_fely3109,NLOdiff11_fehy3109);
   grae->SetName("NLOdiff11");
   grae->SetTitle("");

   ci = 1350;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff113109 = new TH1F("Graph_NLOdiff113109","",100,-3.5065,3.5915);
   Graph_NLOdiff113109->SetMinimum(-0.0134641);
   Graph_NLOdiff113109->SetMaximum(0.01593594);
   Graph_NLOdiff113109->SetDirectory(0);
   Graph_NLOdiff113109->SetStats(0);
   Graph_NLOdiff113109->SetLineStyle(0);
   Graph_NLOdiff113109->SetMarkerStyle(20);
   Graph_NLOdiff113109->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff113109->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff113109->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff113109->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff113109->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff113109->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff113109->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff113109->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff113109->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff113109->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff113109->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff113109->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff113109->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff113109->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff113109->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff113109);
   
   grae->Draw(" 2");
   
   Double_t g_fx3110[18] = {
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
   Double_t g_fy3110[18] = {
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
   Double_t g_felx3110[18] = {
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
   Double_t g_fely3110[18] = {
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
   Double_t g_fehx3110[18] = {
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
   Double_t g_fehy3110[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3110,g_fy3110,g_felx3110,g_fehx3110,g_fely3110,g_fehy3110);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1351;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3110 = new TH1F("Graph_g3110","",100,-3.5065,3.5915);
   Graph_g3110->SetMinimum(-0.01986029);
   Graph_g3110->SetMaximum(0.02746974);
   Graph_g3110->SetDirectory(0);
   Graph_g3110->SetStats(0);
   Graph_g3110->SetLineStyle(0);
   Graph_g3110->SetMarkerStyle(20);
   Graph_g3110->GetXaxis()->SetLabelFont(42);
   Graph_g3110->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3110->GetXaxis()->SetLabelSize(0.045);
   Graph_g3110->GetXaxis()->SetTitleSize(0.055);
   Graph_g3110->GetXaxis()->SetTitleFont(42);
   Graph_g3110->GetYaxis()->SetLabelFont(42);
   Graph_g3110->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3110->GetYaxis()->SetLabelSize(0.045);
   Graph_g3110->GetYaxis()->SetTitleSize(0.055);
   Graph_g3110->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3110->GetYaxis()->SetTitleFont(42);
   Graph_g3110->GetZaxis()->SetLabelFont(42);
   Graph_g3110->GetZaxis()->SetLabelSize(0.045);
   Graph_g3110->GetZaxis()->SetTitleSize(0.035);
   Graph_g3110->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3110);
   
   grae->Draw(" 2");
   
   Double_t g_fx3111[18] = {
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
   Double_t g_fy3111[18] = {
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
   Double_t g_felx3111[18] = {
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
   Double_t g_fely3111[18] = {
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
   Double_t g_fehx3111[18] = {
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
   Double_t g_fehy3111[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3111,g_fy3111,g_felx3111,g_fehx3111,g_fely3111,g_fehy3111);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1352;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3111 = new TH1F("Graph_g3111","",100,-3.5065,3.5915);
   Graph_g3111->SetMinimum(-0.02753664);
   Graph_g3111->SetMaximum(0.03586173);
   Graph_g3111->SetDirectory(0);
   Graph_g3111->SetStats(0);
   Graph_g3111->SetLineStyle(0);
   Graph_g3111->SetMarkerStyle(20);
   Graph_g3111->GetXaxis()->SetLabelFont(42);
   Graph_g3111->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3111->GetXaxis()->SetLabelSize(0.045);
   Graph_g3111->GetXaxis()->SetTitleSize(0.055);
   Graph_g3111->GetXaxis()->SetTitleFont(42);
   Graph_g3111->GetYaxis()->SetLabelFont(42);
   Graph_g3111->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3111->GetYaxis()->SetLabelSize(0.045);
   Graph_g3111->GetYaxis()->SetTitleSize(0.055);
   Graph_g3111->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3111->GetYaxis()->SetTitleFont(42);
   Graph_g3111->GetZaxis()->SetLabelFont(42);
   Graph_g3111->GetZaxis()->SetLabelSize(0.045);
   Graph_g3111->GetZaxis()->SetTitleSize(0.035);
   Graph_g3111->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3111);
   
   grae->Draw(" 2");
   Double_t xAxis57[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_1__102 = new TH1D("hist_eta_diff_1__102","",18, xAxis57);
   hist_eta_diff_1__102->SetBinContent(0,-1.398952e-06);
   hist_eta_diff_1__102->SetBinContent(1,-4.906779e-05);
   hist_eta_diff_1__102->SetBinContent(2,0.0002258451);
   hist_eta_diff_1__102->SetBinContent(3,-0.0002191903);
   hist_eta_diff_1__102->SetBinContent(4,-0.001597103);
   hist_eta_diff_1__102->SetBinContent(5,0.002880423);
   hist_eta_diff_1__102->SetBinContent(6,-0.0008855846);
   hist_eta_diff_1__102->SetBinContent(7,-0.001171814);
   hist_eta_diff_1__102->SetBinContent(8,0.006504828);
   hist_eta_diff_1__102->SetBinContent(9,0.005045488);
   hist_eta_diff_1__102->SetBinContent(10,0.01001822);
   hist_eta_diff_1__102->SetBinContent(11,0.008164893);
   hist_eta_diff_1__102->SetBinContent(12,0.005774759);
   hist_eta_diff_1__102->SetBinContent(13,0.004344218);
   hist_eta_diff_1__102->SetBinContent(14,-9.156792e-05);
   hist_eta_diff_1__102->SetBinContent(15,-0.006305573);
   hist_eta_diff_1__102->SetBinContent(16,-0.005839335);
   hist_eta_diff_1__102->SetBinContent(17,-0.008625812);
   hist_eta_diff_1__102->SetBinContent(18,-0.004886829);
   hist_eta_diff_1__102->SetBinError(0,1.398952e-06);
   hist_eta_diff_1__102->SetBinError(1,0.0001309669);
   hist_eta_diff_1__102->SetBinError(2,0.0004703216);
   hist_eta_diff_1__102->SetBinError(3,0.00131912);
   hist_eta_diff_1__102->SetBinError(4,0.001775651);
   hist_eta_diff_1__102->SetBinError(5,0.002241532);
   hist_eta_diff_1__102->SetBinError(6,0.002601009);
   hist_eta_diff_1__102->SetBinError(7,0.00293401);
   hist_eta_diff_1__102->SetBinError(8,0.003235623);
   hist_eta_diff_1__102->SetBinError(9,0.003431219);
   hist_eta_diff_1__102->SetBinError(10,0.003594686);
   hist_eta_diff_1__102->SetBinError(11,0.003640719);
   hist_eta_diff_1__102->SetBinError(12,0.003612589);
   hist_eta_diff_1__102->SetBinError(13,0.003523915);
   hist_eta_diff_1__102->SetBinError(14,0.003326636);
   hist_eta_diff_1__102->SetBinError(15,0.003045938);
   hist_eta_diff_1__102->SetBinError(16,0.00269698);
   hist_eta_diff_1__102->SetBinError(17,0.001409397);
   hist_eta_diff_1__102->SetBinError(18,0.0006155672);
   hist_eta_diff_1__102->SetEntries(1.364282);

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
   
   TH1D *emptyDiff__103 = new TH1D("emptyDiff__103","",10,-2.999,2.999);
   emptyDiff__103->SetBinContent(7,1000);
   emptyDiff__103->SetBinError(7,1000);
   emptyDiff__103->SetMinimum(-0.04);
   emptyDiff__103->SetMaximum(0.04);
   emptyDiff__103->SetEntries(1);
   emptyDiff__103->SetLineStyle(0);
   emptyDiff__103->SetMarkerStyle(20);
   emptyDiff__103->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__103->GetXaxis()->CenterTitle(true);
   emptyDiff__103->GetXaxis()->SetLabelFont(43);
   emptyDiff__103->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__103->GetXaxis()->SetLabelSize(33);
   emptyDiff__103->GetXaxis()->SetTitleSize(33);
   emptyDiff__103->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__103->GetXaxis()->SetTitleFont(43);
   emptyDiff__103->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__103->GetYaxis()->CenterTitle(true);
   emptyDiff__103->GetYaxis()->SetNdivisions(505);
   emptyDiff__103->GetYaxis()->SetLabelFont(43);
   emptyDiff__103->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__103->GetYaxis()->SetLabelSize(33);
   emptyDiff__103->GetYaxis()->SetTitleSize(33);
   emptyDiff__103->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__103->GetYaxis()->SetTitleFont(43);
   emptyDiff__103->GetZaxis()->SetLabelFont(42);
   emptyDiff__103->GetZaxis()->SetLabelSize(0.045);
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
   -4.285359e-06,
   0.0001534319,
   -4.964999e-05,
   -0.001123675,
   -0.00413743,
   -0.007076319,
   -0.00823143,
   -0.009647243,
   -0.000587429,
   0.003849701,
   0.01183415,
   0.006279578,
   0.008719767,
   0.004006871,
   0.004458224,
   0.001263949,
   -0.003741598,
   -0.001189222};
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

   ci = 1364;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_syst410401046 = new TH1F("Graph_Graph_syst410401046","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst410401046->SetMinimum(-0.01179538);
   Graph_Graph_syst410401046->SetMaximum(0.01398228);
   Graph_Graph_syst410401046->SetDirectory(0);
   Graph_Graph_syst410401046->SetStats(0);
   Graph_Graph_syst410401046->SetLineStyle(0);
   Graph_Graph_syst410401046->SetMarkerStyle(20);
   Graph_Graph_syst410401046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst410401046->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst410401046->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_syst410401046->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_syst410401046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst410401046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst410401046->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst410401046->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_syst410401046->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_syst410401046->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_syst410401046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst410401046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst410401046->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_syst410401046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst410401046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst410401046);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff14_fx3112[18] = {
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
   Double_t NLOdiff14_fy3112[18] = {
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
   Double_t NLOdiff14_felx3112[18] = {
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
   Double_t NLOdiff14_fely3112[18] = {
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
   Double_t NLOdiff14_fehx3112[18] = {
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
   Double_t NLOdiff14_fehy3112[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff14_fx3112,NLOdiff14_fy3112,NLOdiff14_felx3112,NLOdiff14_fehx3112,NLOdiff14_fely3112,NLOdiff14_fehy3112);
   grae->SetName("NLOdiff14");
   grae->SetTitle("");

   ci = 1365;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff143112 = new TH1F("Graph_NLOdiff143112","",100,-3.5065,3.5915);
   Graph_NLOdiff143112->SetMinimum(-100.0099);
   Graph_NLOdiff143112->SetMaximum(1100.001);
   Graph_NLOdiff143112->SetDirectory(0);
   Graph_NLOdiff143112->SetStats(0);
   Graph_NLOdiff143112->SetLineStyle(0);
   Graph_NLOdiff143112->SetMarkerStyle(20);
   Graph_NLOdiff143112->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff143112->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff143112->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff143112->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff143112->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff143112->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff143112->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff143112->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff143112->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff143112->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff143112->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff143112->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff143112->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff143112->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff143112->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff143112);
   
   grae->Draw(" 2");
   
   Double_t g_fx3113[18] = {
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
   Double_t g_fy3113[18] = {
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
   Double_t g_felx3113[18] = {
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
   Double_t g_fely3113[18] = {
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
   Double_t g_fehx3113[18] = {
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
   Double_t g_fehy3113[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3113,g_fy3113,g_felx3113,g_fehx3113,g_fely3113,g_fehy3113);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1366;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3113 = new TH1F("Graph_g3113","",100,-3.5065,3.5915);
   Graph_g3113->SetMinimum(-100.029);
   Graph_g3113->SetMaximum(1100.003);
   Graph_g3113->SetDirectory(0);
   Graph_g3113->SetStats(0);
   Graph_g3113->SetLineStyle(0);
   Graph_g3113->SetMarkerStyle(20);
   Graph_g3113->GetXaxis()->SetLabelFont(42);
   Graph_g3113->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3113->GetXaxis()->SetLabelSize(0.045);
   Graph_g3113->GetXaxis()->SetTitleSize(0.055);
   Graph_g3113->GetXaxis()->SetTitleFont(42);
   Graph_g3113->GetYaxis()->SetLabelFont(42);
   Graph_g3113->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3113->GetYaxis()->SetLabelSize(0.045);
   Graph_g3113->GetYaxis()->SetTitleSize(0.055);
   Graph_g3113->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3113->GetYaxis()->SetTitleFont(42);
   Graph_g3113->GetZaxis()->SetLabelFont(42);
   Graph_g3113->GetZaxis()->SetLabelSize(0.045);
   Graph_g3113->GetZaxis()->SetTitleSize(0.035);
   Graph_g3113->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3113);
   
   grae->Draw(" 2");
   
   Double_t g_fx3114[18] = {
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
   Double_t g_fy3114[18] = {
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
   Double_t g_felx3114[18] = {
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
   Double_t g_fely3114[18] = {
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
   Double_t g_fehx3114[18] = {
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
   Double_t g_fehy3114[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3114,g_fy3114,g_felx3114,g_fehx3114,g_fely3114,g_fehy3114);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1367;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3114 = new TH1F("Graph_g3114","",100,-3.5065,3.5915);
   Graph_g3114->SetMinimum(-100.0268);
   Graph_g3114->SetMaximum(1100.003);
   Graph_g3114->SetDirectory(0);
   Graph_g3114->SetStats(0);
   Graph_g3114->SetLineStyle(0);
   Graph_g3114->SetMarkerStyle(20);
   Graph_g3114->GetXaxis()->SetLabelFont(42);
   Graph_g3114->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3114->GetXaxis()->SetLabelSize(0.045);
   Graph_g3114->GetXaxis()->SetTitleSize(0.055);
   Graph_g3114->GetXaxis()->SetTitleFont(42);
   Graph_g3114->GetYaxis()->SetLabelFont(42);
   Graph_g3114->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3114->GetYaxis()->SetLabelSize(0.045);
   Graph_g3114->GetYaxis()->SetTitleSize(0.055);
   Graph_g3114->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3114->GetYaxis()->SetTitleFont(42);
   Graph_g3114->GetZaxis()->SetLabelFont(42);
   Graph_g3114->GetZaxis()->SetLabelSize(0.045);
   Graph_g3114->GetZaxis()->SetTitleSize(0.035);
   Graph_g3114->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3114);
   
   grae->Draw(" 2");
   Double_t xAxis58[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_4__104 = new TH1D("hist_eta_diff_4__104","",18, xAxis58);
   hist_eta_diff_4__104->SetBinContent(1,1000);
   hist_eta_diff_4__104->SetBinContent(2,1000);
   hist_eta_diff_4__104->SetBinContent(3,-4.964999e-05);
   hist_eta_diff_4__104->SetBinContent(4,-0.001123675);
   hist_eta_diff_4__104->SetBinContent(5,-0.00413743);
   hist_eta_diff_4__104->SetBinContent(6,-0.007076319);
   hist_eta_diff_4__104->SetBinContent(7,-0.00823143);
   hist_eta_diff_4__104->SetBinContent(8,-0.009647242);
   hist_eta_diff_4__104->SetBinContent(9,-0.000587429);
   hist_eta_diff_4__104->SetBinContent(10,0.003849701);
   hist_eta_diff_4__104->SetBinContent(11,0.01183415);
   hist_eta_diff_4__104->SetBinContent(12,0.006279578);
   hist_eta_diff_4__104->SetBinContent(13,0.008719767);
   hist_eta_diff_4__104->SetBinContent(14,0.004006872);
   hist_eta_diff_4__104->SetBinContent(15,0.004458224);
   hist_eta_diff_4__104->SetBinContent(16,0.001263949);
   hist_eta_diff_4__104->SetBinContent(17,-0.003741598);
   hist_eta_diff_4__104->SetBinContent(18,-0.001189222);
   hist_eta_diff_4__104->SetBinError(1,4.285359e-06);
   hist_eta_diff_4__104->SetBinError(2,6.462798e-05);
   hist_eta_diff_4__104->SetBinError(3,0.0003776847);
   hist_eta_diff_4__104->SetBinError(4,0.000829755);
   hist_eta_diff_4__104->SetBinError(5,0.001345817);
   hist_eta_diff_4__104->SetBinError(6,0.001847341);
   hist_eta_diff_4__104->SetBinError(7,0.002284441);
   hist_eta_diff_4__104->SetBinError(8,0.002637428);
   hist_eta_diff_4__104->SetBinError(9,0.002932516);
   hist_eta_diff_4__104->SetBinError(10,0.003137782);
   hist_eta_diff_4__104->SetBinError(11,0.003245895);
   hist_eta_diff_4__104->SetBinError(12,0.003237999);
   hist_eta_diff_4__104->SetBinError(13,0.003148427);
   hist_eta_diff_4__104->SetBinError(14,0.002940548);
   hist_eta_diff_4__104->SetBinError(15,0.002658179);
   hist_eta_diff_4__104->SetBinError(16,0.00226412);
   hist_eta_diff_4__104->SetBinError(17,0.001072358);
   hist_eta_diff_4__104->SetBinError(18,0.0003476416);
   hist_eta_diff_4__104->SetEntries(4.254379);

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
   p_2_0->SetBorderSize(0);
   p_2_0->SetTickx(1);
   p_2_0->SetTicky(1);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetBottomMargin(0);
   p_2_0->SetFrameLineColor(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->SetFrameLineColor(0);
   p_2_0->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__105 = new TH1D("emptyDiff__105","",10,-2.999,2.999);
   emptyDiff__105->SetBinContent(7,1000);
   emptyDiff__105->SetBinError(7,1000);
   emptyDiff__105->SetMinimum(-0.04);
   emptyDiff__105->SetMaximum(0.04);
   emptyDiff__105->SetEntries(1);
   emptyDiff__105->SetLineStyle(0);
   emptyDiff__105->SetMarkerStyle(20);
   emptyDiff__105->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__105->GetXaxis()->CenterTitle(true);
   emptyDiff__105->GetXaxis()->SetLabelFont(43);
   emptyDiff__105->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__105->GetXaxis()->SetLabelSize(33);
   emptyDiff__105->GetXaxis()->SetTitleSize(33);
   emptyDiff__105->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__105->GetXaxis()->SetTitleFont(43);
   emptyDiff__105->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__105->GetYaxis()->CenterTitle(true);
   emptyDiff__105->GetYaxis()->SetNdivisions(505);
   emptyDiff__105->GetYaxis()->SetLabelFont(43);
   emptyDiff__105->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__105->GetYaxis()->SetLabelSize(33);
   emptyDiff__105->GetYaxis()->SetTitleSize(33);
   emptyDiff__105->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__105->GetYaxis()->SetTitleFont(43);
   emptyDiff__105->GetZaxis()->SetLabelFont(42);
   emptyDiff__105->GetZaxis()->SetLabelSize(0.045);
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
   4.174698e-05,
   0.0001942199,
   0.0003378031,
   -0.002040716,
   -0.003287541,
   -0.004385141,
   1.120079e-05,
   -0.0003642199,
   0.004114227,
   0.00820986,
   0.009501886,
   0.005577257,
   0.006284581,
   0.003551407,
   0.001092257,
   -0.007230637,
   -0.00752181,
   -0.003379396};
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

   ci = 1354;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_syst210411047 = new TH1F("Graph_Graph_syst210411047","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst210411047->SetMinimum(-0.009224179);
   Graph_Graph_syst210411047->SetMaximum(0.01120426);
   Graph_Graph_syst210411047->SetDirectory(0);
   Graph_Graph_syst210411047->SetStats(0);
   Graph_Graph_syst210411047->SetLineStyle(0);
   Graph_Graph_syst210411047->SetMarkerStyle(20);
   Graph_Graph_syst210411047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst210411047->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst210411047->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_syst210411047->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_syst210411047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst210411047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst210411047->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst210411047->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_syst210411047->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_syst210411047->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_syst210411047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst210411047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst210411047->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_syst210411047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst210411047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst210411047);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff12_fx3115[18] = {
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
   Double_t NLOdiff12_fy3115[18] = {
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
   Double_t NLOdiff12_felx3115[18] = {
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
   Double_t NLOdiff12_fely3115[18] = {
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
   Double_t NLOdiff12_fehx3115[18] = {
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
   Double_t NLOdiff12_fehy3115[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff12_fx3115,NLOdiff12_fy3115,NLOdiff12_felx3115,NLOdiff12_fehx3115,NLOdiff12_fely3115,NLOdiff12_fehy3115);
   grae->SetName("NLOdiff12");
   grae->SetTitle("");

   ci = 1355;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff123115 = new TH1F("Graph_NLOdiff123115","",100,-3.5065,3.5915);
   Graph_NLOdiff123115->SetMinimum(-100.0124);
   Graph_NLOdiff123115->SetMaximum(1100.001);
   Graph_NLOdiff123115->SetDirectory(0);
   Graph_NLOdiff123115->SetStats(0);
   Graph_NLOdiff123115->SetLineStyle(0);
   Graph_NLOdiff123115->SetMarkerStyle(20);
   Graph_NLOdiff123115->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff123115->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff123115->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff123115->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff123115->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff123115->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff123115->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff123115->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff123115->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff123115->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff123115->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff123115->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff123115->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff123115->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff123115->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff123115);
   
   grae->Draw(" 2");
   
   Double_t g_fx3116[18] = {
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
   Double_t g_fy3116[18] = {
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
   Double_t g_felx3116[18] = {
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
   Double_t g_fely3116[18] = {
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
   Double_t g_fehx3116[18] = {
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
   Double_t g_fehy3116[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3116,g_fy3116,g_felx3116,g_fehx3116,g_fely3116,g_fehy3116);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1356;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3116 = new TH1F("Graph_g3116","",100,-3.5065,3.5915);
   Graph_g3116->SetMinimum(-100.0205);
   Graph_g3116->SetMaximum(1100.002);
   Graph_g3116->SetDirectory(0);
   Graph_g3116->SetStats(0);
   Graph_g3116->SetLineStyle(0);
   Graph_g3116->SetMarkerStyle(20);
   Graph_g3116->GetXaxis()->SetLabelFont(42);
   Graph_g3116->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3116->GetXaxis()->SetLabelSize(0.045);
   Graph_g3116->GetXaxis()->SetTitleSize(0.055);
   Graph_g3116->GetXaxis()->SetTitleFont(42);
   Graph_g3116->GetYaxis()->SetLabelFont(42);
   Graph_g3116->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3116->GetYaxis()->SetLabelSize(0.045);
   Graph_g3116->GetYaxis()->SetTitleSize(0.055);
   Graph_g3116->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3116->GetYaxis()->SetTitleFont(42);
   Graph_g3116->GetZaxis()->SetLabelFont(42);
   Graph_g3116->GetZaxis()->SetLabelSize(0.045);
   Graph_g3116->GetZaxis()->SetTitleSize(0.035);
   Graph_g3116->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3116);
   
   grae->Draw(" 2");
   
   Double_t g_fx3117[18] = {
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
   Double_t g_fy3117[18] = {
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
   Double_t g_felx3117[18] = {
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
   Double_t g_fely3117[18] = {
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
   Double_t g_fehx3117[18] = {
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
   Double_t g_fehy3117[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3117,g_fy3117,g_felx3117,g_fehx3117,g_fely3117,g_fehy3117);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1357;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3117 = new TH1F("Graph_g3117","",100,-3.5065,3.5915);
   Graph_g3117->SetMinimum(-100.0193);
   Graph_g3117->SetMaximum(1100.002);
   Graph_g3117->SetDirectory(0);
   Graph_g3117->SetStats(0);
   Graph_g3117->SetLineStyle(0);
   Graph_g3117->SetMarkerStyle(20);
   Graph_g3117->GetXaxis()->SetLabelFont(42);
   Graph_g3117->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3117->GetXaxis()->SetLabelSize(0.045);
   Graph_g3117->GetXaxis()->SetTitleSize(0.055);
   Graph_g3117->GetXaxis()->SetTitleFont(42);
   Graph_g3117->GetYaxis()->SetLabelFont(42);
   Graph_g3117->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3117->GetYaxis()->SetLabelSize(0.045);
   Graph_g3117->GetYaxis()->SetTitleSize(0.055);
   Graph_g3117->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3117->GetYaxis()->SetTitleFont(42);
   Graph_g3117->GetZaxis()->SetLabelFont(42);
   Graph_g3117->GetZaxis()->SetLabelSize(0.045);
   Graph_g3117->GetZaxis()->SetTitleSize(0.035);
   Graph_g3117->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3117);
   
   grae->Draw(" 2");
   Double_t xAxis59[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_2__106 = new TH1D("hist_eta_diff_2__106","",18, xAxis59);
   hist_eta_diff_2__106->SetBinContent(1,1000);
   hist_eta_diff_2__106->SetBinContent(2,0.0001942199);
   hist_eta_diff_2__106->SetBinContent(3,0.0003378031);
   hist_eta_diff_2__106->SetBinContent(4,-0.002040716);
   hist_eta_diff_2__106->SetBinContent(5,-0.003287542);
   hist_eta_diff_2__106->SetBinContent(6,-0.004385141);
   hist_eta_diff_2__106->SetBinContent(7,1.120079e-05);
   hist_eta_diff_2__106->SetBinContent(8,-0.0003642199);
   hist_eta_diff_2__106->SetBinContent(9,0.004114227);
   hist_eta_diff_2__106->SetBinContent(10,0.00820986);
   hist_eta_diff_2__106->SetBinContent(11,0.009501886);
   hist_eta_diff_2__106->SetBinContent(12,0.005577257);
   hist_eta_diff_2__106->SetBinContent(13,0.006284582);
   hist_eta_diff_2__106->SetBinContent(14,0.003551407);
   hist_eta_diff_2__106->SetBinContent(15,0.001092257);
   hist_eta_diff_2__106->SetBinContent(16,-0.007230637);
   hist_eta_diff_2__106->SetBinContent(17,-0.00752181);
   hist_eta_diff_2__106->SetBinContent(18,-0.003379396);
   hist_eta_diff_2__106->SetBinError(1,3.449509e-05);
   hist_eta_diff_2__106->SetBinError(2,0.0001945111);
   hist_eta_diff_2__106->SetBinError(3,0.0007096119);
   hist_eta_diff_2__106->SetBinError(4,0.001064601);
   hist_eta_diff_2__106->SetBinError(5,0.001434667);
   hist_eta_diff_2__106->SetBinError(6,0.001748419);
   hist_eta_diff_2__106->SetBinError(7,0.00203706);
   hist_eta_diff_2__106->SetBinError(8,0.002255898);
   hist_eta_diff_2__106->SetBinError(9,0.002439599);
   hist_eta_diff_2__106->SetBinError(10,0.00254712);
   hist_eta_diff_2__106->SetBinError(11,0.002612374);
   hist_eta_diff_2__106->SetBinError(12,0.002603784);
   hist_eta_diff_2__106->SetBinError(13,0.002536519);
   hist_eta_diff_2__106->SetBinError(14,0.002381178);
   hist_eta_diff_2__106->SetBinError(15,0.002190181);
   hist_eta_diff_2__106->SetBinError(16,0.001902599);
   hist_eta_diff_2__106->SetBinError(17,0.0009790673);
   hist_eta_diff_2__106->SetBinError(18,0.0004028425);
   hist_eta_diff_2__106->SetEntries(3.799253);

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
   
   TH1D *emptyDiff__107 = new TH1D("emptyDiff__107","",10,-2.999,2.999);
   emptyDiff__107->SetBinContent(7,1000);
   emptyDiff__107->SetBinError(7,1000);
   emptyDiff__107->SetMinimum(-0.04);
   emptyDiff__107->SetMaximum(0.04);
   emptyDiff__107->SetEntries(1);
   emptyDiff__107->SetLineStyle(0);
   emptyDiff__107->SetMarkerStyle(20);
   emptyDiff__107->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__107->GetXaxis()->CenterTitle(true);
   emptyDiff__107->GetXaxis()->SetLabelFont(43);
   emptyDiff__107->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__107->GetXaxis()->SetLabelSize(33);
   emptyDiff__107->GetXaxis()->SetTitleSize(33);
   emptyDiff__107->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__107->GetXaxis()->SetTitleFont(43);
   emptyDiff__107->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__107->GetYaxis()->CenterTitle(true);
   emptyDiff__107->GetYaxis()->SetNdivisions(505);
   emptyDiff__107->GetYaxis()->SetLabelFont(43);
   emptyDiff__107->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__107->GetYaxis()->SetLabelSize(33);
   emptyDiff__107->GetYaxis()->SetTitleSize(33);
   emptyDiff__107->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__107->GetYaxis()->SetTitleFont(43);
   emptyDiff__107->GetZaxis()->SetLabelFont(42);
   emptyDiff__107->GetZaxis()->SetLabelSize(0.045);
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
   5.23114e-05,
   -0.0001104924,
   -5.126335e-05,
   -0.005729915,
   -0.008644333,
   -0.01500269,
   -0.008375958,
   -0.005278323,
   0.004663799,
   0.001479755,
   0.01511579,
   0.002158664,
   0.007733662,
   0.01174887,
   0.001056807,
   -0.0006386284,
   0.0002041284};
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

   ci = 1369;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_syst510421048 = new TH1F("Graph_Graph_syst510421048","Graph",100,-3.46425,3.51675);
   Graph_Graph_syst510421048->SetMinimum(-0.01801454);
   Graph_Graph_syst510421048->SetMaximum(0.01812764);
   Graph_Graph_syst510421048->SetDirectory(0);
   Graph_Graph_syst510421048->SetStats(0);
   Graph_Graph_syst510421048->SetLineStyle(0);
   Graph_Graph_syst510421048->SetMarkerStyle(20);
   Graph_Graph_syst510421048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_syst510421048->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst510421048->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_syst510421048->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_syst510421048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_syst510421048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_syst510421048->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_syst510421048->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_syst510421048->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_syst510421048->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_syst510421048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_syst510421048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_syst510421048->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_syst510421048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_syst510421048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_syst510421048);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff15_fx3118[18] = {
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
   Double_t NLOdiff15_fy3118[18] = {
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
   Double_t NLOdiff15_felx3118[18] = {
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
   Double_t NLOdiff15_fely3118[18] = {
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
   Double_t NLOdiff15_fehx3118[18] = {
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
   Double_t NLOdiff15_fehy3118[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff15_fx3118,NLOdiff15_fy3118,NLOdiff15_felx3118,NLOdiff15_fehx3118,NLOdiff15_fely3118,NLOdiff15_fehy3118);
   grae->SetName("NLOdiff15");
   grae->SetTitle("");

   ci = 1370;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff153118 = new TH1F("Graph_NLOdiff153118","",100,-3.5065,3.5915);
   Graph_NLOdiff153118->SetMinimum(-100.0062);
   Graph_NLOdiff153118->SetMaximum(1100.001);
   Graph_NLOdiff153118->SetDirectory(0);
   Graph_NLOdiff153118->SetStats(0);
   Graph_NLOdiff153118->SetLineStyle(0);
   Graph_NLOdiff153118->SetMarkerStyle(20);
   Graph_NLOdiff153118->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff153118->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff153118->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff153118->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff153118->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff153118->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff153118->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff153118->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff153118->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff153118->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff153118->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff153118->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff153118->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff153118->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff153118->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff153118);
   
   grae->Draw(" 2");
   
   Double_t g_fx3119[18] = {
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
   Double_t g_fy3119[18] = {
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
   Double_t g_felx3119[18] = {
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
   Double_t g_fely3119[18] = {
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
   Double_t g_fehx3119[18] = {
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
   Double_t g_fehy3119[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3119,g_fy3119,g_felx3119,g_fehx3119,g_fely3119,g_fehy3119);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1371;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3119 = new TH1F("Graph_g3119","",100,-3.5065,3.5915);
   Graph_g3119->SetMinimum(-100.0337);
   Graph_g3119->SetMaximum(1100.003);
   Graph_g3119->SetDirectory(0);
   Graph_g3119->SetStats(0);
   Graph_g3119->SetLineStyle(0);
   Graph_g3119->SetMarkerStyle(20);
   Graph_g3119->GetXaxis()->SetLabelFont(42);
   Graph_g3119->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3119->GetXaxis()->SetLabelSize(0.045);
   Graph_g3119->GetXaxis()->SetTitleSize(0.055);
   Graph_g3119->GetXaxis()->SetTitleFont(42);
   Graph_g3119->GetYaxis()->SetLabelFont(42);
   Graph_g3119->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3119->GetYaxis()->SetLabelSize(0.045);
   Graph_g3119->GetYaxis()->SetTitleSize(0.055);
   Graph_g3119->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3119->GetYaxis()->SetTitleFont(42);
   Graph_g3119->GetZaxis()->SetLabelFont(42);
   Graph_g3119->GetZaxis()->SetLabelSize(0.045);
   Graph_g3119->GetZaxis()->SetTitleSize(0.035);
   Graph_g3119->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3119);
   
   grae->Draw(" 2");
   
   Double_t g_fx3120[18] = {
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
   Double_t g_fy3120[18] = {
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
   Double_t g_felx3120[18] = {
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
   Double_t g_fely3120[18] = {
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
   Double_t g_fehx3120[18] = {
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
   Double_t g_fehy3120[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3120,g_fy3120,g_felx3120,g_fehx3120,g_fely3120,g_fehy3120);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1372;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3120 = new TH1F("Graph_g3120","",100,-3.5065,3.5915);
   Graph_g3120->SetMinimum(-100.0327);
   Graph_g3120->SetMaximum(1100.003);
   Graph_g3120->SetDirectory(0);
   Graph_g3120->SetStats(0);
   Graph_g3120->SetLineStyle(0);
   Graph_g3120->SetMarkerStyle(20);
   Graph_g3120->GetXaxis()->SetLabelFont(42);
   Graph_g3120->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3120->GetXaxis()->SetLabelSize(0.045);
   Graph_g3120->GetXaxis()->SetTitleSize(0.055);
   Graph_g3120->GetXaxis()->SetTitleFont(42);
   Graph_g3120->GetYaxis()->SetLabelFont(42);
   Graph_g3120->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3120->GetYaxis()->SetLabelSize(0.045);
   Graph_g3120->GetYaxis()->SetTitleSize(0.055);
   Graph_g3120->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3120->GetYaxis()->SetTitleFont(42);
   Graph_g3120->GetZaxis()->SetLabelFont(42);
   Graph_g3120->GetZaxis()->SetLabelSize(0.045);
   Graph_g3120->GetZaxis()->SetTitleSize(0.035);
   Graph_g3120->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3120);
   
   grae->Draw(" 2");
   Double_t xAxis60[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_5__108 = new TH1D("hist_eta_diff_5__108","",18, xAxis60);
   hist_eta_diff_5__108->SetBinContent(1,1000);
   hist_eta_diff_5__108->SetBinContent(2,1000);
   hist_eta_diff_5__108->SetBinContent(3,-0.0001104924);
   hist_eta_diff_5__108->SetBinContent(4,-5.126334e-05);
   hist_eta_diff_5__108->SetBinContent(5,-0.005729915);
   hist_eta_diff_5__108->SetBinContent(6,-0.008644333);
   hist_eta_diff_5__108->SetBinContent(7,-0.01500269);
   hist_eta_diff_5__108->SetBinContent(8,-0.008375957);
   hist_eta_diff_5__108->SetBinContent(9,-0.005278323);
   hist_eta_diff_5__108->SetBinContent(10,0.004663799);
   hist_eta_diff_5__108->SetBinContent(11,0.001479755);
   hist_eta_diff_5__108->SetBinContent(12,0.01511579);
   hist_eta_diff_5__108->SetBinContent(13,0.002158664);
   hist_eta_diff_5__108->SetBinContent(14,0.007733662);
   hist_eta_diff_5__108->SetBinContent(15,0.01174887);
   hist_eta_diff_5__108->SetBinContent(16,0.001056807);
   hist_eta_diff_5__108->SetBinContent(17,-0.0006386284);
   hist_eta_diff_5__108->SetBinContent(18,0.0002041284);
   hist_eta_diff_5__108->SetBinError(2,4.129727e-05);
   hist_eta_diff_5__108->SetBinError(3,0.0002472209);
   hist_eta_diff_5__108->SetBinError(4,0.0007453497);
   hist_eta_diff_5__108->SetBinError(5,0.001499229);
   hist_eta_diff_5__108->SetBinError(6,0.002479709);
   hist_eta_diff_5__108->SetBinError(7,0.003362481);
   hist_eta_diff_5__108->SetBinError(8,0.004235118);
   hist_eta_diff_5__108->SetBinError(9,0.00486817);
   hist_eta_diff_5__108->SetBinError(10,0.005325385);
   hist_eta_diff_5__108->SetBinError(11,0.005542098);
   hist_eta_diff_5__108->SetBinError(12,0.005600868);
   hist_eta_diff_5__108->SetBinError(13,0.00533848);
   hist_eta_diff_5__108->SetBinError(14,0.004943355);
   hist_eta_diff_5__108->SetBinError(15,0.004338477);
   hist_eta_diff_5__108->SetBinError(16,0.003445913);
   hist_eta_diff_5__108->SetBinError(17,0.001451094);
   hist_eta_diff_5__108->SetBinError(18,0.0003458934);
   hist_eta_diff_5__108->SetEntries(4.000613);

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
