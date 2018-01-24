void ppDistsppjecv1()
{
//=========Macro generated from canvas: cpp/
//=========  (Wed Jan 24 15:16:15 2018) by ROOT version6.10/08

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cpp = new TCanvas("cpp", "",54,52,1300,800);
   cpp->Range(0,0,1,1);
   cpp->SetFillColor(0);
   cpp->SetBorderMode(0);
   cpp->SetBorderSize(2);
   cpp->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.5393939,0.3825653,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-4.893105,0.0001,2.999,0.561673);
   p_0_0->SetFillColor(0);
   p_0_0->SetBorderMode(0);
   p_0_0->SetBorderSize(2);
   p_0_0->SetLeftMargin(0.24);
   p_0_0->SetRightMargin(0);
   p_0_0->SetBottomMargin(0);
   p_0_0->SetFrameBorderMode(0);
   p_0_0->SetFrameBorderMode(0);
   
   TH1D *emptyDist__1 = new TH1D("emptyDist__1","",10,-2.999,2.999);
   emptyDist__1->SetBinContent(7,1000);
   emptyDist__1->SetBinError(7,1000);
   emptyDist__1->SetMinimum(0.0001);
   emptyDist__1->SetMaximum(0.4999);
   emptyDist__1->SetEntries(1);
   emptyDist__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   emptyDist__1->SetLineColor(ci);
   emptyDist__1->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__1->GetXaxis()->CenterTitle(true);
   emptyDist__1->GetXaxis()->SetLabelFont(43);
   emptyDist__1->GetXaxis()->SetLabelSize(33);
   emptyDist__1->GetXaxis()->SetTitleSize(33);
   emptyDist__1->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__1->GetXaxis()->SetTitleFont(43);
   emptyDist__1->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__1->GetYaxis()->CenterTitle(true);
   emptyDist__1->GetYaxis()->SetNdivisions(505);
   emptyDist__1->GetYaxis()->SetLabelFont(43);
   emptyDist__1->GetYaxis()->SetLabelSize(33);
   emptyDist__1->GetYaxis()->SetTitleSize(33);
   emptyDist__1->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__1->GetYaxis()->SetTitleFont(43);
   emptyDist__1->GetZaxis()->SetLabelFont(42);
   emptyDist__1->GetZaxis()->SetLabelSize(0.035);
   emptyDist__1->GetZaxis()->SetTitleSize(0.035);
   emptyDist__1->GetZaxis()->SetTitleFont(42);
   emptyDist__1->Draw("");
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
   
   TLegend *leg = new TLegend(0.35,0.15,0.9,0.75,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("hist_eta_pp_1","pp","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph","Exp. Uncer.","f");

   ci = 1189;
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

   ci = 1190;
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

   ci = 1191;
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
   p_0_0->Modified();
   cpp->cd();
  
// ------------>Primitives in pad: p_0_1
   TPad *p_0_1 = new TPad("p_0_1", "p_0_1",0,0,0.3825653,0.539394);
   p_0_1->Draw();
   p_0_1->cd();
   p_0_1->Range(-4.893105,-0.1577316,2.999,0.4999);
   p_0_1->SetFillColor(0);
   p_0_1->SetBorderMode(0);
   p_0_1->SetBorderSize(2);
   p_0_1->SetLeftMargin(0.24);
   p_0_1->SetRightMargin(0);
   p_0_1->SetTopMargin(0);
   p_0_1->SetBottomMargin(0.24);
   p_0_1->SetFrameBorderMode(0);
   p_0_1->SetFrameBorderMode(0);
   
   TH1D *emptyDist__2 = new TH1D("emptyDist__2","",10,-2.999,2.999);
   emptyDist__2->SetBinContent(7,1000);
   emptyDist__2->SetBinError(7,1000);
   emptyDist__2->SetMinimum(0.0001);
   emptyDist__2->SetMaximum(0.4999);
   emptyDist__2->SetEntries(1);
   emptyDist__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyDist__2->SetLineColor(ci);
   emptyDist__2->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__2->GetXaxis()->CenterTitle(true);
   emptyDist__2->GetXaxis()->SetLabelFont(43);
   emptyDist__2->GetXaxis()->SetLabelSize(33);
   emptyDist__2->GetXaxis()->SetTitleSize(33);
   emptyDist__2->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__2->GetXaxis()->SetTitleFont(43);
   emptyDist__2->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__2->GetYaxis()->CenterTitle(true);
   emptyDist__2->GetYaxis()->SetNdivisions(505);
   emptyDist__2->GetYaxis()->SetLabelFont(43);
   emptyDist__2->GetYaxis()->SetLabelSize(33);
   emptyDist__2->GetYaxis()->SetTitleSize(33);
   emptyDist__2->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__2->GetYaxis()->SetTitleFont(43);
   emptyDist__2->GetZaxis()->SetLabelFont(42);
   emptyDist__2->GetZaxis()->SetLabelSize(0.035);
   emptyDist__2->GetZaxis()->SetTitleSize(0.035);
   emptyDist__2->GetZaxis()->SetTitleFont(42);
   emptyDist__2->Draw("");
   
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
   1.687668e-05,
   0.001347977,
   0.01574993,
   0.04710185,
   0.09656992,
   0.1544846,
   0.2174172,
   0.2733124,
   0.3187138,
   0.3496687,
   0.3665445,
   0.3653282,
   0.3436178,
   0.3074098,
   0.2568439,
   0.1984603,
   0.1020208,
   0.0164139};
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
   -1.687697e-05,
   -0.0003618947,
   -0.001449824,
   -0.001918752,
   -0.001812183,
   -0.001668951,
   -0.0007452699,
   -0.0008175924,
   -0.002380322,
   -0.002328777,
   -0.00333346,
   -0.001850876,
   -0.002171648,
   -0.001554243,
   -0.0009994332,
   -0.0009024456,
   -0.001336334,
   -0.0007873235};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1195;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,-3.46425,3.51675);
   Graph_Graph1001->SetMinimum(1.518901e-05);
   Graph_Graph1001->SetMaximum(0.4031973);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,g_fx3001,g_fy3001,g_felx3001,g_fehx3001,g_fely3001,g_fehy3001);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1196;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3001 = new TH1F("Graph_g3001","",100,-3.5065,3.5915);
   Graph_g3001->SetMinimum(-0.03560395);
   Graph_g3001->SetMaximum(0.3916386);
   Graph_g3001->SetDirectory(0);
   Graph_g3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3001->SetLineColor(ci);
   Graph_g3001->GetXaxis()->SetLabelFont(42);
   Graph_g3001->GetXaxis()->SetLabelSize(0.035);
   Graph_g3001->GetXaxis()->SetTitleSize(0.035);
   Graph_g3001->GetXaxis()->SetTitleFont(42);
   Graph_g3001->GetYaxis()->SetLabelFont(42);
   Graph_g3001->GetYaxis()->SetLabelSize(0.035);
   Graph_g3001->GetYaxis()->SetTitleSize(0.035);
   Graph_g3001->GetYaxis()->SetTitleOffset(0);
   Graph_g3001->GetYaxis()->SetTitleFont(42);
   Graph_g3001->GetZaxis()->SetLabelFont(42);
   Graph_g3001->GetZaxis()->SetLabelSize(0.035);
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
   grae = new TGraphAsymmErrors(18,g_fx3002,g_fy3002,g_felx3002,g_fehx3002,g_fely3002,g_fehy3002);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1197;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3002 = new TH1F("Graph_g3002","",100,-3.5065,3.5915);
   Graph_g3002->SetMinimum(-0.03594775);
   Graph_g3002->SetMaximum(0.3954083);
   Graph_g3002->SetDirectory(0);
   Graph_g3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3002->SetLineColor(ci);
   Graph_g3002->GetXaxis()->SetLabelFont(42);
   Graph_g3002->GetXaxis()->SetLabelSize(0.035);
   Graph_g3002->GetXaxis()->SetTitleSize(0.035);
   Graph_g3002->GetXaxis()->SetTitleFont(42);
   Graph_g3002->GetYaxis()->SetLabelFont(42);
   Graph_g3002->GetYaxis()->SetLabelSize(0.035);
   Graph_g3002->GetYaxis()->SetTitleSize(0.035);
   Graph_g3002->GetYaxis()->SetTitleOffset(0);
   Graph_g3002->GetYaxis()->SetTitleFont(42);
   Graph_g3002->GetZaxis()->SetLabelFont(42);
   Graph_g3002->GetZaxis()->SetLabelSize(0.035);
   Graph_g3002->GetZaxis()->SetTitleSize(0.035);
   Graph_g3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3002);
   
   grae->Draw(" 2");
   Double_t xAxis1[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_3__3 = new TH1D("hist_eta_pp_3__3","",18, xAxis1);
   hist_eta_pp_3__3->SetBinContent(1,9.258322e-06);
   hist_eta_pp_3__3->SetBinContent(2,0.001489433);
   hist_eta_pp_3__3->SetBinContent(3,0.01608634);
   hist_eta_pp_3__3->SetBinContent(4,0.04743964);
   hist_eta_pp_3__3->SetBinContent(5,0.09675641);
   hist_eta_pp_3__3->SetBinContent(6,0.1554056);
   hist_eta_pp_3__3->SetBinContent(7,0.2172604);
   hist_eta_pp_3__3->SetBinContent(8,0.2732455);
   hist_eta_pp_3__3->SetBinContent(9,0.3184192);
   hist_eta_pp_3__3->SetBinContent(10,0.3489207);
   hist_eta_pp_3__3->SetBinContent(11,0.3665439);
   hist_eta_pp_3__3->SetBinContent(12,0.3647362);
   hist_eta_pp_3__3->SetBinContent(13,0.3437708);
   hist_eta_pp_3__3->SetBinContent(14,0.3068254);
   hist_eta_pp_3__3->SetBinContent(15,0.256937);
   hist_eta_pp_3__3->SetBinContent(16,0.1981096);
   hist_eta_pp_3__3->SetBinContent(17,0.1020973);
   hist_eta_pp_3__3->SetBinContent(18,0.01632821);
   hist_eta_pp_3__3->SetBinError(1,4.629161e-06);
   hist_eta_pp_3__3->SetBinError(2,4.151754e-05);
   hist_eta_pp_3__3->SetBinError(3,0.0001929589);
   hist_eta_pp_3__3->SetBinError(4,0.0003313652);
   hist_eta_pp_3__3->SetBinError(5,0.0004732341);
   hist_eta_pp_3__3->SetBinError(6,0.0005997489);
   hist_eta_pp_3__3->SetBinError(7,0.000709131);
   hist_eta_pp_3__3->SetBinError(8,0.0007952665);
   hist_eta_pp_3__3->SetBinError(9,0.000858491);
   hist_eta_pp_3__3->SetBinError(10,0.0008986685);
   hist_eta_pp_3__3->SetBinError(11,0.0009210839);
   hist_eta_pp_3__3->SetBinError(12,0.0009188098);
   hist_eta_pp_3__3->SetBinError(13,0.0008920119);
   hist_eta_pp_3__3->SetBinError(14,0.0008427172);
   hist_eta_pp_3__3->SetBinError(15,0.0007711688);
   hist_eta_pp_3__3->SetBinError(16,0.0006771563);
   hist_eta_pp_3__3->SetBinError(17,0.0003437386);
   hist_eta_pp_3__3->SetBinError(18,0.0001374645);
   hist_eta_pp_3__3->SetEntries(1533901);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_3__3->SetLineColor(ci);
   hist_eta_pp_3__3->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_3__3->SetMarkerColor(ci);
   hist_eta_pp_3__3->SetMarkerStyle(21);
   hist_eta_pp_3__3->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_3__3->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_3__3->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_3__3->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_3__3->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_3__3->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_3__3->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_3__3->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_3__3->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_3__3->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_3__3->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_3__3->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_3__3->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_3__3->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_3__3->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_3__3->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_3__3->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_3__3->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_3__3->Draw("same");
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
   p_1_0->SetBorderSize(2);
   p_1_0->SetLeftMargin(0);
   p_1_0->SetRightMargin(0);
   p_1_0->SetBottomMargin(0);
   p_1_0->SetFrameBorderMode(0);
   p_1_0->SetFrameBorderMode(0);
   
   TH1D *emptyDist__4 = new TH1D("emptyDist__4","",10,-2.999,2.999);
   emptyDist__4->SetBinContent(7,1000);
   emptyDist__4->SetBinError(7,1000);
   emptyDist__4->SetMinimum(0.0001);
   emptyDist__4->SetMaximum(0.4999);
   emptyDist__4->SetEntries(1);
   emptyDist__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyDist__4->SetLineColor(ci);
   emptyDist__4->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__4->GetXaxis()->CenterTitle(true);
   emptyDist__4->GetXaxis()->SetLabelFont(43);
   emptyDist__4->GetXaxis()->SetLabelSize(33);
   emptyDist__4->GetXaxis()->SetTitleSize(33);
   emptyDist__4->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__4->GetXaxis()->SetTitleFont(43);
   emptyDist__4->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__4->GetYaxis()->CenterTitle(true);
   emptyDist__4->GetYaxis()->SetNdivisions(505);
   emptyDist__4->GetYaxis()->SetLabelFont(43);
   emptyDist__4->GetYaxis()->SetLabelSize(33);
   emptyDist__4->GetYaxis()->SetTitleSize(33);
   emptyDist__4->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__4->GetYaxis()->SetTitleFont(43);
   emptyDist__4->GetZaxis()->SetLabelFont(42);
   emptyDist__4->GetZaxis()->SetLabelSize(0.035);
   emptyDist__4->GetZaxis()->SetTitleSize(0.035);
   emptyDist__4->GetZaxis()->SetTitleFont(42);
   emptyDist__4->Draw("");
   
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
   0.0004857126,
   0.01299239,
   0.050094,
   0.08966299,
   0.1340552,
   0.1816782,
   0.2277084,
   0.2673132,
   0.2984442,
   0.321676,
   0.3297022,
   0.3248031,
   0.3102551,
   0.2800107,
   0.2421361,
   0.1921554,
   0.1117555,
   0.02591999};
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
   -0.0002870335,
   -0.001430523,
   -0.002271424,
   -0.001872096,
   -0.002095343,
   -0.001317387,
   -0.0008759527,
   -0.001118415,
   -0.001474016,
   -0.002578047,
   -0.002718384,
   -0.003345323,
   -0.002465184,
   -0.001442188,
   -0.001824212,
   -0.0015587,
   -0.0009622455,
   -0.001404346};
   gre = new TGraphErrors(18,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1189;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,-3.46425,3.51675);
   Graph_Graph1002->SetMinimum(0.0004371414);
   Graph_Graph1002->SetMaximum(0.3626239);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
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
   grae = new TGraphAsymmErrors(18,g_fx3003,g_fy3003,g_felx3003,g_fehx3003,g_fely3003,g_fehy3003);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1190;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3003 = new TH1F("Graph_g3003","",100,-3.5065,3.5915);
   Graph_g3003->SetMinimum(0.000692273);
   Graph_g3003->SetMaximum(0.3600198);
   Graph_g3003->SetDirectory(0);
   Graph_g3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3003->SetLineColor(ci);
   Graph_g3003->GetXaxis()->SetLabelFont(42);
   Graph_g3003->GetXaxis()->SetLabelSize(0.035);
   Graph_g3003->GetXaxis()->SetTitleSize(0.035);
   Graph_g3003->GetXaxis()->SetTitleFont(42);
   Graph_g3003->GetYaxis()->SetLabelFont(42);
   Graph_g3003->GetYaxis()->SetLabelSize(0.035);
   Graph_g3003->GetYaxis()->SetTitleSize(0.035);
   Graph_g3003->GetYaxis()->SetTitleOffset(0);
   Graph_g3003->GetYaxis()->SetTitleFont(42);
   Graph_g3003->GetZaxis()->SetLabelFont(42);
   Graph_g3003->GetZaxis()->SetLabelSize(0.035);
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
   grae = new TGraphAsymmErrors(18,g_fx3004,g_fy3004,g_felx3004,g_fehx3004,g_fely3004,g_fehy3004);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1191;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3004 = new TH1F("Graph_g3004","",100,-3.5065,3.5915);
   Graph_g3004->SetMinimum(0.0007517079);
   Graph_g3004->SetMaximum(0.354096);
   Graph_g3004->SetDirectory(0);
   Graph_g3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3004->SetLineColor(ci);
   Graph_g3004->GetXaxis()->SetLabelFont(42);
   Graph_g3004->GetXaxis()->SetLabelSize(0.035);
   Graph_g3004->GetXaxis()->SetTitleSize(0.035);
   Graph_g3004->GetXaxis()->SetTitleFont(42);
   Graph_g3004->GetYaxis()->SetLabelFont(42);
   Graph_g3004->GetYaxis()->SetLabelSize(0.035);
   Graph_g3004->GetYaxis()->SetTitleSize(0.035);
   Graph_g3004->GetYaxis()->SetTitleOffset(0);
   Graph_g3004->GetYaxis()->SetTitleFont(42);
   Graph_g3004->GetZaxis()->SetLabelFont(42);
   Graph_g3004->GetZaxis()->SetLabelSize(0.035);
   Graph_g3004->GetZaxis()->SetTitleSize(0.035);
   Graph_g3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3004);
   
   grae->Draw(" 2");
   Double_t xAxis2[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_1__5 = new TH1D("hist_eta_pp_1__5","",18, xAxis2);
   hist_eta_pp_1__5->SetBinContent(0,3.052647e-06);
   hist_eta_pp_1__5->SetBinContent(1,0.0006394303);
   hist_eta_pp_1__5->SetBinContent(2,0.01340094);
   hist_eta_pp_1__5->SetBinContent(3,0.05065589);
   hist_eta_pp_1__5->SetBinContent(4,0.09028431);
   hist_eta_pp_1__5->SetBinContent(5,0.1350498);
   hist_eta_pp_1__5->SetBinContent(6,0.181777);
   hist_eta_pp_1__5->SetBinContent(7,0.2281357);
   hist_eta_pp_1__5->SetBinContent(8,0.2672006);
   hist_eta_pp_1__5->SetBinContent(9,0.2987494);
   hist_eta_pp_1__5->SetBinContent(10,0.3209615);
   hist_eta_pp_1__5->SetBinContent(11,0.3290898);
   hist_eta_pp_1__5->SetBinContent(12,0.3237251);
   hist_eta_pp_1__5->SetBinContent(13,0.3096956);
   hist_eta_pp_1__5->SetBinContent(14,0.2804606);
   hist_eta_pp_1__5->SetBinContent(15,0.2416613);
   hist_eta_pp_1__5->SetBinContent(16,0.1918779);
   hist_eta_pp_1__5->SetBinContent(17,0.1113611);
   hist_eta_pp_1__5->SetBinContent(18,0.02540381);
   hist_eta_pp_1__5->SetBinError(0,2.158548e-06);
   hist_eta_pp_1__5->SetBinError(1,5.886433e-05);
   hist_eta_pp_1__5->SetBinError(2,0.0001905497);
   hist_eta_pp_1__5->SetBinError(3,0.0005239267);
   hist_eta_pp_1__5->SetBinError(4,0.0006994582);
   hist_eta_pp_1__5->SetBinError(5,0.0008554658);
   hist_eta_pp_1__5->SetBinError(6,0.0009924876);
   hist_eta_pp_1__5->SetBinError(7,0.001111865);
   hist_eta_pp_1__5->SetBinError(8,0.001203301);
   hist_eta_pp_1__5->SetBinError(9,0.001272357);
   hist_eta_pp_1__5->SetBinError(10,0.00131881);
   hist_eta_pp_1__5->SetBinError(11,0.001335405);
   hist_eta_pp_1__5->SetBinError(12,0.001324475);
   hist_eta_pp_1__5->SetBinError(13,0.001295457);
   hist_eta_pp_1__5->SetBinError(14,0.001232797);
   hist_eta_pp_1__5->SetBinError(15,0.001144351);
   hist_eta_pp_1__5->SetBinError(16,0.00101969);
   hist_eta_pp_1__5->SetBinError(17,0.0005492972);
   hist_eta_pp_1__5->SetBinError(18,0.0002623554);
   hist_eta_pp_1__5->SetEntries(655189);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_1__5->SetLineColor(ci);
   hist_eta_pp_1__5->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_1__5->SetMarkerColor(ci);
   hist_eta_pp_1__5->SetMarkerStyle(21);
   hist_eta_pp_1__5->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_1__5->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_1__5->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_1__5->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_1__5->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_1__5->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_1__5->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_1__5->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_1__5->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_1__5->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_1__5->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_1__5->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_1__5->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_1__5->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_1__5->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_1__5->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_1__5->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_1__5->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_1__5->Draw("same");
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
   p_1_1->SetBorderSize(2);
   p_1_1->SetLeftMargin(0);
   p_1_1->SetRightMargin(0);
   p_1_1->SetTopMargin(0);
   p_1_1->SetBottomMargin(0.24);
   p_1_1->SetFrameBorderMode(0);
   p_1_1->SetFrameBorderMode(0);
   
   TH1D *emptyDist__6 = new TH1D("emptyDist__6","",10,-2.999,2.999);
   emptyDist__6->SetBinContent(7,1000);
   emptyDist__6->SetBinError(7,1000);
   emptyDist__6->SetMinimum(0.0001);
   emptyDist__6->SetMaximum(0.4999);
   emptyDist__6->SetEntries(1);
   emptyDist__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyDist__6->SetLineColor(ci);
   emptyDist__6->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__6->GetXaxis()->CenterTitle(true);
   emptyDist__6->GetXaxis()->SetLabelFont(43);
   emptyDist__6->GetXaxis()->SetLabelSize(33);
   emptyDist__6->GetXaxis()->SetTitleSize(33);
   emptyDist__6->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__6->GetXaxis()->SetTitleFont(43);
   emptyDist__6->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__6->GetYaxis()->CenterTitle(true);
   emptyDist__6->GetYaxis()->SetNdivisions(505);
   emptyDist__6->GetYaxis()->SetLabelFont(43);
   emptyDist__6->GetYaxis()->SetLabelSize(33);
   emptyDist__6->GetYaxis()->SetTitleSize(33);
   emptyDist__6->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__6->GetYaxis()->SetTitleFont(43);
   emptyDist__6->GetZaxis()->SetLabelFont(42);
   emptyDist__6->GetZaxis()->SetLabelSize(0.035);
   emptyDist__6->GetZaxis()->SetTitleSize(0.035);
   emptyDist__6->GetZaxis()->SetTitleFont(42);
   emptyDist__6->Draw("");
   
   Double_t Graph0_fx1003[18] = {
   -2.774167,
   10000,
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
   0,
   0.0002361563,
   0.005834192,
   0.02839646,
   0.07402463,
   0.1369216,
   0.2061743,
   0.2725528,
   0.3259704,
   0.3688964,
   0.3884697,
   0.3891832,
   0.3666344,
   0.3229556,
   0.2641585,
   0.1943082,
   0.09213544,
   0.01095902};
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
   -0,
   -0.0001231368,
   -0.001025332,
   -0.002004303,
   -0.002816719,
   -0.002354325,
   -0.0007835462,
   -0.0007357805,
   -0.001029739,
   -0.002476967,
   -0.002952859,
   -0.003499286,
   -0.003080415,
   -0.00169802,
   -0.0008599747,
   -0.0002480444,
   -0.001434603,
   -0.000528018};
   gre = new TGraphErrors(18,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1198;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,-1003.192,11000.53);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(0.4281015);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
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
   grae = new TGraphAsymmErrors(18,g_fx3005,g_fy3005,g_felx3005,g_fehx3005,g_fely3005,g_fehy3005);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1199;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3005 = new TH1F("Graph_g3005","",100,-3.5065,3.5915);
   Graph_g3005->SetMinimum(-0.03766411);
   Graph_g3005->SetMaximum(0.4143052);
   Graph_g3005->SetDirectory(0);
   Graph_g3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3005->SetLineColor(ci);
   Graph_g3005->GetXaxis()->SetLabelFont(42);
   Graph_g3005->GetXaxis()->SetLabelSize(0.035);
   Graph_g3005->GetXaxis()->SetTitleSize(0.035);
   Graph_g3005->GetXaxis()->SetTitleFont(42);
   Graph_g3005->GetYaxis()->SetLabelFont(42);
   Graph_g3005->GetYaxis()->SetLabelSize(0.035);
   Graph_g3005->GetYaxis()->SetTitleSize(0.035);
   Graph_g3005->GetYaxis()->SetTitleOffset(0);
   Graph_g3005->GetYaxis()->SetTitleFont(42);
   Graph_g3005->GetZaxis()->SetLabelFont(42);
   Graph_g3005->GetZaxis()->SetLabelSize(0.035);
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
   grae = new TGraphAsymmErrors(18,g_fx3006,g_fy3006,g_felx3006,g_fehx3006,g_fely3006,g_fehy3006);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1200;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3006 = new TH1F("Graph_g3006","",100,-3.5065,3.5915);
   Graph_g3006->SetMinimum(-0.03818028);
   Graph_g3006->SetMaximum(0.419983);
   Graph_g3006->SetDirectory(0);
   Graph_g3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3006->SetLineColor(ci);
   Graph_g3006->GetXaxis()->SetLabelFont(42);
   Graph_g3006->GetXaxis()->SetLabelSize(0.035);
   Graph_g3006->GetXaxis()->SetTitleSize(0.035);
   Graph_g3006->GetXaxis()->SetTitleFont(42);
   Graph_g3006->GetYaxis()->SetLabelFont(42);
   Graph_g3006->GetYaxis()->SetLabelSize(0.035);
   Graph_g3006->GetYaxis()->SetTitleSize(0.035);
   Graph_g3006->GetYaxis()->SetTitleOffset(0);
   Graph_g3006->GetYaxis()->SetTitleFont(42);
   Graph_g3006->GetZaxis()->SetLabelFont(42);
   Graph_g3006->GetZaxis()->SetLabelSize(0.035);
   Graph_g3006->GetZaxis()->SetTitleSize(0.035);
   Graph_g3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3006);
   
   grae->Draw(" 2");
   Double_t xAxis3[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_4__7 = new TH1D("hist_eta_pp_4__7","",18, xAxis3);
   hist_eta_pp_4__7->SetBinContent(2,0.0003047393);
   hist_eta_pp_4__7->SetBinContent(3,0.006230712);
   hist_eta_pp_4__7->SetBinContent(4,0.02886911);
   hist_eta_pp_4__7->SetBinContent(5,0.07491324);
   hist_eta_pp_4__7->SetBinContent(6,0.1374878);
   hist_eta_pp_4__7->SetBinContent(7,0.2065606);
   hist_eta_pp_4__7->SetBinContent(8,0.273099);
   hist_eta_pp_4__7->SetBinContent(9,0.3258606);
   hist_eta_pp_4__7->SetBinContent(10,0.368204);
   hist_eta_pp_4__7->SetBinContent(11,0.3872337);
   hist_eta_pp_4__7->SetBinContent(12,0.3888429);
   hist_eta_pp_4__7->SetBinContent(13,0.3658143);
   hist_eta_pp_4__7->SetBinContent(14,0.3222958);
   hist_eta_pp_4__7->SetBinContent(15,0.2638911);
   hist_eta_pp_4__7->SetBinContent(16,0.1942263);
   hist_eta_pp_4__7->SetBinContent(17,0.09212773);
   hist_eta_pp_4__7->SetBinContent(18,0.01095088);
   hist_eta_pp_4__7->SetBinError(2,2.584765e-05);
   hist_eta_pp_4__7->SetBinError(3,0.0001652877);
   hist_eta_pp_4__7->SetBinError(4,0.0003557857);
   hist_eta_pp_4__7->SetBinError(5,0.0005731273);
   hist_eta_pp_4__7->SetBinError(6,0.0007764329);
   hist_eta_pp_4__7->SetBinError(7,0.0009516901);
   hist_eta_pp_4__7->SetBinError(8,0.001094289);
   hist_eta_pp_4__7->SetBinError(9,0.00119533);
   hist_eta_pp_4__7->SetBinError(10,0.001270621);
   hist_eta_pp_4__7->SetBinError(11,0.001303042);
   hist_eta_pp_4__7->SetBinError(12,0.001305747);
   hist_eta_pp_4__7->SetBinError(13,0.001266491);
   hist_eta_pp_4__7->SetBinError(14,0.001188773);
   hist_eta_pp_4__7->SetBinError(15,0.001075683);
   hist_eta_pp_4__7->SetBinError(16,0.0009228389);
   hist_eta_pp_4__7->SetBinError(17,0.0004494196);
   hist_eta_pp_4__7->SetBinError(18,0.0001549464);
   hist_eta_pp_4__7->SetEntries(809712);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_4__7->SetLineColor(ci);
   hist_eta_pp_4__7->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_4__7->SetMarkerColor(ci);
   hist_eta_pp_4__7->SetMarkerStyle(21);
   hist_eta_pp_4__7->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_4__7->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_4__7->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_4__7->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_4__7->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_4__7->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_4__7->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_4__7->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_4__7->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_4__7->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_4__7->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_4__7->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_4__7->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_4__7->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_4__7->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_4__7->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_4__7->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_4__7->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_4__7->Draw("same");
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
   p_2_0->SetBorderSize(2);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetBottomMargin(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->SetFrameBorderMode(0);
   
   TH1D *emptyDist__8 = new TH1D("emptyDist__8","",10,-2.999,2.999);
   emptyDist__8->SetBinContent(7,1000);
   emptyDist__8->SetBinError(7,1000);
   emptyDist__8->SetMinimum(0.0001);
   emptyDist__8->SetMaximum(0.4999);
   emptyDist__8->SetEntries(1);
   emptyDist__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyDist__8->SetLineColor(ci);
   emptyDist__8->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__8->GetXaxis()->CenterTitle(true);
   emptyDist__8->GetXaxis()->SetLabelFont(43);
   emptyDist__8->GetXaxis()->SetLabelSize(33);
   emptyDist__8->GetXaxis()->SetTitleSize(33);
   emptyDist__8->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__8->GetXaxis()->SetTitleFont(43);
   emptyDist__8->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__8->GetYaxis()->CenterTitle(true);
   emptyDist__8->GetYaxis()->SetNdivisions(505);
   emptyDist__8->GetYaxis()->SetLabelFont(43);
   emptyDist__8->GetYaxis()->SetLabelSize(33);
   emptyDist__8->GetYaxis()->SetTitleSize(33);
   emptyDist__8->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__8->GetYaxis()->SetTitleFont(43);
   emptyDist__8->GetZaxis()->SetLabelFont(42);
   emptyDist__8->GetZaxis()->SetLabelSize(0.035);
   emptyDist__8->GetZaxis()->SetTitleSize(0.035);
   emptyDist__8->GetZaxis()->SetTitleFont(42);
   emptyDist__8->Draw("");
   
   Double_t Graph0_fx1004[18] = {
   10000,
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
   1.962788e-05,
   0.004465366,
   0.02864599,
   0.06530277,
   0.1156782,
   0.1683609,
   0.2221367,
   0.269711,
   0.3100316,
   0.3333153,
   0.3499959,
   0.3488129,
   0.3306186,
   0.2936199,
   0.2515612,
   0.1960826,
   0.1084056,
   0.02125831};
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
   -6.020835e-05,
   -0.0008192662,
   -0.00207197,
   -0.00253072,
   -0.002058669,
   -0.001492965,
   -0.0008864058,
   -0.0009868521,
   -0.001858228,
   -0.002558721,
   -0.002975635,
   -0.002942979,
   -0.002695807,
   -0.002451236,
   -0.001445725,
   -0.0009772955,
   -0.001429537,
   -0.0008203625};
   gre = new TGraphErrors(18,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1192;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,-1002.836,11000.38);
   Graph_Graph1004->SetMinimum(1.76651e-05);
   Graph_Graph1004->SetMaximum(0.3849935);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
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
   grae = new TGraphAsymmErrors(18,g_fx3007,g_fy3007,g_felx3007,g_fehx3007,g_fely3007,g_fehy3007);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1193;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3007 = new TH1F("Graph_g3007","",100,-3.5065,3.5915);
   Graph_g3007->SetMinimum(3.120405e-05);
   Graph_g3007->SetMaximum(0.3744584);
   Graph_g3007->SetDirectory(0);
   Graph_g3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3007->SetLineColor(ci);
   Graph_g3007->GetXaxis()->SetLabelFont(42);
   Graph_g3007->GetXaxis()->SetLabelSize(0.035);
   Graph_g3007->GetXaxis()->SetTitleSize(0.035);
   Graph_g3007->GetXaxis()->SetTitleFont(42);
   Graph_g3007->GetYaxis()->SetLabelFont(42);
   Graph_g3007->GetYaxis()->SetLabelSize(0.035);
   Graph_g3007->GetYaxis()->SetTitleSize(0.035);
   Graph_g3007->GetYaxis()->SetTitleOffset(0);
   Graph_g3007->GetYaxis()->SetTitleFont(42);
   Graph_g3007->GetZaxis()->SetLabelFont(42);
   Graph_g3007->GetZaxis()->SetLabelSize(0.035);
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
   grae = new TGraphAsymmErrors(18,g_fx3008,g_fy3008,g_felx3008,g_fehx3008,g_fely3008,g_fehy3008);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1194;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3008 = new TH1F("Graph_g3008","",100,-3.5065,3.5915);
   Graph_g3008->SetMinimum(4.450055e-05);
   Graph_g3008->SetMaximum(0.3764793);
   Graph_g3008->SetDirectory(0);
   Graph_g3008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3008->SetLineColor(ci);
   Graph_g3008->GetXaxis()->SetLabelFont(42);
   Graph_g3008->GetXaxis()->SetLabelSize(0.035);
   Graph_g3008->GetXaxis()->SetTitleSize(0.035);
   Graph_g3008->GetXaxis()->SetTitleFont(42);
   Graph_g3008->GetYaxis()->SetLabelFont(42);
   Graph_g3008->GetYaxis()->SetLabelSize(0.035);
   Graph_g3008->GetYaxis()->SetTitleSize(0.035);
   Graph_g3008->GetYaxis()->SetTitleOffset(0);
   Graph_g3008->GetYaxis()->SetTitleFont(42);
   Graph_g3008->GetZaxis()->SetLabelFont(42);
   Graph_g3008->GetZaxis()->SetLabelSize(0.035);
   Graph_g3008->GetZaxis()->SetTitleSize(0.035);
   Graph_g3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3008);
   
   grae->Draw(" 2");
   Double_t xAxis4[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_2__9 = new TH1D("hist_eta_pp_2__9","",18, xAxis4);
   hist_eta_pp_2__9->SetBinContent(1,5.724322e-05);
   hist_eta_pp_2__9->SetBinContent(2,0.004786964);
   hist_eta_pp_2__9->SetBinContent(3,0.02933238);
   hist_eta_pp_2__9->SetBinContent(4,0.06615885);
   hist_eta_pp_2__9->SetBinContent(5,0.1163516);
   hist_eta_pp_2__9->SetBinContent(6,0.1692968);
   hist_eta_pp_2__9->SetBinContent(7,0.2222468);
   hist_eta_pp_2__9->SetBinContent(8,0.2699113);
   hist_eta_pp_2__9->SetBinContent(9,0.3098194);
   hist_eta_pp_2__9->SetBinContent(10,0.3328645);
   hist_eta_pp_2__9->SetBinContent(11,0.3484919);
   hist_eta_pp_2__9->SetBinContent(12,0.3484204);
   hist_eta_pp_2__9->SetBinContent(13,0.329387);
   hist_eta_pp_2__9->SetBinContent(14,0.2926082);
   hist_eta_pp_2__9->SetBinContent(15,0.250835);
   hist_eta_pp_2__9->SetBinContent(16,0.1963299);
   hist_eta_pp_2__9->SetBinContent(17,0.1084473);
   hist_eta_pp_2__9->SetBinContent(18,0.020858);
   hist_eta_pp_2__9->SetBinError(1,1.652469e-05);
   hist_eta_pp_2__9->SetBinError(2,0.0001068529);
   hist_eta_pp_2__9->SetBinError(3,0.0003740632);
   hist_eta_pp_2__9->SetBinError(4,0.0005617788);
   hist_eta_pp_2__9->SetBinError(5,0.0007450023);
   hist_eta_pp_2__9->SetBinError(6,0.0008986608);
   hist_eta_pp_2__9->SetBinError(7,0.001029649);
   hist_eta_pp_2__9->SetBinError(8,0.001134702);
   hist_eta_pp_2__9->SetBinError(9,0.001215698);
   hist_eta_pp_2__9->SetBinError(10,0.0012601);
   hist_eta_pp_2__9->SetBinError(11,0.001289341);
   hist_eta_pp_2__9->SetBinError(12,0.001289209);
   hist_eta_pp_2__9->SetBinError(13,0.001253501);
   hist_eta_pp_2__9->SetBinError(14,0.001181448);
   hist_eta_pp_2__9->SetBinError(15,0.001093869);
   hist_eta_pp_2__9->SetBinError(16,0.0009677533);
   hist_eta_pp_2__9->SetBinError(17,0.0005085875);
   hist_eta_pp_2__9->SetBinError(18,0.0002230451);
   hist_eta_pp_2__9->SetEntries(744273);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_2__9->SetLineColor(ci);
   hist_eta_pp_2__9->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_2__9->SetMarkerColor(ci);
   hist_eta_pp_2__9->SetMarkerStyle(21);
   hist_eta_pp_2__9->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_2__9->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_2__9->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_2__9->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_2__9->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_2__9->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_2__9->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_2__9->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_2__9->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_2__9->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_2__9->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_2__9->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_2__9->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_2__9->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_2__9->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_2__9->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_2__9->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_2__9->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_2__9->Draw("same");
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
   p_2_0->Modified();
   cpp->cd();
  
// ------------>Primitives in pad: p_2_1
   TPad *p_2_1 = new TPad("p_2_1", "p_2_1",0.673315,0,1,0.539394);
   p_2_1->Draw();
   p_2_1->cd();
   p_2_1->Range(-2.999,-0.1577316,3.740326,0.4999);
   p_2_1->SetFillColor(0);
   p_2_1->SetBorderMode(0);
   p_2_1->SetBorderSize(2);
   p_2_1->SetLeftMargin(0);
   p_2_1->SetTopMargin(0);
   p_2_1->SetBottomMargin(0.24);
   p_2_1->SetFrameBorderMode(0);
   p_2_1->SetFrameBorderMode(0);
   
   TH1D *emptyDist__10 = new TH1D("emptyDist__10","",10,-2.999,2.999);
   emptyDist__10->SetBinContent(7,1000);
   emptyDist__10->SetBinError(7,1000);
   emptyDist__10->SetMinimum(0.0001);
   emptyDist__10->SetMaximum(0.4999);
   emptyDist__10->SetEntries(1);
   emptyDist__10->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyDist__10->SetLineColor(ci);
   emptyDist__10->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__10->GetXaxis()->CenterTitle(true);
   emptyDist__10->GetXaxis()->SetLabelFont(43);
   emptyDist__10->GetXaxis()->SetLabelSize(33);
   emptyDist__10->GetXaxis()->SetTitleSize(33);
   emptyDist__10->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__10->GetXaxis()->SetTitleFont(43);
   emptyDist__10->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__10->GetYaxis()->CenterTitle(true);
   emptyDist__10->GetYaxis()->SetNdivisions(505);
   emptyDist__10->GetYaxis()->SetLabelFont(43);
   emptyDist__10->GetYaxis()->SetLabelSize(33);
   emptyDist__10->GetYaxis()->SetTitleSize(33);
   emptyDist__10->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__10->GetYaxis()->SetTitleFont(43);
   emptyDist__10->GetZaxis()->SetLabelFont(42);
   emptyDist__10->GetZaxis()->SetLabelSize(0.035);
   emptyDist__10->GetZaxis()->SetTitleSize(0.035);
   emptyDist__10->GetZaxis()->SetTitleFont(42);
   emptyDist__10->Draw("");
   
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
   0,
   8.918902e-06,
   0.001068421,
   0.008135691,
   0.0373937,
   0.09593044,
   0.1755469,
   0.2660435,
   0.3467284,
   0.4067284,
   0.4426551,
   0.4415992,
   0.4124496,
   0.3486777,
   0.2643476,
   0.172137,
   0.06185155,
   0.003627511};
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
   -0,
   -1.14945e-05,
   -0.000287051,
   -0.0009798065,
   -0.002342242,
   -0.00296145,
   -0.002488171,
   -0.0006878783,
   -0.001769517,
   -0.003267974,
   -0.004311472,
   -0.003801029,
   -0.003266623,
   -0.001730694,
   -0.0009216849,
   -0.001561106,
   -0.001890866,
   -0.0003449475};
   gre = new TGraphErrors(18,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1201;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,-3.46425,3.51675);
   Graph_Graph1005->SetMinimum(0);
   Graph_Graph1005->SetMaximum(0.4869206);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
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
   grae = new TGraphAsymmErrors(18,g_fx3009,g_fy3009,g_felx3009,g_fehx3009,g_fely3009,g_fehy3009);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1202;
   color = new TColor(ci, 0, 0, 0, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3009 = new TH1F("Graph_g3009","",100,-3.5065,3.5915);
   Graph_g3009->SetMinimum(0);
   Graph_g3009->SetMaximum(0.4731903);
   Graph_g3009->SetDirectory(0);
   Graph_g3009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3009->SetLineColor(ci);
   Graph_g3009->GetXaxis()->SetLabelFont(42);
   Graph_g3009->GetXaxis()->SetLabelSize(0.035);
   Graph_g3009->GetXaxis()->SetTitleSize(0.035);
   Graph_g3009->GetXaxis()->SetTitleFont(42);
   Graph_g3009->GetYaxis()->SetLabelFont(42);
   Graph_g3009->GetYaxis()->SetLabelSize(0.035);
   Graph_g3009->GetYaxis()->SetTitleSize(0.035);
   Graph_g3009->GetYaxis()->SetTitleOffset(0);
   Graph_g3009->GetYaxis()->SetTitleFont(42);
   Graph_g3009->GetZaxis()->SetLabelFont(42);
   Graph_g3009->GetZaxis()->SetLabelSize(0.035);
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
   grae = new TGraphAsymmErrors(18,g_fx3010,g_fy3010,g_felx3010,g_fehx3010,g_fely3010,g_fehy3010);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1203;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.3);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3010 = new TH1F("Graph_g3010","",100,-3.5065,3.5915);
   Graph_g3010->SetMinimum(0);
   Graph_g3010->SetMaximum(0.4787131);
   Graph_g3010->SetDirectory(0);
   Graph_g3010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3010->SetLineColor(ci);
   Graph_g3010->GetXaxis()->SetLabelFont(42);
   Graph_g3010->GetXaxis()->SetLabelSize(0.035);
   Graph_g3010->GetXaxis()->SetTitleSize(0.035);
   Graph_g3010->GetXaxis()->SetTitleFont(42);
   Graph_g3010->GetYaxis()->SetLabelFont(42);
   Graph_g3010->GetYaxis()->SetLabelSize(0.035);
   Graph_g3010->GetYaxis()->SetTitleSize(0.035);
   Graph_g3010->GetYaxis()->SetTitleOffset(0);
   Graph_g3010->GetYaxis()->SetTitleFont(42);
   Graph_g3010->GetZaxis()->SetLabelFont(42);
   Graph_g3010->GetZaxis()->SetLabelSize(0.035);
   Graph_g3010->GetZaxis()->SetTitleSize(0.035);
   Graph_g3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3010);
   
   grae->Draw(" 2");
   Double_t xAxis5[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_pp_5__11 = new TH1D("hist_eta_pp_5__11","",18, xAxis5);
   hist_eta_pp_5__11->SetBinContent(2,1.718279e-05);
   hist_eta_pp_5__11->SetBinContent(3,0.001099698);
   hist_eta_pp_5__11->SetBinContent(4,0.008488296);
   hist_eta_pp_5__11->SetBinContent(5,0.03780213);
   hist_eta_pp_5__11->SetBinContent(6,0.09638398);
   hist_eta_pp_5__11->SetBinContent(7,0.1756654);
   hist_eta_pp_5__11->SetBinContent(8,0.2660124);
   hist_eta_pp_5__11->SetBinContent(9,0.3468174);
   hist_eta_pp_5__11->SetBinContent(10,0.4060063);
   hist_eta_pp_5__11->SetBinContent(11,0.4424453);
   hist_eta_pp_5__11->SetBinContent(12,0.4411852);
   hist_eta_pp_5__11->SetBinContent(13,0.4118714);
   hist_eta_pp_5__11->SetBinContent(14,0.3483065);
   hist_eta_pp_5__11->SetBinContent(15,0.2641223);
   hist_eta_pp_5__11->SetBinContent(16,0.1722288);
   hist_eta_pp_5__11->SetBinContent(17,0.06223605);
   hist_eta_pp_5__11->SetBinContent(18,0.003677116);
   hist_eta_pp_5__11->SetBinError(2,9.920486e-06);
   hist_eta_pp_5__11->SetBinError(3,0.0001122375);
   hist_eta_pp_5__11->SetBinError(4,0.0003118254);
   hist_eta_pp_5__11->SetBinError(5,0.0006580506);
   hist_eta_pp_5__11->SetBinError(6,0.00105076);
   hist_eta_pp_5__11->SetBinError(7,0.001418549);
   hist_eta_pp_5__11->SetBinError(8,0.00174563);
   hist_eta_pp_5__11->SetBinError(9,0.001993203);
   hist_eta_pp_5__11->SetBinError(10,0.00215659);
   hist_eta_pp_5__11->SetBinError(11,0.002251287);
   hist_eta_pp_5__11->SetBinError(12,0.002248079);
   hist_eta_pp_5__11->SetBinError(13,0.002172111);
   hist_eta_pp_5__11->SetBinError(14,0.001997478);
   hist_eta_pp_5__11->SetBinError(15,0.001739417);
   hist_eta_pp_5__11->SetBinError(16,0.001404604);
   hist_eta_pp_5__11->SetBinError(17,0.0005970452);
   hist_eta_pp_5__11->SetBinError(18,0.0001451242);
   hist_eta_pp_5__11->SetEntries(309947);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_5__11->SetLineColor(ci);
   hist_eta_pp_5__11->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_pp_5__11->SetMarkerColor(ci);
   hist_eta_pp_5__11->SetMarkerStyle(21);
   hist_eta_pp_5__11->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_pp_5__11->GetXaxis()->SetLabelFont(42);
   hist_eta_pp_5__11->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_pp_5__11->GetXaxis()->SetLabelSize(0.045);
   hist_eta_pp_5__11->GetXaxis()->SetTitleSize(0.055);
   hist_eta_pp_5__11->GetXaxis()->SetTitleFont(42);
   hist_eta_pp_5__11->GetYaxis()->SetTitle("Event fraction");
   hist_eta_pp_5__11->GetYaxis()->SetLabelFont(42);
   hist_eta_pp_5__11->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_pp_5__11->GetYaxis()->SetLabelSize(0.045);
   hist_eta_pp_5__11->GetYaxis()->SetTitleSize(0.055);
   hist_eta_pp_5__11->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_pp_5__11->GetYaxis()->SetTitleFont(42);
   hist_eta_pp_5__11->GetZaxis()->SetLabelFont(42);
   hist_eta_pp_5__11->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_pp_5__11->GetZaxis()->SetLabelSize(0.045);
   hist_eta_pp_5__11->GetZaxis()->SetTitleSize(0.035);
   hist_eta_pp_5__11->GetZaxis()->SetTitleFont(42);
   hist_eta_pp_5__11->Draw("same");
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
