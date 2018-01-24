void ppDists()
{
//=========Macro generated from canvas: cpp/
//=========  (Tue Aug  2 10:06:23 2016) by ROOT version6.06/01

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cpp = new TCanvas("cpp", "",0,0,1300,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   cpp->Range(0,0,1,1);
   cpp->SetFillColor(0);
   cpp->SetBorderMode(0);
   cpp->SetBorderSize(0);
   cpp->SetTickx(1);
   cpp->SetTicky(1);
   cpp->SetLeftMargin(0.17);
   cpp->SetRightMargin(0.01);
   cpp->SetTopMargin(0.01);
   cpp->SetBottomMargin(0.15);
   cpp->SetFrameLineColor(0);
   cpp->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.5393939,0.3825653,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-4.893105,0.0001,2.999,0.561673);
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
   
   TH1D *emptyDist__1 = new TH1D("emptyDist__1","",10,-2.999,2.999);
   emptyDist__1->SetBinContent(7,1000);
   emptyDist__1->SetBinError(7,1000);
   emptyDist__1->SetMinimum(0.0001);
   emptyDist__1->SetMaximum(0.4999);
   emptyDist__1->SetEntries(1);
   emptyDist__1->SetLineStyle(0);
   emptyDist__1->SetMarkerStyle(20);
   emptyDist__1->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__1->GetXaxis()->CenterTitle(true);
   emptyDist__1->GetXaxis()->SetLabelFont(43);
   emptyDist__1->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__1->GetXaxis()->SetLabelSize(33);
   emptyDist__1->GetXaxis()->SetTitleSize(33);
   emptyDist__1->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__1->GetXaxis()->SetTitleFont(43);
   emptyDist__1->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__1->GetYaxis()->CenterTitle(true);
   emptyDist__1->GetYaxis()->SetNdivisions(505);
   emptyDist__1->GetYaxis()->SetLabelFont(43);
   emptyDist__1->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__1->GetYaxis()->SetLabelSize(33);
   emptyDist__1->GetYaxis()->SetTitleSize(33);
   emptyDist__1->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__1->GetYaxis()->SetTitleFont(43);
   emptyDist__1->GetZaxis()->SetLabelFont(42);
   emptyDist__1->GetZaxis()->SetLabelSize(0.045);
   emptyDist__1->GetZaxis()->SetTitleSize(0.035);
   emptyDist__1->GetZaxis()->SetTitleFont(42);
   emptyDist__1->Draw("");
   
   Double_t Graph0_fx1001[18] = {
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
   Double_t Graph0_fy1001[18] = {
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
   Double_t Graph0_fex1001[18] = {
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
   Double_t Graph0_fey1001[18] = {
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
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1181;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,-3.46425,3.51675);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(0.3541091);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);
   Graph_Graph1001->SetLineStyle(0);
   Graph_Graph1001->SetMarkerStyle(20);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw(" 2");
   
   Double_t g_fx3001[18] = {
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
   Double_t g_fy3001[18] = {
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
   Double_t g_felx3001[18] = {
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
   Double_t g_fely3001[18] = {
   0.0001282917,
   0.0009601023,
   0.00111401,
   0.002418707,
   0.0004689215,
   0.002102201,
   0.002769671,
   0.002729979,
   0.00141674,
   0.004441925,
   0.003831267,
   0.002535118,
   0.00554713,
   0.0009883365,
   0.0009858806,
   0.002653286,
   0.0005147297,
   0.0007914092};
   Double_t g_fehx3001[18] = {
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
   Double_t g_fehy3001[18] = {
   0.0008781173,
   0.001208636,
   0.002780322,
   0.002007317,
   0.004925823,
   0.001338296,
   0.001335445,
   0.001541587,
   0.00405757,
   0.001659762,
   0.001837237,
   0.001724663,
   0.001344302,
   0.003756803,
   0.003507897,
   0.00119323,
   0.001872904,
   0.0003708593};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,g_fx3001,g_fy3001,g_felx3001,g_fehx3001,g_fely3001,g_fehy3001);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1182;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3001 = new TH1F("Graph_g3001","",100,-3.5065,3.5915);
   Graph_g3001->SetMinimum(0);
   Graph_g3001->SetMaximum(0.352305);
   Graph_g3001->SetDirectory(0);
   Graph_g3001->SetStats(0);
   Graph_g3001->SetLineStyle(0);
   Graph_g3001->SetMarkerStyle(20);
   Graph_g3001->GetXaxis()->SetLabelFont(42);
   Graph_g3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3001->GetXaxis()->SetLabelSize(0.045);
   Graph_g3001->GetXaxis()->SetTitleSize(0.055);
   Graph_g3001->GetXaxis()->SetTitleFont(42);
   Graph_g3001->GetYaxis()->SetLabelFont(42);
   Graph_g3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3001->GetYaxis()->SetLabelSize(0.045);
   Graph_g3001->GetYaxis()->SetTitleSize(0.055);
   Graph_g3001->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3001->GetYaxis()->SetTitleFont(42);
   Graph_g3001->GetZaxis()->SetLabelFont(42);
   Graph_g3001->GetZaxis()->SetLabelSize(0.045);
   Graph_g3001->GetZaxis()->SetTitleSize(0.035);
   Graph_g3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3001);
   
   grae->Draw(" 2");
   
   Double_t g_fx3002[18] = {
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
   Double_t g_fy3002[18] = {
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
   Double_t g_felx3002[18] = {
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
   Double_t g_fely3002[18] = {
   0.0004080158,
   0.001975606,
   0.001502056,
   0.005063951,
   0.007654556,
   0.002385282,
   0.003980599,
   0.006032495,
   0.006506382,
   0.005465018,
   0.005070689,
   0.004879029,
   0.004196696,
   0.006541648,
   0.005280509,
   0.002201131,
   0.002212925,
   0.0009355336};
   Double_t g_fehx3002[18] = {
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
   Double_t g_fehy3002[18] = {
   0.001105246,
   0.002589218,
   0.007487242,
   0.00591354,
   0.003030056,
   0.007272234,
   0.001898074,
   0.0002269139,
   0.001144485,
   0.005411867,
   0.009096342,
   0.009202419,
   0.008008974,
   0.001978064,
   0.0004703314,
   0.001695922,
   0.002082285,
   0.001561146};
   grae = new TGraphAsymmErrors(18,g_fx3002,g_fy3002,g_felx3002,g_fehx3002,g_fely3002,g_fehy3002);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1183;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3002 = new TH1F("Graph_g3002","",100,-3.5065,3.5915);
   Graph_g3002->SetMinimum(0);
   Graph_g3002->SetMaximum(0.3574665);
   Graph_g3002->SetDirectory(0);
   Graph_g3002->SetStats(0);
   Graph_g3002->SetLineStyle(0);
   Graph_g3002->SetMarkerStyle(20);
   Graph_g3002->GetXaxis()->SetLabelFont(42);
   Graph_g3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3002->GetXaxis()->SetLabelSize(0.045);
   Graph_g3002->GetXaxis()->SetTitleSize(0.055);
   Graph_g3002->GetXaxis()->SetTitleFont(42);
   Graph_g3002->GetYaxis()->SetLabelFont(42);
   Graph_g3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3002->GetYaxis()->SetLabelSize(0.045);
   Graph_g3002->GetYaxis()->SetTitleSize(0.055);
   Graph_g3002->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3002->GetYaxis()->SetTitleFont(42);
   Graph_g3002->GetZaxis()->SetLabelFont(42);
   Graph_g3002->GetZaxis()->SetLabelSize(0.045);
   Graph_g3002->GetZaxis()->SetTitleSize(0.035);
   Graph_g3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3002);
   
   grae->Draw(" 2");
   Double_t xAxis1[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_0__2 = new TH1D("hist_eta_pp_0__2","",18, xAxis1);
   hist_eta_pp_0__2->SetBinContent(0,4.704997e-05);
   hist_eta_pp_0__2->SetBinContent(1,0.003591388);
   hist_eta_pp_0__2->SetBinContent(2,0.02881462);
   hist_eta_pp_0__2->SetBinContent(3,0.07124312);
   hist_eta_pp_0__2->SetBinContent(4,0.1119177);
   hist_eta_pp_0__2->SetBinContent(5,0.1503372);
   hist_eta_pp_0__2->SetBinContent(6,0.1969417);
   hist_eta_pp_0__2->SetBinContent(7,0.2247541);
   hist_eta_pp_0__2->SetBinContent(8,0.2649275);
   hist_eta_pp_0__2->SetBinContent(9,0.2927399);
   hist_eta_pp_0__2->SetBinContent(10,0.3082747);
   hist_eta_pp_0__2->SetBinContent(11,0.3223062);
   hist_eta_pp_0__2->SetBinContent(12,0.3070219);
   hist_eta_pp_0__2->SetBinContent(13,0.2851395);
   hist_eta_pp_0__2->SetBinContent(14,0.2597492);
   hist_eta_pp_0__2->SetBinContent(15,0.226341);
   hist_eta_pp_0__2->SetBinContent(16,0.1844136);
   hist_eta_pp_0__2->SetBinContent(17,0.1121682);
   hist_eta_pp_0__2->SetBinContent(18,0.02931575);
   hist_eta_pp_0__2->SetBinError(0,3.326935e-05);
   hist_eta_pp_0__2->SetBinError(1,0.0005476815);
   hist_eta_pp_0__2->SetBinError(2,0.001096954);
   hist_eta_pp_0__2->SetBinError(3,0.002439318);
   hist_eta_pp_0__2->SetBinError(4,0.003057358);
   hist_eta_pp_0__2->SetBinError(5,0.003543481);
   hist_eta_pp_0__2->SetBinError(6,0.0040557);
   hist_eta_pp_0__2->SetBinError(7,0.004332621);
   hist_eta_pp_0__2->SetBinError(8,0.004703926);
   hist_eta_pp_0__2->SetBinError(9,0.004944677);
   hist_eta_pp_0__2->SetBinError(10,0.00507418);
   hist_eta_pp_0__2->SetBinError(11,0.005188374);
   hist_eta_pp_0__2->SetBinError(12,0.005063859);
   hist_eta_pp_0__2->SetBinError(13,0.004880065);
   hist_eta_pp_0__2->SetBinError(14,0.004657727);
   hist_eta_pp_0__2->SetBinError(15,0.00434789);
   hist_eta_pp_0__2->SetBinError(16,0.003924582);
   hist_eta_pp_0__2->SetBinError(17,0.002164297);
   hist_eta_pp_0__2->SetBinError(18,0.001106452);
   hist_eta_pp_0__2->SetEntries(42528);

   ci = TColor::GetColor("#ffcc00");
   hist_eta_pp_0__2->SetFillColor(ci);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_0__2->SetLineColor(ci);
   hist_eta_pp_0__2->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_0__2->SetMarkerColor(ci);
   hist_eta_pp_0__2->SetMarkerStyle(21);
   hist_eta_pp_0__2->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_0__2->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_0__2->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_0__2->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_0__2->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_0__2->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_0__2->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_0__2->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_0__2->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_0__2->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_0__2->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_0__2->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_0__2->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_0__2->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_0__2->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_0__2->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_0__2->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_0__2->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_0__2->Draw("same");
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
   cpp->cd();
  
// ------------>Primitives in pad: p_0_1
   TPad *p_0_1 = new TPad("p_0_1", "p_0_1",0,0,0.3825653,0.539394);
   p_0_1->Draw();
   p_0_1->cd();
   p_0_1->Range(-4.893105,-0.1577316,2.999,0.4999);
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
   
   TH1D *emptyDist__3 = new TH1D("emptyDist__3","",10,-2.999,2.999);
   emptyDist__3->SetBinContent(7,1000);
   emptyDist__3->SetBinError(7,1000);
   emptyDist__3->SetMinimum(0.0001);
   emptyDist__3->SetMaximum(0.4999);
   emptyDist__3->SetEntries(1);
   emptyDist__3->SetLineStyle(0);
   emptyDist__3->SetMarkerStyle(20);
   emptyDist__3->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__3->GetXaxis()->CenterTitle(true);
   emptyDist__3->GetXaxis()->SetLabelFont(43);
   emptyDist__3->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__3->GetXaxis()->SetLabelSize(33);
   emptyDist__3->GetXaxis()->SetTitleSize(33);
   emptyDist__3->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__3->GetXaxis()->SetTitleFont(43);
   emptyDist__3->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__3->GetYaxis()->CenterTitle(true);
   emptyDist__3->GetYaxis()->SetNdivisions(505);
   emptyDist__3->GetYaxis()->SetLabelFont(43);
   emptyDist__3->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__3->GetYaxis()->SetLabelSize(33);
   emptyDist__3->GetYaxis()->SetTitleSize(33);
   emptyDist__3->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__3->GetYaxis()->SetTitleFont(43);
   emptyDist__3->GetZaxis()->SetLabelFont(42);
   emptyDist__3->GetZaxis()->SetLabelSize(0.045);
   emptyDist__3->GetZaxis()->SetTitleSize(0.035);
   emptyDist__3->GetZaxis()->SetTitleFont(42);
   emptyDist__3->Draw("");
   
   Double_t Graph0_fx1002[18] = {
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
   Double_t Graph0_fy1002[18] = {
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
   Double_t Graph0_fex1002[18] = {
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
   Double_t Graph0_fey1002[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1190;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,-3.46425,3.51675);
   Graph_Graph1002->SetMinimum(0);
   Graph_Graph1002->SetMaximum(0.4084341);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);
   Graph_Graph1002->SetLineStyle(0);
   Graph_Graph1002->SetMarkerStyle(20);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw(" 2");
   
   Double_t g_fx3003[18] = {
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
   Double_t g_fy3003[18] = {
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
   Double_t g_felx3003[18] = {
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
   Double_t g_fely3003[18] = {
   2.538965e-07,
   4.072685e-05,
   0.001474987,
   0.0006423201,
   0.001154284,
   0.003236582,
   0.005422007,
   0.003343711,
   0.001596385,
   0.002720448,
   0.005356579,
   0.004359964,
   0.003330112,
   0.0004796031,
   0.006430114,
   0.00383179,
   0.001184966,
   0.0003288756};
   Double_t g_fehx3003[18] = {
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
   Double_t g_fehy3003[18] = {
   1.193323e-06,
   0.0003739052,
   0.001097353,
   0.002577146,
   0.004005305,
   0.002376748,
   0.001165699,
   0.00184822,
   0.004504134,
   0.00460469,
   0.001938454,
   0.002509413,
   0.00260039,
   0.008023754,
   7.265799e-05,
   0.001464467,
   0.002333246,
   0.001185858};
   grae = new TGraphAsymmErrors(18,g_fx3003,g_fy3003,g_felx3003,g_fehx3003,g_fely3003,g_fehy3003);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1191;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3003 = new TH1F("Graph_g3003","",100,-3.5065,3.5915);
   Graph_g3003->SetMinimum(-0.03560395);
   Graph_g3003->SetMaximum(0.3916386);
   Graph_g3003->SetDirectory(0);
   Graph_g3003->SetStats(0);
   Graph_g3003->SetLineStyle(0);
   Graph_g3003->SetMarkerStyle(20);
   Graph_g3003->GetXaxis()->SetLabelFont(42);
   Graph_g3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3003->GetXaxis()->SetLabelSize(0.045);
   Graph_g3003->GetXaxis()->SetTitleSize(0.055);
   Graph_g3003->GetXaxis()->SetTitleFont(42);
   Graph_g3003->GetYaxis()->SetLabelFont(42);
   Graph_g3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3003->GetYaxis()->SetLabelSize(0.045);
   Graph_g3003->GetYaxis()->SetTitleSize(0.055);
   Graph_g3003->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3003->GetYaxis()->SetTitleFont(42);
   Graph_g3003->GetZaxis()->SetLabelFont(42);
   Graph_g3003->GetZaxis()->SetLabelSize(0.045);
   Graph_g3003->GetZaxis()->SetTitleSize(0.035);
   Graph_g3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3003);
   
   grae->Draw(" 2");
   
   Double_t g_fx3004[18] = {
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
   Double_t g_fy3004[18] = {
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
   Double_t g_felx3004[18] = {
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
   Double_t g_fely3004[18] = {
   1.47422e-06,
   8.66064e-05,
   0.002989311,
   0.005354823,
   0.005330217,
   0.004436358,
   0.003883301,
   0.003077169,
   0.007042499,
   0.00371929,
   0.008807761,
   0.01034303,
   0.004195754,
   0.006808405,
   0.002532737,
   0.003836781,
   0.004278557,
   0.002569058};
   Double_t g_fehx3004[18] = {
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
   Double_t g_fehy3004[18] = {
   3.291311e-07,
   0.0004905688,
   0.0008504392,
   0.002557122,
   0.005074129,
   0.008764509,
   0.005018005,
   0.003594374,
   0.00199413,
   0.00873197,
   0.009204752,
   0.00686384,
   0.008630418,
   0.002484954,
   0.005292449,
   0.004128253,
   0.00444098,
   0.0004103818};
   grae = new TGraphAsymmErrors(18,g_fx3004,g_fy3004,g_felx3004,g_fehx3004,g_fely3004,g_fehy3004);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1192;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3004 = new TH1F("Graph_g3004","",100,-3.5065,3.5915);
   Graph_g3004->SetMinimum(-0.03594775);
   Graph_g3004->SetMaximum(0.3954083);
   Graph_g3004->SetDirectory(0);
   Graph_g3004->SetStats(0);
   Graph_g3004->SetLineStyle(0);
   Graph_g3004->SetMarkerStyle(20);
   Graph_g3004->GetXaxis()->SetLabelFont(42);
   Graph_g3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3004->GetXaxis()->SetLabelSize(0.045);
   Graph_g3004->GetXaxis()->SetTitleSize(0.055);
   Graph_g3004->GetXaxis()->SetTitleFont(42);
   Graph_g3004->GetYaxis()->SetLabelFont(42);
   Graph_g3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3004->GetYaxis()->SetLabelSize(0.045);
   Graph_g3004->GetYaxis()->SetTitleSize(0.055);
   Graph_g3004->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3004->GetYaxis()->SetTitleFont(42);
   Graph_g3004->GetZaxis()->SetLabelFont(42);
   Graph_g3004->GetZaxis()->SetLabelSize(0.045);
   Graph_g3004->GetZaxis()->SetTitleSize(0.035);
   Graph_g3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3004);
   
   grae->Draw(" 2");
   Double_t xAxis2[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_3__4 = new TH1D("hist_eta_pp_3__4","",18, xAxis2);
   hist_eta_pp_3__4->SetBinContent(2,0.001104536);
   hist_eta_pp_3__4->SetBinContent(3,0.01418095);
   hist_eta_pp_3__4->SetBinContent(4,0.04412172);
   hist_eta_pp_3__4->SetBinContent(5,0.09300875);
   hist_eta_pp_3__4->SetBinContent(6,0.1516475);
   hist_eta_pp_3__4->SetBinContent(7,0.2150892);
   hist_eta_pp_3__4->SetBinContent(8,0.2716516);
   hist_eta_pp_3__4->SetBinContent(9,0.3186746);
   hist_eta_pp_3__4->SetBinContent(10,0.3509018);
   hist_eta_pp_3__4->SetBinContent(11,0.3713031);
   hist_eta_pp_3__4->SetBinContent(12,0.3702903);
   hist_eta_pp_3__4->SetBinContent(13,0.3481509);
   hist_eta_pp_3__4->SetBinContent(14,0.3098913);
   hist_eta_pp_3__4->SetBinContent(15,0.2587466);
   hist_eta_pp_3__4->SetBinContent(16,0.1986439);
   hist_eta_pp_3__4->SetBinContent(17,0.1005437);
   hist_eta_pp_3__4->SetBinContent(18,0.01534851);
   hist_eta_pp_3__4->SetBinError(2,3.494596e-05);
   hist_eta_pp_3__4->SetBinError(3,0.0001770822);
   hist_eta_pp_3__4->SetBinError(4,0.0003123549);
   hist_eta_pp_3__4->SetBinError(5,0.000453507);
   hist_eta_pp_3__4->SetBinError(6,0.0005790816);
   hist_eta_pp_3__4->SetBinError(7,0.0006896543);
   hist_eta_pp_3__4->SetBinError(8,0.0007750474);
   hist_eta_pp_3__4->SetBinError(9,0.0008394519);
   hist_eta_pp_3__4->SetBinError(10,0.0008808763);
   hist_eta_pp_3__4->SetBinError(11,0.0009061214);
   hist_eta_pp_3__4->SetBinError(12,0.0009048848);
   hist_eta_pp_3__4->SetBinError(13,0.0008774167);
   hist_eta_pp_3__4->SetBinError(14,0.0008278027);
   hist_eta_pp_3__4->SetBinError(15,0.0007564138);
   hist_eta_pp_3__4->SetBinError(16,0.0006627653);
   hist_eta_pp_3__4->SetBinError(17,0.0003334145);
   hist_eta_pp_3__4->SetBinError(18,0.0001302688);
   hist_eta_pp_3__4->SetEntries(1605555);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_3__4->SetLineColor(ci);
   hist_eta_pp_3__4->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_3__4->SetMarkerColor(ci);
   hist_eta_pp_3__4->SetMarkerStyle(21);
   hist_eta_pp_3__4->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_3__4->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_3__4->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_3__4->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_3__4->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_3__4->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_3__4->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_3__4->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_3__4->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_3__4->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_3__4->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_3__4->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_3__4->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_3__4->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_3__4->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_3__4->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_3__4->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_3__4->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_3__4->Draw("same");
      tex = new TLatex(0.45,0.29,"95 < p_{T}^{ave} < 115 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_0_1->Modified();
   cpp->cd();
  
// ------------>Primitives in pad: p_1_0
   TPad *p_1_0 = new TPad("p_1_0", "p_1_0",0.3825653,0.5393939,0.673315,1);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(-2.999,0.0001,2.999,0.561673);
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
   
   TH1D *emptyDist__5 = new TH1D("emptyDist__5","",10,-2.999,2.999);
   emptyDist__5->SetBinContent(7,1000);
   emptyDist__5->SetBinError(7,1000);
   emptyDist__5->SetMinimum(0.0001);
   emptyDist__5->SetMaximum(0.4999);
   emptyDist__5->SetEntries(1);
   emptyDist__5->SetLineStyle(0);
   emptyDist__5->SetMarkerStyle(20);
   emptyDist__5->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__5->GetXaxis()->CenterTitle(true);
   emptyDist__5->GetXaxis()->SetLabelFont(43);
   emptyDist__5->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__5->GetXaxis()->SetLabelSize(33);
   emptyDist__5->GetXaxis()->SetTitleSize(33);
   emptyDist__5->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__5->GetXaxis()->SetTitleFont(43);
   emptyDist__5->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__5->GetYaxis()->CenterTitle(true);
   emptyDist__5->GetYaxis()->SetNdivisions(505);
   emptyDist__5->GetYaxis()->SetLabelFont(43);
   emptyDist__5->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__5->GetYaxis()->SetLabelSize(33);
   emptyDist__5->GetYaxis()->SetTitleSize(33);
   emptyDist__5->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__5->GetYaxis()->SetTitleFont(43);
   emptyDist__5->GetZaxis()->SetLabelFont(42);
   emptyDist__5->GetZaxis()->SetLabelSize(0.045);
   emptyDist__5->GetZaxis()->SetTitleSize(0.035);
   emptyDist__5->GetZaxis()->SetTitleFont(42);
   emptyDist__5->Draw("");
   
   Double_t Graph0_fx1003[18] = {
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
   Double_t Graph0_fy1003[18] = {
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
   Double_t Graph0_fex1003[18] = {
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
   Double_t Graph0_fey1003[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1184;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,-3.46425,3.51675);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(0.3702253);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);
   Graph_Graph1003->SetLineStyle(0);
   Graph_Graph1003->SetMarkerStyle(20);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw(" 2");
   
   Double_t g_fx3005[18] = {
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
   Double_t g_fy3005[18] = {
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
   Double_t g_felx3005[18] = {
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
   Double_t g_fely3005[18] = {
   0.000197171,
   0.001740238,
   0.001385692,
   0.002597534,
   0.000675024,
   0.005769725,
   0.001867843,
   0.005084897,
   0.004787954,
   0.00248644,
   0.002522468,
   0.003609941,
   0.005918004,
   0.004776498,
   0.005854348,
   0.001759701,
   0.001563793,
   0.000573348};
   Double_t g_fehx3005[18] = {
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
   Double_t g_fehy3005[18] = {
   0.000159794,
   0.0001025215,
   0.002499977,
   0.002798805,
   0.005196738,
   0.001977621,
   0.005021561,
   0.001806049,
   0.002047697,
   0.005344293,
   0.007658239,
   0.005368139,
   0.002191396,
   0.002953567,
   0.001390107,
   0.005396054,
   0.001875727,
   0.0008826464};
   grae = new TGraphAsymmErrors(18,g_fx3005,g_fy3005,g_felx3005,g_fehx3005,g_fely3005,g_fehy3005);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1185;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3005 = new TH1F("Graph_g3005","",100,-3.5065,3.5915);
   Graph_g3005->SetMinimum(0);
   Graph_g3005->SetMaximum(0.3600198);
   Graph_g3005->SetDirectory(0);
   Graph_g3005->SetStats(0);
   Graph_g3005->SetLineStyle(0);
   Graph_g3005->SetMarkerStyle(20);
   Graph_g3005->GetXaxis()->SetLabelFont(42);
   Graph_g3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3005->GetXaxis()->SetLabelSize(0.045);
   Graph_g3005->GetXaxis()->SetTitleSize(0.055);
   Graph_g3005->GetXaxis()->SetTitleFont(42);
   Graph_g3005->GetYaxis()->SetLabelFont(42);
   Graph_g3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3005->GetYaxis()->SetLabelSize(0.045);
   Graph_g3005->GetYaxis()->SetTitleSize(0.055);
   Graph_g3005->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3005->GetYaxis()->SetTitleFont(42);
   Graph_g3005->GetZaxis()->SetLabelFont(42);
   Graph_g3005->GetZaxis()->SetLabelSize(0.045);
   Graph_g3005->GetZaxis()->SetTitleSize(0.035);
   Graph_g3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3005);
   
   grae->Draw(" 2");
   
   Double_t g_fx3006[18] = {
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
   Double_t g_fy3006[18] = {
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
   Double_t g_felx3006[18] = {
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
   Double_t g_fely3006[18] = {
   0.0001739381,
   0.001007198,
   0.006614069,
   0.005929474,
   0.0027006,
   0.004784846,
   0.003587531,
   0.004555968,
   0.004400972,
   0.002392258,
   0.01040394,
   0.01007209,
   0.003539916,
   0.005379668,
   0.004816644,
   0.002000005,
   0.002552786,
   0.001735995};
   Double_t g_fehx3006[18] = {
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
   Double_t g_fehy3006[18] = {
   0.0002207483,
   0.001662145,
   0.001810744,
   0.00452417,
   0.006311112,
   0.005462904,
   0.004641745,
   0.002604195,
   0.005806646,
   0.01092742,
   0.003294258,
   0.004290199,
   0.008318603,
   0.004131694,
   0.001943102,
   0.005456602,
   0.003486444,
   0.001032231};
   grae = new TGraphAsymmErrors(18,g_fx3006,g_fy3006,g_felx3006,g_fehx3006,g_fely3006,g_fehy3006);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1186;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3006 = new TH1F("Graph_g3006","",100,-3.5065,3.5915);
   Graph_g3006->SetMinimum(0);
   Graph_g3006->SetMaximum(0.354096);
   Graph_g3006->SetDirectory(0);
   Graph_g3006->SetStats(0);
   Graph_g3006->SetLineStyle(0);
   Graph_g3006->SetMarkerStyle(20);
   Graph_g3006->GetXaxis()->SetLabelFont(42);
   Graph_g3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3006->GetXaxis()->SetLabelSize(0.045);
   Graph_g3006->GetXaxis()->SetTitleSize(0.055);
   Graph_g3006->GetXaxis()->SetTitleFont(42);
   Graph_g3006->GetYaxis()->SetLabelFont(42);
   Graph_g3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3006->GetYaxis()->SetLabelSize(0.045);
   Graph_g3006->GetYaxis()->SetTitleSize(0.055);
   Graph_g3006->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3006->GetYaxis()->SetTitleFont(42);
   Graph_g3006->GetZaxis()->SetLabelFont(42);
   Graph_g3006->GetZaxis()->SetLabelSize(0.045);
   Graph_g3006->GetZaxis()->SetTitleSize(0.035);
   Graph_g3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3006);
   
   grae->Draw(" 2");
   Double_t xAxis3[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_1__6 = new TH1D("hist_eta_pp_1__6","",18, xAxis3);
   hist_eta_pp_1__6->SetBinContent(0,1.398952e-06);
   hist_eta_pp_1__6->SetBinContent(1,0.0004867358);
   hist_eta_pp_1__6->SetBinContent(2,0.01125452);
   hist_eta_pp_1__6->SetBinContent(3,0.04523167);
   hist_eta_pp_1__6->SetBinContent(4,0.08300336);
   hist_eta_pp_1__6->SetBinContent(5,0.1275447);
   hist_eta_pp_1__6->SetBinContent(6,0.1758855);
   hist_eta_pp_1__6->SetBinContent(7,0.2238438);
   hist_eta_pp_1__6->SetBinContent(8,0.2653207);
   hist_eta_pp_1__6->SetBinContent(9,0.3003458);
   hist_eta_pp_1__6->SetBinContent(10,0.3257405);
   hist_eta_pp_1__6->SetBinContent(11,0.3359769);
   hist_eta_pp_1__6->SetBinContent(12,0.3327783);
   hist_eta_pp_1__6->SetBinContent(13,0.3176448);
   hist_eta_pp_1__6->SetBinContent(14,0.2865285);
   hist_eta_pp_1__6->SetBinContent(15,0.2456427);
   hist_eta_pp_1__6->SetBinContent(16,0.1933633);
   hist_eta_pp_1__6->SetBinContent(17,0.11035);
   hist_eta_pp_1__6->SetBinContent(18,0.02387489);
   hist_eta_pp_1__6->SetBinError(0,1.398952e-06);
   hist_eta_pp_1__6->SetBinError(1,4.916774e-05);
   hist_eta_pp_1__6->SetBinError(2,0.0001671792);
   hist_eta_pp_1__6->SetBinError(3,0.0004739744);
   hist_eta_pp_1__6->SetBinError(4,0.0006420686);
   hist_eta_pp_1__6->SetBinError(5,0.0007959115);
   hist_eta_pp_1__6->SetBinError(6,0.0009346491);
   hist_eta_pp_1__6->SetBinError(7,0.001054402);
   hist_eta_pp_1__6->SetBinError(8,0.00114794);
   hist_eta_pp_1__6->SetBinError(9,0.001221362);
   hist_eta_pp_1__6->SetBinError(10,0.001271948);
   hist_eta_pp_1__6->SetBinError(11,0.001291779);
   hist_eta_pp_1__6->SetBinError(12,0.001285616);
   hist_eta_pp_1__6->SetBinError(13,0.001256043);
   hist_eta_pp_1__6->SetBinError(14,0.001192937);
   hist_eta_pp_1__6->SetBinError(15,0.00110455);
   hist_eta_pp_1__6->SetBinError(16,0.0009799876);
   hist_eta_pp_1__6->SetBinError(17,0.0005234856);
   hist_eta_pp_1__6->SetBinError(18,0.0002434946);
   hist_eta_pp_1__6->SetEntries(714840);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_1__6->SetLineColor(ci);
   hist_eta_pp_1__6->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_1__6->SetMarkerColor(ci);
   hist_eta_pp_1__6->SetMarkerStyle(21);
   hist_eta_pp_1__6->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_1__6->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_1__6->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_1__6->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_1__6->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_1__6->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_1__6->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_1__6->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_1__6->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_1__6->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_1__6->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_1__6->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_1__6->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_1__6->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_1__6->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_1__6->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_1__6->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_1__6->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_1__6->Draw("same");
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
   p_1_0->Modified();
   cpp->cd();
  
// ------------>Primitives in pad: p_1_1
   TPad *p_1_1 = new TPad("p_1_1", "p_1_1",0.3825653,0,0.673315,0.539394);
   p_1_1->Draw();
   p_1_1->cd();
   p_1_1->Range(-2.999,-0.1577316,2.999,0.4999);
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
   
   TH1D *emptyDist__7 = new TH1D("emptyDist__7","",10,-2.999,2.999);
   emptyDist__7->SetBinContent(7,1000);
   emptyDist__7->SetBinError(7,1000);
   emptyDist__7->SetMinimum(0.0001);
   emptyDist__7->SetMaximum(0.4999);
   emptyDist__7->SetEntries(1);
   emptyDist__7->SetLineStyle(0);
   emptyDist__7->SetMarkerStyle(20);
   emptyDist__7->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__7->GetXaxis()->CenterTitle(true);
   emptyDist__7->GetXaxis()->SetLabelFont(43);
   emptyDist__7->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__7->GetXaxis()->SetLabelSize(33);
   emptyDist__7->GetXaxis()->SetTitleSize(33);
   emptyDist__7->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__7->GetXaxis()->SetTitleFont(43);
   emptyDist__7->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__7->GetYaxis()->CenterTitle(true);
   emptyDist__7->GetYaxis()->SetNdivisions(505);
   emptyDist__7->GetYaxis()->SetLabelFont(43);
   emptyDist__7->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__7->GetYaxis()->SetLabelSize(33);
   emptyDist__7->GetYaxis()->SetTitleSize(33);
   emptyDist__7->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__7->GetYaxis()->SetTitleFont(43);
   emptyDist__7->GetZaxis()->SetLabelFont(42);
   emptyDist__7->GetZaxis()->SetLabelSize(0.045);
   emptyDist__7->GetZaxis()->SetTitleSize(0.035);
   emptyDist__7->GetZaxis()->SetTitleFont(42);
   emptyDist__7->Draw("");
   
   Double_t Graph0_fx1004[18] = {
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
   Double_t Graph0_fy1004[18] = {
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
   Double_t Graph0_fex1004[18] = {
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
   Double_t Graph0_fey1004[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1193;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,-3.46425,3.51675);
   Graph_Graph1004->SetMinimum(0);
   Graph_Graph1004->SetMaximum(0.4322972);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);
   Graph_Graph1004->SetLineStyle(0);
   Graph_Graph1004->SetMarkerStyle(20);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw(" 2");
   
   Double_t g_fx3007[18] = {
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
   Double_t g_fy3007[18] = {
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
   Double_t g_felx3007[18] = {
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
   Double_t g_fely3007[18] = {
   2.939404e-10,
   1.293933e-05,
   0.0005420647,
   0.0008128865,
   0.001186058,
   0.001712747,
   0.0005024563,
   0.001821666,
   0.003721183,
   0.001311301,
   0.008923264,
   0.009500552,
   0.001403264,
   0.004307445,
   0.001331732,
   0.001535455,
   0.0008552765,
   0.0001828278};
   Double_t g_fehx3007[18] = {
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
   Double_t g_fehy3007[18] = {
   5.474824e-10,
   0.000116568,
   0.0005195518,
   0.001211799,
   0.002772152,
   0.002414414,
   0.005610719,
   0.002057219,
   0.0008175444,
   0.005371799,
   0.0007889797,
   0.0005844243,
   0.006112932,
   0.0005877452,
   0.002431721,
   0.003804671,
   0.002405878,
   0.000581667};
   grae = new TGraphAsymmErrors(18,g_fx3007,g_fy3007,g_felx3007,g_fehx3007,g_fely3007,g_fehy3007);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1194;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3007 = new TH1F("Graph_g3007","",100,-3.5065,3.5915);
   Graph_g3007->SetMinimum(-0.03766411);
   Graph_g3007->SetMaximum(0.4143052);
   Graph_g3007->SetDirectory(0);
   Graph_g3007->SetStats(0);
   Graph_g3007->SetLineStyle(0);
   Graph_g3007->SetMarkerStyle(20);
   Graph_g3007->GetXaxis()->SetLabelFont(42);
   Graph_g3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3007->GetXaxis()->SetLabelSize(0.045);
   Graph_g3007->GetXaxis()->SetTitleSize(0.055);
   Graph_g3007->GetXaxis()->SetTitleFont(42);
   Graph_g3007->GetYaxis()->SetLabelFont(42);
   Graph_g3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3007->GetYaxis()->SetLabelSize(0.045);
   Graph_g3007->GetYaxis()->SetTitleSize(0.055);
   Graph_g3007->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3007->GetYaxis()->SetTitleFont(42);
   Graph_g3007->GetZaxis()->SetLabelFont(42);
   Graph_g3007->GetZaxis()->SetLabelSize(0.045);
   Graph_g3007->GetZaxis()->SetTitleSize(0.035);
   Graph_g3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3007);
   
   grae->Draw(" 2");
   
   Double_t g_fx3008[18] = {
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
   Double_t g_fy3008[18] = {
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
   Double_t g_felx3008[18] = {
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
   Double_t g_fely3008[18] = {
   2.446149e-10,
   0.0001037548,
   0.0005174185,
   0.002013198,
   0.005895864,
   0.005249881,
   0.008029665,
   0.002010401,
   0.004868257,
   0.006539472,
   0.008544873,
   0.009452318,
   0.007533294,
   0.004351486,
   0.001674189,
   0.006003292,
   0.004166609,
   0.0009036973};
   Double_t g_fehx3008[18] = {
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
   Double_t g_fehy3008[18] = {
   2.885682e-10,
   4.773664e-05,
   0.001043963,
   0.002718983,
   0.003205836,
   0.00639248,
   0.005161241,
   0.004488531,
   0.002520436,
   0.006793252,
   0.01039608,
   0.009463831,
   0.005563609,
   0.00340783,
   0.005112063,
   0.005447133,
   0.004024002,
   0.0009318931};
   grae = new TGraphAsymmErrors(18,g_fx3008,g_fy3008,g_felx3008,g_fehx3008,g_fely3008,g_fehy3008);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1195;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3008 = new TH1F("Graph_g3008","",100,-3.5065,3.5915);
   Graph_g3008->SetMinimum(-0.03818028);
   Graph_g3008->SetMaximum(0.419983);
   Graph_g3008->SetDirectory(0);
   Graph_g3008->SetStats(0);
   Graph_g3008->SetLineStyle(0);
   Graph_g3008->SetMarkerStyle(20);
   Graph_g3008->GetXaxis()->SetLabelFont(42);
   Graph_g3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3008->GetXaxis()->SetLabelSize(0.045);
   Graph_g3008->GetXaxis()->SetTitleSize(0.055);
   Graph_g3008->GetXaxis()->SetTitleFont(42);
   Graph_g3008->GetYaxis()->SetLabelFont(42);
   Graph_g3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3008->GetYaxis()->SetLabelSize(0.045);
   Graph_g3008->GetYaxis()->SetTitleSize(0.055);
   Graph_g3008->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3008->GetYaxis()->SetTitleFont(42);
   Graph_g3008->GetZaxis()->SetLabelFont(42);
   Graph_g3008->GetZaxis()->SetLabelSize(0.045);
   Graph_g3008->GetZaxis()->SetTitleSize(0.035);
   Graph_g3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3008);
   
   grae->Draw(" 2");
   Double_t xAxis4[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_4__8 = new TH1D("hist_eta_pp_4__8","",18, xAxis4);
   hist_eta_pp_4__8->SetBinContent(1,4.285359e-06);
   hist_eta_pp_4__8->SetBinContent(2,0.0001885558);
   hist_eta_pp_4__8->SetBinContent(3,0.005455262);
   hist_eta_pp_4__8->SetBinContent(4,0.02707061);
   hist_eta_pp_4__8->SetBinContent(5,0.07220402);
   hist_eta_pp_4__8->SetBinContent(6,0.1354431);
   hist_eta_pp_4__8->SetBinContent(7,0.2049516);
   hist_eta_pp_4__8->SetBinContent(8,0.2720732);
   hist_eta_pp_4__8->SetBinContent(9,0.3268658);
   hist_eta_pp_4__8->SetBinContent(10,0.3704393);
   hist_eta_pp_4__8->SetBinContent(11,0.3899463);
   hist_eta_pp_4__8->SetBinContent(12,0.3926546);
   hist_eta_pp_4__8->SetBinContent(13,0.3689009);
   hist_eta_pp_4__8->SetBinContent(14,0.3248088);
   hist_eta_pp_4__8->SetBinContent(15,0.2644324);
   hist_eta_pp_4__8->SetBinContent(16,0.1934925);
   hist_eta_pp_4__8->SetBinContent(17,0.09041894);
   hist_eta_pp_4__8->SetBinContent(18,0.01016916);
   hist_eta_pp_4__8->SetBinError(1,4.285359e-06);
   hist_eta_pp_4__8->SetBinError(2,2.010012e-05);
   hist_eta_pp_4__8->SetBinError(3,0.0001528979);
   hist_eta_pp_4__8->SetBinError(4,0.0003405985);
   hist_eta_pp_4__8->SetBinError(5,0.0005562555);
   hist_eta_pp_4__8->SetBinError(6,0.0007618544);
   hist_eta_pp_4__8->SetBinError(7,0.0009371719);
   hist_eta_pp_4__8->SetBinError(8,0.001079783);
   hist_eta_pp_4__8->SetBinError(9,0.001183527);
   hist_eta_pp_4__8->SetBinError(10,0.001259947);
   hist_eta_pp_4__8->SetBinError(11,0.001292695);
   hist_eta_pp_4__8->SetBinError(12,0.001297176);
   hist_eta_pp_4__8->SetBinError(13,0.001257328);
   hist_eta_pp_4__8->SetBinError(14,0.001179798);
   hist_eta_pp_4__8->SetBinError(15,0.001064513);
   hist_eta_pp_4__8->SetBinError(16,0.000910596);
   hist_eta_pp_4__8->SetBinError(17,0.0004401577);
   hist_eta_pp_4__8->SetBinError(18,0.0001476118);
   hist_eta_pp_4__8->SetEntries(828489);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_4__8->SetLineColor(ci);
   hist_eta_pp_4__8->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_4__8->SetMarkerColor(ci);
   hist_eta_pp_4__8->SetMarkerStyle(21);
   hist_eta_pp_4__8->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_4__8->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_4__8->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_4__8->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_4__8->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_4__8->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_4__8->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_4__8->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_4__8->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_4__8->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_4__8->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_4__8->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_4__8->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_4__8->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_4__8->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_4__8->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_4__8->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_4__8->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_4__8->Draw("same");
      tex = new TLatex(0.28,0.29,"115 < p_{T}^{ave} < 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_1->Modified();
   cpp->cd();
  
// ------------>Primitives in pad: p_2_0
   TPad *p_2_0 = new TPad("p_2_0", "p_2_0",0.673315,0.5393939,1,1);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(-2.999,0.0001,3.740326,0.561673);
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
   
   TH1D *emptyDist__9 = new TH1D("emptyDist__9","",10,-2.999,2.999);
   emptyDist__9->SetBinContent(7,1000);
   emptyDist__9->SetBinError(7,1000);
   emptyDist__9->SetMinimum(0.0001);
   emptyDist__9->SetMaximum(0.4999);
   emptyDist__9->SetEntries(1);
   emptyDist__9->SetLineStyle(0);
   emptyDist__9->SetMarkerStyle(20);
   emptyDist__9->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__9->GetXaxis()->CenterTitle(true);
   emptyDist__9->GetXaxis()->SetLabelFont(43);
   emptyDist__9->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__9->GetXaxis()->SetLabelSize(33);
   emptyDist__9->GetXaxis()->SetTitleSize(33);
   emptyDist__9->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__9->GetXaxis()->SetTitleFont(43);
   emptyDist__9->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__9->GetYaxis()->CenterTitle(true);
   emptyDist__9->GetYaxis()->SetNdivisions(505);
   emptyDist__9->GetYaxis()->SetLabelFont(43);
   emptyDist__9->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__9->GetYaxis()->SetLabelSize(33);
   emptyDist__9->GetYaxis()->SetTitleSize(33);
   emptyDist__9->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__9->GetYaxis()->SetTitleFont(43);
   emptyDist__9->GetZaxis()->SetLabelFont(42);
   emptyDist__9->GetZaxis()->SetLabelSize(0.045);
   emptyDist__9->GetZaxis()->SetTitleSize(0.035);
   emptyDist__9->GetZaxis()->SetTitleFont(42);
   emptyDist__9->Draw("");
   
   Double_t Graph0_fx1005[18] = {
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
   Double_t Graph0_fy1005[18] = {
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
   Double_t Graph0_fex1005[18] = {
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
   Double_t Graph0_fey1005[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1187;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,-3.46425,3.51675);
   Graph_Graph1005->SetMinimum(0);
   Graph_Graph1005->SetMaximum(0.3903152);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);
   Graph_Graph1005->SetLineStyle(0);
   Graph_Graph1005->SetMarkerStyle(20);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw(" 2");
   
   Double_t g_fx3009[18] = {
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
   Double_t g_fy3009[18] = {
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
   Double_t g_felx3009[18] = {
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
   Double_t g_fely3009[18] = {
   2.28338e-05,
   0.0003827807,
   0.001706016,
   0.00130981,
   0.002729836,
   0.001984637,
   0.004432337,
   0.001570848,
   0.006475507,
   0.002334804,
   0.006398941,
   0.003719534,
   0.003784768,
   0.008561011,
   0.001645296,
   0.001442224,
   0.001540711,
   0.0008238532};
   Double_t g_fehx3009[18] = {
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
   Double_t g_fehy3009[18] = {
   3.196635e-05,
   0.0002710567,
   0.001453408,
   0.00267302,
   0.003716353,
   0.003452398,
   0.00282878,
   0.005330404,
   0.002542776,
   0.00655606,
   0.002150637,
   0.004671423,
   0.004227399,
   0.001213723,
   0.00453028,
   0.004176713,
   0.001666833,
   0.0005547129};
   grae = new TGraphAsymmErrors(18,g_fx3009,g_fy3009,g_felx3009,g_fehx3009,g_fely3009,g_fehy3009);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1188;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3009 = new TH1F("Graph_g3009","",100,-3.5065,3.5915);
   Graph_g3009->SetMinimum(0);
   Graph_g3009->SetMaximum(0.3744584);
   Graph_g3009->SetDirectory(0);
   Graph_g3009->SetStats(0);
   Graph_g3009->SetLineStyle(0);
   Graph_g3009->SetMarkerStyle(20);
   Graph_g3009->GetXaxis()->SetLabelFont(42);
   Graph_g3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3009->GetXaxis()->SetLabelSize(0.045);
   Graph_g3009->GetXaxis()->SetTitleSize(0.055);
   Graph_g3009->GetXaxis()->SetTitleFont(42);
   Graph_g3009->GetYaxis()->SetLabelFont(42);
   Graph_g3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3009->GetYaxis()->SetLabelSize(0.045);
   Graph_g3009->GetYaxis()->SetTitleSize(0.055);
   Graph_g3009->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3009->GetYaxis()->SetTitleFont(42);
   Graph_g3009->GetZaxis()->SetLabelFont(42);
   Graph_g3009->GetZaxis()->SetLabelSize(0.045);
   Graph_g3009->GetZaxis()->SetTitleSize(0.035);
   Graph_g3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3009);
   
   grae->Draw(" 2");
   
   Double_t g_fx3010[18] = {
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
   Double_t g_fy3010[18] = {
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
   Double_t g_felx3010[18] = {
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
   Double_t g_fely3010[18] = {
   8.101622e-06,
   0.0006531116,
   0.00172952,
   0.004871794,
   0.004455497,
   0.005210378,
   0.00706297,
   0.002263201,
   0.004816364,
   0.007455367,
   0.008098452,
   0.007702286,
   0.009405214,
   0.003452982,
   0.004098298,
   0.006328784,
   0.002122998,
   0.001797123};
   Double_t g_fehx3010[18] = {
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
   Double_t g_fehy3010[18] = {
   6.232605e-05,
   0.0007655036,
   0.003999929,
   0.004781439,
   0.005228428,
   0.005720853,
   0.002821393,
   0.005433934,
   0.00281343,
   0.005755307,
   0.008648293,
   0.009946574,
   0.003180657,
   0.005140155,
   0.00286442,
   0.003260572,
   0.004997312,
   0.0007011952};
   grae = new TGraphAsymmErrors(18,g_fx3010,g_fy3010,g_felx3010,g_fehx3010,g_fely3010,g_fehy3010);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1189;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3010 = new TH1F("Graph_g3010","",100,-3.5065,3.5915);
   Graph_g3010->SetMinimum(0);
   Graph_g3010->SetMaximum(0.3764793);
   Graph_g3010->SetDirectory(0);
   Graph_g3010->SetStats(0);
   Graph_g3010->SetLineStyle(0);
   Graph_g3010->SetMarkerStyle(20);
   Graph_g3010->GetXaxis()->SetLabelFont(42);
   Graph_g3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3010->GetXaxis()->SetLabelSize(0.045);
   Graph_g3010->GetXaxis()->SetTitleSize(0.055);
   Graph_g3010->GetXaxis()->SetTitleFont(42);
   Graph_g3010->GetYaxis()->SetLabelFont(42);
   Graph_g3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3010->GetYaxis()->SetLabelSize(0.045);
   Graph_g3010->GetYaxis()->SetTitleSize(0.055);
   Graph_g3010->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3010->GetYaxis()->SetTitleFont(42);
   Graph_g3010->GetZaxis()->SetLabelFont(42);
   Graph_g3010->GetZaxis()->SetLabelSize(0.045);
   Graph_g3010->GetZaxis()->SetTitleSize(0.035);
   Graph_g3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3010);
   
   grae->Draw(" 2");
   Double_t xAxis5[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_2__10 = new TH1D("hist_eta_pp_2__10","",18, xAxis5);
   hist_eta_pp_2__10->SetBinContent(1,3.0847e-05);
   hist_eta_pp_2__10->SetBinContent(2,0.003849265);
   hist_eta_pp_2__10->SetBinContent(3,0.02634775);
   hist_eta_pp_2__10->SetBinContent(4,0.06145163);
   hist_eta_pp_2__10->SetBinContent(5,0.1112784);
   hist_eta_pp_2__10->SetBinContent(6,0.1648904);
   hist_eta_pp_2__10->SetBinContent(7,0.2192517);
   hist_eta_pp_2__10->SetBinContent(8,0.2691797);
   hist_eta_pp_2__10->SetBinContent(9,0.3113211);
   hist_eta_pp_2__10->SetBinContent(10,0.3365099);
   hist_eta_pp_2__10->SetBinContent(11,0.3533083);
   hist_eta_pp_2__10->SetBinContent(12,0.3539517);
   hist_eta_pp_2__10->SetBinContent(13,0.3351394);
   hist_eta_pp_2__10->SetBinContent(14,0.2968715);
   hist_eta_pp_2__10->SetBinContent(15,0.2526237);
   hist_eta_pp_2__10->SetBinContent(16,0.1968171);
   hist_eta_pp_2__10->SetBinContent(17,0.1070699);
   hist_eta_pp_2__10->SetBinContent(18,0.01974208);
   hist_eta_pp_2__10->SetBinError(1,1.165907e-05);
   hist_eta_pp_2__10->SetBinError(2,9.2094e-05);
   hist_eta_pp_2__10->SetBinError(3,0.0003407448);
   hist_eta_pp_2__10->SetBinError(4,0.0005203843);
   hist_eta_pp_2__10->SetBinError(5,0.0007002656);
   hist_eta_pp_2__10->SetBinError(6,0.0008524231);
   hist_eta_pp_2__10->SetBinError(7,0.0009829443);
   hist_eta_pp_2__10->SetBinError(8,0.001089127);
   hist_eta_pp_2__10->SetBinError(9,0.001171283);
   hist_eta_pp_2__10->SetBinError(10,0.001217745);
   hist_eta_pp_2__10->SetBinError(11,0.00124777);
   hist_eta_pp_2__10->SetBinError(12,0.001248905);
   hist_eta_pp_2__10->SetBinError(13,0.001215263);
   hist_eta_pp_2__10->SetBinError(14,0.001143778);
   hist_eta_pp_2__10->SetBinError(15,0.001055102);
   hist_eta_pp_2__10->SetBinError(16,0.0009312984);
   hist_eta_pp_2__10->SetBinError(17,0.0004857091);
   hist_eta_pp_2__10->SetBinError(18,0.0002085638);
   hist_eta_pp_2__10->SetEntries(805674);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_2__10->SetLineColor(ci);
   hist_eta_pp_2__10->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_2__10->SetMarkerColor(ci);
   hist_eta_pp_2__10->SetMarkerStyle(21);
   hist_eta_pp_2__10->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_2__10->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_2__10->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_2__10->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_2__10->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_2__10->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_2__10->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_2__10->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_2__10->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_2__10->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_2__10->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_2__10->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_2__10->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_2__10->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_2__10->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_2__10->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_2__10->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_2__10->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_2__10->Draw("same");
      tex = new TLatex(0.65,0.93,"pp 25.8 pb^{-1}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
      tex = new TLatex(0.3,0.08,"75 < p_{T}^{ave} < 95 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.05,0.55,0.4,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("hist_eta_pp_0","pp","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph0","Exp. Uncer.","f");

   ci = 1181;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("g","MMHT14","f");

   ci = 1182;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("g","CT14","f");

   ci = 1183;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
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
   cpp->cd();
  
// ------------>Primitives in pad: p_2_1
   TPad *p_2_1 = new TPad("p_2_1", "p_2_1",0.673315,0,1,0.539394);
   p_2_1->Draw();
   p_2_1->cd();
   p_2_1->Range(-2.999,-0.1577316,3.740326,0.4999);
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
   
   TH1D *emptyDist__11 = new TH1D("emptyDist__11","",10,-2.999,2.999);
   emptyDist__11->SetBinContent(7,1000);
   emptyDist__11->SetBinError(7,1000);
   emptyDist__11->SetMinimum(0.0001);
   emptyDist__11->SetMaximum(0.4999);
   emptyDist__11->SetEntries(1);
   emptyDist__11->SetLineStyle(0);
   emptyDist__11->SetMarkerStyle(20);
   emptyDist__11->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__11->GetXaxis()->CenterTitle(true);
   emptyDist__11->GetXaxis()->SetLabelFont(43);
   emptyDist__11->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__11->GetXaxis()->SetLabelSize(33);
   emptyDist__11->GetXaxis()->SetTitleSize(33);
   emptyDist__11->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__11->GetXaxis()->SetTitleFont(43);
   emptyDist__11->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__11->GetYaxis()->CenterTitle(true);
   emptyDist__11->GetYaxis()->SetNdivisions(505);
   emptyDist__11->GetYaxis()->SetLabelFont(43);
   emptyDist__11->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__11->GetYaxis()->SetLabelSize(33);
   emptyDist__11->GetYaxis()->SetTitleSize(33);
   emptyDist__11->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__11->GetYaxis()->SetTitleFont(43);
   emptyDist__11->GetZaxis()->SetLabelFont(42);
   emptyDist__11->GetZaxis()->SetLabelSize(0.045);
   emptyDist__11->GetZaxis()->SetTitleSize(0.035);
   emptyDist__11->GetZaxis()->SetTitleFont(42);
   emptyDist__11->Draw("");
   
   Double_t Graph0_fx1006[18] = {
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
   Double_t Graph0_fy1006[18] = {
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
   Double_t Graph0_fex1006[18] = {
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
   Double_t Graph0_fey1006[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1196;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,-3.46425,3.51675);
   Graph_Graph1006->SetMinimum(0);
   Graph_Graph1006->SetMaximum(0.4885838);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);
   Graph_Graph1006->SetLineStyle(0);
   Graph_Graph1006->SetMarkerStyle(20);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw(" 2");
   
   Double_t g_fx3011[18] = {
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
   Double_t g_fy3011[18] = {
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
   Double_t g_felx3011[18] = {
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
   Double_t g_fely3011[18] = {
   0,
   4.046524e-06,
   6.856975e-05,
   0.0007410524,
   0.0007512984,
   0.002031082,
   0.001624793,
   0.001287288,
   0.003404244,
   0.001263289,
   0.00225341,
   0.003589496,
   0.001034085,
   0.0026978,
   0.001573773,
   0.001832737,
   0.001071119,
   0.0003144894};
   Double_t g_fehx3011[18] = {
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
   Double_t g_fehy3011[18] = {
   0,
   3.777641e-06,
   0.0001614471,
   0.0002072197,
   0.001355414,
   0.00141934,
   0.001955746,
   0.002238626,
   0.0001536627,
   0.003462914,
   0.003968,
   0.002313105,
   0.004466291,
   0.0007020639,
   0.001493794,
   0.001494429,
   0.00106102,
   4.283521e-05};
   grae = new TGraphAsymmErrors(18,g_fx3011,g_fy3011,g_felx3011,g_fehx3011,g_fely3011,g_fehy3011);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1197;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3011 = new TH1F("Graph_g3011","",100,-3.5065,3.5915);
   Graph_g3011->SetMinimum(0);
   Graph_g3011->SetMaximum(0.4731903);
   Graph_g3011->SetDirectory(0);
   Graph_g3011->SetStats(0);
   Graph_g3011->SetLineStyle(0);
   Graph_g3011->SetMarkerStyle(20);
   Graph_g3011->GetXaxis()->SetLabelFont(42);
   Graph_g3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3011->GetXaxis()->SetLabelSize(0.045);
   Graph_g3011->GetXaxis()->SetTitleSize(0.055);
   Graph_g3011->GetXaxis()->SetTitleFont(42);
   Graph_g3011->GetYaxis()->SetLabelFont(42);
   Graph_g3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3011->GetYaxis()->SetLabelSize(0.045);
   Graph_g3011->GetYaxis()->SetTitleSize(0.055);
   Graph_g3011->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3011->GetYaxis()->SetTitleFont(42);
   Graph_g3011->GetZaxis()->SetLabelFont(42);
   Graph_g3011->GetZaxis()->SetLabelSize(0.045);
   Graph_g3011->GetZaxis()->SetTitleSize(0.035);
   Graph_g3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3011);
   
   grae->Draw(" 2");
   
   Double_t g_fx3012[18] = {
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
   Double_t g_fy3012[18] = {
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
   Double_t g_felx3012[18] = {
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
   Double_t g_fely3012[18] = {
   0,
   6.917956e-06,
   4.608117e-05,
   0.001413551,
   0.002818292,
   0.003725494,
   0.006242097,
   0.003133128,
   0.001913426,
   0.008547414,
   0.01097097,
   0.01217562,
   0.006976688,
   0.003180623,
   0.002711175,
   0.006751244,
   0.002572551,
   0.0004901912};
   Double_t g_fehx3012[18] = {
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
   Double_t g_fehy3012[18] = {
   0,
   4.858405e-07,
   0.000347483,
   0.0005557956,
   0.002519376,
   0.006645236,
   0.006269334,
   0.005002856,
   0.002781977,
   0.005054207,
   0.01039215,
   0.008229263,
   0.007189803,
   0.001056903,
   0.004760402,
   0.005638825,
   0.004271503,
   0.0002434709};
   grae = new TGraphAsymmErrors(18,g_fx3012,g_fy3012,g_felx3012,g_fehx3012,g_fely3012,g_fehy3012);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1198;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3012 = new TH1F("Graph_g3012","",100,-3.5065,3.5915);
   Graph_g3012->SetMinimum(0);
   Graph_g3012->SetMaximum(0.4787131);
   Graph_g3012->SetDirectory(0);
   Graph_g3012->SetStats(0);
   Graph_g3012->SetLineStyle(0);
   Graph_g3012->SetMarkerStyle(20);
   Graph_g3012->GetXaxis()->SetLabelFont(42);
   Graph_g3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3012->GetXaxis()->SetLabelSize(0.045);
   Graph_g3012->GetXaxis()->SetTitleSize(0.055);
   Graph_g3012->GetXaxis()->SetTitleFont(42);
   Graph_g3012->GetYaxis()->SetLabelFont(42);
   Graph_g3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3012->GetYaxis()->SetLabelSize(0.045);
   Graph_g3012->GetYaxis()->SetTitleSize(0.055);
   Graph_g3012->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3012->GetYaxis()->SetTitleFont(42);
   Graph_g3012->GetZaxis()->SetLabelFont(42);
   Graph_g3012->GetZaxis()->SetLabelSize(0.045);
   Graph_g3012->GetZaxis()->SetTitleSize(0.035);
   Graph_g3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3012);
   
   grae->Draw(" 2");
   Double_t xAxis6[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_5__12 = new TH1D("hist_eta_pp_5__12","",18, xAxis6);
   hist_eta_pp_5__12->SetBinContent(2,5.560021e-06);
   hist_eta_pp_5__12->SetBinContent(3,0.0009785637);
   hist_eta_pp_5__12->SetBinContent(4,0.008095391);
   hist_eta_pp_5__12->SetBinContent(5,0.03738558);
   hist_eta_pp_5__12->SetBinContent(6,0.09637741);
   hist_eta_pp_5__12->SetBinContent(7,0.1764639);
   hist_eta_pp_5__12->SetBinContent(8,0.2670033);
   hist_eta_pp_5__12->SetBinContent(9,0.347935);
   hist_eta_pp_5__12->SetBinContent(10,0.4071492);
   hist_eta_pp_5__12->SetBinContent(11,0.4439566);
   hist_eta_pp_5__12->SetBinContent(12,0.4420106);
   hist_eta_pp_5__12->SetBinContent(13,0.4112748);
   hist_eta_pp_5__12->SetBinContent(14,0.3477126);
   hist_eta_pp_5__12->SetBinContent(15,0.2629668);
   hist_eta_pp_5__12->SetBinContent(16,0.1712264);
   hist_eta_pp_5__12->SetBinContent(17,0.06157723);
   hist_eta_pp_5__12->SetBinContent(18,0.003297092);
   hist_eta_pp_5__12->SetBinError(2,5.560021e-06);
   hist_eta_pp_5__12->SetBinError(3,0.0001043152);
   hist_eta_pp_5__12->SetBinError(4,0.0003000351);
   hist_eta_pp_5__12->SetBinError(5,0.0006447707);
   hist_eta_pp_5__12->SetBinError(6,0.001035239);
   hist_eta_pp_5__12->SetBinError(7,0.001400816);
   hist_eta_pp_5__12->SetBinError(8,0.001723104);
   hist_eta_pp_5__12->SetBinError(9,0.001966991);
   hist_eta_pp_5__12->SetBinError(10,0.002127796);
   hist_eta_pp_5__12->SetBinError(11,0.002221895);
   hist_eta_pp_5__12->SetBinError(12,0.00221702);
   hist_eta_pp_5__12->SetBinError(13,0.002138549);
   hist_eta_pp_5__12->SetBinError(14,0.001966362);
   hist_eta_pp_5__12->SetBinError(15,0.00171003);
   hist_eta_pp_5__12->SetBinError(16,0.001379871);
   hist_eta_pp_5__12->SetBinError(17,0.0005851245);
   hist_eta_pp_5__12->SetBinError(18,0.0001353954);
   hist_eta_pp_5__12->SetEntries(319288);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_5__12->SetLineColor(ci);
   hist_eta_pp_5__12->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_5__12->SetMarkerColor(ci);
   hist_eta_pp_5__12->SetMarkerStyle(21);
   hist_eta_pp_5__12->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_5__12->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_5__12->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_5__12->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_5__12->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_5__12->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_5__12->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_5__12->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_5__12->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_5__12->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_5__12->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_5__12->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_5__12->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_5__12->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_5__12->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_5__12->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_5__12->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_5__12->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_5__12->Draw("same");
      tex = new TLatex(0.35,0.29,"p_{T}^{ave} > 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_2_1->Modified();
   cpp->cd();
   cpp->Modified();
   cpp->cd();
   cpp->SetSelected(cpp);
}
