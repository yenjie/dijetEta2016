void dists()
{
//=========Macro generated from canvas: cdist/
//=========  (Tue Sep 20 14:38:56 2016) by ROOT version6.02/13

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cdist = new TCanvas("cdist", "",0,0,1600,2100);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   cdist->Range(0,0,1,1);
   cdist->SetFillColor(0);
   cdist->SetBorderMode(0);
   cdist->SetBorderSize(0);
   cdist->SetTickx(1);
   cdist->SetTicky(1);
   cdist->SetLeftMargin(0.17);
   cdist->SetRightMargin(0.01);
   cdist->SetTopMargin(0.01);
   cdist->SetBottomMargin(0.15);
   cdist->SetFrameLineColor(0);
   cdist->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.8096192,0.3053435,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-5.569572,0.0001,2.999,0.74985);
   p_0_0->SetFillColor(0);
   p_0_0->SetBorderMode(0);
   p_0_0->SetBorderSize(0);
   p_0_0->SetTickx(1);
   p_0_0->SetTicky(1);
   p_0_0->SetLeftMargin(0.3);
   p_0_0->SetRightMargin(0);
   p_0_0->SetTopMargin(0.2);
   p_0_0->SetBottomMargin(0);
   p_0_0->SetFrameLineColor(0);
   p_0_0->SetFrameBorderMode(0);
   p_0_0->SetFrameLineColor(0);
   p_0_0->SetFrameBorderMode(0);
   
   TH1D *emptyDist49 = new TH1D("emptyDist49","",10,-2.999,2.999);
   emptyDist49->SetBinContent(7,1000);
   emptyDist49->SetBinError(7,1000);
   emptyDist49->SetMinimum(0.0001);
   emptyDist49->SetMaximum(0.5999);
   emptyDist49->SetEntries(1);
   emptyDist49->SetLineStyle(0);
   emptyDist49->SetMarkerStyle(20);
   emptyDist49->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist49->GetXaxis()->CenterTitle(true);
   emptyDist49->GetXaxis()->SetLabelFont(43);
   emptyDist49->GetXaxis()->SetLabelOffset(0.01);
   emptyDist49->GetXaxis()->SetLabelSize(33);
   emptyDist49->GetXaxis()->SetTitleSize(33);
   emptyDist49->GetXaxis()->SetTitleOffset(7.5);
   emptyDist49->GetXaxis()->SetTitleFont(43);
   emptyDist49->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist49->GetYaxis()->CenterTitle(true);
   emptyDist49->GetYaxis()->SetNdivisions(505);
   emptyDist49->GetYaxis()->SetLabelFont(43);
   emptyDist49->GetYaxis()->SetLabelOffset(0.01);
   emptyDist49->GetYaxis()->SetLabelSize(33);
   emptyDist49->GetYaxis()->SetTitleSize(33);
   emptyDist49->GetYaxis()->SetTitleOffset(7.5);
   emptyDist49->GetYaxis()->SetTitleFont(43);
   emptyDist49->GetZaxis()->SetLabelFont(42);
   emptyDist49->GetZaxis()->SetLabelSize(0.045);
   emptyDist49->GetZaxis()->SetTitleSize(0.035);
   emptyDist49->GetZaxis()->SetTitleFont(42);
   emptyDist49->Draw("");
   
   Double_t Graph0_fx1025[18] = {
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
   Double_t Graph0_fy1025[18] = {
   0.003694762,
   0.02879687,
   0.07089511,
   0.1118492,
   0.1501979,
   0.1965871,
   0.2244174,
   0.2648371,
   0.2927595,
   0.3083559,
   0.3222532,
   0.3068249,
   0.2852286,
   0.2607355,
   0.2261959,
   0.1843968,
   0.1123711,
   0.03024183};
   Double_t Graph0_fex1025[18] = {
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
   Double_t Graph0_fey1025[18] = {
   -0.0007275876,
   -0.001859736,
   -0.001913794,
   -0.002302625,
   -0.001453692,
   -0.001263618,
   -0.001538106,
   -0.002449486,
   -0.002168659,
   -0.00271641,
   -0.003026166,
   -0.002242089,
   -0.002600333,
   -0.002173787,
   -0.003594103,
   -0.002762618,
   -0.002387621,
   -0.00149849};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 975;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","Graph",100,-3.46425,3.51675);
   Graph_Graph1025->SetMinimum(0);
   Graph_Graph1025->SetMaximum(0.3541091);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);
   Graph_Graph1025->SetLineStyle(0);
   Graph_Graph1025->SetMarkerStyle(20);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1025->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1025->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1025->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx73[18] = {
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
   Double_t Graph1_fy73[18] = {
   0.006197135,
   0.03339071,
   0.07665424,
   0.1147918,
   0.1553119,
   0.1943881,
   0.2328325,
   0.2673964,
   0.2949212,
   0.3126995,
   0.3163995,
   0.3093604,
   0.2909504,
   0.2616207,
   0.2216421,
   0.1739927,
   0.1018868,
   0.0252912};
   graph = new TGraph(18,Graph1_fx73,Graph1_fy73);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph73 = new TH1F("Graph_Graph73","Graph",100,-3.323417,3.267583);
   Graph_Graph73->SetMinimum(0);
   Graph_Graph73->SetMaximum(0.3474198);
   Graph_Graph73->SetDirectory(0);
   Graph_Graph73->SetStats(0);
   Graph_Graph73->SetLineStyle(0);
   Graph_Graph73->SetMarkerStyle(20);
   Graph_Graph73->GetXaxis()->SetLabelFont(42);
   Graph_Graph73->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph73->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph73->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph73->GetXaxis()->SetTitleFont(42);
   Graph_Graph73->GetYaxis()->SetLabelFont(42);
   Graph_Graph73->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph73->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph73->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph73->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph73->GetYaxis()->SetTitleFont(42);
   Graph_Graph73->GetZaxis()->SetLabelFont(42);
   Graph_Graph73->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph73->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph73->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph73);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx74[18] = {
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
   Double_t Graph2_fy74[18] = {
   0.007302381,
   0.03597993,
   0.08414148,
   0.1207054,
   0.158342,
   0.2016603,
   0.2347306,
   0.2676233,
   0.2960657,
   0.3181113,
   0.3254959,
   0.3185628,
   0.2989594,
   0.2635988,
   0.2221124,
   0.1756886,
   0.1039691,
   0.02685235};
   graph = new TGraph(18,Graph2_fx74,Graph2_fy74);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph74 = new TH1F("Graph_Graph74","Graph",100,-3.323417,3.267583);
   Graph_Graph74->SetMinimum(0);
   Graph_Graph74->SetMaximum(0.3573152);
   Graph_Graph74->SetDirectory(0);
   Graph_Graph74->SetStats(0);
   Graph_Graph74->SetLineStyle(0);
   Graph_Graph74->SetMarkerStyle(20);
   Graph_Graph74->GetXaxis()->SetLabelFont(42);
   Graph_Graph74->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph74->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph74->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph74->GetXaxis()->SetTitleFont(42);
   Graph_Graph74->GetYaxis()->SetLabelFont(42);
   Graph_Graph74->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph74->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph74->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph74->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph74->GetYaxis()->SetTitleFont(42);
   Graph_Graph74->GetZaxis()->SetLabelFont(42);
   Graph_Graph74->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph74->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph74->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph74);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx75[18] = {
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
   Double_t Graph3_fy75[18] = {
   0.005789119,
   0.0314151,
   0.07515218,
   0.1097279,
   0.1476574,
   0.1920028,
   0.2288519,
   0.2613639,
   0.2884148,
   0.3072344,
   0.3113288,
   0.3044814,
   0.2867537,
   0.2550791,
   0.2163616,
   0.1717915,
   0.09967386,
   0.02435567};
   graph = new TGraph(18,Graph3_fx75,Graph3_fy75);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph75 = new TH1F("Graph_Graph75","Graph",100,-3.323417,3.267583);
   Graph_Graph75->SetMinimum(0);
   Graph_Graph75->SetMaximum(0.3418828);
   Graph_Graph75->SetDirectory(0);
   Graph_Graph75->SetStats(0);
   Graph_Graph75->SetLineStyle(0);
   Graph_Graph75->SetMarkerStyle(20);
   Graph_Graph75->GetXaxis()->SetLabelFont(42);
   Graph_Graph75->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph75->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph75->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph75->GetXaxis()->SetTitleFont(42);
   Graph_Graph75->GetYaxis()->SetLabelFont(42);
   Graph_Graph75->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph75->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph75->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph75->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph75->GetYaxis()->SetTitleFont(42);
   Graph_Graph75->GetZaxis()->SetLabelFont(42);
   Graph_Graph75->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph75->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph75->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph75);
   
   graph->Draw(" c");
   
   Double_t Graph4_fx76[18] = {
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
   Double_t Graph4_fy76[18] = {
   0.005983517,
   0.03251427,
   0.07562096,
   0.1132943,
   0.1527159,
   0.1941086,
   0.2326733,
   0.2671243,
   0.295148,
   0.3147731,
   0.3189723,
   0.3118593,
   0.2935197,
   0.2616396,
   0.2210182,
   0.1742264,
   0.1011679,
   0.025127};
   graph = new TGraph(18,Graph4_fx76,Graph4_fy76);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph76 = new TH1F("Graph_Graph76","Graph",100,-3.323417,3.267583);
   Graph_Graph76->SetMinimum(0);
   Graph_Graph76->SetMaximum(0.3502712);
   Graph_Graph76->SetDirectory(0);
   Graph_Graph76->SetStats(0);
   Graph_Graph76->SetLineStyle(0);
   Graph_Graph76->SetMarkerStyle(20);
   Graph_Graph76->GetXaxis()->SetLabelFont(42);
   Graph_Graph76->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph76->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph76->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph76->GetXaxis()->SetTitleFont(42);
   Graph_Graph76->GetYaxis()->SetLabelFont(42);
   Graph_Graph76->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph76->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph76->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph76->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph76->GetYaxis()->SetTitleFont(42);
   Graph_Graph76->GetZaxis()->SetLabelFont(42);
   Graph_Graph76->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph76->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph76->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph76);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx77[18] = {
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
   Double_t Graph5_fy77[18] = {
   0.006861634,
   0.0337229,
   0.07840128,
   0.1153016,
   0.1576418,
   0.1954469,
   0.2340087,
   0.2686659,
   0.2992055,
   0.3164328,
   0.3208096,
   0.313584,
   0.294864,
   0.2653964,
   0.2245261,
   0.1754197,
   0.1030408,
   0.02549786};
   graph = new TGraph(18,Graph5_fx77,Graph5_fy77);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph77 = new TH1F("Graph_Graph77","Graph",100,-3.323417,3.267583);
   Graph_Graph77->SetMinimum(0);
   Graph_Graph77->SetMaximum(0.3522044);
   Graph_Graph77->SetDirectory(0);
   Graph_Graph77->SetStats(0);
   Graph_Graph77->SetLineStyle(0);
   Graph_Graph77->SetMarkerStyle(20);
   Graph_Graph77->GetXaxis()->SetLabelFont(42);
   Graph_Graph77->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph77->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph77->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph77->GetXaxis()->SetTitleFont(42);
   Graph_Graph77->GetYaxis()->SetLabelFont(42);
   Graph_Graph77->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph77->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph77->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph77->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph77->GetYaxis()->SetTitleFont(42);
   Graph_Graph77->GetZaxis()->SetLabelFont(42);
   Graph_Graph77->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph77->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph77->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph77);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx78[18] = {
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
   Double_t Graph6_fy78[18] = {
   0.005855225,
   0.03155417,
   0.07450695,
   0.1108756,
   0.152247,
   0.1920064,
   0.2299036,
   0.2643944,
   0.2937312,
   0.3103312,
   0.3151411,
   0.3093242,
   0.2879726,
   0.2606513,
   0.2200323,
   0.1715731,
   0.1006532,
   0.02433559};
   graph = new TGraph(18,Graph6_fx78,Graph6_fy78);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph78 = new TH1F("Graph_Graph78","Graph",100,-3.323417,3.267583);
   Graph_Graph78->SetMinimum(0);
   Graph_Graph78->SetMaximum(0.3460697);
   Graph_Graph78->SetDirectory(0);
   Graph_Graph78->SetStats(0);
   Graph_Graph78->SetLineStyle(0);
   Graph_Graph78->SetMarkerStyle(20);
   Graph_Graph78->GetXaxis()->SetLabelFont(42);
   Graph_Graph78->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph78->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph78->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph78->GetXaxis()->SetTitleFont(42);
   Graph_Graph78->GetYaxis()->SetLabelFont(42);
   Graph_Graph78->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph78->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph78->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph78->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph78->GetYaxis()->SetTitleFont(42);
   Graph_Graph78->GetZaxis()->SetLabelFont(42);
   Graph_Graph78->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph78->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph78->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph78);
   
   graph->Draw(" c");
   Double_t xAxis25[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_050 = new TH1D("hist_eta_pp_050","",18, xAxis25);
   hist_eta_pp_050->SetBinContent(0,4.704997e-05);
   hist_eta_pp_050->SetBinContent(1,0.003591388);
   hist_eta_pp_050->SetBinContent(2,0.02881462);
   hist_eta_pp_050->SetBinContent(3,0.07124312);
   hist_eta_pp_050->SetBinContent(4,0.1119177);
   hist_eta_pp_050->SetBinContent(5,0.1503372);
   hist_eta_pp_050->SetBinContent(6,0.1969417);
   hist_eta_pp_050->SetBinContent(7,0.2247541);
   hist_eta_pp_050->SetBinContent(8,0.2649275);
   hist_eta_pp_050->SetBinContent(9,0.2927399);
   hist_eta_pp_050->SetBinContent(10,0.3082747);
   hist_eta_pp_050->SetBinContent(11,0.3223062);
   hist_eta_pp_050->SetBinContent(12,0.3070219);
   hist_eta_pp_050->SetBinContent(13,0.2851395);
   hist_eta_pp_050->SetBinContent(14,0.2597492);
   hist_eta_pp_050->SetBinContent(15,0.226341);
   hist_eta_pp_050->SetBinContent(16,0.1844136);
   hist_eta_pp_050->SetBinContent(17,0.1121682);
   hist_eta_pp_050->SetBinContent(18,0.02931575);
   hist_eta_pp_050->SetBinError(0,3.326935e-05);
   hist_eta_pp_050->SetBinError(1,0.0005476815);
   hist_eta_pp_050->SetBinError(2,0.001096954);
   hist_eta_pp_050->SetBinError(3,0.002439318);
   hist_eta_pp_050->SetBinError(4,0.003057358);
   hist_eta_pp_050->SetBinError(5,0.003543481);
   hist_eta_pp_050->SetBinError(6,0.0040557);
   hist_eta_pp_050->SetBinError(7,0.004332621);
   hist_eta_pp_050->SetBinError(8,0.004703926);
   hist_eta_pp_050->SetBinError(9,0.004944677);
   hist_eta_pp_050->SetBinError(10,0.00507418);
   hist_eta_pp_050->SetBinError(11,0.005188374);
   hist_eta_pp_050->SetBinError(12,0.005063859);
   hist_eta_pp_050->SetBinError(13,0.004880065);
   hist_eta_pp_050->SetBinError(14,0.004657727);
   hist_eta_pp_050->SetBinError(15,0.00434789);
   hist_eta_pp_050->SetBinError(16,0.003924582);
   hist_eta_pp_050->SetBinError(17,0.002164297);
   hist_eta_pp_050->SetBinError(18,0.001106452);
   hist_eta_pp_050->SetEntries(42528);

   ci = TColor::GetColor("#ffcc00");
   hist_eta_pp_050->SetFillColor(ci);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_050->SetLineColor(ci);
   hist_eta_pp_050->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_050->SetMarkerColor(ci);
   hist_eta_pp_050->SetMarkerStyle(21);
   hist_eta_pp_050->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_050->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_050->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_050->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_050->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_050->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_050->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_050->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_050->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_050->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_050->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_050->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_050->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_050->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_050->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_050->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_050->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_050->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_050->Draw("same p");
   TLatex *   tex = new TLatex(0.5,0.82,"pp");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
      tex = new TLatex(0.35,0.58,"25 < p_{T}^{ave} < 55 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
      tex = new TLatex(0.35,0.7,"#bf{CMS}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
      tex = new TLatex(0.55,0.7,"#sqrt{s_{NN}} = 5.02 TeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
      tex = new TLatex(0.35,0.93,"pp 25.8 pb^{-1} pPb 35 nb^{-1}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_0_0->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_0_1
   TPad *p_0_1 = new TPad("p_0_1", "p_0_1",0,0.6573147,0.3053435,0.8096192);
   p_0_1->Draw();
   p_0_1->cd();
   p_0_1->Range(-5.569572,0.0001,2.999,0.5999);
   p_0_1->SetFillColor(0);
   p_0_1->SetBorderMode(0);
   p_0_1->SetBorderSize(0);
   p_0_1->SetTickx(1);
   p_0_1->SetTicky(1);
   p_0_1->SetLeftMargin(0.3);
   p_0_1->SetRightMargin(0);
   p_0_1->SetTopMargin(0);
   p_0_1->SetBottomMargin(0);
   p_0_1->SetFrameLineColor(0);
   p_0_1->SetFrameBorderMode(0);
   p_0_1->SetFrameLineColor(0);
   p_0_1->SetFrameBorderMode(0);
   
   TH1D *emptyDist51 = new TH1D("emptyDist51","",10,-2.999,2.999);
   emptyDist51->SetBinContent(7,1000);
   emptyDist51->SetBinError(7,1000);
   emptyDist51->SetMinimum(0.0001);
   emptyDist51->SetMaximum(0.5999);
   emptyDist51->SetEntries(1);
   emptyDist51->SetLineStyle(0);
   emptyDist51->SetMarkerStyle(20);
   emptyDist51->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist51->GetXaxis()->CenterTitle(true);
   emptyDist51->GetXaxis()->SetLabelFont(43);
   emptyDist51->GetXaxis()->SetLabelOffset(0.01);
   emptyDist51->GetXaxis()->SetLabelSize(33);
   emptyDist51->GetXaxis()->SetTitleSize(33);
   emptyDist51->GetXaxis()->SetTitleOffset(7.5);
   emptyDist51->GetXaxis()->SetTitleFont(43);
   emptyDist51->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist51->GetYaxis()->CenterTitle(true);
   emptyDist51->GetYaxis()->SetNdivisions(505);
   emptyDist51->GetYaxis()->SetLabelFont(43);
   emptyDist51->GetYaxis()->SetLabelOffset(0.01);
   emptyDist51->GetYaxis()->SetLabelSize(33);
   emptyDist51->GetYaxis()->SetTitleSize(33);
   emptyDist51->GetYaxis()->SetTitleOffset(7.5);
   emptyDist51->GetYaxis()->SetTitleFont(43);
   emptyDist51->GetZaxis()->SetLabelFont(42);
   emptyDist51->GetZaxis()->SetLabelSize(0.045);
   emptyDist51->GetZaxis()->SetTitleSize(0.035);
   emptyDist51->GetZaxis()->SetTitleFont(42);
   emptyDist51->Draw("");
   
   Double_t Graph0_fx1026[18] = {
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
   Double_t Graph0_fy1026[18] = {
   0.0003697256,
   0.01091141,
   0.04472995,
   0.08243214,
   0.1266053,
   0.1757898,
   0.2234246,
   0.2654325,
   0.300039,
   0.3264657,
   0.3366021,
   0.3338864,
   0.3182187,
   0.2860688,
   0.2461253,
   0.193643,
   0.1107408,
   0.02436001};
   Double_t Graph0_fex1026[18] = {
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
   Double_t Graph0_fey1026[18] = {
   -0.0002184906,
   -0.001201397,
   -0.0020282,
   -0.001721121,
   -0.001978897,
   -0.001274689,
   -0.0008594735,
   -0.001110547,
   -0.001481892,
   -0.002616433,
   -0.002775273,
   -0.003438876,
   -0.00252846,
   -0.00147339,
   -0.001854266,
   -0.001570767,
   -0.0009535082,
   -0.001319826};
   gre = new TGraphErrors(18,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 977;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1026 = new TH1F("Graph_Graph1026","Graph",100,-3.46425,3.51675);
   Graph_Graph1026->SetMinimum(0);
   Graph_Graph1026->SetMaximum(0.3702253);
   Graph_Graph1026->SetDirectory(0);
   Graph_Graph1026->SetStats(0);
   Graph_Graph1026->SetLineStyle(0);
   Graph_Graph1026->SetMarkerStyle(20);
   Graph_Graph1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph1026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1026->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1026->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1026->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1026->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1026->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1026);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx79[18] = {
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
   Double_t Graph1_fy79[18] = {
   0.001009169,
   0.01768323,
   0.05973056,
   0.099137,
   0.142393,
   0.1861871,
   0.2264215,
   0.2600742,
   0.287518,
   0.3066003,
   0.3186872,
   0.3175281,
   0.3033716,
   0.2796533,
   0.2430202,
   0.1966597,
   0.116398,
   0.02707123};
   graph = new TGraph(18,Graph1_fx79,Graph1_fy79);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph79 = new TH1F("Graph_Graph79","Graph",100,-3.323417,3.267583);
   Graph_Graph79->SetMinimum(0);
   Graph_Graph79->SetMaximum(0.350455);
   Graph_Graph79->SetDirectory(0);
   Graph_Graph79->SetStats(0);
   Graph_Graph79->SetLineStyle(0);
   Graph_Graph79->SetMarkerStyle(20);
   Graph_Graph79->GetXaxis()->SetLabelFont(42);
   Graph_Graph79->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph79->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph79->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph79->GetXaxis()->SetTitleFont(42);
   Graph_Graph79->GetYaxis()->SetLabelFont(42);
   Graph_Graph79->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph79->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph79->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph79->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph79->GetYaxis()->SetTitleFont(42);
   Graph_Graph79->GetZaxis()->SetLabelFont(42);
   Graph_Graph79->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph79->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph79->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph79);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx80[18] = {
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
   Double_t Graph2_fy80[18] = {
   0.001229917,
   0.01934537,
   0.0615413,
   0.1036612,
   0.1487041,
   0.1916501,
   0.2310632,
   0.2626784,
   0.2933246,
   0.3175277,
   0.3219814,
   0.3218183,
   0.3116902,
   0.283785,
   0.2449633,
   0.2021163,
   0.1198845,
   0.02810346};
   graph = new TGraph(18,Graph2_fx80,Graph2_fy80);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph80 = new TH1F("Graph_Graph80","Graph",100,-3.323417,3.267583);
   Graph_Graph80->SetMinimum(0);
   Graph_Graph80->SetMaximum(0.3540566);
   Graph_Graph80->SetDirectory(0);
   Graph_Graph80->SetStats(0);
   Graph_Graph80->SetLineStyle(0);
   Graph_Graph80->SetMarkerStyle(20);
   Graph_Graph80->GetXaxis()->SetLabelFont(42);
   Graph_Graph80->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph80->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph80->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph80->GetXaxis()->SetTitleFont(42);
   Graph_Graph80->GetYaxis()->SetLabelFont(42);
   Graph_Graph80->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph80->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph80->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph80->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph80->GetYaxis()->SetTitleFont(42);
   Graph_Graph80->GetZaxis()->SetLabelFont(42);
   Graph_Graph80->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph80->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph80->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph80);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx81[18] = {
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
   Double_t Graph3_fy81[18] = {
   0.0008352311,
   0.01667603,
   0.05311649,
   0.09320753,
   0.1396924,
   0.1814023,
   0.2228339,
   0.2555183,
   0.283117,
   0.3042081,
   0.3082832,
   0.3074561,
   0.2998317,
   0.2742736,
   0.2382035,
   0.1946597,
   0.1138452,
   0.02533524};
   graph = new TGraph(18,Graph3_fx81,Graph3_fy81);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph81 = new TH1F("Graph_Graph81","Graph",100,-3.323417,3.267583);
   Graph_Graph81->SetMinimum(0);
   Graph_Graph81->SetMaximum(0.339028);
   Graph_Graph81->SetDirectory(0);
   Graph_Graph81->SetStats(0);
   Graph_Graph81->SetLineStyle(0);
   Graph_Graph81->SetMarkerStyle(20);
   Graph_Graph81->GetXaxis()->SetLabelFont(42);
   Graph_Graph81->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph81->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph81->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph81->GetXaxis()->SetTitleFont(42);
   Graph_Graph81->GetYaxis()->SetLabelFont(42);
   Graph_Graph81->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph81->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph81->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph81->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph81->GetYaxis()->SetTitleFont(42);
   Graph_Graph81->GetZaxis()->SetLabelFont(42);
   Graph_Graph81->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph81->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph81->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph81);
   
   graph->Draw(" c");
   
   Double_t Graph4_fx82[18] = {
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
   Double_t Graph4_fy82[18] = {
   0.0009663632,
   0.01759843,
   0.0577629,
   0.0969606,
   0.1402118,
   0.1844765,
   0.2248091,
   0.2603992,
   0.2891793,
   0.3092849,
   0.3197024,
   0.3192566,
   0.3066906,
   0.2813965,
   0.244104,
   0.196029,
   0.1154447,
   0.02648986};
   graph = new TGraph(18,Graph4_fx82,Graph4_fy82);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph82 = new TH1F("Graph_Graph82","Graph",100,-3.323417,3.267583);
   Graph_Graph82->SetMinimum(0);
   Graph_Graph82->SetMaximum(0.3515761);
   Graph_Graph82->SetDirectory(0);
   Graph_Graph82->SetStats(0);
   Graph_Graph82->SetLineStyle(0);
   Graph_Graph82->SetMarkerStyle(20);
   Graph_Graph82->GetXaxis()->SetLabelFont(42);
   Graph_Graph82->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph82->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph82->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph82->GetXaxis()->SetTitleFont(42);
   Graph_Graph82->GetYaxis()->SetLabelFont(42);
   Graph_Graph82->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph82->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph82->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph82->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph82->GetYaxis()->SetTitleFont(42);
   Graph_Graph82->GetZaxis()->SetLabelFont(42);
   Graph_Graph82->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph82->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph82->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph82);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx83[18] = {
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
   Double_t Graph5_fy83[18] = {
   0.001126157,
   0.01770095,
   0.06026288,
   0.0997594,
   0.1454086,
   0.1864541,
   0.2298307,
   0.2622053,
   0.291227,
   0.3146291,
   0.3273607,
   0.3246247,
   0.308882,
   0.2843501,
   0.2454941,
   0.2014251,
   0.1173205,
   0.02737251};
   graph = new TGraph(18,Graph5_fx83,Graph5_fy83);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph83 = new TH1F("Graph_Graph83","Graph",100,-3.323417,3.267583);
   Graph_Graph83->SetMinimum(0);
   Graph_Graph83->SetMaximum(0.3599841);
   Graph_Graph83->SetDirectory(0);
   Graph_Graph83->SetStats(0);
   Graph_Graph83->SetLineStyle(0);
   Graph_Graph83->SetMarkerStyle(20);
   Graph_Graph83->GetXaxis()->SetLabelFont(42);
   Graph_Graph83->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph83->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph83->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph83->GetXaxis()->SetTitleFont(42);
   Graph_Graph83->GetYaxis()->SetLabelFont(42);
   Graph_Graph83->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph83->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph83->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph83->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph83->GetYaxis()->SetTitleFont(42);
   Graph_Graph83->GetZaxis()->SetLabelFont(42);
   Graph_Graph83->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph83->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph83->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph83);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx84[18] = {
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
   Double_t Graph6_fy84[18] = {
   0.0007691922,
   0.01585819,
   0.05637721,
   0.09436307,
   0.1395368,
   0.1787067,
   0.2229413,
   0.2553143,
   0.2843914,
   0.3067984,
   0.31718,
   0.3156466,
   0.3007726,
   0.27662,
   0.2382496,
   0.1942693,
   0.1138809,
   0.02591651};
   graph = new TGraph(18,Graph6_fx84,Graph6_fy84);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph84 = new TH1F("Graph_Graph84","Graph",100,-3.323417,3.267583);
   Graph_Graph84->SetMinimum(0);
   Graph_Graph84->SetMaximum(0.3488211);
   Graph_Graph84->SetDirectory(0);
   Graph_Graph84->SetStats(0);
   Graph_Graph84->SetLineStyle(0);
   Graph_Graph84->SetMarkerStyle(20);
   Graph_Graph84->GetXaxis()->SetLabelFont(42);
   Graph_Graph84->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph84->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph84->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph84->GetXaxis()->SetTitleFont(42);
   Graph_Graph84->GetYaxis()->SetLabelFont(42);
   Graph_Graph84->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph84->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph84->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph84->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph84->GetYaxis()->SetTitleFont(42);
   Graph_Graph84->GetZaxis()->SetLabelFont(42);
   Graph_Graph84->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph84->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph84->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph84);
   
   graph->Draw(" c");
   Double_t xAxis26[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_152 = new TH1D("hist_eta_pp_152","",18, xAxis26);
   hist_eta_pp_152->SetBinContent(0,1.398952e-06);
   hist_eta_pp_152->SetBinContent(1,0.0004867358);
   hist_eta_pp_152->SetBinContent(2,0.01125452);
   hist_eta_pp_152->SetBinContent(3,0.04523167);
   hist_eta_pp_152->SetBinContent(4,0.08300336);
   hist_eta_pp_152->SetBinContent(5,0.1275447);
   hist_eta_pp_152->SetBinContent(6,0.1758855);
   hist_eta_pp_152->SetBinContent(7,0.2238438);
   hist_eta_pp_152->SetBinContent(8,0.2653207);
   hist_eta_pp_152->SetBinContent(9,0.3003458);
   hist_eta_pp_152->SetBinContent(10,0.3257405);
   hist_eta_pp_152->SetBinContent(11,0.3359769);
   hist_eta_pp_152->SetBinContent(12,0.3327783);
   hist_eta_pp_152->SetBinContent(13,0.3176448);
   hist_eta_pp_152->SetBinContent(14,0.2865285);
   hist_eta_pp_152->SetBinContent(15,0.2456427);
   hist_eta_pp_152->SetBinContent(16,0.1933633);
   hist_eta_pp_152->SetBinContent(17,0.11035);
   hist_eta_pp_152->SetBinContent(18,0.02387489);
   hist_eta_pp_152->SetBinError(0,1.398952e-06);
   hist_eta_pp_152->SetBinError(1,4.916774e-05);
   hist_eta_pp_152->SetBinError(2,0.0001671792);
   hist_eta_pp_152->SetBinError(3,0.0004739744);
   hist_eta_pp_152->SetBinError(4,0.0006420686);
   hist_eta_pp_152->SetBinError(5,0.0007959115);
   hist_eta_pp_152->SetBinError(6,0.0009346491);
   hist_eta_pp_152->SetBinError(7,0.001054402);
   hist_eta_pp_152->SetBinError(8,0.00114794);
   hist_eta_pp_152->SetBinError(9,0.001221362);
   hist_eta_pp_152->SetBinError(10,0.001271948);
   hist_eta_pp_152->SetBinError(11,0.001291779);
   hist_eta_pp_152->SetBinError(12,0.001285616);
   hist_eta_pp_152->SetBinError(13,0.001256043);
   hist_eta_pp_152->SetBinError(14,0.001192937);
   hist_eta_pp_152->SetBinError(15,0.00110455);
   hist_eta_pp_152->SetBinError(16,0.0009799876);
   hist_eta_pp_152->SetBinError(17,0.0005234856);
   hist_eta_pp_152->SetBinError(18,0.0002434946);
   hist_eta_pp_152->SetEntries(714840);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_152->SetLineColor(ci);
   hist_eta_pp_152->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_152->SetMarkerColor(ci);
   hist_eta_pp_152->SetMarkerStyle(21);
   hist_eta_pp_152->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_152->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_152->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_152->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_152->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_152->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_152->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_152->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_152->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_152->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_152->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_152->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_152->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_152->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_152->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_152->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_152->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_152->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_152->Draw("same p");
      tex = new TLatex(0.35,0.88,"55 < p_{T}^{ave} < 75 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   p_0_1->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_0_2
   TPad *p_0_2 = new TPad("p_0_2", "p_0_2",0,0.50501,0.3053435,0.6573147);
   p_0_2->Draw();
   p_0_2->cd();
   p_0_2->Range(-5.569572,0.0001,2.999,0.5999);
   p_0_2->SetFillColor(0);
   p_0_2->SetBorderMode(0);
   p_0_2->SetBorderSize(0);
   p_0_2->SetTickx(1);
   p_0_2->SetTicky(1);
   p_0_2->SetLeftMargin(0.3);
   p_0_2->SetRightMargin(0);
   p_0_2->SetTopMargin(0);
   p_0_2->SetBottomMargin(0);
   p_0_2->SetFrameLineColor(0);
   p_0_2->SetFrameBorderMode(0);
   p_0_2->SetFrameLineColor(0);
   p_0_2->SetFrameBorderMode(0);
   
   TH1D *emptyDist53 = new TH1D("emptyDist53","",10,-2.999,2.999);
   emptyDist53->SetBinContent(7,1000);
   emptyDist53->SetBinError(7,1000);
   emptyDist53->SetMinimum(0.0001);
   emptyDist53->SetMaximum(0.5999);
   emptyDist53->SetEntries(1);
   emptyDist53->SetLineStyle(0);
   emptyDist53->SetMarkerStyle(20);
   emptyDist53->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist53->GetXaxis()->CenterTitle(true);
   emptyDist53->GetXaxis()->SetLabelFont(43);
   emptyDist53->GetXaxis()->SetLabelOffset(0.01);
   emptyDist53->GetXaxis()->SetLabelSize(33);
   emptyDist53->GetXaxis()->SetTitleSize(33);
   emptyDist53->GetXaxis()->SetTitleOffset(7.5);
   emptyDist53->GetXaxis()->SetTitleFont(43);
   emptyDist53->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist53->GetYaxis()->CenterTitle(true);
   emptyDist53->GetYaxis()->SetNdivisions(505);
   emptyDist53->GetYaxis()->SetLabelFont(43);
   emptyDist53->GetYaxis()->SetLabelOffset(0.01);
   emptyDist53->GetYaxis()->SetLabelSize(33);
   emptyDist53->GetYaxis()->SetTitleSize(33);
   emptyDist53->GetYaxis()->SetTitleOffset(7.5);
   emptyDist53->GetYaxis()->SetTitleFont(43);
   emptyDist53->GetZaxis()->SetLabelFont(42);
   emptyDist53->GetZaxis()->SetLabelSize(0.045);
   emptyDist53->GetZaxis()->SetTitleSize(0.035);
   emptyDist53->GetZaxis()->SetTitleFont(42);
   emptyDist53->Draw("");
   
   Double_t Graph0_fx1027[18] = {
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
   Double_t Graph0_fy1027[18] = {
   1.0577e-05,
   0.003590663,
   0.0257312,
   0.06065647,
   0.1106343,
   0.1639788,
   0.2191431,
   0.26898,
   0.3115344,
   0.3369657,
   0.354833,
   0.3543504,
   0.3363926,
   0.297898,
   0.2533551,
   0.1965692,
   0.1070288,
   0.02012098};
   Double_t Graph0_fex1027[18] = {
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
   Double_t Graph0_fey1027[18] = {
   -3.244484e-05,
   -0.0006587834,
   -0.001861143,
   -0.002350659,
   -0.001968906,
   -0.001454107,
   -0.0008744601,
   -0.0009841772,
   -0.001867235,
   -0.002586742,
   -0.00301676,
   -0.0029897,
   -0.002742887,
   -0.002486951,
   -0.001456035,
   -0.0009797205,
   -0.001411382,
   -0.0007764726};
   gre = new TGraphErrors(18,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 979;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","Graph",100,-3.46425,3.51675);
   Graph_Graph1027->SetMinimum(0);
   Graph_Graph1027->SetMaximum(0.3903152);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);
   Graph_Graph1027->SetLineStyle(0);
   Graph_Graph1027->SetMarkerStyle(20);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1027->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1027->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1027->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx85[18] = {
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
   Double_t Graph1_fy85[18] = {
   5.754668e-05,
   0.007407784,
   0.03824625,
   0.07818108,
   0.1266601,
   0.1766251,
   0.2255938,
   0.2659508,
   0.2987091,
   0.3221803,
   0.333325,
   0.3323118,
   0.3194786,
   0.2912794,
   0.2519356,
   0.201616,
   0.1134723,
   0.02319259};
   graph = new TGraph(18,Graph1_fx85,Graph1_fy85);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph85 = new TH1F("Graph_Graph85","Graph",100,-3.323417,3.267583);
   Graph_Graph85->SetMinimum(0);
   Graph_Graph85->SetMaximum(0.3666517);
   Graph_Graph85->SetDirectory(0);
   Graph_Graph85->SetStats(0);
   Graph_Graph85->SetLineStyle(0);
   Graph_Graph85->SetMarkerStyle(20);
   Graph_Graph85->GetXaxis()->SetLabelFont(42);
   Graph_Graph85->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph85->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph85->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph85->GetXaxis()->SetTitleFont(42);
   Graph_Graph85->GetYaxis()->SetLabelFont(42);
   Graph_Graph85->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph85->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph85->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph85->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph85->GetYaxis()->SetTitleFont(42);
   Graph_Graph85->GetZaxis()->SetLabelFont(42);
   Graph_Graph85->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph85->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph85->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph85);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx86[18] = {
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
   Double_t Graph2_fy86[18] = {
   0.0001198727,
   0.008173288,
   0.04224618,
   0.08296252,
   0.1318885,
   0.1823459,
   0.2284152,
   0.2713847,
   0.3015226,
   0.3279357,
   0.3419732,
   0.3422584,
   0.3226593,
   0.2964196,
   0.2548,
   0.2048766,
   0.1184696,
   0.02389379};
   graph = new TGraph(18,Graph2_fx86,Graph2_fy86);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph86 = new TH1F("Graph_Graph86","Graph",100,-3.323417,3.267583);
   Graph_Graph86->SetMinimum(0);
   Graph_Graph86->SetMaximum(0.3764722);
   Graph_Graph86->SetDirectory(0);
   Graph_Graph86->SetStats(0);
   Graph_Graph86->SetLineStyle(0);
   Graph_Graph86->SetMarkerStyle(20);
   Graph_Graph86->GetXaxis()->SetLabelFont(42);
   Graph_Graph86->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph86->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph86->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph86->GetXaxis()->SetTitleFont(42);
   Graph_Graph86->GetYaxis()->SetLabelFont(42);
   Graph_Graph86->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph86->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph86->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph86->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph86->GetYaxis()->SetTitleFont(42);
   Graph_Graph86->GetZaxis()->SetLabelFont(42);
   Graph_Graph86->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph86->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph86->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph86);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx87[18] = {
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
   Double_t Graph3_fy87[18] = {
   4.944506e-05,
   0.006754672,
   0.03651673,
   0.07330929,
   0.1222046,
   0.1714147,
   0.2185308,
   0.2636876,
   0.2938928,
   0.314725,
   0.3252265,
   0.3246095,
   0.3100734,
   0.2878264,
   0.2478373,
   0.1952872,
   0.1113493,
   0.02139547};
   graph = new TGraph(18,Graph3_fx87,Graph3_fy87);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph87 = new TH1F("Graph_Graph87","Graph",100,-3.323417,3.267583);
   Graph_Graph87->SetMinimum(0);
   Graph_Graph87->SetMaximum(0.3577442);
   Graph_Graph87->SetDirectory(0);
   Graph_Graph87->SetStats(0);
   Graph_Graph87->SetLineStyle(0);
   Graph_Graph87->SetMarkerStyle(20);
   Graph_Graph87->GetXaxis()->SetLabelFont(42);
   Graph_Graph87->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph87->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph87->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph87->GetXaxis()->SetTitleFont(42);
   Graph_Graph87->GetYaxis()->SetLabelFont(42);
   Graph_Graph87->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph87->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph87->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph87->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph87->GetYaxis()->SetTitleFont(42);
   Graph_Graph87->GetZaxis()->SetLabelFont(42);
   Graph_Graph87->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph87->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph87->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph87);
   
   graph->Draw(" c");
   
   Double_t Graph4_fx88[18] = {
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
   Double_t Graph4_fy88[18] = {
   5.750497e-05,
   0.007146834,
   0.03778615,
   0.07654668,
   0.1244895,
   0.1740673,
   0.2236121,
   0.26556,
   0.3000762,
   0.3238577,
   0.3372348,
   0.3357484,
   0.3213805,
   0.2939657,
   0.2515223,
   0.1998306,
   0.1123841,
   0.02274931};
   graph = new TGraph(18,Graph4_fx88,Graph4_fy88);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph88 = new TH1F("Graph_Graph88","Graph",100,-3.323417,3.267583);
   Graph_Graph88->SetMinimum(0);
   Graph_Graph88->SetMaximum(0.3709525);
   Graph_Graph88->SetDirectory(0);
   Graph_Graph88->SetStats(0);
   Graph_Graph88->SetLineStyle(0);
   Graph_Graph88->SetMarkerStyle(20);
   Graph_Graph88->GetXaxis()->SetLabelFont(42);
   Graph_Graph88->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph88->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph88->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph88->GetXaxis()->SetTitleFont(42);
   Graph_Graph88->GetYaxis()->SetLabelFont(42);
   Graph_Graph88->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph88->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph88->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph88->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph88->GetYaxis()->SetTitleFont(42);
   Graph_Graph88->GetZaxis()->SetLabelFont(42);
   Graph_Graph88->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph88->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph88->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph88);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx89[18] = {
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
   Double_t Graph5_fy89[18] = {
   8.947132e-05,
   0.007417891,
   0.03923956,
   0.0792197,
   0.1282059,
   0.1775197,
   0.2264409,
   0.2708904,
   0.302619,
   0.3304138,
   0.3393854,
   0.3404199,
   0.3256079,
   0.2951794,
   0.2560526,
   0.2040073,
   0.1140509,
   0.02330402};
   graph = new TGraph(18,Graph5_fx89,Graph5_fy89);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph89 = new TH1F("Graph_Graph89","Graph",100,-3.323417,3.267583);
   Graph_Graph89->SetMinimum(0);
   Graph_Graph89->SetMaximum(0.3744529);
   Graph_Graph89->SetDirectory(0);
   Graph_Graph89->SetStats(0);
   Graph_Graph89->SetLineStyle(0);
   Graph_Graph89->SetMarkerStyle(20);
   Graph_Graph89->GetXaxis()->SetLabelFont(42);
   Graph_Graph89->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph89->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph89->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph89->GetXaxis()->SetTitleFont(42);
   Graph_Graph89->GetYaxis()->SetLabelFont(42);
   Graph_Graph89->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph89->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph89->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph89->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph89->GetYaxis()->SetTitleFont(42);
   Graph_Graph89->GetZaxis()->SetLabelFont(42);
   Graph_Graph89->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph89->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph89->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph89);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx90[18] = {
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
   Double_t Graph6_fy90[18] = {
   3.467117e-05,
   0.006764053,
   0.03608013,
   0.07523687,
   0.1217597,
   0.1720827,
   0.2191798,
   0.2639892,
   0.2936007,
   0.3215229,
   0.3308358,
   0.3320289,
   0.3175957,
   0.2854047,
   0.249877,
   0.1983884,
   0.1108434,
   0.02192546};
   graph = new TGraph(18,Graph6_fx90,Graph6_fy90);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph90 = new TH1F("Graph_Graph90","Graph",100,-3.323417,3.267583);
   Graph_Graph90->SetMinimum(0);
   Graph_Graph90->SetMaximum(0.3652283);
   Graph_Graph90->SetDirectory(0);
   Graph_Graph90->SetStats(0);
   Graph_Graph90->SetLineStyle(0);
   Graph_Graph90->SetMarkerStyle(20);
   Graph_Graph90->GetXaxis()->SetLabelFont(42);
   Graph_Graph90->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph90->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph90->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph90->GetXaxis()->SetTitleFont(42);
   Graph_Graph90->GetYaxis()->SetLabelFont(42);
   Graph_Graph90->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph90->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph90->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph90->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph90->GetYaxis()->SetTitleFont(42);
   Graph_Graph90->GetZaxis()->SetLabelFont(42);
   Graph_Graph90->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph90->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph90->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph90);
   
   graph->Draw(" c");
   Double_t xAxis27[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_254 = new TH1D("hist_eta_pp_254","",18, xAxis27);
   hist_eta_pp_254->SetBinContent(1,3.0847e-05);
   hist_eta_pp_254->SetBinContent(2,0.003849265);
   hist_eta_pp_254->SetBinContent(3,0.02634775);
   hist_eta_pp_254->SetBinContent(4,0.06145163);
   hist_eta_pp_254->SetBinContent(5,0.1112784);
   hist_eta_pp_254->SetBinContent(6,0.1648904);
   hist_eta_pp_254->SetBinContent(7,0.2192517);
   hist_eta_pp_254->SetBinContent(8,0.2691797);
   hist_eta_pp_254->SetBinContent(9,0.3113211);
   hist_eta_pp_254->SetBinContent(10,0.3365099);
   hist_eta_pp_254->SetBinContent(11,0.3533083);
   hist_eta_pp_254->SetBinContent(12,0.3539517);
   hist_eta_pp_254->SetBinContent(13,0.3351394);
   hist_eta_pp_254->SetBinContent(14,0.2968715);
   hist_eta_pp_254->SetBinContent(15,0.2526237);
   hist_eta_pp_254->SetBinContent(16,0.1968171);
   hist_eta_pp_254->SetBinContent(17,0.1070699);
   hist_eta_pp_254->SetBinContent(18,0.01974208);
   hist_eta_pp_254->SetBinError(1,1.165907e-05);
   hist_eta_pp_254->SetBinError(2,9.2094e-05);
   hist_eta_pp_254->SetBinError(3,0.0003407448);
   hist_eta_pp_254->SetBinError(4,0.0005203843);
   hist_eta_pp_254->SetBinError(5,0.0007002656);
   hist_eta_pp_254->SetBinError(6,0.0008524231);
   hist_eta_pp_254->SetBinError(7,0.0009829443);
   hist_eta_pp_254->SetBinError(8,0.001089127);
   hist_eta_pp_254->SetBinError(9,0.001171283);
   hist_eta_pp_254->SetBinError(10,0.001217745);
   hist_eta_pp_254->SetBinError(11,0.00124777);
   hist_eta_pp_254->SetBinError(12,0.001248905);
   hist_eta_pp_254->SetBinError(13,0.001215263);
   hist_eta_pp_254->SetBinError(14,0.001143778);
   hist_eta_pp_254->SetBinError(15,0.001055102);
   hist_eta_pp_254->SetBinError(16,0.0009312984);
   hist_eta_pp_254->SetBinError(17,0.0004857091);
   hist_eta_pp_254->SetBinError(18,0.0002085638);
   hist_eta_pp_254->SetEntries(805674);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_254->SetLineColor(ci);
   hist_eta_pp_254->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_254->SetMarkerColor(ci);
   hist_eta_pp_254->SetMarkerStyle(21);
   hist_eta_pp_254->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_254->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_254->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_254->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_254->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_254->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_254->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_254->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_254->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_254->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_254->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_254->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_254->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_254->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_254->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_254->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_254->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_254->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_254->Draw("same p");
      tex = new TLatex(0.35,0.88,"75 < p_{T}^{ave} < 95 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   p_0_2->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_0_3
   TPad *p_0_3 = new TPad("p_0_3", "p_0_3",0,0.3527054,0.3053435,0.50501);
   p_0_3->Draw();
   p_0_3->cd();
   p_0_3->Range(-5.569572,0.0001,2.999,0.5999);
   p_0_3->SetFillColor(0);
   p_0_3->SetBorderMode(0);
   p_0_3->SetBorderSize(0);
   p_0_3->SetTickx(1);
   p_0_3->SetTicky(1);
   p_0_3->SetLeftMargin(0.3);
   p_0_3->SetRightMargin(0);
   p_0_3->SetTopMargin(0);
   p_0_3->SetBottomMargin(0);
   p_0_3->SetFrameLineColor(0);
   p_0_3->SetFrameBorderMode(0);
   p_0_3->SetFrameLineColor(0);
   p_0_3->SetFrameBorderMode(0);
   
   TH1D *emptyDist55 = new TH1D("emptyDist55","",10,-2.999,2.999);
   emptyDist55->SetBinContent(7,1000);
   emptyDist55->SetBinError(7,1000);
   emptyDist55->SetMinimum(0.0001);
   emptyDist55->SetMaximum(0.5999);
   emptyDist55->SetEntries(1);
   emptyDist55->SetLineStyle(0);
   emptyDist55->SetMarkerStyle(20);
   emptyDist55->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist55->GetXaxis()->CenterTitle(true);
   emptyDist55->GetXaxis()->SetLabelFont(43);
   emptyDist55->GetXaxis()->SetLabelOffset(0.01);
   emptyDist55->GetXaxis()->SetLabelSize(33);
   emptyDist55->GetXaxis()->SetTitleSize(33);
   emptyDist55->GetXaxis()->SetTitleOffset(7.5);
   emptyDist55->GetXaxis()->SetTitleFont(43);
   emptyDist55->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist55->GetYaxis()->CenterTitle(true);
   emptyDist55->GetYaxis()->SetNdivisions(505);
   emptyDist55->GetYaxis()->SetLabelFont(43);
   emptyDist55->GetYaxis()->SetLabelOffset(0.01);
   emptyDist55->GetYaxis()->SetLabelSize(33);
   emptyDist55->GetYaxis()->SetTitleSize(33);
   emptyDist55->GetYaxis()->SetTitleOffset(7.5);
   emptyDist55->GetYaxis()->SetTitleFont(43);
   emptyDist55->GetZaxis()->SetLabelFont(42);
   emptyDist55->GetZaxis()->SetLabelSize(0.045);
   emptyDist55->GetZaxis()->SetTitleSize(0.035);
   emptyDist55->GetZaxis()->SetTitleFont(42);
   emptyDist55->Draw("");
   
   Double_t Graph0_fx1028[18] = {
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
   Double_t Graph0_fy1028[18] = {
   0,
   0.0009996344,
   0.01388439,
   0.04380755,
   0.09282947,
   0.1507488,
   0.2152445,
   0.2717181,
   0.3189694,
   0.3516541,
   0.3713037,
   0.3708913,
   0.3479961,
   0.3104816,
   0.2586529,
   0.1989956,
   0.1004683,
   0.01542907};
   Double_t Graph0_fex1028[18] = {
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
   Double_t Graph0_fey1028[18] = {
   -0,
   -0.0002683744,
   -0.001278097,
   -0.001784554,
   -0.001741991,
   -0.001628592,
   -0.0007378221,
   -0.0008128232,
   -0.002382231,
   -0.002341999,
   -0.003376741,
   -0.001879061,
   -0.002199318,
   -0.001569773,
   -0.001006472,
   -0.0009048796,
   -0.001315999,
   -0.0007400839};
   gre = new TGraphErrors(18,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 981;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1028 = new TH1F("Graph_Graph1028","Graph",100,-3.46425,3.51675);
   Graph_Graph1028->SetMinimum(0);
   Graph_Graph1028->SetMaximum(0.4084341);
   Graph_Graph1028->SetDirectory(0);
   Graph_Graph1028->SetStats(0);
   Graph_Graph1028->SetLineStyle(0);
   Graph_Graph1028->SetMarkerStyle(20);
   Graph_Graph1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph1028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1028->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1028->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1028->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1028->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1028->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1028);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx91[18] = {
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
   Double_t Graph1_fy91[18] = {
   6.426302e-08,
   0.002403142,
   0.02244725,
   0.05809504,
   0.1080715,
   0.1649541,
   0.2217839,
   0.270337,
   0.3097172,
   0.3359179,
   0.3502572,
   0.350099,
   0.3330712,
   0.3038128,
   0.2588445,
   0.2031218,
   0.1086251,
   0.01885453};
   graph = new TGraph(18,Graph1_fx91,Graph1_fy91);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph91 = new TH1F("Graph_Graph91","Graph",100,-3.323417,3.267583);
   Graph_Graph91->SetMinimum(0);
   Graph_Graph91->SetMaximum(0.3852829);
   Graph_Graph91->SetDirectory(0);
   Graph_Graph91->SetStats(0);
   Graph_Graph91->SetLineStyle(0);
   Graph_Graph91->SetMarkerStyle(20);
   Graph_Graph91->GetXaxis()->SetLabelFont(42);
   Graph_Graph91->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph91->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph91->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph91->GetXaxis()->SetTitleFont(42);
   Graph_Graph91->GetYaxis()->SetLabelFont(42);
   Graph_Graph91->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph91->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph91->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph91->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph91->GetYaxis()->SetTitleFont(42);
   Graph_Graph91->GetZaxis()->SetLabelFont(42);
   Graph_Graph91->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph91->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph91->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph91);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx92[18] = {
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
   Double_t Graph2_fy92[18] = {
   3.933941e-07,
   0.002893711,
   0.02329769,
   0.06065216,
   0.1131457,
   0.1737186,
   0.2268019,
   0.2739314,
   0.3117113,
   0.3446499,
   0.3594619,
   0.3569629,
   0.3417016,
   0.3062977,
   0.2641369,
   0.20725,
   0.113066,
   0.01926491};
   graph = new TGraph(18,Graph2_fx92,Graph2_fy92);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph92 = new TH1F("Graph_Graph92","Graph",100,-3.323417,3.267583);
   Graph_Graph92->SetMinimum(0);
   Graph_Graph92->SetMaximum(0.3954081);
   Graph_Graph92->SetDirectory(0);
   Graph_Graph92->SetStats(0);
   Graph_Graph92->SetLineStyle(0);
   Graph_Graph92->SetMarkerStyle(20);
   Graph_Graph92->GetXaxis()->SetLabelFont(42);
   Graph_Graph92->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph92->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph92->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph92->GetXaxis()->SetTitleFont(42);
   Graph_Graph92->GetYaxis()->SetLabelFont(42);
   Graph_Graph92->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph92->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph92->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph92->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph92->GetYaxis()->SetTitleFont(42);
   Graph_Graph92->GetZaxis()->SetLabelFont(42);
   Graph_Graph92->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph92->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph92->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph92);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx93[18] = {
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
   Double_t Graph3_fy93[18] = {
   -1.409957e-06,
   0.002316535,
   0.01945794,
   0.05274021,
   0.1027413,
   0.1605177,
   0.2179006,
   0.2672598,
   0.3026747,
   0.3321987,
   0.3414494,
   0.339756,
   0.3288754,
   0.2970044,
   0.2563118,
   0.199285,
   0.1043465,
   0.01628547};
   graph = new TGraph(18,Graph3_fx93,Graph3_fy93);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph93 = new TH1F("Graph_Graph93","Graph",100,-3.323417,3.267583);
   Graph_Graph93->SetMinimum(-0.03414649);
   Graph_Graph93->SetMaximum(0.3755945);
   Graph_Graph93->SetDirectory(0);
   Graph_Graph93->SetStats(0);
   Graph_Graph93->SetLineStyle(0);
   Graph_Graph93->SetMarkerStyle(20);
   Graph_Graph93->GetXaxis()->SetLabelFont(42);
   Graph_Graph93->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph93->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph93->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph93->GetXaxis()->SetTitleFont(42);
   Graph_Graph93->GetYaxis()->SetLabelFont(42);
   Graph_Graph93->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph93->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph93->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph93->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph93->GetYaxis()->SetTitleFont(42);
   Graph_Graph93->GetZaxis()->SetLabelFont(42);
   Graph_Graph93->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph93->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph93->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph93);
   
   graph->Draw(" c");
   
   Double_t Graph4_fx94[18] = {
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
   Double_t Graph4_fy94[18] = {
   -1.57044e-07,
   0.002267754,
   0.02161288,
   0.05640385,
   0.1061052,
   0.1632824,
   0.2204081,
   0.2702642,
   0.3094994,
   0.3386293,
   0.3540966,
   0.3533748,
   0.3361546,
   0.3033125,
   0.2601073,
   0.201899,
   0.1071364,
   0.01816885};
   graph = new TGraph(18,Graph4_fx94,Graph4_fy94);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph94 = new TH1F("Graph_Graph94","Graph",100,-3.323417,3.267583);
   Graph_Graph94->SetMinimum(-0.03540983);
   Graph_Graph94->SetMaximum(0.3895062);
   Graph_Graph94->SetDirectory(0);
   Graph_Graph94->SetStats(0);
   Graph_Graph94->SetLineStyle(0);
   Graph_Graph94->SetMarkerStyle(20);
   Graph_Graph94->GetXaxis()->SetLabelFont(42);
   Graph_Graph94->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph94->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph94->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph94->GetXaxis()->SetTitleFont(42);
   Graph_Graph94->GetYaxis()->SetLabelFont(42);
   Graph_Graph94->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph94->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph94->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph94->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph94->GetYaxis()->SetTitleFont(42);
   Graph_Graph94->GetZaxis()->SetLabelFont(42);
   Graph_Graph94->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph94->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph94->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph94);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx95[18] = {
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
   Double_t Graph5_fy95[18] = {
   1.036279e-06,
   0.00264166,
   0.02271024,
   0.058981,
   0.1101105,
   0.1656592,
   0.2215738,
   0.2721124,
   0.3140035,
   0.343234,
   0.356035,
   0.3558842,
   0.338755,
   0.3113362,
   0.26018,
   0.2033634,
   0.1094696,
   0.0193547};
   graph = new TGraph(18,Graph5_fx95,Graph5_fy95);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph95 = new TH1F("Graph_Graph95","Graph",100,-3.323417,3.267583);
   Graph_Graph95->SetMinimum(0);
   Graph_Graph95->SetMaximum(0.3916384);
   Graph_Graph95->SetDirectory(0);
   Graph_Graph95->SetStats(0);
   Graph_Graph95->SetLineStyle(0);
   Graph_Graph95->SetMarkerStyle(20);
   Graph_Graph95->GetXaxis()->SetLabelFont(42);
   Graph_Graph95->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph95->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph95->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph95->GetXaxis()->SetTitleFont(42);
   Graph_Graph95->GetYaxis()->SetLabelFont(42);
   Graph_Graph95->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph95->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph95->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph95->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph95->GetYaxis()->SetTitleFont(42);
   Graph_Graph95->GetZaxis()->SetLabelFont(42);
   Graph_Graph95->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph95->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph95->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph95);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx96[18] = {
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
   Double_t Graph6_fy96[18] = {
   -4.109405e-07,
   0.002227028,
   0.0201379,
   0.05576153,
   0.1049509,
   0.1600459,
   0.2149861,
   0.2669204,
   0.307903,
   0.3359089,
   0.34874,
   0.3490148,
   0.3328245,
   0.3028329,
   0.2536772,
   0.1980672,
   0.1059514,
   0.01783997};
   graph = new TGraph(18,Graph6_fx96,Graph6_fy96);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph96 = new TH1F("Graph_Graph96","Graph",100,-3.323417,3.267583);
   Graph_Graph96->SetMinimum(-0.03490193);
   Graph_Graph96->SetMaximum(0.3839163);
   Graph_Graph96->SetDirectory(0);
   Graph_Graph96->SetStats(0);
   Graph_Graph96->SetLineStyle(0);
   Graph_Graph96->SetMarkerStyle(20);
   Graph_Graph96->GetXaxis()->SetLabelFont(42);
   Graph_Graph96->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph96->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph96->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph96->GetXaxis()->SetTitleFont(42);
   Graph_Graph96->GetYaxis()->SetLabelFont(42);
   Graph_Graph96->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph96->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph96->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph96->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph96->GetYaxis()->SetTitleFont(42);
   Graph_Graph96->GetZaxis()->SetLabelFont(42);
   Graph_Graph96->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph96->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph96->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph96);
   
   graph->Draw(" c");
   Double_t xAxis28[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_356 = new TH1D("hist_eta_pp_356","",18, xAxis28);
   hist_eta_pp_356->SetBinContent(2,0.001104536);
   hist_eta_pp_356->SetBinContent(3,0.01418095);
   hist_eta_pp_356->SetBinContent(4,0.04412172);
   hist_eta_pp_356->SetBinContent(5,0.09300875);
   hist_eta_pp_356->SetBinContent(6,0.1516475);
   hist_eta_pp_356->SetBinContent(7,0.2150892);
   hist_eta_pp_356->SetBinContent(8,0.2716516);
   hist_eta_pp_356->SetBinContent(9,0.3186746);
   hist_eta_pp_356->SetBinContent(10,0.3509018);
   hist_eta_pp_356->SetBinContent(11,0.3713031);
   hist_eta_pp_356->SetBinContent(12,0.3702903);
   hist_eta_pp_356->SetBinContent(13,0.3481509);
   hist_eta_pp_356->SetBinContent(14,0.3098913);
   hist_eta_pp_356->SetBinContent(15,0.2587466);
   hist_eta_pp_356->SetBinContent(16,0.1986439);
   hist_eta_pp_356->SetBinContent(17,0.1005437);
   hist_eta_pp_356->SetBinContent(18,0.01534851);
   hist_eta_pp_356->SetBinError(2,3.494596e-05);
   hist_eta_pp_356->SetBinError(3,0.0001770822);
   hist_eta_pp_356->SetBinError(4,0.0003123549);
   hist_eta_pp_356->SetBinError(5,0.000453507);
   hist_eta_pp_356->SetBinError(6,0.0005790816);
   hist_eta_pp_356->SetBinError(7,0.0006896543);
   hist_eta_pp_356->SetBinError(8,0.0007750474);
   hist_eta_pp_356->SetBinError(9,0.0008394519);
   hist_eta_pp_356->SetBinError(10,0.0008808763);
   hist_eta_pp_356->SetBinError(11,0.0009061214);
   hist_eta_pp_356->SetBinError(12,0.0009048848);
   hist_eta_pp_356->SetBinError(13,0.0008774167);
   hist_eta_pp_356->SetBinError(14,0.0008278027);
   hist_eta_pp_356->SetBinError(15,0.0007564138);
   hist_eta_pp_356->SetBinError(16,0.0006627653);
   hist_eta_pp_356->SetBinError(17,0.0003334145);
   hist_eta_pp_356->SetBinError(18,0.0001302688);
   hist_eta_pp_356->SetEntries(1605555);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_356->SetLineColor(ci);
   hist_eta_pp_356->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_356->SetMarkerColor(ci);
   hist_eta_pp_356->SetMarkerStyle(21);
   hist_eta_pp_356->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_356->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_356->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_356->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_356->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_356->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_356->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_356->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_356->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_356->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_356->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_356->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_356->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_356->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_356->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_356->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_356->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_356->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_356->Draw("same p");
      tex = new TLatex(0.35,0.88,"95 < p_{T}^{ave} < 115 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   p_0_3->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_0_4
   TPad *p_0_4 = new TPad("p_0_4", "p_0_4",0,0.2004008,0.3053435,0.3527054);
   p_0_4->Draw();
   p_0_4->cd();
   p_0_4->Range(-5.569572,0.0001,2.999,0.5999);
   p_0_4->SetFillColor(0);
   p_0_4->SetBorderMode(0);
   p_0_4->SetBorderSize(0);
   p_0_4->SetTickx(1);
   p_0_4->SetTicky(1);
   p_0_4->SetLeftMargin(0.3);
   p_0_4->SetRightMargin(0);
   p_0_4->SetTopMargin(0);
   p_0_4->SetBottomMargin(0);
   p_0_4->SetFrameLineColor(0);
   p_0_4->SetFrameBorderMode(0);
   p_0_4->SetFrameLineColor(0);
   p_0_4->SetFrameBorderMode(0);
   
   TH1D *emptyDist57 = new TH1D("emptyDist57","",10,-2.999,2.999);
   emptyDist57->SetBinContent(7,1000);
   emptyDist57->SetBinError(7,1000);
   emptyDist57->SetMinimum(0.0001);
   emptyDist57->SetMaximum(0.5999);
   emptyDist57->SetEntries(1);
   emptyDist57->SetLineStyle(0);
   emptyDist57->SetMarkerStyle(20);
   emptyDist57->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist57->GetXaxis()->CenterTitle(true);
   emptyDist57->GetXaxis()->SetLabelFont(43);
   emptyDist57->GetXaxis()->SetLabelOffset(0.01);
   emptyDist57->GetXaxis()->SetLabelSize(33);
   emptyDist57->GetXaxis()->SetTitleSize(33);
   emptyDist57->GetXaxis()->SetTitleOffset(7.5);
   emptyDist57->GetXaxis()->SetTitleFont(43);
   emptyDist57->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist57->GetYaxis()->CenterTitle(true);
   emptyDist57->GetYaxis()->SetNdivisions(505);
   emptyDist57->GetYaxis()->SetLabelFont(43);
   emptyDist57->GetYaxis()->SetLabelOffset(0.01);
   emptyDist57->GetYaxis()->SetLabelSize(33);
   emptyDist57->GetYaxis()->SetTitleSize(33);
   emptyDist57->GetYaxis()->SetTitleOffset(7.5);
   emptyDist57->GetYaxis()->SetTitleFont(43);
   emptyDist57->GetZaxis()->SetLabelFont(42);
   emptyDist57->GetZaxis()->SetLabelSize(0.045);
   emptyDist57->GetZaxis()->SetTitleSize(0.035);
   emptyDist57->GetZaxis()->SetTitleFont(42);
   emptyDist57->Draw("");
   
   Double_t Graph0_fx1029[18] = {
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
   Double_t Graph0_fy1029[18] = {
   7.811652e-06,
   0.0001461205,
   0.005108092,
   0.02662741,
   0.07134753,
   0.1348853,
   0.2045682,
   0.271529,
   0.326976,
   0.371136,
   0.3911909,
   0.3929982,
   0.3697279,
   0.3254738,
   0.2647004,
   0.1935741,
   0.0904265,
   0.01017672};
   Double_t Graph0_fex1029[18] = {
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
   Double_t Graph0_fey1029[18] = {
   -7.811732e-06,
   -7.619023e-05,
   -0.0008977237,
   -0.001879438,
   -0.002714852,
   -0.002319311,
   -0.0007774427,
   -0.0007330167,
   -0.001032915,
   -0.002492004,
   -0.002973543,
   -0.003533588,
   -0.003106406,
   -0.00171126,
   -0.0008617386,
   -0.0002471072,
   -0.001407994,
   -0.0004903257};
   gre = new TGraphErrors(18,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 983;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","Graph",100,-3.46425,3.51675);
   Graph_Graph1029->SetMinimum(0);
   Graph_Graph1029->SetMaximum(0.4322972);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);
   Graph_Graph1029->SetLineStyle(0);
   Graph_Graph1029->SetMarkerStyle(20);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1029->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1029->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx97[18] = {
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
   Double_t Graph1_fy97[18] = {
   5.227508e-11,
   0.00047791,
   0.009472302,
   0.03645553,
   0.08543785,
   0.1477651,
   0.2147451,
   0.2742601,
   0.3220153,
   0.3549429,
   0.3714067,
   0.3710999,
   0.3533067,
   0.3176182,
   0.2661816,
   0.2016558,
   0.09862934,
   0.01285914};
   graph = new TGraph(18,Graph1_fx97,Graph1_fy97);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph97 = new TH1F("Graph_Graph97","Graph",100,-3.323417,3.267583);
   Graph_Graph97->SetMinimum(0);
   Graph_Graph97->SetMaximum(0.4085474);
   Graph_Graph97->SetDirectory(0);
   Graph_Graph97->SetStats(0);
   Graph_Graph97->SetLineStyle(0);
   Graph_Graph97->SetMarkerStyle(20);
   Graph_Graph97->GetXaxis()->SetLabelFont(42);
   Graph_Graph97->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph97->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph97->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph97->GetXaxis()->SetTitleFont(42);
   Graph_Graph97->GetYaxis()->SetLabelFont(42);
   Graph_Graph97->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph97->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph97->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph97->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph97->GetYaxis()->SetTitleFont(42);
   Graph_Graph97->GetZaxis()->SetLabelFont(42);
   Graph_Graph97->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph97->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph97->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph97);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx98[18] = {
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
   Double_t Graph2_fy98[18] = {
   3.408433e-10,
   0.0005256467,
   0.01051627,
   0.03917451,
   0.08864369,
   0.1541575,
   0.2199063,
   0.2787486,
   0.3245358,
   0.3617362,
   0.3818028,
   0.3805637,
   0.3588704,
   0.321026,
   0.2712937,
   0.207103,
   0.1026533,
   0.01379103};
   graph = new TGraph(18,Graph2_fx98,Graph2_fy98);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph98 = new TH1F("Graph_Graph98","Graph",100,-3.323417,3.267583);
   Graph_Graph98->SetMinimum(0);
   Graph_Graph98->SetMaximum(0.419983);
   Graph_Graph98->SetDirectory(0);
   Graph_Graph98->SetStats(0);
   Graph_Graph98->SetLineStyle(0);
   Graph_Graph98->SetMarkerStyle(20);
   Graph_Graph98->GetXaxis()->SetLabelFont(42);
   Graph_Graph98->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph98->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph98->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph98->GetXaxis()->SetTitleFont(42);
   Graph_Graph98->GetYaxis()->SetLabelFont(42);
   Graph_Graph98->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph98->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph98->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph98->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph98->GetYaxis()->SetTitleFont(42);
   Graph_Graph98->GetZaxis()->SetLabelFont(42);
   Graph_Graph98->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph98->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph98->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph98);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx99[18] = {
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
   Double_t Graph3_fy99[18] = {
   -1.923398e-10,
   0.0003741553,
   0.008954884,
   0.03444233,
   0.07954199,
   0.1425152,
   0.2067154,
   0.2722497,
   0.3171471,
   0.3484034,
   0.3628618,
   0.3616476,
   0.3457735,
   0.3132667,
   0.2645074,
   0.1956525,
   0.09446273,
   0.01195544};
   graph = new TGraph(18,Graph3_fx99,Graph3_fy99);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph99 = new TH1F("Graph_Graph99","Graph",100,-3.323417,3.267583);
   Graph_Graph99->SetMinimum(-0.03628618);
   Graph_Graph99->SetMaximum(0.399148);
   Graph_Graph99->SetDirectory(0);
   Graph_Graph99->SetStats(0);
   Graph_Graph99->SetLineStyle(0);
   Graph_Graph99->SetMarkerStyle(20);
   Graph_Graph99->GetXaxis()->SetLabelFont(42);
   Graph_Graph99->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph99->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph99->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph99->GetXaxis()->SetTitleFont(42);
   Graph_Graph99->GetYaxis()->SetLabelFont(42);
   Graph_Graph99->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph99->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph99->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph99->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph99->GetYaxis()->SetTitleFont(42);
   Graph_Graph99->GetZaxis()->SetLabelFont(42);
   Graph_Graph99->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph99->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph99->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph99);
   
   graph->Draw(" c");
   
   Double_t Graph4_fx100[18] = {
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
   Double_t Graph4_fy100[18] = {
   7.061464e-11,
   0.0004285533,
   0.009125554,
   0.03580686,
   0.08377246,
   0.1461647,
   0.2116041,
   0.2735468,
   0.3227013,
   0.3564701,
   0.3758521,
   0.3755524,
   0.3545718,
   0.3189048,
   0.2656541,
   0.1996152,
   0.09740984,
   0.0126383};
   graph = new TGraph(18,Graph4_fx100,Graph4_fy100);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph100 = new TH1F("Graph_Graph100","Graph",100,-3.323417,3.267583);
   Graph_Graph100->SetMinimum(0);
   Graph_Graph100->SetMaximum(0.4134373);
   Graph_Graph100->SetDirectory(0);
   Graph_Graph100->SetStats(0);
   Graph_Graph100->SetLineStyle(0);
   Graph_Graph100->SetMarkerStyle(20);
   Graph_Graph100->GetXaxis()->SetLabelFont(42);
   Graph_Graph100->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph100->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph100->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph100->GetXaxis()->SetTitleFont(42);
   Graph_Graph100->GetYaxis()->SetLabelFont(42);
   Graph_Graph100->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph100->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph100->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph100->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph100->GetYaxis()->SetTitleFont(42);
   Graph_Graph100->GetZaxis()->SetLabelFont(42);
   Graph_Graph100->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph100->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph100->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph100);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx101[18] = {
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
   Double_t Graph5_fy101[18] = {
   6.18097e-10,
   0.0005451214,
   0.009645106,
   0.03701866,
   0.08654461,
   0.1485791,
   0.2172149,
   0.275604,
   0.3235189,
   0.3618419,
   0.3766411,
   0.3761368,
   0.3606848,
   0.3194926,
   0.2680858,
   0.2034199,
   0.09981572,
   0.01321997};
   graph = new TGraph(18,Graph5_fx101,Graph5_fy101);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph101 = new TH1F("Graph_Graph101","Graph",100,-3.323417,3.267583);
   Graph_Graph101->SetMinimum(0);
   Graph_Graph101->SetMaximum(0.4143052);
   Graph_Graph101->SetDirectory(0);
   Graph_Graph101->SetStats(0);
   Graph_Graph101->SetLineStyle(0);
   Graph_Graph101->SetMarkerStyle(20);
   Graph_Graph101->GetXaxis()->SetLabelFont(42);
   Graph_Graph101->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph101->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph101->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph101->GetXaxis()->SetTitleFont(42);
   Graph_Graph101->GetYaxis()->SetLabelFont(42);
   Graph_Graph101->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph101->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph101->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph101->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph101->GetYaxis()->SetTitleFont(42);
   Graph_Graph101->GetZaxis()->SetLabelFont(42);
   Graph_Graph101->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph101->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph101->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph101);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx102[18] = {
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
   Double_t Graph6_fy102[18] = {
   -2.233257e-10,
   0.000415614,
   0.008583489,
   0.03499397,
   0.0825864,
   0.144452,
   0.2111017,
   0.2717251,
   0.3189801,
   0.3551588,
   0.3669289,
   0.3660518,
   0.3531686,
   0.3145974,
   0.2643224,
   0.1980798,
   0.09655456,
   0.01245547};
   graph = new TGraph(18,Graph6_fx102,Graph6_fy102);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph102 = new TH1F("Graph_Graph102","Graph",100,-3.323417,3.267583);
   Graph_Graph102->SetMinimum(-0.03669289);
   Graph_Graph102->SetMaximum(0.4036217);
   Graph_Graph102->SetDirectory(0);
   Graph_Graph102->SetStats(0);
   Graph_Graph102->SetLineStyle(0);
   Graph_Graph102->SetMarkerStyle(20);
   Graph_Graph102->GetXaxis()->SetLabelFont(42);
   Graph_Graph102->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph102->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph102->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph102->GetXaxis()->SetTitleFont(42);
   Graph_Graph102->GetYaxis()->SetLabelFont(42);
   Graph_Graph102->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph102->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph102->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph102->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph102->GetYaxis()->SetTitleFont(42);
   Graph_Graph102->GetZaxis()->SetLabelFont(42);
   Graph_Graph102->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph102->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph102->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph102);
   
   graph->Draw(" c");
   Double_t xAxis29[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_458 = new TH1D("hist_eta_pp_458","",18, xAxis29);
   hist_eta_pp_458->SetBinContent(1,4.285359e-06);
   hist_eta_pp_458->SetBinContent(2,0.0001885558);
   hist_eta_pp_458->SetBinContent(3,0.005455262);
   hist_eta_pp_458->SetBinContent(4,0.02707061);
   hist_eta_pp_458->SetBinContent(5,0.07220402);
   hist_eta_pp_458->SetBinContent(6,0.1354431);
   hist_eta_pp_458->SetBinContent(7,0.2049516);
   hist_eta_pp_458->SetBinContent(8,0.2720732);
   hist_eta_pp_458->SetBinContent(9,0.3268658);
   hist_eta_pp_458->SetBinContent(10,0.3704393);
   hist_eta_pp_458->SetBinContent(11,0.3899463);
   hist_eta_pp_458->SetBinContent(12,0.3926546);
   hist_eta_pp_458->SetBinContent(13,0.3689009);
   hist_eta_pp_458->SetBinContent(14,0.3248088);
   hist_eta_pp_458->SetBinContent(15,0.2644324);
   hist_eta_pp_458->SetBinContent(16,0.1934925);
   hist_eta_pp_458->SetBinContent(17,0.09041894);
   hist_eta_pp_458->SetBinContent(18,0.01016916);
   hist_eta_pp_458->SetBinError(1,4.285359e-06);
   hist_eta_pp_458->SetBinError(2,2.010012e-05);
   hist_eta_pp_458->SetBinError(3,0.0001528979);
   hist_eta_pp_458->SetBinError(4,0.0003405985);
   hist_eta_pp_458->SetBinError(5,0.0005562555);
   hist_eta_pp_458->SetBinError(6,0.0007618544);
   hist_eta_pp_458->SetBinError(7,0.0009371719);
   hist_eta_pp_458->SetBinError(8,0.001079783);
   hist_eta_pp_458->SetBinError(9,0.001183527);
   hist_eta_pp_458->SetBinError(10,0.001259947);
   hist_eta_pp_458->SetBinError(11,0.001292695);
   hist_eta_pp_458->SetBinError(12,0.001297176);
   hist_eta_pp_458->SetBinError(13,0.001257328);
   hist_eta_pp_458->SetBinError(14,0.001179798);
   hist_eta_pp_458->SetBinError(15,0.001064513);
   hist_eta_pp_458->SetBinError(16,0.000910596);
   hist_eta_pp_458->SetBinError(17,0.0004401577);
   hist_eta_pp_458->SetBinError(18,0.0001476118);
   hist_eta_pp_458->SetEntries(828489);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_458->SetLineColor(ci);
   hist_eta_pp_458->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_458->SetMarkerColor(ci);
   hist_eta_pp_458->SetMarkerStyle(21);
   hist_eta_pp_458->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_458->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_458->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_458->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_458->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_458->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_458->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_458->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_458->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_458->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_458->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_458->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_458->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_458->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_458->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_458->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_458->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_458->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_458->Draw("same p");
      tex = new TLatex(0.35,0.88,"115 < p_{T}^{ave} < 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   p_0_4->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_0_5
   TPad *p_0_5 = new TPad("p_0_5", "p_0_5",0,0,0.3053435,0.2004008);
   p_0_5->Draw();
   p_0_5->cd();
   p_0_5->Range(-5.569572,-0.1893105,2.999,0.5999);
   p_0_5->SetFillColor(0);
   p_0_5->SetBorderMode(0);
   p_0_5->SetBorderSize(0);
   p_0_5->SetTickx(1);
   p_0_5->SetTicky(1);
   p_0_5->SetLeftMargin(0.3);
   p_0_5->SetRightMargin(0);
   p_0_5->SetTopMargin(0);
   p_0_5->SetBottomMargin(0.24);
   p_0_5->SetFrameLineColor(0);
   p_0_5->SetFrameBorderMode(0);
   p_0_5->SetFrameLineColor(0);
   p_0_5->SetFrameBorderMode(0);
   
   TH1D *emptyDist59 = new TH1D("emptyDist59","",10,-2.999,2.999);
   emptyDist59->SetBinContent(7,1000);
   emptyDist59->SetBinError(7,1000);
   emptyDist59->SetMinimum(0.0001);
   emptyDist59->SetMaximum(0.5999);
   emptyDist59->SetEntries(1);
   emptyDist59->SetLineStyle(0);
   emptyDist59->SetMarkerStyle(20);
   emptyDist59->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist59->GetXaxis()->CenterTitle(true);
   emptyDist59->GetXaxis()->SetLabelFont(43);
   emptyDist59->GetXaxis()->SetLabelOffset(0.01);
   emptyDist59->GetXaxis()->SetLabelSize(33);
   emptyDist59->GetXaxis()->SetTitleSize(33);
   emptyDist59->GetXaxis()->SetTitleOffset(7.5);
   emptyDist59->GetXaxis()->SetTitleFont(43);
   emptyDist59->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist59->GetYaxis()->CenterTitle(true);
   emptyDist59->GetYaxis()->SetNdivisions(505);
   emptyDist59->GetYaxis()->SetLabelFont(43);
   emptyDist59->GetYaxis()->SetLabelOffset(0.01);
   emptyDist59->GetYaxis()->SetLabelSize(33);
   emptyDist59->GetYaxis()->SetTitleSize(33);
   emptyDist59->GetYaxis()->SetTitleOffset(7.5);
   emptyDist59->GetYaxis()->SetTitleFont(43);
   emptyDist59->GetZaxis()->SetLabelFont(42);
   emptyDist59->GetZaxis()->SetLabelSize(0.045);
   emptyDist59->GetZaxis()->SetTitleSize(0.035);
   emptyDist59->GetZaxis()->SetTitleFont(42);
   emptyDist59->Draw("");
   
   Double_t Graph0_fx1030[18] = {
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
   Double_t Graph0_fy1030[18] = {
   0,
   2.885986e-06,
   0.0009507317,
   0.007759107,
   0.03698166,
   0.0959239,
   0.176345,
   0.2670345,
   0.3478457,
   0.4078733,
   0.4441671,
   0.4424253,
   0.4118521,
   0.3480831,
   0.263191,
   0.1711352,
   0.0611968,
   0.003252614};
   Double_t Graph0_fex1030[18] = {
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
   Double_t Graph0_fey1030[18] = {
   -0,
   -3.719399e-06,
   -0.0002554316,
   -0.0009344534,
   -0.002316432,
   -0.002961248,
   -0.002499483,
   -0.0006904407,
   -0.001775219,
   -0.003277173,
   -0.004326199,
   -0.003808139,
   -0.003261891,
   -0.001727743,
   -0.0009176523,
   -0.00155202,
   -0.001870849,
   -0.0003092978};
   gre = new TGraphErrors(18,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 985;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1030 = new TH1F("Graph_Graph1030","Graph",100,-3.46425,3.51675);
   Graph_Graph1030->SetMinimum(0);
   Graph_Graph1030->SetMaximum(0.4885838);
   Graph_Graph1030->SetDirectory(0);
   Graph_Graph1030->SetStats(0);
   Graph_Graph1030->SetLineStyle(0);
   Graph_Graph1030->SetMarkerStyle(20);
   Graph_Graph1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph1030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1030->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1030->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph1030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1030->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1030->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1030->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1030);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx103[18] = {
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
   Double_t Graph1_fy103[18] = {
   0,
   7.727293e-06,
   0.001175985,
   0.01169335,
   0.04442196,
   0.1052561,
   0.1860934,
   0.2715858,
   0.3447357,
   0.3979356,
   0.4248016,
   0.4250676,
   0.3968716,
   0.3434057,
   0.2683938,
   0.1813852,
   0.06908014,
   0.004648346};
   graph = new TGraph(18,Graph1_fx103,Graph1_fy103);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph103 = new TH1F("Graph_Graph103","Graph",100,-3.323417,3.267583);
   Graph_Graph103->SetMinimum(0);
   Graph_Graph103->SetMaximum(0.4675744);
   Graph_Graph103->SetDirectory(0);
   Graph_Graph103->SetStats(0);
   Graph_Graph103->SetLineStyle(0);
   Graph_Graph103->SetMarkerStyle(20);
   Graph_Graph103->GetXaxis()->SetLabelFont(42);
   Graph_Graph103->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph103->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph103->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph103->GetXaxis()->SetTitleFont(42);
   Graph_Graph103->GetYaxis()->SetLabelFont(42);
   Graph_Graph103->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph103->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph103->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph103->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph103->GetYaxis()->SetTitleFont(42);
   Graph_Graph103->GetZaxis()->SetLabelFont(42);
   Graph_Graph103->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph103->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph103->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph103);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx104[18] = {
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
   Double_t Graph2_fy104[18] = {
   0,
   8.213133e-06,
   0.001523468,
   0.01224914,
   0.04694134,
   0.1119013,
   0.1923628,
   0.2765886,
   0.3475177,
   0.4029898,
   0.4351938,
   0.4332969,
   0.4040614,
   0.3444626,
   0.2731542,
   0.1870241,
   0.07335164,
   0.004891817};
   graph = new TGraph(18,Graph2_fx104,Graph2_fy104);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph104 = new TH1F("Graph_Graph104","Graph",100,-3.323417,3.267583);
   Graph_Graph104->SetMinimum(0);
   Graph_Graph104->SetMaximum(0.4787131);
   Graph_Graph104->SetDirectory(0);
   Graph_Graph104->SetStats(0);
   Graph_Graph104->SetLineStyle(0);
   Graph_Graph104->SetMarkerStyle(20);
   Graph_Graph104->GetXaxis()->SetLabelFont(42);
   Graph_Graph104->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph104->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph104->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph104->GetXaxis()->SetTitleFont(42);
   Graph_Graph104->GetYaxis()->SetLabelFont(42);
   Graph_Graph104->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph104->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph104->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph104->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph104->GetYaxis()->SetTitleFont(42);
   Graph_Graph104->GetZaxis()->SetLabelFont(42);
   Graph_Graph104->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph104->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph104->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph104);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx105[18] = {
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
   Double_t Graph3_fy105[18] = {
   0,
   8.093372e-07,
   0.001129904,
   0.0102798,
   0.04160367,
   0.1015306,
   0.1798513,
   0.2684526,
   0.3428223,
   0.3893882,
   0.4138306,
   0.412892,
   0.3898949,
   0.3402251,
   0.2656826,
   0.174634,
   0.06650759,
   0.004158155};
   graph = new TGraph(18,Graph3_fx105,Graph3_fy105);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#d68910");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph105 = new TH1F("Graph_Graph105","Graph",100,-3.323417,3.267583);
   Graph_Graph105->SetMinimum(0);
   Graph_Graph105->SetMaximum(0.4552137);
   Graph_Graph105->SetDirectory(0);
   Graph_Graph105->SetStats(0);
   Graph_Graph105->SetLineStyle(0);
   Graph_Graph105->SetMarkerStyle(20);
   Graph_Graph105->GetXaxis()->SetLabelFont(42);
   Graph_Graph105->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph105->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph105->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph105->GetXaxis()->SetTitleFont(42);
   Graph_Graph105->GetYaxis()->SetLabelFont(42);
   Graph_Graph105->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph105->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph105->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph105->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph105->GetYaxis()->SetTitleFont(42);
   Graph_Graph105->GetZaxis()->SetLabelFont(42);
   Graph_Graph105->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph105->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph105->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph105);
   
   graph->Draw(" c");
   
   Double_t Graph4_fx106[18] = {
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
   Double_t Graph4_fy106[18] = {
   0,
   7.715691e-06,
   0.001135679,
   0.01123702,
   0.04363589,
   0.1049761,
   0.1851922,
   0.271032,
   0.3454942,
   0.3983468,
   0.426205,
   0.4264654,
   0.3975657,
   0.3436717,
   0.2681681,
   0.1805318,
   0.06879943,
   0.004511993};
   graph = new TGraph(18,Graph4_fx106,Graph4_fy106);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph106 = new TH1F("Graph_Graph106","Graph",100,-3.323417,3.267583);
   Graph_Graph106->SetMinimum(0);
   Graph_Graph106->SetMaximum(0.4691119);
   Graph_Graph106->SetDirectory(0);
   Graph_Graph106->SetStats(0);
   Graph_Graph106->SetLineStyle(0);
   Graph_Graph106->SetMarkerStyle(20);
   Graph_Graph106->GetXaxis()->SetLabelFont(42);
   Graph_Graph106->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph106->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph106->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph106->GetXaxis()->SetTitleFont(42);
   Graph_Graph106->GetYaxis()->SetLabelFont(42);
   Graph_Graph106->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph106->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph106->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph106->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph106->GetYaxis()->SetTitleFont(42);
   Graph_Graph106->GetZaxis()->SetLabelFont(42);
   Graph_Graph106->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph106->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph106->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph106);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx107[18] = {
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
   Double_t Graph5_fy107[18] = {
   0,
   1.149333e-05,
   0.001297126,
   0.01144424,
   0.04499131,
   0.1063954,
   0.1871479,
   0.2732706,
   0.3456479,
   0.4018097,
   0.430173,
   0.4287785,
   0.402032,
   0.3443738,
   0.2696619,
   0.1820262,
   0.06986045,
   0.004554828};
   graph = new TGraph(18,Graph5_fx107,Graph5_fy107);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph107 = new TH1F("Graph_Graph107","Graph",100,-3.323417,3.267583);
   Graph_Graph107->SetMinimum(0);
   Graph_Graph107->SetMaximum(0.4731903);
   Graph_Graph107->SetDirectory(0);
   Graph_Graph107->SetStats(0);
   Graph_Graph107->SetLineStyle(0);
   Graph_Graph107->SetMarkerStyle(20);
   Graph_Graph107->GetXaxis()->SetLabelFont(42);
   Graph_Graph107->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph107->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph107->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph107->GetXaxis()->SetTitleFont(42);
   Graph_Graph107->GetYaxis()->SetLabelFont(42);
   Graph_Graph107->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph107->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph107->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph107->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph107->GetYaxis()->SetTitleFont(42);
   Graph_Graph107->GetZaxis()->SetLabelFont(42);
   Graph_Graph107->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph107->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph107->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph107);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx108[18] = {
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
   Double_t Graph6_fy108[18] = {
   0,
   3.669166e-06,
   0.001067109,
   0.01049597,
   0.0428846,
   0.102945,
   0.1835674,
   0.2697447,
   0.34209,
   0.3970835,
   0.4239516,
   0.4228759,
   0.3965316,
   0.3409739,
   0.2665943,
   0.1786991,
   0.06772831,
   0.004197504};
   graph = new TGraph(18,Graph6_fx108,Graph6_fy108);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph108 = new TH1F("Graph_Graph108","Graph",100,-3.323417,3.267583);
   Graph_Graph108->SetMinimum(0);
   Graph_Graph108->SetMaximum(0.4663468);
   Graph_Graph108->SetDirectory(0);
   Graph_Graph108->SetStats(0);
   Graph_Graph108->SetLineStyle(0);
   Graph_Graph108->SetMarkerStyle(20);
   Graph_Graph108->GetXaxis()->SetLabelFont(42);
   Graph_Graph108->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph108->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph108->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph108->GetXaxis()->SetTitleFont(42);
   Graph_Graph108->GetYaxis()->SetLabelFont(42);
   Graph_Graph108->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph108->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph108->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph108->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph108->GetYaxis()->SetTitleFont(42);
   Graph_Graph108->GetZaxis()->SetLabelFont(42);
   Graph_Graph108->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph108->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph108->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph108);
   
   graph->Draw(" c");
   Double_t xAxis30[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_560 = new TH1D("hist_eta_pp_560","",18, xAxis30);
   hist_eta_pp_560->SetBinContent(2,5.560021e-06);
   hist_eta_pp_560->SetBinContent(3,0.0009785637);
   hist_eta_pp_560->SetBinContent(4,0.008095391);
   hist_eta_pp_560->SetBinContent(5,0.03738558);
   hist_eta_pp_560->SetBinContent(6,0.09637741);
   hist_eta_pp_560->SetBinContent(7,0.1764639);
   hist_eta_pp_560->SetBinContent(8,0.2670033);
   hist_eta_pp_560->SetBinContent(9,0.347935);
   hist_eta_pp_560->SetBinContent(10,0.4071492);
   hist_eta_pp_560->SetBinContent(11,0.4439566);
   hist_eta_pp_560->SetBinContent(12,0.4420106);
   hist_eta_pp_560->SetBinContent(13,0.4112748);
   hist_eta_pp_560->SetBinContent(14,0.3477126);
   hist_eta_pp_560->SetBinContent(15,0.2629668);
   hist_eta_pp_560->SetBinContent(16,0.1712264);
   hist_eta_pp_560->SetBinContent(17,0.06157723);
   hist_eta_pp_560->SetBinContent(18,0.003297092);
   hist_eta_pp_560->SetBinError(2,5.560021e-06);
   hist_eta_pp_560->SetBinError(3,0.0001043152);
   hist_eta_pp_560->SetBinError(4,0.0003000351);
   hist_eta_pp_560->SetBinError(5,0.0006447707);
   hist_eta_pp_560->SetBinError(6,0.001035239);
   hist_eta_pp_560->SetBinError(7,0.001400816);
   hist_eta_pp_560->SetBinError(8,0.001723104);
   hist_eta_pp_560->SetBinError(9,0.001966991);
   hist_eta_pp_560->SetBinError(10,0.002127796);
   hist_eta_pp_560->SetBinError(11,0.002221895);
   hist_eta_pp_560->SetBinError(12,0.00221702);
   hist_eta_pp_560->SetBinError(13,0.002138549);
   hist_eta_pp_560->SetBinError(14,0.001966362);
   hist_eta_pp_560->SetBinError(15,0.00171003);
   hist_eta_pp_560->SetBinError(16,0.001379871);
   hist_eta_pp_560->SetBinError(17,0.0005851245);
   hist_eta_pp_560->SetBinError(18,0.0001353954);
   hist_eta_pp_560->SetEntries(319288);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_560->SetLineColor(ci);
   hist_eta_pp_560->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_560->SetMarkerColor(ci);
   hist_eta_pp_560->SetMarkerStyle(21);
   hist_eta_pp_560->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_560->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_560->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_560->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_560->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_560->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_560->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_560->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_560->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_560->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_560->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_560->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_560->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_560->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_560->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_560->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_560->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_560->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_560->Draw("same p");
      tex = new TLatex(0.35,0.88,"150 < p_{T}^{ave} < 400 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.35,0.55,0.55,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph4","MMHT14","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph1","CT14","l");

   ci = TColor::GetColor("#d68910");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   p_0_5->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_1_0
   TPad *p_1_0 = new TPad("p_1_0", "p_1_0",0.3053435,0.8096192,0.519084,1);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(-2.999,0.0001,2.999,0.74985);
   p_1_0->SetFillColor(0);
   p_1_0->SetBorderMode(0);
   p_1_0->SetBorderSize(0);
   p_1_0->SetTickx(1);
   p_1_0->SetTicky(1);
   p_1_0->SetLeftMargin(0);
   p_1_0->SetRightMargin(0);
   p_1_0->SetTopMargin(0.2);
   p_1_0->SetBottomMargin(0);
   p_1_0->SetFrameLineColor(0);
   p_1_0->SetFrameBorderMode(0);
   p_1_0->SetFrameLineColor(0);
   p_1_0->SetFrameBorderMode(0);
   
   TH1D *emptyDist61 = new TH1D("emptyDist61","",10,-2.999,2.999);
   emptyDist61->SetBinContent(7,1000);
   emptyDist61->SetBinError(7,1000);
   emptyDist61->SetMinimum(0.0001);
   emptyDist61->SetMaximum(0.5999);
   emptyDist61->SetEntries(1);
   emptyDist61->SetLineStyle(0);
   emptyDist61->SetMarkerStyle(20);
   emptyDist61->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist61->GetXaxis()->CenterTitle(true);
   emptyDist61->GetXaxis()->SetLabelFont(43);
   emptyDist61->GetXaxis()->SetLabelOffset(0.01);
   emptyDist61->GetXaxis()->SetLabelSize(33);
   emptyDist61->GetXaxis()->SetTitleSize(33);
   emptyDist61->GetXaxis()->SetTitleOffset(7.5);
   emptyDist61->GetXaxis()->SetTitleFont(43);
   emptyDist61->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist61->GetYaxis()->CenterTitle(true);
   emptyDist61->GetYaxis()->SetNdivisions(505);
   emptyDist61->GetYaxis()->SetLabelFont(43);
   emptyDist61->GetYaxis()->SetLabelOffset(0.01);
   emptyDist61->GetYaxis()->SetLabelSize(33);
   emptyDist61->GetYaxis()->SetTitleSize(33);
   emptyDist61->GetYaxis()->SetTitleOffset(7.5);
   emptyDist61->GetYaxis()->SetTitleFont(43);
   emptyDist61->GetZaxis()->SetLabelFont(42);
   emptyDist61->GetZaxis()->SetLabelSize(0.045);
   emptyDist61->GetZaxis()->SetTitleSize(0.035);
   emptyDist61->GetZaxis()->SetTitleFont(42);
   emptyDist61->Draw("");
   
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
   0.003724337,
   0.02294232,
   0.07142416,
   0.1055554,
   0.153753,
   0.1904674,
   0.2359229,
   0.2713523,
   0.3024138,
   0.3172796,
   0.3147754,
   0.3146562,
   0.2946867,
   0.2673222,
   0.2252484,
   0.1756559,
   0.1060995,
   0.02430635};
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
   -0.0005207355,
   -0.001526796,
   -0.003109457,
   -0.004077557,
   -0.004725592,
   -0.004686044,
   -0.004773685,
   -0.004440066,
   -0.003104287,
   -0.002588472,
   -0.0025572,
   -0.003254401,
   -0.004422654,
   -0.005094798,
   -0.006277742,
   -0.005664567,
   -0.004436017,
   -0.001854399};
   gre = new TGraphErrors(18,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 976;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","Graph",100,-3.46425,3.51675);
   Graph_Graph1031->SetMinimum(0);
   Graph_Graph1031->SetMaximum(0.3486352);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);
   Graph_Graph1031->SetLineStyle(0);
   Graph_Graph1031->SetMarkerStyle(20);
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1031->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1031->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1031->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1031->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1031->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx109[18] = {
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
   Double_t Graph1_fy109[18] = {
   0.006189009,
   0.03353695,
   0.07863152,
   0.117199,
   0.1583088,
   0.1988777,
   0.2374632,
   0.27091,
   0.2976855,
   0.3138229,
   0.3182404,
   0.3085038,
   0.2878588,
   0.2560347,
   0.2164575,
   0.1697582,
   0.09903316,
   0.02460728};
   graph = new TGraph(18,Graph1_fx109,Graph1_fy109);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph109 = new TH1F("Graph_Graph109","Graph",100,-3.323417,3.267583);
   Graph_Graph109->SetMinimum(0);
   Graph_Graph109->SetMaximum(0.3494455);
   Graph_Graph109->SetDirectory(0);
   Graph_Graph109->SetStats(0);
   Graph_Graph109->SetLineStyle(0);
   Graph_Graph109->SetMarkerStyle(20);
   Graph_Graph109->GetXaxis()->SetLabelFont(42);
   Graph_Graph109->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph109->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph109->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph109->GetXaxis()->SetTitleFont(42);
   Graph_Graph109->GetYaxis()->SetLabelFont(42);
   Graph_Graph109->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph109->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph109->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph109->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph109->GetYaxis()->SetTitleFont(42);
   Graph_Graph109->GetZaxis()->SetLabelFont(42);
   Graph_Graph109->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph109->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph109->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph109);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx110[18] = {
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
   Double_t Graph2_fy110[18] = {
   0.006679798,
   0.03486373,
   0.07998044,
   0.120278,
   0.1606257,
   0.2047125,
   0.2402762,
   0.2742981,
   0.3007615,
   0.3205016,
   0.3184128,
   0.3100925,
   0.2933065,
   0.2627809,
   0.2192233,
   0.1730872,
   0.1011216,
   0.02517037};
   graph = new TGraph(18,Graph2_fx110,Graph2_fy110);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph110 = new TH1F("Graph_Graph110","Graph",100,-3.323417,3.267583);
   Graph_Graph110->SetMinimum(0);
   Graph_Graph110->SetMaximum(0.3518838);
   Graph_Graph110->SetDirectory(0);
   Graph_Graph110->SetStats(0);
   Graph_Graph110->SetLineStyle(0);
   Graph_Graph110->SetMarkerStyle(20);
   Graph_Graph110->GetXaxis()->SetLabelFont(42);
   Graph_Graph110->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph110->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph110->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph110->GetXaxis()->SetTitleFont(42);
   Graph_Graph110->GetYaxis()->SetLabelFont(42);
   Graph_Graph110->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph110->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph110->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph110->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph110->GetYaxis()->SetTitleFont(42);
   Graph_Graph110->GetZaxis()->SetLabelFont(42);
   Graph_Graph110->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph110->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph110->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph110);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx111[18] = {
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
   Double_t Graph3_fy111[18] = {
   0.005852848,
   0.03258694,
   0.07508711,
   0.1135474,
   0.153285,
   0.1969792,
   0.2326813,
   0.2678194,
   0.2954126,
   0.3138229,
   0.3111553,
   0.3043381,
   0.285749,
   0.254369,
   0.2116096,
   0.1658425,
   0.09695832,
   0.02371713};
   graph = new TGraph(18,Graph3_fx111,Graph3_fy111);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph111 = new TH1F("Graph_Graph111","Graph",100,-3.323417,3.267583);
   Graph_Graph111->SetMinimum(0);
   Graph_Graph111->SetMaximum(0.3446199);
   Graph_Graph111->SetDirectory(0);
   Graph_Graph111->SetStats(0);
   Graph_Graph111->SetLineStyle(0);
   Graph_Graph111->SetMarkerStyle(20);
   Graph_Graph111->GetXaxis()->SetLabelFont(42);
   Graph_Graph111->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph111->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph111->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph111->GetXaxis()->SetTitleFont(42);
   Graph_Graph111->GetYaxis()->SetLabelFont(42);
   Graph_Graph111->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph111->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph111->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph111->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph111->GetYaxis()->SetTitleFont(42);
   Graph_Graph111->GetZaxis()->SetLabelFont(42);
   Graph_Graph111->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph111->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph111);
   
   graph->Draw("  c");
   
   Double_t Graph4_fx112[18] = {
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
   Double_t Graph4_fy112[18] = {
   0.006095508,
   0.03283513,
   0.07698328,
   0.1152695,
   0.1564311,
   0.1987052,
   0.2372139,
   0.2718718,
   0.2984001,
   0.3168843,
   0.3179967,
   0.3096104,
   0.2894147,
   0.2571529,
   0.2169327,
   0.1698664,
   0.09858241,
   0.02431614};
   graph = new TGraph(18,Graph4_fx112,Graph4_fy112);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph112 = new TH1F("Graph_Graph112","Graph",100,-3.323417,3.267583);
   Graph_Graph112->SetMinimum(0);
   Graph_Graph112->SetMaximum(0.3491869);
   Graph_Graph112->SetDirectory(0);
   Graph_Graph112->SetStats(0);
   Graph_Graph112->SetLineStyle(0);
   Graph_Graph112->SetMarkerStyle(20);
   Graph_Graph112->GetXaxis()->SetLabelFont(42);
   Graph_Graph112->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph112->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph112->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph112->GetXaxis()->SetTitleFont(42);
   Graph_Graph112->GetYaxis()->SetLabelFont(42);
   Graph_Graph112->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph112->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph112->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph112->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph112->GetYaxis()->SetTitleFont(42);
   Graph_Graph112->GetZaxis()->SetLabelFont(42);
   Graph_Graph112->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph112->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph112->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph112);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx113[18] = {
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
   Double_t Graph5_fy113[18] = {
   0.006329021,
   0.03388476,
   0.07956511,
   0.1197957,
   0.1618776,
   0.2007908,
   0.2405341,
   0.2730809,
   0.3029104,
   0.3180315,
   0.324005,
   0.3137239,
   0.2939846,
   0.262758,
   0.2196447,
   0.1716404,
   0.1003448,
   0.02501588};
   graph = new TGraph(18,Graph5_fx113,Graph5_fy113);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph113 = new TH1F("Graph_Graph113","Graph",100,-3.323417,3.267583);
   Graph_Graph113->SetMinimum(0);
   Graph_Graph113->SetMaximum(0.3557726);
   Graph_Graph113->SetDirectory(0);
   Graph_Graph113->SetStats(0);
   Graph_Graph113->SetLineStyle(0);
   Graph_Graph113->SetMarkerStyle(20);
   Graph_Graph113->GetXaxis()->SetLabelFont(42);
   Graph_Graph113->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph113->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph113->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph113->GetXaxis()->SetTitleFont(42);
   Graph_Graph113->GetYaxis()->SetLabelFont(42);
   Graph_Graph113->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph113->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph113->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph113->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph113->GetYaxis()->SetTitleFont(42);
   Graph_Graph113->GetZaxis()->SetLabelFont(42);
   Graph_Graph113->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph113->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph113->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph113);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx114[18] = {
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
   Double_t Graph6_fy114[18] = {
   0.005341588,
   0.03171314,
   0.07515668,
   0.1128854,
   0.1535438,
   0.1927971,
   0.2317572,
   0.2661466,
   0.2978484,
   0.313037,
   0.3173967,
   0.3071645,
   0.2858631,
   0.2541528,
   0.2109832,
   0.1661444,
   0.09645428,
   0.02370126};
   graph = new TGraph(18,Graph6_fx114,Graph6_fy114);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph114 = new TH1F("Graph_Graph114","Graph",100,-3.323417,3.267583);
   Graph_Graph114->SetMinimum(0);
   Graph_Graph114->SetMaximum(0.3486022);
   Graph_Graph114->SetDirectory(0);
   Graph_Graph114->SetStats(0);
   Graph_Graph114->SetLineStyle(0);
   Graph_Graph114->SetMarkerStyle(20);
   Graph_Graph114->GetXaxis()->SetLabelFont(42);
   Graph_Graph114->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph114->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph114->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph114->GetXaxis()->SetTitleFont(42);
   Graph_Graph114->GetYaxis()->SetLabelFont(42);
   Graph_Graph114->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph114->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph114->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph114->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph114->GetYaxis()->SetTitleFont(42);
   Graph_Graph114->GetZaxis()->SetLabelFont(42);
   Graph_Graph114->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph114->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph114->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph114);
   
   graph->Draw("  c");
   Double_t xAxis31[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_062 = new TH1D("hist_eta_062","",18, xAxis31);
   hist_eta_062->SetBinContent(0,3.298044e-05);
   hist_eta_062->SetBinContent(1,0.00351271);
   hist_eta_062->SetBinContent(2,0.02277407);
   hist_eta_062->SetBinContent(3,0.0714251);
   hist_eta_062->SetBinContent(4,0.1053813);
   hist_eta_062->SetBinContent(5,0.1537396);
   hist_eta_062->SetBinContent(6,0.190506);
   hist_eta_062->SetBinContent(7,0.2360541);
   hist_eta_062->SetBinContent(8,0.2715325);
   hist_eta_062->SetBinContent(9,0.3026785);
   hist_eta_062->SetBinContent(10,0.317549);
   hist_eta_062->SetBinContent(11,0.3153243);
   hist_eta_062->SetBinContent(12,0.3148559);
   hist_eta_062->SetBinContent(13,0.2949505);
   hist_eta_062->SetBinContent(14,0.2672001);
   hist_eta_062->SetBinContent(15,0.2253989);
   hist_eta_062->SetBinContent(16,0.1756355);
   hist_eta_062->SetBinContent(17,0.1059082);
   hist_eta_062->SetBinContent(18,0.0235937);
   hist_eta_062->SetBinError(0,3.298044e-05);
   hist_eta_062->SetBinError(1,0.0006413301);
   hist_eta_062->SetBinError(2,0.001154691);
   hist_eta_062->SetBinError(3,0.002891918);
   hist_eta_062->SetBinError(4,0.00351271);
   hist_eta_062->SetBinError(5,0.004242808);
   hist_eta_062->SetBinError(6,0.004722966);
   hist_eta_062->SetBinError(7,0.005257343);
   hist_eta_062->SetBinError(8,0.005638601);
   hist_eta_062->SetBinError(9,0.005953211);
   hist_eta_062->SetBinError(10,0.006097697);
   hist_eta_062->SetBinError(11,0.0060763);
   hist_eta_062->SetBinError(12,0.006071786);
   hist_eta_062->SetBinError(13,0.005876721);
   hist_eta_062->SetBinError(14,0.005593438);
   hist_eta_062->SetBinError(15,0.005137317);
   hist_eta_062->SetBinError(16,0.004534889);
   hist_eta_062->SetBinError(17,0.002490063);
   hist_eta_062->SetBinError(18,0.001175286);
   hist_eta_062->SetEntries(30340);

   ci = TColor::GetColor("#33cc99");
   hist_eta_062->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   hist_eta_062->SetLineColor(ci);
   hist_eta_062->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_062->SetMarkerColor(ci);
   hist_eta_062->SetMarkerStyle(20);
   hist_eta_062->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_062->GetXaxis()->SetLabelFont(42);
   hist_eta_062->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_062->GetXaxis()->SetLabelSize(0.045);
   hist_eta_062->GetXaxis()->SetTitleSize(0.055);
   hist_eta_062->GetXaxis()->SetTitleFont(42);
   hist_eta_062->GetYaxis()->SetTitle("Event fraction");
   hist_eta_062->GetYaxis()->SetLabelFont(42);
   hist_eta_062->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_062->GetYaxis()->SetLabelSize(0.045);
   hist_eta_062->GetYaxis()->SetTitleSize(0.055);
   hist_eta_062->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_062->GetYaxis()->SetTitleFont(42);
   hist_eta_062->GetZaxis()->SetLabelFont(42);
   hist_eta_062->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_062->GetZaxis()->SetLabelSize(0.045);
   hist_eta_062->GetZaxis()->SetTitleSize(0.035);
   hist_eta_062->GetZaxis()->SetTitleFont(42);
   hist_eta_062->Draw("same p");
      tex = new TLatex(0.25,0.82,"pPb DSSZ");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
      tex = new TLatex(0.05,0.93,"p_{T,1} > 20, p_{T,2} > 30 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(24);
   tex->Draw();
   p_1_0->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_1_1
   TPad *p_1_1 = new TPad("p_1_1", "p_1_1",0.3053435,0.6573147,0.519084,0.8096192);
   p_1_1->Draw();
   p_1_1->cd();
   p_1_1->Range(-2.999,0.0001,2.999,0.5999);
   p_1_1->SetFillColor(0);
   p_1_1->SetBorderMode(0);
   p_1_1->SetBorderSize(0);
   p_1_1->SetTickx(1);
   p_1_1->SetTicky(1);
   p_1_1->SetLeftMargin(0);
   p_1_1->SetRightMargin(0);
   p_1_1->SetTopMargin(0);
   p_1_1->SetBottomMargin(0);
   p_1_1->SetFrameLineColor(0);
   p_1_1->SetFrameBorderMode(0);
   p_1_1->SetFrameLineColor(0);
   p_1_1->SetFrameBorderMode(0);
   
   TH1D *emptyDist63 = new TH1D("emptyDist63","",10,-2.999,2.999);
   emptyDist63->SetBinContent(7,1000);
   emptyDist63->SetBinError(7,1000);
   emptyDist63->SetMinimum(0.0001);
   emptyDist63->SetMaximum(0.5999);
   emptyDist63->SetEntries(1);
   emptyDist63->SetLineStyle(0);
   emptyDist63->SetMarkerStyle(20);
   emptyDist63->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist63->GetXaxis()->CenterTitle(true);
   emptyDist63->GetXaxis()->SetLabelFont(43);
   emptyDist63->GetXaxis()->SetLabelOffset(0.01);
   emptyDist63->GetXaxis()->SetLabelSize(33);
   emptyDist63->GetXaxis()->SetTitleSize(33);
   emptyDist63->GetXaxis()->SetTitleOffset(7.5);
   emptyDist63->GetXaxis()->SetTitleFont(43);
   emptyDist63->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist63->GetYaxis()->CenterTitle(true);
   emptyDist63->GetYaxis()->SetNdivisions(505);
   emptyDist63->GetYaxis()->SetLabelFont(43);
   emptyDist63->GetYaxis()->SetLabelOffset(0.01);
   emptyDist63->GetYaxis()->SetLabelSize(33);
   emptyDist63->GetYaxis()->SetTitleSize(33);
   emptyDist63->GetYaxis()->SetTitleOffset(7.5);
   emptyDist63->GetYaxis()->SetTitleFont(43);
   emptyDist63->GetZaxis()->SetLabelFont(42);
   emptyDist63->GetZaxis()->SetLabelSize(0.045);
   emptyDist63->GetZaxis()->SetTitleSize(0.035);
   emptyDist63->GetZaxis()->SetTitleFont(42);
   emptyDist63->Draw("");
   
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
   0.0004224643,
   0.01137801,
   0.04483503,
   0.08106799,
   0.1295117,
   0.1746314,
   0.2217506,
   0.2712982,
   0.3044749,
   0.335741,
   0.3442571,
   0.3390463,
   0.3221681,
   0.2864751,
   0.2399519,
   0.1885372,
   0.1024487,
   0.01957961};
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
   -9.231771e-05,
   -0.0008525534,
   -0.001459271,
   -0.001297675,
   -0.001991699,
   -0.001571766,
   -0.00145962,
   -0.00127682,
   -0.001191879,
   -0.002158799,
   -0.002303712,
   -0.002840827,
   -0.002303122,
   -0.002166765,
   -0.002118042,
   -0.002240489,
   -0.001180226,
   -0.001137647};
   gre = new TGraphErrors(18,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 978;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1032 = new TH1F("Graph_Graph1032","Graph",100,-3.46425,3.51675);
   Graph_Graph1032->SetMinimum(0);
   Graph_Graph1032->SetMaximum(0.3786405);
   Graph_Graph1032->SetDirectory(0);
   Graph_Graph1032->SetStats(0);
   Graph_Graph1032->SetLineStyle(0);
   Graph_Graph1032->SetMarkerStyle(20);
   Graph_Graph1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph1032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1032->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1032->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph1032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1032->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1032->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1032->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1032);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx115[18] = {
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
   Double_t Graph1_fy115[18] = {
   0.001005074,
   0.01700371,
   0.05869469,
   0.09807213,
   0.1438887,
   0.1885082,
   0.2298256,
   0.2656946,
   0.2919462,
   0.3119651,
   0.3222842,
   0.3187757,
   0.301935,
   0.2754358,
   0.2387,
   0.1923881,
   0.112622,
   0.0259627};
   graph = new TGraph(18,Graph1_fx115,Graph1_fy115);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph115 = new TH1F("Graph_Graph115","Graph",100,-3.323417,3.267583);
   Graph_Graph115->SetMinimum(0);
   Graph_Graph115->SetMaximum(0.3544121);
   Graph_Graph115->SetDirectory(0);
   Graph_Graph115->SetStats(0);
   Graph_Graph115->SetLineStyle(0);
   Graph_Graph115->SetMarkerStyle(20);
   Graph_Graph115->GetXaxis()->SetLabelFont(42);
   Graph_Graph115->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph115->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph115->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph115->GetXaxis()->SetTitleFont(42);
   Graph_Graph115->GetYaxis()->SetLabelFont(42);
   Graph_Graph115->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph115->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph115->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph115->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph115->GetYaxis()->SetTitleFont(42);
   Graph_Graph115->GetZaxis()->SetLabelFont(42);
   Graph_Graph115->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph115->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph115->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph115);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx116[18] = {
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
   Double_t Graph2_fy116[18] = {
   0.001109826,
   0.01861669,
   0.0592817,
   0.1015691,
   0.1473229,
   0.1933031,
   0.2364466,
   0.2678975,
   0.3010039,
   0.3172736,
   0.3225475,
   0.3195055,
   0.3112038,
   0.2844565,
   0.2422387,
   0.1964752,
   0.1166321,
   0.02674723};
   graph = new TGraph(18,Graph2_fx116,Graph2_fy116);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph116 = new TH1F("Graph_Graph116","Graph",100,-3.323417,3.267583);
   Graph_Graph116->SetMinimum(0);
   Graph_Graph116->SetMaximum(0.3546912);
   Graph_Graph116->SetDirectory(0);
   Graph_Graph116->SetStats(0);
   Graph_Graph116->SetLineStyle(0);
   Graph_Graph116->SetMarkerStyle(20);
   Graph_Graph116->GetXaxis()->SetLabelFont(42);
   Graph_Graph116->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph116->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph116->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph116->GetXaxis()->SetTitleFont(42);
   Graph_Graph116->GetYaxis()->SetLabelFont(42);
   Graph_Graph116->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph116->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph116->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph116->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph116->GetYaxis()->SetTitleFont(42);
   Graph_Graph116->GetZaxis()->SetLabelFont(42);
   Graph_Graph116->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph116->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph116->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph116);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx117[18] = {
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
   Double_t Graph3_fy117[18] = {
   0.0007143981,
   0.01684458,
   0.05463102,
   0.09599357,
   0.13925,
   0.1832407,
   0.225507,
   0.2564597,
   0.2900825,
   0.3090046,
   0.3128672,
   0.3117791,
   0.3001846,
   0.2738595,
   0.2320061,
   0.1859007,
   0.1110844,
   0.02499307};
   graph = new TGraph(18,Graph3_fx117,Graph3_fy117);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph117 = new TH1F("Graph_Graph117","Graph",100,-3.323417,3.267583);
   Graph_Graph117->SetMinimum(0);
   Graph_Graph117->SetMaximum(0.3440824);
   Graph_Graph117->SetDirectory(0);
   Graph_Graph117->SetStats(0);
   Graph_Graph117->SetLineStyle(0);
   Graph_Graph117->SetMarkerStyle(20);
   Graph_Graph117->GetXaxis()->SetLabelFont(42);
   Graph_Graph117->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph117->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph117->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph117->GetXaxis()->SetTitleFont(42);
   Graph_Graph117->GetYaxis()->SetLabelFont(42);
   Graph_Graph117->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph117->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph117->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph117->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph117->GetYaxis()->SetTitleFont(42);
   Graph_Graph117->GetZaxis()->SetLabelFont(42);
   Graph_Graph117->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph117->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph117->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph117);
   
   graph->Draw("  c");
   
   Double_t Graph4_fx118[18] = {
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
   Double_t Graph4_fy118[18] = {
   0.0009344357,
   0.01677352,
   0.0570328,
   0.0967866,
   0.1416556,
   0.1869274,
   0.2289367,
   0.2646628,
   0.2931389,
   0.313761,
   0.3238303,
   0.3206887,
   0.3047791,
   0.2769877,
   0.2383617,
   0.1921232,
   0.1125351,
   0.02553587};
   graph = new TGraph(18,Graph4_fx118,Graph4_fy118);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph118 = new TH1F("Graph_Graph118","Graph",100,-3.323417,3.267583);
   Graph_Graph118->SetMinimum(0);
   Graph_Graph118->SetMaximum(0.3561199);
   Graph_Graph118->SetDirectory(0);
   Graph_Graph118->SetStats(0);
   Graph_Graph118->SetLineStyle(0);
   Graph_Graph118->SetMarkerStyle(20);
   Graph_Graph118->GetXaxis()->SetLabelFont(42);
   Graph_Graph118->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph118->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph118->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph118->GetXaxis()->SetTitleFont(42);
   Graph_Graph118->GetYaxis()->SetLabelFont(42);
   Graph_Graph118->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph118->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph118->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph118->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph118->GetYaxis()->SetTitleFont(42);
   Graph_Graph118->GetZaxis()->SetLabelFont(42);
   Graph_Graph118->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph118->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph118->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph118);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx119[18] = {
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
   Double_t Graph5_fy119[18] = {
   0.001005326,
   0.01778567,
   0.0590374,
   0.09921966,
   0.1458208,
   0.1913276,
   0.2347834,
   0.2693894,
   0.3004026,
   0.3185048,
   0.3249386,
   0.3226883,
   0.3084749,
   0.2867231,
   0.2458126,
   0.1963706,
   0.1145945,
   0.02671826};
   graph = new TGraph(18,Graph5_fx119,Graph5_fy119);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph119 = new TH1F("Graph_Graph119","Graph",100,-3.323417,3.267583);
   Graph_Graph119->SetMinimum(0);
   Graph_Graph119->SetMaximum(0.357332);
   Graph_Graph119->SetDirectory(0);
   Graph_Graph119->SetStats(0);
   Graph_Graph119->SetLineStyle(0);
   Graph_Graph119->SetMarkerStyle(20);
   Graph_Graph119->GetXaxis()->SetLabelFont(42);
   Graph_Graph119->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph119->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph119->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph119->GetXaxis()->SetTitleFont(42);
   Graph_Graph119->GetYaxis()->SetLabelFont(42);
   Graph_Graph119->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph119->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph119->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph119->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph119->GetYaxis()->SetTitleFont(42);
   Graph_Graph119->GetZaxis()->SetLabelFont(42);
   Graph_Graph119->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph119->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph119->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph119);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx120[18] = {
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
   Double_t Graph6_fy120[18] = {
   0.0006475626,
   0.01622114,
   0.05506058,
   0.09237515,
   0.1375867,
   0.1810564,
   0.2247339,
   0.2604824,
   0.2904271,
   0.3085844,
   0.3175415,
   0.3141142,
   0.2998582,
   0.2748883,
   0.236065,
   0.1864881,
   0.1083646,
   0.02504164};
   graph = new TGraph(18,Graph6_fx120,Graph6_fy120);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph120 = new TH1F("Graph_Graph120","Graph",100,-3.323417,3.267583);
   Graph_Graph120->SetMinimum(0);
   Graph_Graph120->SetMaximum(0.3492308);
   Graph_Graph120->SetDirectory(0);
   Graph_Graph120->SetStats(0);
   Graph_Graph120->SetLineStyle(0);
   Graph_Graph120->SetMarkerStyle(20);
   Graph_Graph120->GetXaxis()->SetLabelFont(42);
   Graph_Graph120->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph120->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph120->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph120->GetXaxis()->SetTitleFont(42);
   Graph_Graph120->GetYaxis()->SetLabelFont(42);
   Graph_Graph120->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph120->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph120->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph120->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph120->GetYaxis()->SetTitleFont(42);
   Graph_Graph120->GetZaxis()->SetLabelFont(42);
   Graph_Graph120->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph120->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph120->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph120);
   
   graph->Draw("  c");
   Double_t xAxis32[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_164 = new TH1D("hist_eta_164","",18, xAxis32);
   hist_eta_164->SetBinContent(1,0.000437668);
   hist_eta_164->SetBinContent(2,0.01148037);
   hist_eta_164->SetBinContent(3,0.04501248);
   hist_eta_164->SetBinContent(4,0.08140626);
   hist_eta_164->SetBinContent(5,0.1304251);
   hist_eta_164->SetBinContent(6,0.1749999);
   hist_eta_164->SetBinContent(7,0.222672);
   hist_eta_164->SetBinContent(8,0.2718255);
   hist_eta_164->SetBinContent(9,0.3053913);
   hist_eta_164->SetBinContent(10,0.3357587);
   hist_eta_164->SetBinContent(11,0.3441418);
   hist_eta_164->SetBinContent(12,0.3385531);
   hist_eta_164->SetBinContent(13,0.321989);
   hist_eta_164->SetBinContent(14,0.2864369);
   hist_eta_164->SetBinContent(15,0.2393371);
   hist_eta_164->SetBinContent(16,0.1875239);
   hist_eta_164->SetBinContent(17,0.1017242);
   hist_eta_164->SetBinContent(18,0.01898806);
   hist_eta_164->SetBinError(1,0.0001213873);
   hist_eta_164->SetBinError(2,0.0004396061);
   hist_eta_164->SetBinError(3,0.001231026);
   hist_eta_164->SetBinError(4,0.001655502);
   hist_eta_164->SetBinError(5,0.002095469);
   hist_eta_164->SetBinError(6,0.002427279);
   hist_eta_164->SetBinError(7,0.002738001);
   hist_eta_164->SetBinError(8,0.003025143);
   hist_eta_164->SetBinError(9,0.003206484);
   hist_eta_164->SetBinError(10,0.003362129);
   hist_eta_164->SetBinError(11,0.003403842);
   hist_eta_164->SetBinError(12,0.003376091);
   hist_eta_164->SetBinError(13,0.003292466);
   hist_eta_164->SetBinError(14,0.003105383);
   hist_eta_164->SetBinError(15,0.00283861);
   hist_eta_164->SetBinError(16,0.002512633);
   hist_eta_164->SetBinError(17,0.001308573);
   hist_eta_164->SetBinError(18,0.0005653613);
   hist_eta_164->SetEntries(105472);

   ci = TColor::GetColor("#cc0000");
   hist_eta_164->SetLineColor(ci);
   hist_eta_164->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_164->SetMarkerColor(ci);
   hist_eta_164->SetMarkerStyle(20);
   hist_eta_164->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_164->GetXaxis()->SetLabelFont(42);
   hist_eta_164->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_164->GetXaxis()->SetLabelSize(0.045);
   hist_eta_164->GetXaxis()->SetTitleSize(0.055);
   hist_eta_164->GetXaxis()->SetTitleFont(42);
   hist_eta_164->GetYaxis()->SetTitle("Event fraction");
   hist_eta_164->GetYaxis()->SetLabelFont(42);
   hist_eta_164->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_164->GetYaxis()->SetLabelSize(0.045);
   hist_eta_164->GetYaxis()->SetTitleSize(0.055);
   hist_eta_164->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_164->GetYaxis()->SetTitleFont(42);
   hist_eta_164->GetZaxis()->SetLabelFont(42);
   hist_eta_164->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_164->GetZaxis()->SetLabelSize(0.045);
   hist_eta_164->GetZaxis()->SetTitleSize(0.035);
   hist_eta_164->GetZaxis()->SetTitleFont(42);
   hist_eta_164->Draw("same p");
   p_1_1->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_1_2
   TPad *p_1_2 = new TPad("p_1_2", "p_1_2",0.3053435,0.50501,0.519084,0.6573147);
   p_1_2->Draw();
   p_1_2->cd();
   p_1_2->Range(-2.999,0.0001,2.999,0.5999);
   p_1_2->SetFillColor(0);
   p_1_2->SetBorderMode(0);
   p_1_2->SetBorderSize(0);
   p_1_2->SetTickx(1);
   p_1_2->SetTicky(1);
   p_1_2->SetLeftMargin(0);
   p_1_2->SetRightMargin(0);
   p_1_2->SetTopMargin(0);
   p_1_2->SetBottomMargin(0);
   p_1_2->SetFrameLineColor(0);
   p_1_2->SetFrameBorderMode(0);
   p_1_2->SetFrameLineColor(0);
   p_1_2->SetFrameBorderMode(0);
   
   TH1D *emptyDist65 = new TH1D("emptyDist65","",10,-2.999,2.999);
   emptyDist65->SetBinContent(7,1000);
   emptyDist65->SetBinError(7,1000);
   emptyDist65->SetMinimum(0.0001);
   emptyDist65->SetMaximum(0.5999);
   emptyDist65->SetEntries(1);
   emptyDist65->SetLineStyle(0);
   emptyDist65->SetMarkerStyle(20);
   emptyDist65->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist65->GetXaxis()->CenterTitle(true);
   emptyDist65->GetXaxis()->SetLabelFont(43);
   emptyDist65->GetXaxis()->SetLabelOffset(0.01);
   emptyDist65->GetXaxis()->SetLabelSize(33);
   emptyDist65->GetXaxis()->SetTitleSize(33);
   emptyDist65->GetXaxis()->SetTitleOffset(7.5);
   emptyDist65->GetXaxis()->SetTitleFont(43);
   emptyDist65->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist65->GetYaxis()->CenterTitle(true);
   emptyDist65->GetYaxis()->SetNdivisions(505);
   emptyDist65->GetYaxis()->SetLabelFont(43);
   emptyDist65->GetYaxis()->SetLabelOffset(0.01);
   emptyDist65->GetYaxis()->SetLabelSize(33);
   emptyDist65->GetYaxis()->SetTitleSize(33);
   emptyDist65->GetYaxis()->SetTitleOffset(7.5);
   emptyDist65->GetYaxis()->SetTitleFont(43);
   emptyDist65->GetZaxis()->SetLabelFont(42);
   emptyDist65->GetZaxis()->SetLabelSize(0.045);
   emptyDist65->GetZaxis()->SetTitleSize(0.035);
   emptyDist65->GetZaxis()->SetTitleFont(42);
   emptyDist65->Draw("");
   
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
   5.871776e-05,
   0.003932654,
   0.02637698,
   0.05897838,
   0.1076785,
   0.1596924,
   0.2186972,
   0.2681333,
   0.3151504,
   0.3446901,
   0.3635682,
   0.358915,
   0.3418889,
   0.301017,
   0.2548555,
   0.1898066,
   0.1001441,
   0.01687553};
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
   -4.271281e-05,
   -0.0004920282,
   -0.001425609,
   -0.001851818,
   -0.001591887,
   -0.001229963,
   -0.001387754,
   -0.001333405,
   -0.00176707,
   -0.002334066,
   -0.002222073,
   -0.002115787,
   -0.002047724,
   -0.002125263,
   -0.001860676,
   -0.001622894,
   -0.00146808,
   -0.000693021};
   gre = new TGraphErrors(18,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 980;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","Graph",100,-3.46425,3.51675);
   Graph_Graph1033->SetMinimum(0);
   Graph_Graph1033->SetMaximum(0.3999191);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);
   Graph_Graph1033->SetLineStyle(0);
   Graph_Graph1033->SetMarkerStyle(20);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1033->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1033->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1033->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx121[18] = {
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
   Double_t Graph1_fy121[18] = {
   5.786729e-05,
   0.006961238,
   0.03765833,
   0.07678058,
   0.1255951,
   0.1770177,
   0.2273298,
   0.2705746,
   0.3033868,
   0.326776,
   0.3378817,
   0.3348529,
   0.3183626,
   0.2894206,
   0.2486998,
   0.1963685,
   0.1105519,
   0.02225341};
   graph = new TGraph(18,Graph1_fx121,Graph1_fy121);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph121 = new TH1F("Graph_Graph121","Graph",100,-3.323417,3.267583);
   Graph_Graph121->SetMinimum(0);
   Graph_Graph121->SetMaximum(0.3716641);
   Graph_Graph121->SetDirectory(0);
   Graph_Graph121->SetStats(0);
   Graph_Graph121->SetLineStyle(0);
   Graph_Graph121->SetMarkerStyle(20);
   Graph_Graph121->GetXaxis()->SetLabelFont(42);
   Graph_Graph121->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph121->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph121->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph121->GetXaxis()->SetTitleFont(42);
   Graph_Graph121->GetYaxis()->SetLabelFont(42);
   Graph_Graph121->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph121->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph121->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph121->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph121->GetYaxis()->SetTitleFont(42);
   Graph_Graph121->GetZaxis()->SetLabelFont(42);
   Graph_Graph121->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph121->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph121->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph121);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx122[18] = {
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
   Double_t Graph2_fy122[18] = {
   7.500895e-05,
   0.007797389,
   0.03806833,
   0.07813222,
   0.1291515,
   0.1796845,
   0.2319033,
   0.2743761,
   0.3087022,
   0.3317359,
   0.3422179,
   0.3408365,
   0.3234781,
   0.2945188,
   0.2517623,
   0.2031702,
   0.1129518,
   0.02307255};
   graph = new TGraph(18,Graph2_fx122,Graph2_fy122);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph122 = new TH1F("Graph_Graph122","Graph",100,-3.323417,3.267583);
   Graph_Graph122->SetMinimum(0);
   Graph_Graph122->SetMaximum(0.3764322);
   Graph_Graph122->SetDirectory(0);
   Graph_Graph122->SetStats(0);
   Graph_Graph122->SetLineStyle(0);
   Graph_Graph122->SetMarkerStyle(20);
   Graph_Graph122->GetXaxis()->SetLabelFont(42);
   Graph_Graph122->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph122->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph122->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph122->GetXaxis()->SetTitleFont(42);
   Graph_Graph122->GetYaxis()->SetLabelFont(42);
   Graph_Graph122->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph122->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph122->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph122->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph122->GetYaxis()->SetTitleFont(42);
   Graph_Graph122->GetZaxis()->SetLabelFont(42);
   Graph_Graph122->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph122->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph122->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph122);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx123[18] = {
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
   Double_t Graph3_fy123[18] = {
   3.38048e-05,
   0.006961238,
   0.03478616,
   0.07370759,
   0.1223906,
   0.1718377,
   0.2222918,
   0.2641165,
   0.2984433,
   0.3231591,
   0.3357204,
   0.3330365,
   0.3155807,
   0.2849457,
   0.2407077,
   0.1936491,
   0.1067142,
   0.02153143};
   graph = new TGraph(18,Graph3_fx123,Graph3_fy123);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph123 = new TH1F("Graph_Graph123","Graph",100,-3.323417,3.267583);
   Graph_Graph123->SetMinimum(0);
   Graph_Graph123->SetMaximum(0.3692891);
   Graph_Graph123->SetDirectory(0);
   Graph_Graph123->SetStats(0);
   Graph_Graph123->SetLineStyle(0);
   Graph_Graph123->SetMarkerStyle(20);
   Graph_Graph123->GetXaxis()->SetLabelFont(42);
   Graph_Graph123->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph123->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph123->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph123->GetXaxis()->SetTitleFont(42);
   Graph_Graph123->GetYaxis()->SetLabelFont(42);
   Graph_Graph123->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph123->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph123->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph123->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph123->GetYaxis()->SetTitleFont(42);
   Graph_Graph123->GetZaxis()->SetLabelFont(42);
   Graph_Graph123->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph123->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph123->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph123);
   
   graph->Draw("  c");
   
   Double_t Graph4_fx124[18] = {
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
   Double_t Graph4_fy124[18] = {
   5.09707e-05,
   0.006714252,
   0.03666486,
   0.07526116,
   0.123793,
   0.1744854,
   0.2253907,
   0.2702396,
   0.3042856,
   0.3296563,
   0.3409504,
   0.3380041,
   0.3216359,
   0.2908636,
   0.2481425,
   0.1957641,
   0.1089306,
   0.02190889};
   graph = new TGraph(18,Graph4_fx124,Graph4_fy124);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph124 = new TH1F("Graph_Graph124","Graph",100,-3.323417,3.267583);
   Graph_Graph124->SetMinimum(0);
   Graph_Graph124->SetMaximum(0.3750404);
   Graph_Graph124->SetDirectory(0);
   Graph_Graph124->SetStats(0);
   Graph_Graph124->SetLineStyle(0);
   Graph_Graph124->SetMarkerStyle(20);
   Graph_Graph124->GetXaxis()->SetLabelFont(42);
   Graph_Graph124->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph124->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph124->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph124->GetXaxis()->SetTitleFont(42);
   Graph_Graph124->GetYaxis()->SetLabelFont(42);
   Graph_Graph124->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph124->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph124->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph124->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph124->GetYaxis()->SetTitleFont(42);
   Graph_Graph124->GetZaxis()->SetLabelFont(42);
   Graph_Graph124->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph124->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph124->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph124);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx125[18] = {
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
   Double_t Graph5_fy125[18] = {
   7.312493e-05,
   0.007352354,
   0.0372929,
   0.07755943,
   0.1275479,
   0.1793897,
   0.2317271,
   0.2750772,
   0.3095309,
   0.3325705,
   0.3421296,
   0.3401331,
   0.3243166,
   0.2947966,
   0.2549671,
   0.2026204,
   0.1133502,
   0.02278395};
   graph = new TGraph(18,Graph5_fx125,Graph5_fy125);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph125 = new TH1F("Graph_Graph125","Graph",100,-3.323417,3.267583);
   Graph_Graph125->SetMinimum(0);
   Graph_Graph125->SetMaximum(0.3763353);
   Graph_Graph125->SetDirectory(0);
   Graph_Graph125->SetStats(0);
   Graph_Graph125->SetLineStyle(0);
   Graph_Graph125->SetMarkerStyle(20);
   Graph_Graph125->GetXaxis()->SetLabelFont(42);
   Graph_Graph125->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph125->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph125->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph125->GetXaxis()->SetTitleFont(42);
   Graph_Graph125->GetYaxis()->SetLabelFont(42);
   Graph_Graph125->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph125->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph125->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph125->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph125->GetYaxis()->SetTitleFont(42);
   Graph_Graph125->GetZaxis()->SetLabelFont(42);
   Graph_Graph125->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph125->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph125->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph125);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx126[18] = {
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
   Double_t Graph6_fy126[18] = {
   7.213343e-06,
   0.006577292,
   0.03485643,
   0.0721098,
   0.1216315,
   0.1702229,
   0.2226922,
   0.2647036,
   0.2985883,
   0.3241051,
   0.3350072,
   0.3337952,
   0.3163427,
   0.2846389,
   0.2453348,
   0.191983,
   0.1075544,
   0.02117353};
   graph = new TGraph(18,Graph6_fx126,Graph6_fy126);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph126 = new TH1F("Graph_Graph126","Graph",100,-3.323417,3.267583);
   Graph_Graph126->SetMinimum(0);
   Graph_Graph126->SetMaximum(0.3685072);
   Graph_Graph126->SetDirectory(0);
   Graph_Graph126->SetStats(0);
   Graph_Graph126->SetLineStyle(0);
   Graph_Graph126->SetMarkerStyle(20);
   Graph_Graph126->GetXaxis()->SetLabelFont(42);
   Graph_Graph126->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph126->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph126->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph126->GetXaxis()->SetTitleFont(42);
   Graph_Graph126->GetYaxis()->SetLabelFont(42);
   Graph_Graph126->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph126->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph126->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph126->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph126->GetYaxis()->SetTitleFont(42);
   Graph_Graph126->GetZaxis()->SetLabelFont(42);
   Graph_Graph126->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph126->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph126->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph126);
   
   graph->Draw("  c");
   Double_t xAxis33[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_266 = new TH1D("hist_eta_266","",18, xAxis33);
   hist_eta_266->SetBinContent(1,7.259398e-05);
   hist_eta_266->SetBinContent(2,0.004043485);
   hist_eta_266->SetBinContent(3,0.02668555);
   hist_eta_266->SetBinContent(4,0.05941092);
   hist_eta_266->SetBinContent(5,0.1079908);
   hist_eta_266->SetBinContent(6,0.1605053);
   hist_eta_266->SetBinContent(7,0.2192629);
   hist_eta_266->SetBinContent(8,0.2688155);
   hist_eta_266->SetBinContent(9,0.3154354);
   hist_eta_266->SetBinContent(10,0.3447198);
   hist_eta_266->SetBinContent(11,0.3628102);
   hist_eta_266->SetBinContent(12,0.359529);
   hist_eta_266->SetBinContent(13,0.341424);
   hist_eta_266->SetBinContent(14,0.3004229);
   hist_eta_266->SetBinContent(15,0.253716);
   hist_eta_266->SetBinContent(16,0.1895864);
   hist_eta_266->SetBinContent(17,0.09954813);
   hist_eta_266->SetBinContent(18,0.01636268);
   hist_eta_266->SetBinError(1,3.246502e-05);
   hist_eta_266->SetBinError(2,0.000171328);
   hist_eta_266->SetBinError(3,0.0006224484);
   hist_eta_266->SetBinError(4,0.0009287492);
   hist_eta_266->SetBinError(5,0.001252157);
   hist_eta_266->SetBinError(6,0.001526546);
   hist_eta_266->SetBinError(7,0.001784218);
   hist_eta_266->SetBinError(8,0.00197557);
   hist_eta_266->SetBinError(9,0.002140033);
   hist_eta_266->SetBinError(10,0.002237167);
   hist_eta_266->SetBinError(11,0.002295118);
   hist_eta_266->SetBinError(12,0.002284716);
   hist_eta_266->SetBinError(13,0.002226447);
   hist_eta_266->SetBinError(14,0.002088487);
   hist_eta_266->SetBinError(15,0.001919284);
   hist_eta_266->SetBinError(16,0.001659086);
   hist_eta_266->SetBinError(17,0.0008500938);
   hist_eta_266->SetBinError(18,0.0003446494);
   hist_eta_266->SetEntries(244549);

   ci = TColor::GetColor("#cc0000");
   hist_eta_266->SetLineColor(ci);
   hist_eta_266->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_266->SetMarkerColor(ci);
   hist_eta_266->SetMarkerStyle(20);
   hist_eta_266->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_266->GetXaxis()->SetLabelFont(42);
   hist_eta_266->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_266->GetXaxis()->SetLabelSize(0.045);
   hist_eta_266->GetXaxis()->SetTitleSize(0.055);
   hist_eta_266->GetXaxis()->SetTitleFont(42);
   hist_eta_266->GetYaxis()->SetTitle("Event fraction");
   hist_eta_266->GetYaxis()->SetLabelFont(42);
   hist_eta_266->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_266->GetYaxis()->SetLabelSize(0.045);
   hist_eta_266->GetYaxis()->SetTitleSize(0.055);
   hist_eta_266->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_266->GetYaxis()->SetTitleFont(42);
   hist_eta_266->GetZaxis()->SetLabelFont(42);
   hist_eta_266->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_266->GetZaxis()->SetLabelSize(0.045);
   hist_eta_266->GetZaxis()->SetTitleSize(0.035);
   hist_eta_266->GetZaxis()->SetTitleFont(42);
   hist_eta_266->Draw("same p");
   p_1_2->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_1_3
   TPad *p_1_3 = new TPad("p_1_3", "p_1_3",0.3053435,0.3527054,0.519084,0.50501);
   p_1_3->Draw();
   p_1_3->cd();
   p_1_3->Range(-2.999,0.0001,2.999,0.5999);
   p_1_3->SetFillColor(0);
   p_1_3->SetBorderMode(0);
   p_1_3->SetBorderSize(0);
   p_1_3->SetTickx(1);
   p_1_3->SetTicky(1);
   p_1_3->SetLeftMargin(0);
   p_1_3->SetRightMargin(0);
   p_1_3->SetTopMargin(0);
   p_1_3->SetBottomMargin(0);
   p_1_3->SetFrameLineColor(0);
   p_1_3->SetFrameBorderMode(0);
   p_1_3->SetFrameLineColor(0);
   p_1_3->SetFrameBorderMode(0);
   
   TH1D *emptyDist67 = new TH1D("emptyDist67","",10,-2.999,2.999);
   emptyDist67->SetBinContent(7,1000);
   emptyDist67->SetBinError(7,1000);
   emptyDist67->SetMinimum(0.0001);
   emptyDist67->SetMaximum(0.5999);
   emptyDist67->SetEntries(1);
   emptyDist67->SetLineStyle(0);
   emptyDist67->SetMarkerStyle(20);
   emptyDist67->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist67->GetXaxis()->CenterTitle(true);
   emptyDist67->GetXaxis()->SetLabelFont(43);
   emptyDist67->GetXaxis()->SetLabelOffset(0.01);
   emptyDist67->GetXaxis()->SetLabelSize(33);
   emptyDist67->GetXaxis()->SetTitleSize(33);
   emptyDist67->GetXaxis()->SetTitleOffset(7.5);
   emptyDist67->GetXaxis()->SetTitleFont(43);
   emptyDist67->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist67->GetYaxis()->CenterTitle(true);
   emptyDist67->GetYaxis()->SetNdivisions(505);
   emptyDist67->GetYaxis()->SetLabelFont(43);
   emptyDist67->GetYaxis()->SetLabelOffset(0.01);
   emptyDist67->GetYaxis()->SetLabelSize(33);
   emptyDist67->GetYaxis()->SetTitleSize(33);
   emptyDist67->GetYaxis()->SetTitleOffset(7.5);
   emptyDist67->GetYaxis()->SetTitleFont(43);
   emptyDist67->GetZaxis()->SetLabelFont(42);
   emptyDist67->GetZaxis()->SetLabelSize(0.045);
   emptyDist67->GetZaxis()->SetTitleSize(0.035);
   emptyDist67->GetZaxis()->SetTitleFont(42);
   emptyDist67->Draw("");
   
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
   3.055808e-05,
   0.001285633,
   0.01351018,
   0.0423949,
   0.08795163,
   0.145002,
   0.2086687,
   0.2700965,
   0.3219914,
   0.3553706,
   0.3820578,
   0.3760568,
   0.3578923,
   0.3128691,
   0.2603962,
   0.19976,
   0.09373677,
   0.01340405};
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
   -3.055861e-05,
   -0.0002630456,
   -0.001117246,
   -0.001606005,
   -0.001644557,
   -0.001714342,
   -0.001260107,
   -0.001349356,
   -0.002443234,
   -0.002195607,
   -0.003134499,
   -0.001502771,
   -0.002079856,
   -0.001786115,
   -0.001664911,
   -0.001516737,
   -0.001337142,
   -0.0006719431};
   gre = new TGraphErrors(18,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 982;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1034 = new TH1F("Graph_Graph1034","Graph",100,-3.46425,3.51675);
   Graph_Graph1034->SetMinimum(0);
   Graph_Graph1034->SetMaximum(0.4202606);
   Graph_Graph1034->SetDirectory(0);
   Graph_Graph1034->SetStats(0);
   Graph_Graph1034->SetLineStyle(0);
   Graph_Graph1034->SetMarkerStyle(20);
   Graph_Graph1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph1034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1034->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1034->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph1034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1034->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1034->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1034->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph1034->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1034);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx127[18] = {
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
   Double_t Graph1_fy127[18] = {
   -2.371723e-08,
   0.00231932,
   0.02127528,
   0.05591313,
   0.1056952,
   0.1643856,
   0.222028,
   0.2732774,
   0.3129458,
   0.3420814,
   0.355444,
   0.3524571,
   0.3351643,
   0.3016269,
   0.2569803,
   0.1994427,
   0.1055904,
   0.01787962};
   graph = new TGraph(18,Graph1_fx127,Graph1_fy127);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph127 = new TH1F("Graph_Graph127","Graph",100,-3.323417,3.267583);
   Graph_Graph127->SetMinimum(-0.03554442);
   Graph_Graph127->SetMaximum(0.3909884);
   Graph_Graph127->SetDirectory(0);
   Graph_Graph127->SetStats(0);
   Graph_Graph127->SetLineStyle(0);
   Graph_Graph127->SetMarkerStyle(20);
   Graph_Graph127->GetXaxis()->SetLabelFont(42);
   Graph_Graph127->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph127->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph127->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph127->GetXaxis()->SetTitleFont(42);
   Graph_Graph127->GetYaxis()->SetLabelFont(42);
   Graph_Graph127->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph127->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph127->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph127->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph127->GetYaxis()->SetTitleFont(42);
   Graph_Graph127->GetZaxis()->SetLabelFont(42);
   Graph_Graph127->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph127->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph127->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph127);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx128[18] = {
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
   Double_t Graph2_fy128[18] = {
   2.913372e-07,
   0.002481753,
   0.02170443,
   0.05751378,
   0.1089414,
   0.1676399,
   0.2266847,
   0.2774024,
   0.3200345,
   0.3435759,
   0.359447,
   0.3597865,
   0.3368275,
   0.3080574,
   0.261282,
   0.2026309,
   0.1089747,
   0.0186872};
   graph = new TGraph(18,Graph2_fx128,Graph2_fy128);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph128 = new TH1F("Graph_Graph128","Graph",100,-3.323417,3.267583);
   Graph_Graph128->SetMinimum(0);
   Graph_Graph128->SetMaximum(0.3957652);
   Graph_Graph128->SetDirectory(0);
   Graph_Graph128->SetStats(0);
   Graph_Graph128->SetLineStyle(0);
   Graph_Graph128->SetMarkerStyle(20);
   Graph_Graph128->GetXaxis()->SetLabelFont(42);
   Graph_Graph128->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph128->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph128->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph128->GetXaxis()->SetTitleFont(42);
   Graph_Graph128->GetYaxis()->SetLabelFont(42);
   Graph_Graph128->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph128->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph128->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph128->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph128->GetYaxis()->SetTitleFont(42);
   Graph_Graph128->GetZaxis()->SetLabelFont(42);
   Graph_Graph128->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph128->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph128->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph128);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx129[18] = {
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
   Double_t Graph3_fy129[18] = {
   -8.614602e-07,
   0.002145768,
   0.01998984,
   0.05364848,
   0.1035185,
   0.1604129,
   0.2174927,
   0.2679203,
   0.3093692,
   0.3354316,
   0.351985,
   0.3518072,
   0.3310245,
   0.299064,
   0.2489167,
   0.1932093,
   0.1032005,
   0.01724509};
   graph = new TGraph(18,Graph3_fx129,Graph3_fy129);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph129 = new TH1F("Graph_Graph129","Graph",100,-3.323417,3.267583);
   Graph_Graph129->SetMinimum(-0.03519944);
   Graph_Graph129->SetMaximum(0.3871835);
   Graph_Graph129->SetDirectory(0);
   Graph_Graph129->SetStats(0);
   Graph_Graph129->SetLineStyle(0);
   Graph_Graph129->SetMarkerStyle(20);
   Graph_Graph129->GetXaxis()->SetLabelFont(42);
   Graph_Graph129->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph129->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph129->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph129->GetXaxis()->SetTitleFont(42);
   Graph_Graph129->GetYaxis()->SetLabelFont(42);
   Graph_Graph129->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph129->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph129->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph129->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph129->GetYaxis()->SetTitleFont(42);
   Graph_Graph129->GetZaxis()->SetLabelFont(42);
   Graph_Graph129->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph129->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph129->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph129);
   
   graph->Draw("  c");
   
   Double_t Graph4_fx130[18] = {
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
   Double_t Graph4_fy130[18] = {
   -1.540711e-07,
   0.002160666,
   0.02041365,
   0.05485787,
   0.1041586,
   0.1628912,
   0.2202472,
   0.2734736,
   0.3134444,
   0.3434225,
   0.3577487,
   0.3561683,
   0.3371515,
   0.3022791,
   0.257006,
   0.1977636,
   0.1048213,
   0.01765291};
   graph = new TGraph(18,Graph4_fx130,Graph4_fy130);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph130 = new TH1F("Graph_Graph130","Graph",100,-3.323417,3.267583);
   Graph_Graph130->SetMinimum(-0.03577504);
   Graph_Graph130->SetMaximum(0.3935236);
   Graph_Graph130->SetDirectory(0);
   Graph_Graph130->SetStats(0);
   Graph_Graph130->SetLineStyle(0);
   Graph_Graph130->SetMarkerStyle(20);
   Graph_Graph130->GetXaxis()->SetLabelFont(42);
   Graph_Graph130->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph130->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph130->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph130->GetXaxis()->SetTitleFont(42);
   Graph_Graph130->GetYaxis()->SetLabelFont(42);
   Graph_Graph130->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph130->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph130->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph130->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph130->GetYaxis()->SetTitleFont(42);
   Graph_Graph130->GetZaxis()->SetLabelFont(42);
   Graph_Graph130->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph130->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph130->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph130);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx131[18] = {
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
   Double_t Graph5_fy131[18] = {
   8.446888e-07,
   0.002359711,
   0.02185234,
   0.05599287,
   0.1071824,
   0.1642797,
   0.2253423,
   0.2763354,
   0.3215114,
   0.3483109,
   0.3617368,
   0.3578712,
   0.3410588,
   0.311934,
   0.2601221,
   0.2034022,
   0.1071342,
   0.01836451};
   graph = new TGraph(18,Graph5_fx131,Graph5_fy131);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph131 = new TH1F("Graph_Graph131","Graph",100,-3.323417,3.267583);
   Graph_Graph131->SetMinimum(0);
   Graph_Graph131->SetMaximum(0.3979104);
   Graph_Graph131->SetDirectory(0);
   Graph_Graph131->SetStats(0);
   Graph_Graph131->SetLineStyle(0);
   Graph_Graph131->SetMarkerStyle(20);
   Graph_Graph131->GetXaxis()->SetLabelFont(42);
   Graph_Graph131->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph131->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph131->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph131->GetXaxis()->SetTitleFont(42);
   Graph_Graph131->GetYaxis()->SetLabelFont(42);
   Graph_Graph131->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph131->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph131->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph131->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph131->GetYaxis()->SetTitleFont(42);
   Graph_Graph131->GetZaxis()->SetLabelFont(42);
   Graph_Graph131->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph131->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph131->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph131);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx132[18] = {
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
   Double_t Graph6_fy132[18] = {
   -5.808213e-07,
   0.001961243,
   0.02005928,
   0.05260395,
   0.1019111,
   0.1567725,
   0.2165841,
   0.2648484,
   0.3105251,
   0.3404542,
   0.3544873,
   0.351737,
   0.3331807,
   0.3014288,
   0.2507015,
   0.193373,
   0.1007704,
   0.01695659};
   graph = new TGraph(18,Graph6_fx132,Graph6_fy132);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph132 = new TH1F("Graph_Graph132","Graph",100,-3.323417,3.267583);
   Graph_Graph132->SetMinimum(-0.03544937);
   Graph_Graph132->SetMaximum(0.3899361);
   Graph_Graph132->SetDirectory(0);
   Graph_Graph132->SetStats(0);
   Graph_Graph132->SetLineStyle(0);
   Graph_Graph132->SetMarkerStyle(20);
   Graph_Graph132->GetXaxis()->SetLabelFont(42);
   Graph_Graph132->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph132->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph132->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph132->GetXaxis()->SetTitleFont(42);
   Graph_Graph132->GetYaxis()->SetLabelFont(42);
   Graph_Graph132->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph132->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph132->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph132->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph132->GetYaxis()->SetTitleFont(42);
   Graph_Graph132->GetZaxis()->SetLabelFont(42);
   Graph_Graph132->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph132->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph132->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph132);
   
   graph->Draw("  c");
   Double_t xAxis34[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_368 = new TH1D("hist_eta_368","",18, xAxis34);
   hist_eta_368->SetBinContent(1,1.676376e-05);
   hist_eta_368->SetBinContent(2,0.001357864);
   hist_eta_368->SetBinContent(3,0.01371275);
   hist_eta_368->SetBinContent(4,0.042647);
   hist_eta_368->SetBinContent(5,0.08816061);
   hist_eta_368->SetBinContent(6,0.1460291);
   hist_eta_368->SetBinContent(7,0.2090776);
   hist_eta_368->SetBinContent(8,0.2706006);
   hist_eta_368->SetBinContent(9,0.3220486);
   hist_eta_368->SetBinContent(10,0.3549894);
   hist_eta_368->SetBinContent(11,0.3824316);
   hist_eta_368->SetBinContent(12,0.3759105);
   hist_eta_368->SetBinContent(13,0.358275);
   hist_eta_368->SetBinContent(14,0.3120909);
   hist_eta_368->SetBinContent(15,0.2598718);
   hist_eta_368->SetBinContent(16,0.1987846);
   hist_eta_368->SetBinContent(17,0.09324841);
   hist_eta_368->SetBinContent(18,0.01321822);
   hist_eta_368->SetBinError(1,1.676376e-05);
   hist_eta_368->SetBinError(2,0.0001066839);
   hist_eta_368->SetBinError(3,0.0004794552);
   hist_eta_368->SetBinError(4,0.0008455318);
   hist_eta_368->SetBinError(5,0.00121569);
   hist_eta_368->SetBinError(6,0.001564607);
   hist_eta_368->SetBinError(7,0.001872145);
   hist_eta_368->SetBinError(8,0.002129855);
   hist_eta_368->SetBinError(9,0.00232352);
   hist_eta_368->SetBinError(10,0.002439458);
   hist_eta_368->SetBinError(11,0.002531994);
   hist_eta_368->SetBinError(12,0.002510313);
   hist_eta_368->SetBinError(13,0.002450722);
   hist_eta_368->SetBinError(14,0.002287316);
   hist_eta_368->SetBinError(15,0.002087206);
   hist_eta_368->SetBinError(16,0.00182548);
   hist_eta_368->SetBinError(17,0.0008840797);
   hist_eta_368->SetBinError(18,0.0003328567);
   hist_eta_368->SetEntries(211802);

   ci = TColor::GetColor("#cc0000");
   hist_eta_368->SetLineColor(ci);
   hist_eta_368->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_368->SetMarkerColor(ci);
   hist_eta_368->SetMarkerStyle(20);
   hist_eta_368->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_368->GetXaxis()->SetLabelFont(42);
   hist_eta_368->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_368->GetXaxis()->SetLabelSize(0.045);
   hist_eta_368->GetXaxis()->SetTitleSize(0.055);
   hist_eta_368->GetXaxis()->SetTitleFont(42);
   hist_eta_368->GetYaxis()->SetTitle("Event fraction");
   hist_eta_368->GetYaxis()->SetLabelFont(42);
   hist_eta_368->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_368->GetYaxis()->SetLabelSize(0.045);
   hist_eta_368->GetYaxis()->SetTitleSize(0.055);
   hist_eta_368->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_368->GetYaxis()->SetTitleFont(42);
   hist_eta_368->GetZaxis()->SetLabelFont(42);
   hist_eta_368->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_368->GetZaxis()->SetLabelSize(0.045);
   hist_eta_368->GetZaxis()->SetTitleSize(0.035);
   hist_eta_368->GetZaxis()->SetTitleFont(42);
   hist_eta_368->Draw("same p");
   p_1_3->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_1_4
   TPad *p_1_4 = new TPad("p_1_4", "p_1_4",0.3053435,0.2004008,0.519084,0.3527054);
   p_1_4->Draw();
   p_1_4->cd();
   p_1_4->Range(-2.999,0.0001,2.999,0.5999);
   p_1_4->SetFillColor(0);
   p_1_4->SetBorderMode(0);
   p_1_4->SetBorderSize(0);
   p_1_4->SetTickx(1);
   p_1_4->SetTicky(1);
   p_1_4->SetLeftMargin(0);
   p_1_4->SetRightMargin(0);
   p_1_4->SetTopMargin(0);
   p_1_4->SetBottomMargin(0);
   p_1_4->SetFrameLineColor(0);
   p_1_4->SetFrameBorderMode(0);
   p_1_4->SetFrameLineColor(0);
   p_1_4->SetFrameBorderMode(0);
   
   TH1D *emptyDist69 = new TH1D("emptyDist69","",10,-2.999,2.999);
   emptyDist69->SetBinContent(7,1000);
   emptyDist69->SetBinError(7,1000);
   emptyDist69->SetMinimum(0.0001);
   emptyDist69->SetMaximum(0.5999);
   emptyDist69->SetEntries(1);
   emptyDist69->SetLineStyle(0);
   emptyDist69->SetMarkerStyle(20);
   emptyDist69->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist69->GetXaxis()->CenterTitle(true);
   emptyDist69->GetXaxis()->SetLabelFont(43);
   emptyDist69->GetXaxis()->SetLabelOffset(0.01);
   emptyDist69->GetXaxis()->SetLabelSize(33);
   emptyDist69->GetXaxis()->SetTitleSize(33);
   emptyDist69->GetXaxis()->SetTitleOffset(7.5);
   emptyDist69->GetXaxis()->SetTitleFont(43);
   emptyDist69->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist69->GetYaxis()->CenterTitle(true);
   emptyDist69->GetYaxis()->SetNdivisions(505);
   emptyDist69->GetYaxis()->SetLabelFont(43);
   emptyDist69->GetYaxis()->SetLabelOffset(0.01);
   emptyDist69->GetYaxis()->SetLabelSize(33);
   emptyDist69->GetYaxis()->SetTitleSize(33);
   emptyDist69->GetYaxis()->SetTitleOffset(7.5);
   emptyDist69->GetYaxis()->SetTitleFont(43);
   emptyDist69->GetZaxis()->SetLabelFont(42);
   emptyDist69->GetZaxis()->SetLabelSize(0.045);
   emptyDist69->GetZaxis()->SetTitleSize(0.035);
   emptyDist69->GetZaxis()->SetTitleFont(42);
   emptyDist69->Draw("");
   
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
   0,
   0.0002965107,
   0.005146077,
   0.02567028,
   0.06727601,
   0.1276364,
   0.1958367,
   0.2613522,
   0.3255839,
   0.3745531,
   0.4026019,
   0.3989258,
   0.3784828,
   0.3296464,
   0.2698902,
   0.1957355,
   0.08715407,
   0.009062554};
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
   -0,
   -0.0001052343,
   -0.0007887479,
   -0.001639155,
   -0.002531398,
   -0.002383014,
   -0.001256662,
   -0.001150001,
   -0.001065015,
   -0.002297195,
   -0.00263308,
   -0.00324812,
   -0.003213234,
   -0.00190586,
   -0.001603386,
   -0.001070062,
   -0.001489821,
   -0.0004425718};
   gre = new TGraphErrors(18,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 984;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","Graph",100,-3.46425,3.51675);
   Graph_Graph1035->SetMinimum(0);
   Graph_Graph1035->SetMaximum(0.4428621);
   Graph_Graph1035->SetDirectory(0);
   Graph_Graph1035->SetStats(0);
   Graph_Graph1035->SetLineStyle(0);
   Graph_Graph1035->SetMarkerStyle(20);
   Graph_Graph1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph1035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1035->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1035->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1035->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1035->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1035->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1035);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx133[18] = {
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
   Double_t Graph1_fy133[18] = {
   2.258453e-12,
   0.0004271488,
   0.009105815,
   0.03497712,
   0.08242796,
   0.1450197,
   0.2128645,
   0.2757402,
   0.3244181,
   0.3605209,
   0.3764427,
   0.3751243,
   0.3559574,
   0.3169136,
   0.2648891,
   0.1980583,
   0.09608821,
   0.01240273};
   graph = new TGraph(18,Graph1_fx133,Graph1_fy133);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph133 = new TH1F("Graph_Graph133","Graph",100,-3.323417,3.267583);
   Graph_Graph133->SetMinimum(0);
   Graph_Graph133->SetMaximum(0.4140869);
   Graph_Graph133->SetDirectory(0);
   Graph_Graph133->SetStats(0);
   Graph_Graph133->SetLineStyle(0);
   Graph_Graph133->SetMarkerStyle(20);
   Graph_Graph133->GetXaxis()->SetLabelFont(42);
   Graph_Graph133->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph133->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph133->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph133->GetXaxis()->SetTitleFont(42);
   Graph_Graph133->GetYaxis()->SetLabelFont(42);
   Graph_Graph133->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph133->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph133->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph133->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph133->GetYaxis()->SetTitleFont(42);
   Graph_Graph133->GetZaxis()->SetLabelFont(42);
   Graph_Graph133->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph133->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph133->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph133);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx134[18] = {
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
   Double_t Graph2_fy134[18] = {
   4.218532e-10,
   0.000509471,
   0.009260694,
   0.03585146,
   0.08471302,
   0.1490428,
   0.2170236,
   0.2775671,
   0.3302733,
   0.3618813,
   0.3819636,
   0.379635,
   0.3580199,
   0.3231041,
   0.2678356,
   0.2033518,
   0.09936588,
   0.01311925};
   graph = new TGraph(18,Graph2_fx134,Graph2_fy134);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph134 = new TH1F("Graph_Graph134","Graph",100,-3.323417,3.267583);
   Graph_Graph134->SetMinimum(0);
   Graph_Graph134->SetMaximum(0.42016);
   Graph_Graph134->SetDirectory(0);
   Graph_Graph134->SetStats(0);
   Graph_Graph134->SetLineStyle(0);
   Graph_Graph134->SetMarkerStyle(20);
   Graph_Graph134->GetXaxis()->SetLabelFont(42);
   Graph_Graph134->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph134->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph134->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph134->GetXaxis()->SetTitleFont(42);
   Graph_Graph134->GetYaxis()->SetLabelFont(42);
   Graph_Graph134->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph134->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph134->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph134->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph134->GetYaxis()->SetTitleFont(42);
   Graph_Graph134->GetZaxis()->SetLabelFont(42);
   Graph_Graph134->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph134->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph134->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph134);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx135[18] = {
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
   Double_t Graph3_fy135[18] = {
   -3.125514e-12,
   0.0003562173,
   0.008306355,
   0.0341666,
   0.08088393,
   0.1429662,
   0.208316,
   0.2688409,
   0.3207761,
   0.3534618,
   0.3738611,
   0.3743041,
   0.3502175,
   0.3149953,
   0.2571681,
   0.1949702,
   0.09418003,
   0.01202463};
   graph = new TGraph(18,Graph3_fx135,Graph3_fy135);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph135 = new TH1F("Graph_Graph135","Graph",100,-3.323417,3.267583);
   Graph_Graph135->SetMinimum(-0.03743041);
   Graph_Graph135->SetMaximum(0.4117345);
   Graph_Graph135->SetDirectory(0);
   Graph_Graph135->SetStats(0);
   Graph_Graph135->SetLineStyle(0);
   Graph_Graph135->SetMarkerStyle(20);
   Graph_Graph135->GetXaxis()->SetLabelFont(42);
   Graph_Graph135->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph135->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph135->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph135->GetXaxis()->SetTitleFont(42);
   Graph_Graph135->GetYaxis()->SetLabelFont(42);
   Graph_Graph135->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph135->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph135->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph135->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph135->GetYaxis()->SetTitleFont(42);
   Graph_Graph135->GetZaxis()->SetLabelFont(42);
   Graph_Graph135->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph135->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph135->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph135);
   
   graph->Draw("  c");
   
   Double_t Graph4_fx136[18] = {
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
   Double_t Graph4_fy136[18] = {
   3.236015e-11,
   0.0003833395,
   0.008608983,
   0.03434319,
   0.08139366,
   0.1433515,
   0.2116235,
   0.2746666,
   0.3245881,
   0.3606972,
   0.3801331,
   0.3789492,
   0.3568495,
   0.3175833,
   0.2642088,
   0.1977126,
   0.09515659,
   0.01225345};
   graph = new TGraph(18,Graph4_fx136,Graph4_fy136);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph136 = new TH1F("Graph_Graph136","Graph",100,-3.323417,3.267583);
   Graph_Graph136->SetMinimum(0);
   Graph_Graph136->SetMaximum(0.4181464);
   Graph_Graph136->SetDirectory(0);
   Graph_Graph136->SetStats(0);
   Graph_Graph136->SetLineStyle(0);
   Graph_Graph136->SetMarkerStyle(20);
   Graph_Graph136->GetXaxis()->SetLabelFont(42);
   Graph_Graph136->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph136->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph136->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph136->GetXaxis()->SetTitleFont(42);
   Graph_Graph136->GetYaxis()->SetLabelFont(42);
   Graph_Graph136->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph136->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph136->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph136->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph136->GetYaxis()->SetTitleFont(42);
   Graph_Graph136->GetZaxis()->SetLabelFont(42);
   Graph_Graph136->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph136->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph136->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph136);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx137[18] = {
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
   Double_t Graph5_fy137[18] = {
   4.803514e-10,
   0.0005037298,
   0.00888424,
   0.03491972,
   0.08287471,
   0.1482634,
   0.214142,
   0.2784693,
   0.3321527,
   0.368563,
   0.3806515,
   0.3794012,
   0.3627602,
   0.3246673,
   0.2672319,
   0.1998026,
   0.09848721,
   0.01267985};
   graph = new TGraph(18,Graph5_fx137,Graph5_fy137);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph137 = new TH1F("Graph_Graph137","Graph",100,-3.323417,3.267583);
   Graph_Graph137->SetMinimum(0);
   Graph_Graph137->SetMaximum(0.4187166);
   Graph_Graph137->SetDirectory(0);
   Graph_Graph137->SetStats(0);
   Graph_Graph137->SetLineStyle(0);
   Graph_Graph137->SetMarkerStyle(20);
   Graph_Graph137->GetXaxis()->SetLabelFont(42);
   Graph_Graph137->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph137->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph137->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph137->GetXaxis()->SetTitleFont(42);
   Graph_Graph137->GetYaxis()->SetLabelFont(42);
   Graph_Graph137->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph137->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph137->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph137->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph137->GetYaxis()->SetTitleFont(42);
   Graph_Graph137->GetZaxis()->SetLabelFont(42);
   Graph_Graph137->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph137->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph137->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph137);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx138[18] = {
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
   Double_t Graph6_fy138[18] = {
   -1.101594e-10,
   0.0002367437,
   0.008125383,
   0.03277904,
   0.07894023,
   0.1419615,
   0.2062426,
   0.2681481,
   0.3218379,
   0.3586012,
   0.3753778,
   0.3733016,
   0.3552875,
   0.3154162,
   0.2585716,
   0.1903881,
   0.09323294,
   0.01178347};
   graph = new TGraph(18,Graph6_fx138,Graph6_fy138);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph138 = new TH1F("Graph_Graph138","Graph",100,-3.323417,3.267583);
   Graph_Graph138->SetMinimum(-0.03753778);
   Graph_Graph138->SetMaximum(0.4129156);
   Graph_Graph138->SetDirectory(0);
   Graph_Graph138->SetStats(0);
   Graph_Graph138->SetLineStyle(0);
   Graph_Graph138->SetMarkerStyle(20);
   Graph_Graph138->GetXaxis()->SetLabelFont(42);
   Graph_Graph138->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph138->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph138->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph138->GetXaxis()->SetTitleFont(42);
   Graph_Graph138->GetYaxis()->SetLabelFont(42);
   Graph_Graph138->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph138->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph138->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph138->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph138->GetYaxis()->SetTitleFont(42);
   Graph_Graph138->GetZaxis()->SetLabelFont(42);
   Graph_Graph138->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph138->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph138->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph138);
   
   graph->Draw("  c");
   Double_t xAxis35[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_470 = new TH1D("hist_eta_470","",18, xAxis35);
   hist_eta_470->SetBinContent(2,0.0003419877);
   hist_eta_470->SetBinContent(3,0.005405612);
   hist_eta_470->SetBinContent(4,0.02594694);
   hist_eta_470->SetBinContent(5,0.06806659);
   hist_eta_470->SetBinContent(6,0.1283667);
   hist_eta_470->SetBinContent(7,0.1967202);
   hist_eta_470->SetBinContent(8,0.2624259);
   hist_eta_470->SetBinContent(9,0.3262783);
   hist_eta_470->SetBinContent(10,0.374289);
   hist_eta_470->SetBinContent(11,0.4017804);
   hist_eta_470->SetBinContent(12,0.3989342);
   hist_eta_470->SetBinContent(13,0.3776206);
   hist_eta_470->SetBinContent(14,0.3288157);
   hist_eta_470->SetBinContent(15,0.2688906);
   hist_eta_470->SetBinContent(16,0.1947565);
   hist_eta_470->SetBinContent(17,0.08667734);
   hist_eta_470->SetBinContent(18,0.008979936);
   hist_eta_470->SetBinError(2,6.142281e-05);
   hist_eta_470->SetBinError(3,0.0003453519);
   hist_eta_470->SetBinError(4,0.0007566281);
   hist_eta_470->SetBinError(5,0.00122548);
   hist_eta_470->SetBinError(6,0.001682929);
   hist_eta_470->SetBinError(7,0.002083358);
   hist_eta_470->SetBinError(8,0.002406261);
   hist_eta_470->SetBinError(9,0.002683079);
   hist_eta_470->SetBinError(10,0.00287371);
   hist_eta_470->SetBinError(11,0.002977377);
   hist_eta_470->SetBinError(12,0.002966812);
   hist_eta_470->SetBinError(13,0.002886471);
   hist_eta_470->SetBinError(14,0.002693492);
   hist_eta_470->SetBinError(15,0.002435719);
   hist_eta_470->SetBinError(16,0.002072934);
   hist_eta_470->SetBinError(17,0.0009778612);
   hist_eta_470->SetBinError(18,0.0003147466);
   hist_eta_470->SetEntries(160929);

   ci = TColor::GetColor("#cc0000");
   hist_eta_470->SetLineColor(ci);
   hist_eta_470->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_470->SetMarkerColor(ci);
   hist_eta_470->SetMarkerStyle(20);
   hist_eta_470->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_470->GetXaxis()->SetLabelFont(42);
   hist_eta_470->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_470->GetXaxis()->SetLabelSize(0.045);
   hist_eta_470->GetXaxis()->SetTitleSize(0.055);
   hist_eta_470->GetXaxis()->SetTitleFont(42);
   hist_eta_470->GetYaxis()->SetTitle("Event fraction");
   hist_eta_470->GetYaxis()->SetLabelFont(42);
   hist_eta_470->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_470->GetYaxis()->SetLabelSize(0.045);
   hist_eta_470->GetYaxis()->SetTitleSize(0.055);
   hist_eta_470->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_470->GetYaxis()->SetTitleFont(42);
   hist_eta_470->GetZaxis()->SetLabelFont(42);
   hist_eta_470->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_470->GetZaxis()->SetLabelSize(0.045);
   hist_eta_470->GetZaxis()->SetTitleSize(0.035);
   hist_eta_470->GetZaxis()->SetTitleFont(42);
   hist_eta_470->Draw("same p");
   p_1_4->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_1_5
   TPad *p_1_5 = new TPad("p_1_5", "p_1_5",0.3053435,0,0.519084,0.2004008);
   p_1_5->Draw();
   p_1_5->cd();
   p_1_5->Range(-2.999,-0.1893105,2.999,0.5999);
   p_1_5->SetFillColor(0);
   p_1_5->SetBorderMode(0);
   p_1_5->SetBorderSize(0);
   p_1_5->SetTickx(1);
   p_1_5->SetTicky(1);
   p_1_5->SetLeftMargin(0);
   p_1_5->SetRightMargin(0);
   p_1_5->SetTopMargin(0);
   p_1_5->SetBottomMargin(0.24);
   p_1_5->SetFrameLineColor(0);
   p_1_5->SetFrameBorderMode(0);
   p_1_5->SetFrameLineColor(0);
   p_1_5->SetFrameBorderMode(0);
   
   TH1D *emptyDist71 = new TH1D("emptyDist71","",10,-2.999,2.999);
   emptyDist71->SetBinContent(7,1000);
   emptyDist71->SetBinError(7,1000);
   emptyDist71->SetMinimum(0.0001);
   emptyDist71->SetMaximum(0.5999);
   emptyDist71->SetEntries(1);
   emptyDist71->SetLineStyle(0);
   emptyDist71->SetMarkerStyle(20);
   emptyDist71->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist71->GetXaxis()->CenterTitle(true);
   emptyDist71->GetXaxis()->SetLabelFont(43);
   emptyDist71->GetXaxis()->SetLabelOffset(0.01);
   emptyDist71->GetXaxis()->SetLabelSize(33);
   emptyDist71->GetXaxis()->SetTitleSize(33);
   emptyDist71->GetXaxis()->SetTitleOffset(7.5);
   emptyDist71->GetXaxis()->SetTitleFont(43);
   emptyDist71->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{dN_{dijet}}{d#eta_{dijet}}");
   emptyDist71->GetYaxis()->CenterTitle(true);
   emptyDist71->GetYaxis()->SetNdivisions(505);
   emptyDist71->GetYaxis()->SetLabelFont(43);
   emptyDist71->GetYaxis()->SetLabelOffset(0.01);
   emptyDist71->GetYaxis()->SetLabelSize(33);
   emptyDist71->GetYaxis()->SetTitleSize(33);
   emptyDist71->GetYaxis()->SetTitleOffset(7.5);
   emptyDist71->GetYaxis()->SetTitleFont(43);
   emptyDist71->GetZaxis()->SetLabelFont(42);
   emptyDist71->GetZaxis()->SetLabelSize(0.045);
   emptyDist71->GetZaxis()->SetTitleSize(0.035);
   emptyDist71->GetZaxis()->SetTitleFont(42);
   emptyDist71->Draw("");
   
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
   4.249596e-05,
   0.0008615922,
   0.00775425,
   0.03134446,
   0.08724166,
   0.1610423,
   0.2578152,
   0.3420383,
   0.4121209,
   0.4452423,
   0.457178,
   0.4139483,
   0.3562415,
   0.2757564,
   0.1728555,
   0.06104182,
   0.00349496};
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
   -2.591626e-05,
   -0.000207944,
   -0.0008805485,
   -0.001928686,
   -0.002770545,
   -0.002597061,
   -0.001488927,
   -0.001897322,
   -0.003117436,
   -0.003951421,
   -0.003568657,
   -0.003215311,
   -0.002182268,
   -0.001764498,
   -0.00181829,
   -0.001713574,
   -0.0003058438};
   gre = new TGraphErrors(18,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 986;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1036 = new TH1F("Graph_Graph1036","Graph",100,-3.46425,3.51675);
   Graph_Graph1036->SetMinimum(0);
   Graph_Graph1036->SetMaximum(0.5028958);
   Graph_Graph1036->SetDirectory(0);
   Graph_Graph1036->SetStats(0);
   Graph_Graph1036->SetLineStyle(0);
   Graph_Graph1036->SetMarkerStyle(20);
   Graph_Graph1036->GetXaxis()->SetLabelFont(42);
   Graph_Graph1036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1036->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1036->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1036->GetXaxis()->SetTitleFont(42);
   Graph_Graph1036->GetYaxis()->SetLabelFont(42);
   Graph_Graph1036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1036->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1036->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1036->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1036->GetYaxis()->SetTitleFont(42);
   Graph_Graph1036->GetZaxis()->SetLabelFont(42);
   Graph_Graph1036->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1036);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx139[18] = {
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
   Double_t Graph1_fy139[18] = {
   0,
   4.486416e-06,
   0.001072581,
   0.01098639,
   0.04248211,
   0.1020202,
   0.1818518,
   0.2690007,
   0.3448052,
   0.400869,
   0.4287692,
   0.4295589,
   0.4013954,
   0.3450684,
   0.2682111,
   0.1793777,
   0.06793452,
   0.004474571};
   graph = new TGraph(18,Graph1_fx139,Graph1_fy139);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph139 = new TH1F("Graph_Graph139","Graph",100,-3.323417,3.267583);
   Graph_Graph139->SetMinimum(0);
   Graph_Graph139->SetMaximum(0.4725147);
   Graph_Graph139->SetDirectory(0);
   Graph_Graph139->SetStats(0);
   Graph_Graph139->SetLineStyle(0);
   Graph_Graph139->SetMarkerStyle(20);
   Graph_Graph139->GetXaxis()->SetLabelFont(42);
   Graph_Graph139->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph139->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph139->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph139->GetXaxis()->SetTitleFont(42);
   Graph_Graph139->GetYaxis()->SetLabelFont(42);
   Graph_Graph139->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph139->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph139->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph139->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph139->GetYaxis()->SetTitleFont(42);
   Graph_Graph139->GetZaxis()->SetLabelFont(42);
   Graph_Graph139->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph139->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph139->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph139);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx140[18] = {
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
   Double_t Graph2_fy140[18] = {
   0,
   1.195175e-05,
   0.001392415,
   0.01111106,
   0.04294329,
   0.1044211,
   0.1859025,
   0.2736617,
   0.3478514,
   0.4018543,
   0.4348258,
   0.4326088,
   0.4025188,
   0.3477806,
   0.2723397,
   0.1836159,
   0.06995272,
   0.004661977};
   graph = new TGraph(18,Graph2_fx140,Graph2_fy140);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph140 = new TH1F("Graph_Graph140","Graph",100,-3.323417,3.267583);
   Graph_Graph140->SetMinimum(0);
   Graph_Graph140->SetMaximum(0.4783084);
   Graph_Graph140->SetDirectory(0);
   Graph_Graph140->SetStats(0);
   Graph_Graph140->SetLineStyle(0);
   Graph_Graph140->SetMarkerStyle(20);
   Graph_Graph140->GetXaxis()->SetLabelFont(42);
   Graph_Graph140->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph140->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph140->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph140->GetXaxis()->SetTitleFont(42);
   Graph_Graph140->GetYaxis()->SetLabelFont(42);
   Graph_Graph140->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph140->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph140->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph140->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph140->GetYaxis()->SetTitleFont(42);
   Graph_Graph140->GetZaxis()->SetLabelFont(42);
   Graph_Graph140->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph140->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph140->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph140);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx141[18] = {
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
   Double_t Graph3_fy141[18] = {
   0,
   1.973524e-06,
   0.0009305858,
   0.0102661,
   0.04115133,
   0.1008394,
   0.1804346,
   0.2663078,
   0.340316,
   0.3949429,
   0.4276444,
   0.4278303,
   0.3963665,
   0.3406005,
   0.2647121,
   0.1760509,
   0.06644294,
   0.004231222};
   graph = new TGraph(18,Graph3_fx141,Graph3_fy141);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#82e0aa");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph141 = new TH1F("Graph_Graph141","Graph",100,-3.323417,3.267583);
   Graph_Graph141->SetMinimum(0);
   Graph_Graph141->SetMaximum(0.4706133);
   Graph_Graph141->SetDirectory(0);
   Graph_Graph141->SetStats(0);
   Graph_Graph141->SetLineStyle(0);
   Graph_Graph141->SetMarkerStyle(20);
   Graph_Graph141->GetXaxis()->SetLabelFont(42);
   Graph_Graph141->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph141->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph141->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph141->GetXaxis()->SetTitleFont(42);
   Graph_Graph141->GetYaxis()->SetLabelFont(42);
   Graph_Graph141->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph141->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph141->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph141->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph141->GetYaxis()->SetTitleFont(42);
   Graph_Graph141->GetZaxis()->SetLabelFont(42);
   Graph_Graph141->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph141->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph141->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph141);
   
   graph->Draw("  c");
   
   Double_t Graph4_fx142[18] = {
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
   Double_t Graph4_fy142[18] = {
   0,
   4.753351e-06,
   0.0009942555,
   0.01039892,
   0.04176488,
   0.1013228,
   0.1810324,
   0.26869,
   0.3448359,
   0.4012403,
   0.4312372,
   0.4312372,
   0.4017531,
   0.3456051,
   0.2679208,
   0.1786993,
   0.06745452,
   0.004322627};
   graph = new TGraph(18,Graph4_fx142,Graph4_fy142);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph142 = new TH1F("Graph_Graph142","Graph",100,-3.323417,3.267583);
   Graph_Graph142->SetMinimum(0);
   Graph_Graph142->SetMaximum(0.4743609);
   Graph_Graph142->SetDirectory(0);
   Graph_Graph142->SetStats(0);
   Graph_Graph142->SetLineStyle(0);
   Graph_Graph142->SetMarkerStyle(20);
   Graph_Graph142->GetXaxis()->SetLabelFont(42);
   Graph_Graph142->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph142->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph142->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph142->GetXaxis()->SetTitleFont(42);
   Graph_Graph142->GetYaxis()->SetLabelFont(42);
   Graph_Graph142->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph142->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph142->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph142->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph142->GetYaxis()->SetTitleFont(42);
   Graph_Graph142->GetZaxis()->SetLabelFont(42);
   Graph_Graph142->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph142->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph142->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph142);
   
   graph->Draw(" c");
   
   Double_t Graph5_fx143[18] = {
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
   Double_t Graph5_fy143[18] = {
   0,
   1.247193e-05,
   0.001287104,
   0.01104718,
   0.0421359,
   0.1028849,
   0.1848182,
   0.2717769,
   0.3490584,
   0.4056459,
   0.4341854,
   0.4348103,
   0.4063312,
   0.3469952,
   0.271551,
   0.1826457,
   0.06920374,
   0.004457449};
   graph = new TGraph(18,Graph5_fx143,Graph5_fy143);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph143 = new TH1F("Graph_Graph143","Graph",100,-3.323417,3.267583);
   Graph_Graph143->SetMinimum(0);
   Graph_Graph143->SetMaximum(0.4782913);
   Graph_Graph143->SetDirectory(0);
   Graph_Graph143->SetStats(0);
   Graph_Graph143->SetLineStyle(0);
   Graph_Graph143->SetMarkerStyle(20);
   Graph_Graph143->GetXaxis()->SetLabelFont(42);
   Graph_Graph143->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph143->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph143->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph143->GetXaxis()->SetTitleFont(42);
   Graph_Graph143->GetYaxis()->SetLabelFont(42);
   Graph_Graph143->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph143->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph143->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph143->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph143->GetYaxis()->SetTitleFont(42);
   Graph_Graph143->GetZaxis()->SetLabelFont(42);
   Graph_Graph143->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph143->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph143->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph143);
   
   graph->Draw(" c");
   
   Double_t Graph6_fx144[18] = {
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
   Double_t Graph6_fy144[18] = {
   0,
   -3.405522e-06,
   0.0006375384,
   0.01006062,
   0.04009146,
   0.09885577,
   0.1794863,
   0.2646227,
   0.3409913,
   0.3980805,
   0.4279701,
   0.4304322,
   0.4001312,
   0.3398924,
   0.2629896,
   0.1747599,
   0.06549942,
   0.004014362};
   graph = new TGraph(18,Graph6_fx144,Graph6_fy144);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph144 = new TH1F("Graph_Graph144","Graph",100,-3.323417,3.267583);
   Graph_Graph144->SetMinimum(-0.04304697);
   Graph_Graph144->SetMaximum(0.4734758);
   Graph_Graph144->SetDirectory(0);
   Graph_Graph144->SetStats(0);
   Graph_Graph144->SetLineStyle(0);
   Graph_Graph144->SetMarkerStyle(20);
   Graph_Graph144->GetXaxis()->SetLabelFont(42);
   Graph_Graph144->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph144->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph144->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph144->GetXaxis()->SetTitleFont(42);
   Graph_Graph144->GetYaxis()->SetLabelFont(42);
   Graph_Graph144->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph144->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph144->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph144->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph144->GetYaxis()->SetTitleFont(42);
   Graph_Graph144->GetZaxis()->SetLabelFont(42);
   Graph_Graph144->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph144->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph144->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph144);
   
   graph->Draw("  c");
   Double_t xAxis36[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_572 = new TH1D("hist_eta_572","",18, xAxis36);
   hist_eta_572->SetBinContent(2,5.787142e-05);
   hist_eta_572->SetBinContent(3,0.0008680713);
   hist_eta_572->SetBinContent(4,0.008044127);
   hist_eta_572->SetBinContent(5,0.03165567);
   hist_eta_572->SetBinContent(6,0.08773307);
   hist_eta_572->SetBinContent(7,0.1614613);
   hist_eta_572->SetBinContent(8,0.2586274);
   hist_eta_572->SetBinContent(9,0.3426567);
   hist_eta_572->SetBinContent(10,0.411813);
   hist_eta_572->SetBinContent(11,0.4454363);
   hist_eta_572->SetBinContent(12,0.4571263);
   hist_eta_572->SetBinContent(13,0.4134334);
   hist_eta_572->SetBinContent(14,0.3554463);
   hist_eta_572->SetBinContent(15,0.2747156);
   hist_eta_572->SetBinContent(16,0.1722832);
   hist_eta_572->SetBinContent(17,0.0609386);
   hist_eta_572->SetBinContent(18,0.003501221);
   hist_eta_572->SetBinError(2,4.092127e-05);
   hist_eta_572->SetBinError(3,0.000224135);
   hist_eta_572->SetBinError(4,0.000682294);
   hist_eta_572->SetBinError(5,0.001353499);
   hist_eta_572->SetBinError(6,0.002253273);
   hist_eta_572->SetBinError(7,0.003056794);
   hist_eta_572->SetBinError(8,0.003868738);
   hist_eta_572->SetBinError(9,0.004453092);
   hist_eta_572->SetBinError(10,0.004881824);
   hist_eta_572->SetBinError(11,0.005077207);
   hist_eta_572->SetBinError(12,0.005143399);
   hist_eta_572->SetBinError(13,0.004891419);
   hist_eta_572->SetBinError(14,0.004535436);
   hist_eta_572->SetBinError(15,0.003987253);
   hist_eta_572->SetBinError(16,0.003157574);
   hist_eta_572->SetBinError(17,0.001327894);
   hist_eta_572->SetBinError(18,0.0003182928);
   hist_eta_572->SetEntries(61366);

   ci = TColor::GetColor("#cc0000");
   hist_eta_572->SetLineColor(ci);
   hist_eta_572->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_572->SetMarkerColor(ci);
   hist_eta_572->SetMarkerStyle(20);
   hist_eta_572->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_572->GetXaxis()->SetLabelFont(42);
   hist_eta_572->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_572->GetXaxis()->SetLabelSize(0.045);
   hist_eta_572->GetXaxis()->SetTitleSize(0.055);
   hist_eta_572->GetXaxis()->SetTitleFont(42);
   hist_eta_572->GetYaxis()->SetTitle("Event fraction");
   hist_eta_572->GetYaxis()->SetLabelFont(42);
   hist_eta_572->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_572->GetYaxis()->SetLabelSize(0.045);
   hist_eta_572->GetYaxis()->SetTitleSize(0.055);
   hist_eta_572->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_572->GetYaxis()->SetTitleFont(42);
   hist_eta_572->GetZaxis()->SetLabelFont(42);
   hist_eta_572->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_572->GetZaxis()->SetLabelSize(0.045);
   hist_eta_572->GetZaxis()->SetTitleSize(0.035);
   hist_eta_572->GetZaxis()->SetTitleFont(42);
   hist_eta_572->Draw("same p");
   
   leg = new TLegend(0.05,0.55,0.4,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("Graph4","MMHT14","l");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph1","CT14","l");

   ci = TColor::GetColor("#82e0aa");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   p_1_5->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_2_0
   TPad *p_2_0 = new TPad("p_2_0", "p_2_0",0.519084,0.8096192,0.7328244,1);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(0,0,1,1);
   p_2_0->SetFillColor(0);
   p_2_0->SetBorderMode(0);
   p_2_0->SetBorderSize(0);
   p_2_0->SetTickx(1);
   p_2_0->SetTicky(1);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetRightMargin(0);
   p_2_0->SetTopMargin(0.2);
   p_2_0->SetBottomMargin(0);
   p_2_0->SetFrameLineColor(0);
   p_2_0->SetFrameBorderMode(0);
      tex = new TLatex(0.05,0.93,"#Delta#phi_{1,2} > 2#pi/3");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(24);
   tex->Draw();
   p_2_0->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_2_1
   TPad *p_2_1 = new TPad("p_2_1", "p_2_1",0.519084,0.6573147,0.7328244,0.8096192);
   p_2_1->Draw();
   p_2_1->cd();
   p_2_1->Range(0,0,1,1);
   p_2_1->SetFillColor(0);
   p_2_1->SetBorderMode(0);
   p_2_1->SetBorderSize(0);
   p_2_1->SetTickx(1);
   p_2_1->SetTicky(1);
   p_2_1->SetLeftMargin(0);
   p_2_1->SetRightMargin(0);
   p_2_1->SetTopMargin(0);
   p_2_1->SetBottomMargin(0);
   p_2_1->SetFrameLineColor(0);
   p_2_1->SetFrameBorderMode(0);
   p_2_1->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_2_2
   TPad *p_2_2 = new TPad("p_2_2", "p_2_2",0.519084,0.50501,0.7328244,0.6573147);
   p_2_2->Draw();
   p_2_2->cd();
   p_2_2->Range(0,0,1,1);
   p_2_2->SetFillColor(0);
   p_2_2->SetBorderMode(0);
   p_2_2->SetBorderSize(0);
   p_2_2->SetTickx(1);
   p_2_2->SetTicky(1);
   p_2_2->SetLeftMargin(0);
   p_2_2->SetRightMargin(0);
   p_2_2->SetTopMargin(0);
   p_2_2->SetBottomMargin(0);
   p_2_2->SetFrameLineColor(0);
   p_2_2->SetFrameBorderMode(0);
   p_2_2->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_2_3
   TPad *p_2_3 = new TPad("p_2_3", "p_2_3",0.519084,0.3527054,0.7328244,0.50501);
   p_2_3->Draw();
   p_2_3->cd();
   p_2_3->Range(0,0,1,1);
   p_2_3->SetFillColor(0);
   p_2_3->SetBorderMode(0);
   p_2_3->SetBorderSize(0);
   p_2_3->SetTickx(1);
   p_2_3->SetTicky(1);
   p_2_3->SetLeftMargin(0);
   p_2_3->SetRightMargin(0);
   p_2_3->SetTopMargin(0);
   p_2_3->SetBottomMargin(0);
   p_2_3->SetFrameLineColor(0);
   p_2_3->SetFrameBorderMode(0);
   p_2_3->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_2_4
   TPad *p_2_4 = new TPad("p_2_4", "p_2_4",0.519084,0.2004008,0.7328244,0.3527054);
   p_2_4->Draw();
   p_2_4->cd();
   p_2_4->Range(0,0,1,1);
   p_2_4->SetFillColor(0);
   p_2_4->SetBorderMode(0);
   p_2_4->SetBorderSize(0);
   p_2_4->SetTickx(1);
   p_2_4->SetTicky(1);
   p_2_4->SetLeftMargin(0);
   p_2_4->SetRightMargin(0);
   p_2_4->SetTopMargin(0);
   p_2_4->SetBottomMargin(0);
   p_2_4->SetFrameLineColor(0);
   p_2_4->SetFrameBorderMode(0);
   p_2_4->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_2_5
   TPad *p_2_5 = new TPad("p_2_5", "p_2_5",0.519084,0,0.7328244,0.2004008);
   p_2_5->Draw();
   p_2_5->cd();
   p_2_5->Range(0,0,1,1);
   p_2_5->SetFillColor(0);
   p_2_5->SetBorderMode(0);
   p_2_5->SetBorderSize(0);
   p_2_5->SetTickx(1);
   p_2_5->SetTicky(1);
   p_2_5->SetLeftMargin(0);
   p_2_5->SetRightMargin(0);
   p_2_5->SetTopMargin(0);
   p_2_5->SetBottomMargin(0.24);
   p_2_5->SetFrameLineColor(0);
   p_2_5->SetFrameBorderMode(0);
   
   leg = new TLegend(0.05,0.55,0.4,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("Graph","MMHT14","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph","CT14","l");
   entry->SetLineColor(14);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   p_2_5->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_3_0
   TPad *p_3_0 = new TPad("p_3_0", "p_3_0",0.7328244,0.8096192,1,1);
   p_3_0->Draw();
   p_3_0->cd();
   p_3_0->Range(0,0,1,1);
   p_3_0->SetFillColor(0);
   p_3_0->SetBorderMode(0);
   p_3_0->SetBorderSize(0);
   p_3_0->SetTickx(1);
   p_3_0->SetTicky(1);
   p_3_0->SetLeftMargin(0);
   p_3_0->SetRightMargin(0.2);
   p_3_0->SetTopMargin(0.2);
   p_3_0->SetBottomMargin(0);
   p_3_0->SetFrameLineColor(0);
   p_3_0->SetFrameBorderMode(0);
   p_3_0->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_3_1
   TPad *p_3_1 = new TPad("p_3_1", "p_3_1",0.7328244,0.6573147,1,0.8096192);
   p_3_1->Draw();
   p_3_1->cd();
   p_3_1->Range(0,0,1,1);
   p_3_1->SetFillColor(0);
   p_3_1->SetBorderMode(0);
   p_3_1->SetBorderSize(0);
   p_3_1->SetTickx(1);
   p_3_1->SetTicky(1);
   p_3_1->SetLeftMargin(0);
   p_3_1->SetRightMargin(0.2);
   p_3_1->SetTopMargin(0);
   p_3_1->SetBottomMargin(0);
   p_3_1->SetFrameLineColor(0);
   p_3_1->SetFrameBorderMode(0);
   p_3_1->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_3_2
   TPad *p_3_2 = new TPad("p_3_2", "p_3_2",0.7328244,0.50501,1,0.6573147);
   p_3_2->Draw();
   p_3_2->cd();
   p_3_2->Range(0,0,1,1);
   p_3_2->SetFillColor(0);
   p_3_2->SetBorderMode(0);
   p_3_2->SetBorderSize(0);
   p_3_2->SetTickx(1);
   p_3_2->SetTicky(1);
   p_3_2->SetLeftMargin(0);
   p_3_2->SetRightMargin(0.2);
   p_3_2->SetTopMargin(0);
   p_3_2->SetBottomMargin(0);
   p_3_2->SetFrameLineColor(0);
   p_3_2->SetFrameBorderMode(0);
   p_3_2->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_3_3
   TPad *p_3_3 = new TPad("p_3_3", "p_3_3",0.7328244,0.3527054,1,0.50501);
   p_3_3->Draw();
   p_3_3->cd();
   p_3_3->Range(0,0,1,1);
   p_3_3->SetFillColor(0);
   p_3_3->SetBorderMode(0);
   p_3_3->SetBorderSize(0);
   p_3_3->SetTickx(1);
   p_3_3->SetTicky(1);
   p_3_3->SetLeftMargin(0);
   p_3_3->SetRightMargin(0.2);
   p_3_3->SetTopMargin(0);
   p_3_3->SetBottomMargin(0);
   p_3_3->SetFrameLineColor(0);
   p_3_3->SetFrameBorderMode(0);
   p_3_3->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_3_4
   TPad *p_3_4 = new TPad("p_3_4", "p_3_4",0.7328244,0.2004008,1,0.3527054);
   p_3_4->Draw();
   p_3_4->cd();
   p_3_4->Range(0,0,1,1);
   p_3_4->SetFillColor(0);
   p_3_4->SetBorderMode(0);
   p_3_4->SetBorderSize(0);
   p_3_4->SetTickx(1);
   p_3_4->SetTicky(1);
   p_3_4->SetLeftMargin(0);
   p_3_4->SetRightMargin(0.2);
   p_3_4->SetTopMargin(0);
   p_3_4->SetBottomMargin(0);
   p_3_4->SetFrameLineColor(0);
   p_3_4->SetFrameBorderMode(0);
   p_3_4->Modified();
   cdist->cd();
  
// ------------>Primitives in pad: p_3_5
   TPad *p_3_5 = new TPad("p_3_5", "p_3_5",0.7328244,0,1,0.2004008);
   p_3_5->Draw();
   p_3_5->cd();
   p_3_5->Range(0,0,1,1);
   p_3_5->SetFillColor(0);
   p_3_5->SetBorderMode(0);
   p_3_5->SetBorderSize(0);
   p_3_5->SetTickx(1);
   p_3_5->SetTicky(1);
   p_3_5->SetLeftMargin(0);
   p_3_5->SetRightMargin(0.2);
   p_3_5->SetTopMargin(0);
   p_3_5->SetBottomMargin(0.24);
   p_3_5->SetFrameLineColor(0);
   p_3_5->SetFrameBorderMode(0);
   
   leg = new TLegend(0.05,0.55,0.4,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("Graph","MMHT14","l");

   ci = TColor::GetColor("#1b4f72");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph","CT14","l");
   entry->SetLineColor(62);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   p_3_5->Modified();
   cdist->cd();
   cdist->Modified();
   cdist->cd();
   cdist->SetSelected(cdist);
}
