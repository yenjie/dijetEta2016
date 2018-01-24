void pPbDistsMMppjecv1()
{
//=========Macro generated from canvas: cpPb/
//=========  (Wed Nov 15 22:06:58 2017) by ROOT version6.10/08

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cpPb = new TCanvas("cpPb", "",619,224,1300,800);
   cpPb->Range(0,0,1,1);
   cpPb->SetFillColor(0);
   cpPb->SetBorderMode(0);
   cpPb->SetBorderSize(2);
   cpPb->SetFrameBorderMode(0);
  
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
   
   TH1D *emptyDist__37 = new TH1D("emptyDist__37","",10,-2.999,2.999);
   emptyDist__37->SetBinContent(7,1000);
   emptyDist__37->SetBinError(7,1000);
   emptyDist__37->SetMinimum(0.0001);
   emptyDist__37->SetMaximum(0.4999);
   emptyDist__37->SetEntries(1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("emptyDist");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDist__37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__37);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   emptyDist__37->SetLineColor(ci);
   emptyDist__37->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__37->GetXaxis()->CenterTitle(true);
   emptyDist__37->GetXaxis()->SetLabelFont(43);
   emptyDist__37->GetXaxis()->SetLabelSize(33);
   emptyDist__37->GetXaxis()->SetTitleSize(33);
   emptyDist__37->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__37->GetXaxis()->SetTitleFont(43);
   emptyDist__37->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__37->GetYaxis()->CenterTitle(true);
   emptyDist__37->GetYaxis()->SetNdivisions(505);
   emptyDist__37->GetYaxis()->SetLabelFont(43);
   emptyDist__37->GetYaxis()->SetLabelSize(33);
   emptyDist__37->GetYaxis()->SetTitleSize(33);
   emptyDist__37->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__37->GetYaxis()->SetTitleFont(43);
   emptyDist__37->GetZaxis()->SetLabelFont(42);
   emptyDist__37->GetZaxis()->SetLabelSize(0.035);
   emptyDist__37->GetZaxis()->SetTitleSize(0.035);
   emptyDist__37->GetZaxis()->SetTitleFont(42);
   emptyDist__37->Draw("");
   
   Double_t Graph0_fx1013[18] = {
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
   Double_t Graph0_fy1013[18] = {
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
   Double_t Graph0_fex1013[18] = {
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
   Double_t Graph0_fey1013[18] = {
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
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1204;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","Graph",100,-3.46425,3.51675);
   Graph_Graph1013->SetMinimum(0.003351903);
   Graph_Graph1013->SetMaximum(0.3486352);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   gre->Draw(" 2");
   
   Double_t g_fx3013[18] = {
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
   Double_t g_fy3013[18] = {
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
   Double_t g_felx3013[18] = {
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
   Double_t g_fely3013[18] = {
   0.0007539196,
   0.001121993,
   0.001826602,
   0.002384154,
   0.002887363,
   0.005908027,
   0.005456761,
   0.005725182,
   0.0005516839,
   0.003847267,
   0.0006000799,
   0.002445896,
   0.003551604,
   0.00300008,
   0.005949444,
   0.003722036,
   0.002128129,
   0.0006148787};
   Double_t g_fehx3013[18] = {
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
   Double_t g_fehy3013[18] = {
   0.000233513,
   0.001049632,
   0.002581826,
   0.004526147,
   0.005446452,
   0.00208558,
   0.003320141,
   0.001209114,
   0.004510355,
   0.001147183,
   0.006008248,
   0.004113528,
   0.004569918,
   0.005605105,
   0.002712047,
   0.001773988,
   0.001762409,
   0.0006997431};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,g_fx3013,g_fy3013,g_felx3013,g_fehx3013,g_fely3013,g_fehy3013);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1205;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3013 = new TH1F("Graph_g3013","",100,-3.5065,3.5915);
   Graph_g3013->SetMinimum(0.00480743);
   Graph_g3013->SetMaximum(0.3558713);
   Graph_g3013->SetDirectory(0);
   Graph_g3013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3013->SetLineColor(ci);
   Graph_g3013->GetXaxis()->SetLabelFont(42);
   Graph_g3013->GetXaxis()->SetLabelSize(0.035);
   Graph_g3013->GetXaxis()->SetTitleSize(0.035);
   Graph_g3013->GetXaxis()->SetTitleFont(42);
   Graph_g3013->GetYaxis()->SetLabelFont(42);
   Graph_g3013->GetYaxis()->SetLabelSize(0.035);
   Graph_g3013->GetYaxis()->SetTitleSize(0.035);
   Graph_g3013->GetYaxis()->SetTitleOffset(0);
   Graph_g3013->GetYaxis()->SetTitleFont(42);
   Graph_g3013->GetZaxis()->SetLabelFont(42);
   Graph_g3013->GetZaxis()->SetLabelSize(0.035);
   Graph_g3013->GetZaxis()->SetTitleSize(0.035);
   Graph_g3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3013);
   
   grae->Draw(" 2");
   Double_t xAxis25[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_0__38 = new TH1D("hist_eta_0__38","",18, xAxis25);
   hist_eta_0__38->SetBinContent(0,3.298044e-05);
   hist_eta_0__38->SetBinContent(1,0.00351271);
   hist_eta_0__38->SetBinContent(2,0.02277407);
   hist_eta_0__38->SetBinContent(3,0.0714251);
   hist_eta_0__38->SetBinContent(4,0.1053813);
   hist_eta_0__38->SetBinContent(5,0.1537396);
   hist_eta_0__38->SetBinContent(6,0.190506);
   hist_eta_0__38->SetBinContent(7,0.2360541);
   hist_eta_0__38->SetBinContent(8,0.2715325);
   hist_eta_0__38->SetBinContent(9,0.3026785);
   hist_eta_0__38->SetBinContent(10,0.317549);
   hist_eta_0__38->SetBinContent(11,0.3153243);
   hist_eta_0__38->SetBinContent(12,0.3148559);
   hist_eta_0__38->SetBinContent(13,0.2949505);
   hist_eta_0__38->SetBinContent(14,0.2672001);
   hist_eta_0__38->SetBinContent(15,0.2253989);
   hist_eta_0__38->SetBinContent(16,0.1756355);
   hist_eta_0__38->SetBinContent(17,0.1059082);
   hist_eta_0__38->SetBinContent(18,0.0235937);
   hist_eta_0__38->SetBinError(0,3.298044e-05);
   hist_eta_0__38->SetBinError(1,0.0006413301);
   hist_eta_0__38->SetBinError(2,0.001154691);
   hist_eta_0__38->SetBinError(3,0.002891918);
   hist_eta_0__38->SetBinError(4,0.00351271);
   hist_eta_0__38->SetBinError(5,0.004242808);
   hist_eta_0__38->SetBinError(6,0.004722966);
   hist_eta_0__38->SetBinError(7,0.005257343);
   hist_eta_0__38->SetBinError(8,0.005638601);
   hist_eta_0__38->SetBinError(9,0.005953211);
   hist_eta_0__38->SetBinError(10,0.006097697);
   hist_eta_0__38->SetBinError(11,0.0060763);
   hist_eta_0__38->SetBinError(12,0.006071786);
   hist_eta_0__38->SetBinError(13,0.005876721);
   hist_eta_0__38->SetBinError(14,0.005593438);
   hist_eta_0__38->SetBinError(15,0.005137317);
   hist_eta_0__38->SetBinError(16,0.004534889);
   hist_eta_0__38->SetBinError(17,0.002490063);
   hist_eta_0__38->SetBinError(18,0.001175286);
   hist_eta_0__38->SetEntries(30340);

   ci = TColor::GetColor("#33cc99");
   hist_eta_0__38->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   hist_eta_0__38->SetLineColor(ci);
   hist_eta_0__38->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_0__38->SetMarkerColor(ci);
   hist_eta_0__38->SetMarkerStyle(20);
   hist_eta_0__38->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_0__38->GetXaxis()->SetLabelFont(42);
   hist_eta_0__38->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_0__38->GetXaxis()->SetLabelSize(0.045);
   hist_eta_0__38->GetXaxis()->SetTitleSize(0.055);
   hist_eta_0__38->GetXaxis()->SetTitleFont(42);
   hist_eta_0__38->GetYaxis()->SetTitle("Event fraction");
   hist_eta_0__38->GetYaxis()->SetLabelFont(42);
   hist_eta_0__38->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_0__38->GetYaxis()->SetLabelSize(0.045);
   hist_eta_0__38->GetYaxis()->SetTitleSize(0.055);
   hist_eta_0__38->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_0__38->GetYaxis()->SetTitleFont(42);
   hist_eta_0__38->GetZaxis()->SetLabelFont(42);
   hist_eta_0__38->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_0__38->GetZaxis()->SetLabelSize(0.045);
   hist_eta_0__38->GetZaxis()->SetTitleSize(0.035);
   hist_eta_0__38->GetZaxis()->SetTitleFont(42);
   hist_eta_0__38->Draw("same");
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
   cpPb->cd();
  
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
   
   TH1D *emptyDist__39 = new TH1D("emptyDist__39","",10,-2.999,2.999);
   emptyDist__39->SetBinContent(7,1000);
   emptyDist__39->SetBinError(7,1000);
   emptyDist__39->SetMinimum(0.0001);
   emptyDist__39->SetMaximum(0.4999);
   emptyDist__39->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDist");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDist__39->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__39);

   ci = TColor::GetColor("#000099");
   emptyDist__39->SetLineColor(ci);
   emptyDist__39->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__39->GetXaxis()->CenterTitle(true);
   emptyDist__39->GetXaxis()->SetLabelFont(43);
   emptyDist__39->GetXaxis()->SetLabelSize(33);
   emptyDist__39->GetXaxis()->SetTitleSize(33);
   emptyDist__39->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__39->GetXaxis()->SetTitleFont(43);
   emptyDist__39->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__39->GetYaxis()->CenterTitle(true);
   emptyDist__39->GetYaxis()->SetNdivisions(505);
   emptyDist__39->GetYaxis()->SetLabelFont(43);
   emptyDist__39->GetYaxis()->SetLabelSize(33);
   emptyDist__39->GetYaxis()->SetTitleSize(33);
   emptyDist__39->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__39->GetYaxis()->SetTitleFont(43);
   emptyDist__39->GetZaxis()->SetLabelFont(42);
   emptyDist__39->GetZaxis()->SetLabelSize(0.035);
   emptyDist__39->GetZaxis()->SetTitleSize(0.035);
   emptyDist__39->GetZaxis()->SetTitleFont(42);
   emptyDist__39->Draw("");
   
   Double_t Graph0_fx1014[18] = {
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
   Double_t Graph0_fy1014[18] = {
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
   Double_t Graph0_fex1014[18] = {
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
   Double_t Graph0_fey1014[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1216;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","Graph",100,-3.46425,3.51675);
   Graph_Graph1014->SetMinimum(2.750228e-05);
   Graph_Graph1014->SetMaximum(0.4202606);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
   gre->Draw(" 2");
   
   Double_t g_fx3014[18] = {
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
   Double_t g_fy3014[18] = {
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
   Double_t g_felx3014[18] = {
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
   Double_t g_fely3014[18] = {
   4.267503e-07,
   0.0001994223,
   0.0003543746,
   0.002253911,
   0.002247479,
   0.00611868,
   0.003663114,
   0.008625221,
   0.002919312,
   0.002968227,
   0.003261454,
   0.004431246,
   0.003970877,
   0.0008502798,
   0.006304526,
   0.004390673,
   0.004050931,
   0.0006963291};
   Double_t g_fehx3014[18] = {
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
   Double_t g_fehy3014[18] = {
   9.987599e-07,
   0.0001990452,
   0.001438693,
   0.001135006,
   0.003023796,
   0.00138859,
   0.005095092,
   0.002861755,
   0.00806699,
   0.004888477,
   0.003988038,
   0.001702952,
   0.003907253,
   0.009654925,
   0.003116099,
   0.005638562,
   0.002312887,
   0.0007115986};
   grae = new TGraphAsymmErrors(18,g_fx3014,g_fy3014,g_felx3014,g_fehx3014,g_fely3014,g_fehy3014);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1217;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3014 = new TH1F("Graph_g3014","",100,-3.5065,3.5915);
   Graph_g3014->SetMinimum(-0.03617432);
   Graph_g3014->SetMaximum(0.3979105);
   Graph_g3014->SetDirectory(0);
   Graph_g3014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3014->SetLineColor(ci);
   Graph_g3014->GetXaxis()->SetLabelFont(42);
   Graph_g3014->GetXaxis()->SetLabelSize(0.035);
   Graph_g3014->GetXaxis()->SetTitleSize(0.035);
   Graph_g3014->GetXaxis()->SetTitleFont(42);
   Graph_g3014->GetYaxis()->SetLabelFont(42);
   Graph_g3014->GetYaxis()->SetLabelSize(0.035);
   Graph_g3014->GetYaxis()->SetTitleSize(0.035);
   Graph_g3014->GetYaxis()->SetTitleOffset(0);
   Graph_g3014->GetYaxis()->SetTitleFont(42);
   Graph_g3014->GetZaxis()->SetLabelFont(42);
   Graph_g3014->GetZaxis()->SetLabelSize(0.035);
   Graph_g3014->GetZaxis()->SetTitleSize(0.035);
   Graph_g3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3014);
   
   grae->Draw(" 2");
   Double_t xAxis26[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_3__40 = new TH1D("hist_eta_3__40","",18, xAxis26);
   hist_eta_3__40->SetBinContent(1,1.676376e-05);
   hist_eta_3__40->SetBinContent(2,0.001357864);
   hist_eta_3__40->SetBinContent(3,0.01371275);
   hist_eta_3__40->SetBinContent(4,0.042647);
   hist_eta_3__40->SetBinContent(5,0.08816061);
   hist_eta_3__40->SetBinContent(6,0.1460291);
   hist_eta_3__40->SetBinContent(7,0.2090776);
   hist_eta_3__40->SetBinContent(8,0.2706006);
   hist_eta_3__40->SetBinContent(9,0.3220486);
   hist_eta_3__40->SetBinContent(10,0.3549894);
   hist_eta_3__40->SetBinContent(11,0.3824316);
   hist_eta_3__40->SetBinContent(12,0.3759105);
   hist_eta_3__40->SetBinContent(13,0.358275);
   hist_eta_3__40->SetBinContent(14,0.3120909);
   hist_eta_3__40->SetBinContent(15,0.2598718);
   hist_eta_3__40->SetBinContent(16,0.1987846);
   hist_eta_3__40->SetBinContent(17,0.09324841);
   hist_eta_3__40->SetBinContent(18,0.01321822);
   hist_eta_3__40->SetBinError(1,1.676376e-05);
   hist_eta_3__40->SetBinError(2,0.0001066839);
   hist_eta_3__40->SetBinError(3,0.0004794552);
   hist_eta_3__40->SetBinError(4,0.0008455318);
   hist_eta_3__40->SetBinError(5,0.00121569);
   hist_eta_3__40->SetBinError(6,0.001564607);
   hist_eta_3__40->SetBinError(7,0.001872145);
   hist_eta_3__40->SetBinError(8,0.002129855);
   hist_eta_3__40->SetBinError(9,0.00232352);
   hist_eta_3__40->SetBinError(10,0.002439458);
   hist_eta_3__40->SetBinError(11,0.002531994);
   hist_eta_3__40->SetBinError(12,0.002510313);
   hist_eta_3__40->SetBinError(13,0.002450722);
   hist_eta_3__40->SetBinError(14,0.002287316);
   hist_eta_3__40->SetBinError(15,0.002087206);
   hist_eta_3__40->SetBinError(16,0.00182548);
   hist_eta_3__40->SetBinError(17,0.0008840797);
   hist_eta_3__40->SetBinError(18,0.0003328567);
   hist_eta_3__40->SetEntries(211802);

   ci = TColor::GetColor("#cc0000");
   hist_eta_3__40->SetLineColor(ci);
   hist_eta_3__40->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_3__40->SetMarkerColor(ci);
   hist_eta_3__40->SetMarkerStyle(20);
   hist_eta_3__40->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_3__40->GetXaxis()->SetLabelFont(42);
   hist_eta_3__40->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_3__40->GetXaxis()->SetLabelSize(0.045);
   hist_eta_3__40->GetXaxis()->SetTitleSize(0.055);
   hist_eta_3__40->GetXaxis()->SetTitleFont(42);
   hist_eta_3__40->GetYaxis()->SetTitle("Event fraction");
   hist_eta_3__40->GetYaxis()->SetLabelFont(42);
   hist_eta_3__40->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_3__40->GetYaxis()->SetLabelSize(0.045);
   hist_eta_3__40->GetYaxis()->SetTitleSize(0.055);
   hist_eta_3__40->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_3__40->GetYaxis()->SetTitleFont(42);
   hist_eta_3__40->GetZaxis()->SetLabelFont(42);
   hist_eta_3__40->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_3__40->GetZaxis()->SetLabelSize(0.045);
   hist_eta_3__40->GetZaxis()->SetTitleSize(0.035);
   hist_eta_3__40->GetZaxis()->SetTitleFont(42);
   hist_eta_3__40->Draw("same");
      tex = new TLatex(0.45,0.29,"95 < p_{T}^{ave} < 115 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_0_1->Modified();
   cpPb->cd();
  
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
   
   TH1D *emptyDist__41 = new TH1D("emptyDist__41","",10,-2.999,2.999);
   emptyDist__41->SetBinContent(7,1000);
   emptyDist__41->SetBinError(7,1000);
   emptyDist__41->SetMinimum(0.0001);
   emptyDist__41->SetMaximum(0.4999);
   emptyDist__41->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDist");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDist__41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__41);

   ci = TColor::GetColor("#000099");
   emptyDist__41->SetLineColor(ci);
   emptyDist__41->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__41->GetXaxis()->CenterTitle(true);
   emptyDist__41->GetXaxis()->SetLabelFont(43);
   emptyDist__41->GetXaxis()->SetLabelSize(33);
   emptyDist__41->GetXaxis()->SetTitleSize(33);
   emptyDist__41->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__41->GetXaxis()->SetTitleFont(43);
   emptyDist__41->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__41->GetYaxis()->CenterTitle(true);
   emptyDist__41->GetYaxis()->SetNdivisions(505);
   emptyDist__41->GetYaxis()->SetLabelFont(43);
   emptyDist__41->GetYaxis()->SetLabelSize(33);
   emptyDist__41->GetYaxis()->SetTitleSize(33);
   emptyDist__41->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__41->GetYaxis()->SetTitleFont(43);
   emptyDist__41->GetZaxis()->SetLabelFont(42);
   emptyDist__41->GetZaxis()->SetLabelSize(0.035);
   emptyDist__41->GetZaxis()->SetTitleSize(0.035);
   emptyDist__41->GetZaxis()->SetTitleFont(42);
   emptyDist__41->Draw("");
   
   Double_t Graph0_fx1015[18] = {
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
   Double_t Graph0_fy1015[18] = {
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
   Double_t Graph0_fex1015[18] = {
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
   Double_t Graph0_fey1015[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1208;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","Graph",100,-3.46425,3.51675);
   Graph_Graph1015->SetMinimum(0.0003802179);
   Graph_Graph1015->SetMaximum(0.3786405);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   gre->Draw(" 2");
   
   Double_t g_fx3015[18] = {
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
   Double_t g_fy3015[18] = {
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
   Double_t g_felx3015[18] = {
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
   Double_t g_fely3015[18] = {
   0.0002868731,
   0.0005523859,
   0.001972216,
   0.004411444,
   0.004068955,
   0.005870989,
   0.004202808,
   0.004180408,
   0.002711863,
   0.00517657,
   0.006288856,
   0.006574479,
   0.004920851,
   0.002099431,
   0.002296658,
   0.005635141,
   0.004170476,
   0.000494229};
   Double_t g_fehx3015[18] = {
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
   Double_t g_fehy3015[18] = {
   7.089069e-05,
   0.001012143,
   0.002004603,
   0.002433061,
   0.004165203,
   0.004400145,
   0.005846629,
   0.004726629,
   0.007263709,
   0.004743831,
   0.00110833,
   0.001999654,
   0.003695812,
   0.009735441,
   0.007450957,
   0.004247353,
   0.00205948,
   0.001182392};
   grae = new TGraphAsymmErrors(18,g_fx3015,g_fy3015,g_felx3015,g_fehx3015,g_fely3015,g_fehy3015);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1209;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3015 = new TH1F("Graph_g3015","",100,-3.5065,3.5915);
   Graph_g3015->SetMinimum(0.0005828063);
   Graph_g3015->SetMaximum(0.3573677);
   Graph_g3015->SetDirectory(0);
   Graph_g3015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3015->SetLineColor(ci);
   Graph_g3015->GetXaxis()->SetLabelFont(42);
   Graph_g3015->GetXaxis()->SetLabelSize(0.035);
   Graph_g3015->GetXaxis()->SetTitleSize(0.035);
   Graph_g3015->GetXaxis()->SetTitleFont(42);
   Graph_g3015->GetYaxis()->SetLabelFont(42);
   Graph_g3015->GetYaxis()->SetLabelSize(0.035);
   Graph_g3015->GetYaxis()->SetTitleSize(0.035);
   Graph_g3015->GetYaxis()->SetTitleOffset(0);
   Graph_g3015->GetYaxis()->SetTitleFont(42);
   Graph_g3015->GetZaxis()->SetLabelFont(42);
   Graph_g3015->GetZaxis()->SetLabelSize(0.035);
   Graph_g3015->GetZaxis()->SetTitleSize(0.035);
   Graph_g3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3015);
   
   grae->Draw(" 2");
   Double_t xAxis27[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_1__42 = new TH1D("hist_eta_1__42","",18, xAxis27);
   hist_eta_1__42->SetBinContent(1,0.000437668);
   hist_eta_1__42->SetBinContent(2,0.01148037);
   hist_eta_1__42->SetBinContent(3,0.04501248);
   hist_eta_1__42->SetBinContent(4,0.08140626);
   hist_eta_1__42->SetBinContent(5,0.1304251);
   hist_eta_1__42->SetBinContent(6,0.1749999);
   hist_eta_1__42->SetBinContent(7,0.222672);
   hist_eta_1__42->SetBinContent(8,0.2718255);
   hist_eta_1__42->SetBinContent(9,0.3053913);
   hist_eta_1__42->SetBinContent(10,0.3357587);
   hist_eta_1__42->SetBinContent(11,0.3441418);
   hist_eta_1__42->SetBinContent(12,0.3385531);
   hist_eta_1__42->SetBinContent(13,0.321989);
   hist_eta_1__42->SetBinContent(14,0.2864369);
   hist_eta_1__42->SetBinContent(15,0.2393371);
   hist_eta_1__42->SetBinContent(16,0.1875239);
   hist_eta_1__42->SetBinContent(17,0.1017242);
   hist_eta_1__42->SetBinContent(18,0.01898806);
   hist_eta_1__42->SetBinError(1,0.0001213873);
   hist_eta_1__42->SetBinError(2,0.0004396061);
   hist_eta_1__42->SetBinError(3,0.001231026);
   hist_eta_1__42->SetBinError(4,0.001655502);
   hist_eta_1__42->SetBinError(5,0.002095469);
   hist_eta_1__42->SetBinError(6,0.002427279);
   hist_eta_1__42->SetBinError(7,0.002738001);
   hist_eta_1__42->SetBinError(8,0.003025143);
   hist_eta_1__42->SetBinError(9,0.003206484);
   hist_eta_1__42->SetBinError(10,0.003362129);
   hist_eta_1__42->SetBinError(11,0.003403842);
   hist_eta_1__42->SetBinError(12,0.003376091);
   hist_eta_1__42->SetBinError(13,0.003292466);
   hist_eta_1__42->SetBinError(14,0.003105383);
   hist_eta_1__42->SetBinError(15,0.00283861);
   hist_eta_1__42->SetBinError(16,0.002512633);
   hist_eta_1__42->SetBinError(17,0.001308573);
   hist_eta_1__42->SetBinError(18,0.0005653613);
   hist_eta_1__42->SetEntries(105472);

   ci = TColor::GetColor("#cc0000");
   hist_eta_1__42->SetLineColor(ci);
   hist_eta_1__42->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_1__42->SetMarkerColor(ci);
   hist_eta_1__42->SetMarkerStyle(20);
   hist_eta_1__42->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_1__42->GetXaxis()->SetLabelFont(42);
   hist_eta_1__42->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_1__42->GetXaxis()->SetLabelSize(0.045);
   hist_eta_1__42->GetXaxis()->SetTitleSize(0.055);
   hist_eta_1__42->GetXaxis()->SetTitleFont(42);
   hist_eta_1__42->GetYaxis()->SetTitle("Event fraction");
   hist_eta_1__42->GetYaxis()->SetLabelFont(42);
   hist_eta_1__42->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_1__42->GetYaxis()->SetLabelSize(0.045);
   hist_eta_1__42->GetYaxis()->SetTitleSize(0.055);
   hist_eta_1__42->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_1__42->GetYaxis()->SetTitleFont(42);
   hist_eta_1__42->GetZaxis()->SetLabelFont(42);
   hist_eta_1__42->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_1__42->GetZaxis()->SetLabelSize(0.045);
   hist_eta_1__42->GetZaxis()->SetTitleSize(0.035);
   hist_eta_1__42->GetZaxis()->SetTitleFont(42);
   hist_eta_1__42->Draw("same");
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
      tex = new TLatex(0.05,0.8,"pp NLO: MMHT14");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_0->Modified();
   cpPb->cd();
  
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
   
   TH1D *emptyDist__43 = new TH1D("emptyDist__43","",10,-2.999,2.999);
   emptyDist__43->SetBinContent(7,1000);
   emptyDist__43->SetBinError(7,1000);
   emptyDist__43->SetMinimum(0.0001);
   emptyDist__43->SetMaximum(0.4999);
   emptyDist__43->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDist");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDist__43->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__43);

   ci = TColor::GetColor("#000099");
   emptyDist__43->SetLineColor(ci);
   emptyDist__43->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__43->GetXaxis()->CenterTitle(true);
   emptyDist__43->GetXaxis()->SetLabelFont(43);
   emptyDist__43->GetXaxis()->SetLabelSize(33);
   emptyDist__43->GetXaxis()->SetTitleSize(33);
   emptyDist__43->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__43->GetXaxis()->SetTitleFont(43);
   emptyDist__43->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__43->GetYaxis()->CenterTitle(true);
   emptyDist__43->GetYaxis()->SetNdivisions(505);
   emptyDist__43->GetYaxis()->SetLabelFont(43);
   emptyDist__43->GetYaxis()->SetLabelSize(33);
   emptyDist__43->GetYaxis()->SetTitleSize(33);
   emptyDist__43->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__43->GetYaxis()->SetTitleFont(43);
   emptyDist__43->GetZaxis()->SetLabelFont(42);
   emptyDist__43->GetZaxis()->SetLabelSize(0.035);
   emptyDist__43->GetZaxis()->SetTitleSize(0.035);
   emptyDist__43->GetZaxis()->SetTitleFont(42);
   emptyDist__43->Draw("");
   
   Double_t Graph0_fx1016[18] = {
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
   Double_t Graph0_fy1016[18] = {
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
   Double_t Graph0_fex1016[18] = {
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
   Double_t Graph0_fey1016[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1220;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","Graph",100,-3.46425,3.51675);
   Graph_Graph1016->SetMinimum(0);
   Graph_Graph1016->SetMaximum(0.4428621);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
   gre->Draw(" 2");
   
   Double_t g_fx3016[18] = {
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
   Double_t g_fy3016[18] = {
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
   Double_t g_felx3016[18] = {
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
   Double_t g_fely3016[18] = {
   1.425195e-10,
   0.0001465958,
   0.0004836,
   0.001564154,
   0.002453426,
   0.001390009,
   0.005380876,
   0.006518464,
   0.00275018,
   0.00209601,
   0.004755257,
   0.005647569,
   0.001562047,
   0.002167058,
   0.005637195,
   0.00732445,
   0.001923651,
   0.0004699728};
   Double_t g_fehx3016[18] = {
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
   Double_t g_fehy3016[18] = {
   4.479912e-10,
   0.0001203903,
   0.0002752569,
   0.0005765245,
   0.001481054,
   0.004911933,
   0.002518499,
   0.003802684,
   0.007564658,
   0.007865716,
   0.0005184084,
   0.0004520967,
   0.005910708,
   0.007084037,
   0.003023105,
   0.00209002,
   0.003330621,
   0.0004264074};
   grae = new TGraphAsymmErrors(18,g_fx3016,g_fy3016,g_felx3016,g_fehx3016,g_fely3016,g_fehy3016);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1221;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3016 = new TH1F("Graph_g3016","",100,-3.5065,3.5915);
   Graph_g3016->SetMinimum(-0.03806515);
   Graph_g3016->SetMaximum(0.4187166);
   Graph_g3016->SetDirectory(0);
   Graph_g3016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3016->SetLineColor(ci);
   Graph_g3016->GetXaxis()->SetLabelFont(42);
   Graph_g3016->GetXaxis()->SetLabelSize(0.035);
   Graph_g3016->GetXaxis()->SetTitleSize(0.035);
   Graph_g3016->GetXaxis()->SetTitleFont(42);
   Graph_g3016->GetYaxis()->SetLabelFont(42);
   Graph_g3016->GetYaxis()->SetLabelSize(0.035);
   Graph_g3016->GetYaxis()->SetTitleSize(0.035);
   Graph_g3016->GetYaxis()->SetTitleOffset(0);
   Graph_g3016->GetYaxis()->SetTitleFont(42);
   Graph_g3016->GetZaxis()->SetLabelFont(42);
   Graph_g3016->GetZaxis()->SetLabelSize(0.035);
   Graph_g3016->GetZaxis()->SetTitleSize(0.035);
   Graph_g3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3016);
   
   grae->Draw(" 2");
   Double_t xAxis28[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_4__44 = new TH1D("hist_eta_4__44","",18, xAxis28);
   hist_eta_4__44->SetBinContent(2,0.0003419877);
   hist_eta_4__44->SetBinContent(3,0.005405612);
   hist_eta_4__44->SetBinContent(4,0.02594694);
   hist_eta_4__44->SetBinContent(5,0.06806659);
   hist_eta_4__44->SetBinContent(6,0.1283667);
   hist_eta_4__44->SetBinContent(7,0.1967202);
   hist_eta_4__44->SetBinContent(8,0.2624259);
   hist_eta_4__44->SetBinContent(9,0.3262783);
   hist_eta_4__44->SetBinContent(10,0.374289);
   hist_eta_4__44->SetBinContent(11,0.4017804);
   hist_eta_4__44->SetBinContent(12,0.3989342);
   hist_eta_4__44->SetBinContent(13,0.3776206);
   hist_eta_4__44->SetBinContent(14,0.3288157);
   hist_eta_4__44->SetBinContent(15,0.2688906);
   hist_eta_4__44->SetBinContent(16,0.1947565);
   hist_eta_4__44->SetBinContent(17,0.08667734);
   hist_eta_4__44->SetBinContent(18,0.008979936);
   hist_eta_4__44->SetBinError(2,6.142281e-05);
   hist_eta_4__44->SetBinError(3,0.0003453519);
   hist_eta_4__44->SetBinError(4,0.0007566281);
   hist_eta_4__44->SetBinError(5,0.00122548);
   hist_eta_4__44->SetBinError(6,0.001682929);
   hist_eta_4__44->SetBinError(7,0.002083358);
   hist_eta_4__44->SetBinError(8,0.002406261);
   hist_eta_4__44->SetBinError(9,0.002683079);
   hist_eta_4__44->SetBinError(10,0.00287371);
   hist_eta_4__44->SetBinError(11,0.002977377);
   hist_eta_4__44->SetBinError(12,0.002966812);
   hist_eta_4__44->SetBinError(13,0.002886471);
   hist_eta_4__44->SetBinError(14,0.002693492);
   hist_eta_4__44->SetBinError(15,0.002435719);
   hist_eta_4__44->SetBinError(16,0.002072934);
   hist_eta_4__44->SetBinError(17,0.0009778612);
   hist_eta_4__44->SetBinError(18,0.0003147466);
   hist_eta_4__44->SetEntries(160929);

   ci = TColor::GetColor("#cc0000");
   hist_eta_4__44->SetLineColor(ci);
   hist_eta_4__44->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_4__44->SetMarkerColor(ci);
   hist_eta_4__44->SetMarkerStyle(20);
   hist_eta_4__44->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_4__44->GetXaxis()->SetLabelFont(42);
   hist_eta_4__44->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_4__44->GetXaxis()->SetLabelSize(0.045);
   hist_eta_4__44->GetXaxis()->SetTitleSize(0.055);
   hist_eta_4__44->GetXaxis()->SetTitleFont(42);
   hist_eta_4__44->GetYaxis()->SetTitle("Event fraction");
   hist_eta_4__44->GetYaxis()->SetLabelFont(42);
   hist_eta_4__44->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_4__44->GetYaxis()->SetLabelSize(0.045);
   hist_eta_4__44->GetYaxis()->SetTitleSize(0.055);
   hist_eta_4__44->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_4__44->GetYaxis()->SetTitleFont(42);
   hist_eta_4__44->GetZaxis()->SetLabelFont(42);
   hist_eta_4__44->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_4__44->GetZaxis()->SetLabelSize(0.045);
   hist_eta_4__44->GetZaxis()->SetTitleSize(0.035);
   hist_eta_4__44->GetZaxis()->SetTitleFont(42);
   hist_eta_4__44->Draw("same");
      tex = new TLatex(0.28,0.29,"115 < p_{T}^{ave} < 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_1->Modified();
   cpPb->cd();
  
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
   
   TH1D *emptyDist__45 = new TH1D("emptyDist__45","",10,-2.999,2.999);
   emptyDist__45->SetBinContent(7,1000);
   emptyDist__45->SetBinError(7,1000);
   emptyDist__45->SetMinimum(0.0001);
   emptyDist__45->SetMaximum(0.4999);
   emptyDist__45->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDist");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDist__45->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__45);

   ci = TColor::GetColor("#000099");
   emptyDist__45->SetLineColor(ci);
   emptyDist__45->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__45->GetXaxis()->CenterTitle(true);
   emptyDist__45->GetXaxis()->SetLabelFont(43);
   emptyDist__45->GetXaxis()->SetLabelSize(33);
   emptyDist__45->GetXaxis()->SetTitleSize(33);
   emptyDist__45->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__45->GetXaxis()->SetTitleFont(43);
   emptyDist__45->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__45->GetYaxis()->CenterTitle(true);
   emptyDist__45->GetYaxis()->SetNdivisions(505);
   emptyDist__45->GetYaxis()->SetLabelFont(43);
   emptyDist__45->GetYaxis()->SetLabelSize(33);
   emptyDist__45->GetYaxis()->SetTitleSize(33);
   emptyDist__45->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__45->GetYaxis()->SetTitleFont(43);
   emptyDist__45->GetZaxis()->SetLabelFont(42);
   emptyDist__45->GetZaxis()->SetLabelSize(0.035);
   emptyDist__45->GetZaxis()->SetTitleSize(0.035);
   emptyDist__45->GetZaxis()->SetTitleFont(42);
   emptyDist__45->Draw("");
   
   Double_t Graph0_fx1017[18] = {
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
   Double_t Graph0_fy1017[18] = {
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
   Double_t Graph0_fex1017[18] = {
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
   Double_t Graph0_fey1017[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1212;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","Graph",100,-3.46425,3.51675);
   Graph_Graph1017->SetMinimum(5.284598e-05);
   Graph_Graph1017->SetMaximum(0.3999191);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   gre->Draw(" 2");
   
   Double_t g_fx3017[18] = {
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
   Double_t g_fy3017[18] = {
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
   Double_t g_felx3017[18] = {
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
   Double_t g_fely3017[18] = {
   4.375735e-05,
   0.0001369595,
   0.001808422,
   0.003151367,
   0.002161468,
   0.004262563,
   0.002698494,
   0.005536047,
   0.005697297,
   0.005551211,
   0.005943215,
   0.004208967,
   0.005293208,
   0.006224689,
   0.002807686,
   0.003781119,
   0.001376262,
   0.0007353556};
   Double_t g_fehx3017[18] = {
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
   Double_t g_fehy3017[18] = {
   2.215423e-05,
   0.000638102,
   0.0006280468,
   0.002298266,
   0.003754861,
   0.00490429,
   0.006336409,
   0.004837597,
   0.005245337,
   0.002914193,
   0.001179185,
   0.002128971,
   0.00268066,
   0.003932973,
   0.006824618,
   0.006856219,
   0.004419591,
   0.0008750621};
   grae = new TGraphAsymmErrors(18,g_fx3017,g_fy3017,g_felx3017,g_fehx3017,g_fely3017,g_fehy3017);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1213;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3017 = new TH1F("Graph_g3017","",100,-3.5065,3.5915);
   Graph_g3017->SetMinimum(6.492009e-06);
   Graph_g3017->SetMaximum(0.3763418);
   Graph_g3017->SetDirectory(0);
   Graph_g3017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3017->SetLineColor(ci);
   Graph_g3017->GetXaxis()->SetLabelFont(42);
   Graph_g3017->GetXaxis()->SetLabelSize(0.035);
   Graph_g3017->GetXaxis()->SetTitleSize(0.035);
   Graph_g3017->GetXaxis()->SetTitleFont(42);
   Graph_g3017->GetYaxis()->SetLabelFont(42);
   Graph_g3017->GetYaxis()->SetLabelSize(0.035);
   Graph_g3017->GetYaxis()->SetTitleSize(0.035);
   Graph_g3017->GetYaxis()->SetTitleOffset(0);
   Graph_g3017->GetYaxis()->SetTitleFont(42);
   Graph_g3017->GetZaxis()->SetLabelFont(42);
   Graph_g3017->GetZaxis()->SetLabelSize(0.035);
   Graph_g3017->GetZaxis()->SetTitleSize(0.035);
   Graph_g3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3017);
   
   grae->Draw(" 2");
   Double_t xAxis29[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_2__46 = new TH1D("hist_eta_2__46","",18, xAxis29);
   hist_eta_2__46->SetBinContent(1,7.259398e-05);
   hist_eta_2__46->SetBinContent(2,0.004043485);
   hist_eta_2__46->SetBinContent(3,0.02668555);
   hist_eta_2__46->SetBinContent(4,0.05941092);
   hist_eta_2__46->SetBinContent(5,0.1079908);
   hist_eta_2__46->SetBinContent(6,0.1605053);
   hist_eta_2__46->SetBinContent(7,0.2192629);
   hist_eta_2__46->SetBinContent(8,0.2688155);
   hist_eta_2__46->SetBinContent(9,0.3154354);
   hist_eta_2__46->SetBinContent(10,0.3447198);
   hist_eta_2__46->SetBinContent(11,0.3628102);
   hist_eta_2__46->SetBinContent(12,0.359529);
   hist_eta_2__46->SetBinContent(13,0.341424);
   hist_eta_2__46->SetBinContent(14,0.3004229);
   hist_eta_2__46->SetBinContent(15,0.253716);
   hist_eta_2__46->SetBinContent(16,0.1895864);
   hist_eta_2__46->SetBinContent(17,0.09954813);
   hist_eta_2__46->SetBinContent(18,0.01636268);
   hist_eta_2__46->SetBinError(1,3.246502e-05);
   hist_eta_2__46->SetBinError(2,0.000171328);
   hist_eta_2__46->SetBinError(3,0.0006224484);
   hist_eta_2__46->SetBinError(4,0.0009287492);
   hist_eta_2__46->SetBinError(5,0.001252157);
   hist_eta_2__46->SetBinError(6,0.001526546);
   hist_eta_2__46->SetBinError(7,0.001784218);
   hist_eta_2__46->SetBinError(8,0.00197557);
   hist_eta_2__46->SetBinError(9,0.002140033);
   hist_eta_2__46->SetBinError(10,0.002237167);
   hist_eta_2__46->SetBinError(11,0.002295118);
   hist_eta_2__46->SetBinError(12,0.002284716);
   hist_eta_2__46->SetBinError(13,0.002226447);
   hist_eta_2__46->SetBinError(14,0.002088487);
   hist_eta_2__46->SetBinError(15,0.001919284);
   hist_eta_2__46->SetBinError(16,0.001659086);
   hist_eta_2__46->SetBinError(17,0.0008500938);
   hist_eta_2__46->SetBinError(18,0.0003446494);
   hist_eta_2__46->SetEntries(244549);

   ci = TColor::GetColor("#cc0000");
   hist_eta_2__46->SetLineColor(ci);
   hist_eta_2__46->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_2__46->SetMarkerColor(ci);
   hist_eta_2__46->SetMarkerStyle(20);
   hist_eta_2__46->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_2__46->GetXaxis()->SetLabelFont(42);
   hist_eta_2__46->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_2__46->GetXaxis()->SetLabelSize(0.045);
   hist_eta_2__46->GetXaxis()->SetTitleSize(0.055);
   hist_eta_2__46->GetXaxis()->SetTitleFont(42);
   hist_eta_2__46->GetYaxis()->SetTitle("Event fraction");
   hist_eta_2__46->GetYaxis()->SetLabelFont(42);
   hist_eta_2__46->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_2__46->GetYaxis()->SetLabelSize(0.045);
   hist_eta_2__46->GetYaxis()->SetTitleSize(0.055);
   hist_eta_2__46->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_2__46->GetYaxis()->SetTitleFont(42);
   hist_eta_2__46->GetZaxis()->SetLabelFont(42);
   hist_eta_2__46->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_2__46->GetZaxis()->SetLabelSize(0.045);
   hist_eta_2__46->GetZaxis()->SetTitleSize(0.035);
   hist_eta_2__46->GetZaxis()->SetTitleFont(42);
   hist_eta_2__46->Draw("same");
      tex = new TLatex(0.65,0.93,"pPb 35 nb^{-1}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
      tex = new TLatex(0.3,0.08,"75 < p_{T}^{ave} < 95 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.05,0.65,0.4,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("hist_eta_0","pPb","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph0","Exp. Uncer.","f");

   ci = 1204;
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
   entry=leg->AddEntry("g","DSSZ","f");

   ci = 1205;
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

   ci = 1206;
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

   ci = 1207;
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
   cpPb->cd();
  
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
   
   TH1D *emptyDist__47 = new TH1D("emptyDist__47","",10,-2.999,2.999);
   emptyDist__47->SetBinContent(7,1000);
   emptyDist__47->SetBinError(7,1000);
   emptyDist__47->SetMinimum(0.0001);
   emptyDist__47->SetMaximum(0.4999);
   emptyDist__47->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDist");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDist__47->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__47);

   ci = TColor::GetColor("#000099");
   emptyDist__47->SetLineColor(ci);
   emptyDist__47->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__47->GetXaxis()->CenterTitle(true);
   emptyDist__47->GetXaxis()->SetLabelFont(43);
   emptyDist__47->GetXaxis()->SetLabelSize(33);
   emptyDist__47->GetXaxis()->SetTitleSize(33);
   emptyDist__47->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__47->GetXaxis()->SetTitleFont(43);
   emptyDist__47->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__47->GetYaxis()->CenterTitle(true);
   emptyDist__47->GetYaxis()->SetNdivisions(505);
   emptyDist__47->GetYaxis()->SetLabelFont(43);
   emptyDist__47->GetYaxis()->SetLabelSize(33);
   emptyDist__47->GetYaxis()->SetTitleSize(33);
   emptyDist__47->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__47->GetYaxis()->SetTitleFont(43);
   emptyDist__47->GetZaxis()->SetLabelFont(42);
   emptyDist__47->GetZaxis()->SetLabelSize(0.035);
   emptyDist__47->GetZaxis()->SetTitleSize(0.035);
   emptyDist__47->GetZaxis()->SetTitleFont(42);
   emptyDist__47->Draw("");
   
   Double_t Graph0_fx1018[18] = {
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
   Double_t Graph0_fy1018[18] = {
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
   Double_t Graph0_fex1018[18] = {
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
   Double_t Graph0_fey1018[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1224;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","Graph",100,-3.46425,3.51675);
   Graph_Graph1018->SetMinimum(0);
   Graph_Graph1018->SetMaximum(0.5028958);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
   gre->Draw(" 2");
   
   Double_t g_fx3018[18] = {
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
   Double_t g_fy3018[18] = {
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
   Double_t g_felx3018[18] = {
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
   Double_t g_fely3018[18] = {
   0,
   8.158873e-06,
   0.0003567171,
   0.0003382987,
   0.001673421,
   0.002467019,
   0.0015461,
   0.004067234,
   0.003844639,
   0.00315976,
   0.003267054,
   0.0008049543,
   0.001621901,
   0.005712652,
   0.004931221,
   0.003939414,
   0.001955102,
   0.0003082647};
   Double_t g_fehx3018[18] = {
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
   Double_t g_fehy3018[18] = {
   0,
   7.718576e-06,
   0.0002928483,
   0.0006482619,
   0.0003710182,
   0.001562132,
   0.003785802,
   0.003086968,
   0.004222531,
   0.004405576,
   0.00294828,
   0.003573142,
   0.004578117,
   0.001390182,
   0.0036302,
   0.003946331,
   0.00174922,
   0.000134822};
   grae = new TGraphAsymmErrors(18,g_fx3018,g_fy3018,g_felx3018,g_fehx3018,g_fely3018,g_fehy3018);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1225;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3018 = new TH1F("Graph_g3018","",100,-3.5065,3.5915);
   Graph_g3018->SetMinimum(-0.04348478);
   Graph_g3018->SetMaximum(0.4782917);
   Graph_g3018->SetDirectory(0);
   Graph_g3018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3018->SetLineColor(ci);
   Graph_g3018->GetXaxis()->SetLabelFont(42);
   Graph_g3018->GetXaxis()->SetLabelSize(0.035);
   Graph_g3018->GetXaxis()->SetTitleSize(0.035);
   Graph_g3018->GetXaxis()->SetTitleFont(42);
   Graph_g3018->GetYaxis()->SetLabelFont(42);
   Graph_g3018->GetYaxis()->SetLabelSize(0.035);
   Graph_g3018->GetYaxis()->SetTitleSize(0.035);
   Graph_g3018->GetYaxis()->SetTitleOffset(0);
   Graph_g3018->GetYaxis()->SetTitleFont(42);
   Graph_g3018->GetZaxis()->SetLabelFont(42);
   Graph_g3018->GetZaxis()->SetLabelSize(0.035);
   Graph_g3018->GetZaxis()->SetTitleSize(0.035);
   Graph_g3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3018);
   
   grae->Draw(" 2");
   Double_t xAxis30[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_5__48 = new TH1D("hist_eta_5__48","",18, xAxis30);
   hist_eta_5__48->SetBinContent(2,5.787142e-05);
   hist_eta_5__48->SetBinContent(3,0.0008680713);
   hist_eta_5__48->SetBinContent(4,0.008044127);
   hist_eta_5__48->SetBinContent(5,0.03165567);
   hist_eta_5__48->SetBinContent(6,0.08773307);
   hist_eta_5__48->SetBinContent(7,0.1614613);
   hist_eta_5__48->SetBinContent(8,0.2586274);
   hist_eta_5__48->SetBinContent(9,0.3426567);
   hist_eta_5__48->SetBinContent(10,0.411813);
   hist_eta_5__48->SetBinContent(11,0.4454363);
   hist_eta_5__48->SetBinContent(12,0.4571263);
   hist_eta_5__48->SetBinContent(13,0.4134334);
   hist_eta_5__48->SetBinContent(14,0.3554463);
   hist_eta_5__48->SetBinContent(15,0.2747156);
   hist_eta_5__48->SetBinContent(16,0.1722832);
   hist_eta_5__48->SetBinContent(17,0.0609386);
   hist_eta_5__48->SetBinContent(18,0.003501221);
   hist_eta_5__48->SetBinError(2,4.092127e-05);
   hist_eta_5__48->SetBinError(3,0.000224135);
   hist_eta_5__48->SetBinError(4,0.000682294);
   hist_eta_5__48->SetBinError(5,0.001353499);
   hist_eta_5__48->SetBinError(6,0.002253273);
   hist_eta_5__48->SetBinError(7,0.003056794);
   hist_eta_5__48->SetBinError(8,0.003868738);
   hist_eta_5__48->SetBinError(9,0.004453092);
   hist_eta_5__48->SetBinError(10,0.004881824);
   hist_eta_5__48->SetBinError(11,0.005077207);
   hist_eta_5__48->SetBinError(12,0.005143399);
   hist_eta_5__48->SetBinError(13,0.004891419);
   hist_eta_5__48->SetBinError(14,0.004535436);
   hist_eta_5__48->SetBinError(15,0.003987253);
   hist_eta_5__48->SetBinError(16,0.003157574);
   hist_eta_5__48->SetBinError(17,0.001327894);
   hist_eta_5__48->SetBinError(18,0.0003182928);
   hist_eta_5__48->SetEntries(61366);

   ci = TColor::GetColor("#cc0000");
   hist_eta_5__48->SetLineColor(ci);
   hist_eta_5__48->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_5__48->SetMarkerColor(ci);
   hist_eta_5__48->SetMarkerStyle(20);
   hist_eta_5__48->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_5__48->GetXaxis()->SetLabelFont(42);
   hist_eta_5__48->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_5__48->GetXaxis()->SetLabelSize(0.045);
   hist_eta_5__48->GetXaxis()->SetTitleSize(0.055);
   hist_eta_5__48->GetXaxis()->SetTitleFont(42);
   hist_eta_5__48->GetYaxis()->SetTitle("Event fraction");
   hist_eta_5__48->GetYaxis()->SetLabelFont(42);
   hist_eta_5__48->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_5__48->GetYaxis()->SetLabelSize(0.045);
   hist_eta_5__48->GetYaxis()->SetTitleSize(0.055);
   hist_eta_5__48->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_5__48->GetYaxis()->SetTitleFont(42);
   hist_eta_5__48->GetZaxis()->SetLabelFont(42);
   hist_eta_5__48->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_5__48->GetZaxis()->SetLabelSize(0.045);
   hist_eta_5__48->GetZaxis()->SetTitleSize(0.035);
   hist_eta_5__48->GetZaxis()->SetTitleFont(42);
   hist_eta_5__48->Draw("same");
      tex = new TLatex(0.35,0.29,"p_{T}^{ave} > 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_2_1->Modified();
   cpPb->cd();
   cpPb->Modified();
   cpPb->cd();
   cpPb->SetSelected(cpPb);
}
