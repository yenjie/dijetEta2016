void pPbDistsCTppjecv1()
{
//=========Macro generated from canvas: cpPb/
//=========  (Wed Nov 15 22:07:00 2017) by ROOT version6.10/08

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
   
   TH1D *emptyDist__49 = new TH1D("emptyDist__49","",10,-2.999,2.999);
   emptyDist__49->SetBinContent(7,1000);
   emptyDist__49->SetBinError(7,1000);
   emptyDist__49->SetMinimum(0.0001);
   emptyDist__49->SetMaximum(0.4999);
   emptyDist__49->SetEntries(1);
   
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
   emptyDist__49->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   emptyDist__49->SetLineColor(ci);
   emptyDist__49->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__49->GetXaxis()->CenterTitle(true);
   emptyDist__49->GetXaxis()->SetLabelFont(43);
   emptyDist__49->GetXaxis()->SetLabelSize(33);
   emptyDist__49->GetXaxis()->SetTitleSize(33);
   emptyDist__49->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__49->GetXaxis()->SetTitleFont(43);
   emptyDist__49->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__49->GetYaxis()->CenterTitle(true);
   emptyDist__49->GetYaxis()->SetNdivisions(505);
   emptyDist__49->GetYaxis()->SetLabelFont(43);
   emptyDist__49->GetYaxis()->SetLabelSize(33);
   emptyDist__49->GetYaxis()->SetTitleSize(33);
   emptyDist__49->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__49->GetYaxis()->SetTitleFont(43);
   emptyDist__49->GetZaxis()->SetLabelFont(42);
   emptyDist__49->GetZaxis()->SetLabelSize(0.035);
   emptyDist__49->GetZaxis()->SetTitleSize(0.035);
   emptyDist__49->GetZaxis()->SetTitleFont(42);
   emptyDist__49->Draw("");
   
   Double_t Graph0_fx1019[18] = {
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
   Double_t Graph0_fy1019[18] = {
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
   Double_t Graph0_fex1019[18] = {
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
   Double_t Graph0_fey1019[18] = {
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
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1228;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph10131019 = new TH1F("Graph_Graph_Graph10131019","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10131019->SetMinimum(0.003351903);
   Graph_Graph_Graph10131019->SetMaximum(0.3486352);
   Graph_Graph_Graph10131019->SetDirectory(0);
   Graph_Graph_Graph10131019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10131019->SetLineColor(ci);
   Graph_Graph_Graph10131019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10131019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10131019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10131019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10131019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10131019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10131019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10131019->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10131019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10131019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10131019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10131019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10131019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10131019);
   
   gre->Draw(" 2");
   
   Double_t g_fx3019[18] = {
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
   Double_t g_fy3019[18] = {
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
   Double_t g_felx3019[18] = {
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
   Double_t g_fely3019[18] = {
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
   Double_t g_fehx3019[18] = {
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
   Double_t g_fehy3019[18] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,g_fx3019,g_fy3019,g_felx3019,g_fehx3019,g_fely3019,g_fehy3019);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1229;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3019 = new TH1F("Graph_g3019","",100,-3.5065,3.5915);
   Graph_g3019->SetMinimum(0.005267563);
   Graph_g3019->SetMaximum(0.3519665);
   Graph_g3019->SetDirectory(0);
   Graph_g3019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3019->SetLineColor(ci);
   Graph_g3019->GetXaxis()->SetLabelFont(42);
   Graph_g3019->GetXaxis()->SetLabelSize(0.035);
   Graph_g3019->GetXaxis()->SetTitleSize(0.035);
   Graph_g3019->GetXaxis()->SetTitleFont(42);
   Graph_g3019->GetYaxis()->SetLabelFont(42);
   Graph_g3019->GetYaxis()->SetLabelSize(0.035);
   Graph_g3019->GetYaxis()->SetTitleSize(0.035);
   Graph_g3019->GetYaxis()->SetTitleOffset(0);
   Graph_g3019->GetYaxis()->SetTitleFont(42);
   Graph_g3019->GetZaxis()->SetLabelFont(42);
   Graph_g3019->GetZaxis()->SetLabelSize(0.035);
   Graph_g3019->GetZaxis()->SetTitleSize(0.035);
   Graph_g3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3019);
   
   grae->Draw(" 2");
   Double_t xAxis31[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_0__50 = new TH1D("hist_eta_0__50","",18, xAxis31);
   hist_eta_0__50->SetBinContent(0,3.298044e-05);
   hist_eta_0__50->SetBinContent(1,0.00351271);
   hist_eta_0__50->SetBinContent(2,0.02277407);
   hist_eta_0__50->SetBinContent(3,0.0714251);
   hist_eta_0__50->SetBinContent(4,0.1053813);
   hist_eta_0__50->SetBinContent(5,0.1537396);
   hist_eta_0__50->SetBinContent(6,0.190506);
   hist_eta_0__50->SetBinContent(7,0.2360541);
   hist_eta_0__50->SetBinContent(8,0.2715325);
   hist_eta_0__50->SetBinContent(9,0.3026785);
   hist_eta_0__50->SetBinContent(10,0.317549);
   hist_eta_0__50->SetBinContent(11,0.3153243);
   hist_eta_0__50->SetBinContent(12,0.3148559);
   hist_eta_0__50->SetBinContent(13,0.2949505);
   hist_eta_0__50->SetBinContent(14,0.2672001);
   hist_eta_0__50->SetBinContent(15,0.2253989);
   hist_eta_0__50->SetBinContent(16,0.1756355);
   hist_eta_0__50->SetBinContent(17,0.1059082);
   hist_eta_0__50->SetBinContent(18,0.0235937);
   hist_eta_0__50->SetBinError(0,3.298044e-05);
   hist_eta_0__50->SetBinError(1,0.0006413301);
   hist_eta_0__50->SetBinError(2,0.001154691);
   hist_eta_0__50->SetBinError(3,0.002891918);
   hist_eta_0__50->SetBinError(4,0.00351271);
   hist_eta_0__50->SetBinError(5,0.004242808);
   hist_eta_0__50->SetBinError(6,0.004722966);
   hist_eta_0__50->SetBinError(7,0.005257343);
   hist_eta_0__50->SetBinError(8,0.005638601);
   hist_eta_0__50->SetBinError(9,0.005953211);
   hist_eta_0__50->SetBinError(10,0.006097697);
   hist_eta_0__50->SetBinError(11,0.0060763);
   hist_eta_0__50->SetBinError(12,0.006071786);
   hist_eta_0__50->SetBinError(13,0.005876721);
   hist_eta_0__50->SetBinError(14,0.005593438);
   hist_eta_0__50->SetBinError(15,0.005137317);
   hist_eta_0__50->SetBinError(16,0.004534889);
   hist_eta_0__50->SetBinError(17,0.002490063);
   hist_eta_0__50->SetBinError(18,0.001175286);
   hist_eta_0__50->SetEntries(30340);

   ci = TColor::GetColor("#33cc99");
   hist_eta_0__50->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   hist_eta_0__50->SetLineColor(ci);
   hist_eta_0__50->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_0__50->SetMarkerColor(ci);
   hist_eta_0__50->SetMarkerStyle(20);
   hist_eta_0__50->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_0__50->GetXaxis()->SetLabelFont(42);
   hist_eta_0__50->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_0__50->GetXaxis()->SetLabelSize(0.045);
   hist_eta_0__50->GetXaxis()->SetTitleSize(0.055);
   hist_eta_0__50->GetXaxis()->SetTitleFont(42);
   hist_eta_0__50->GetYaxis()->SetTitle("Event fraction");
   hist_eta_0__50->GetYaxis()->SetLabelFont(42);
   hist_eta_0__50->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_0__50->GetYaxis()->SetLabelSize(0.045);
   hist_eta_0__50->GetYaxis()->SetTitleSize(0.055);
   hist_eta_0__50->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_0__50->GetYaxis()->SetTitleFont(42);
   hist_eta_0__50->GetZaxis()->SetLabelFont(42);
   hist_eta_0__50->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_0__50->GetZaxis()->SetLabelSize(0.045);
   hist_eta_0__50->GetZaxis()->SetTitleSize(0.035);
   hist_eta_0__50->GetZaxis()->SetTitleFont(42);
   hist_eta_0__50->Draw("same");
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
   
   TH1D *emptyDist__51 = new TH1D("emptyDist__51","",10,-2.999,2.999);
   emptyDist__51->SetBinContent(7,1000);
   emptyDist__51->SetBinError(7,1000);
   emptyDist__51->SetMinimum(0.0001);
   emptyDist__51->SetMaximum(0.4999);
   emptyDist__51->SetEntries(1);
   
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
   emptyDist__51->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__51);

   ci = TColor::GetColor("#000099");
   emptyDist__51->SetLineColor(ci);
   emptyDist__51->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__51->GetXaxis()->CenterTitle(true);
   emptyDist__51->GetXaxis()->SetLabelFont(43);
   emptyDist__51->GetXaxis()->SetLabelSize(33);
   emptyDist__51->GetXaxis()->SetTitleSize(33);
   emptyDist__51->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__51->GetXaxis()->SetTitleFont(43);
   emptyDist__51->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__51->GetYaxis()->CenterTitle(true);
   emptyDist__51->GetYaxis()->SetNdivisions(505);
   emptyDist__51->GetYaxis()->SetLabelFont(43);
   emptyDist__51->GetYaxis()->SetLabelSize(33);
   emptyDist__51->GetYaxis()->SetTitleSize(33);
   emptyDist__51->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__51->GetYaxis()->SetTitleFont(43);
   emptyDist__51->GetZaxis()->SetLabelFont(42);
   emptyDist__51->GetZaxis()->SetLabelSize(0.035);
   emptyDist__51->GetZaxis()->SetTitleSize(0.035);
   emptyDist__51->GetZaxis()->SetTitleFont(42);
   emptyDist__51->Draw("");
   
   Double_t Graph0_fx1020[18] = {
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
   Double_t Graph0_fy1020[18] = {
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
   Double_t Graph0_fex1020[18] = {
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
   Double_t Graph0_fey1020[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1240;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph10141020 = new TH1F("Graph_Graph_Graph10141020","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10141020->SetMinimum(2.750228e-05);
   Graph_Graph_Graph10141020->SetMaximum(0.4202606);
   Graph_Graph_Graph10141020->SetDirectory(0);
   Graph_Graph_Graph10141020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10141020->SetLineColor(ci);
   Graph_Graph_Graph10141020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10141020->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10141020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10141020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10141020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10141020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10141020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10141020->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10141020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10141020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10141020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10141020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10141020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10141020);
   
   gre->Draw(" 2");
   
   Double_t g_fx3020[18] = {
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
   Double_t g_fy3020[18] = {
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
   Double_t g_felx3020[18] = {
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
   Double_t g_fely3020[18] = {
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
   Double_t g_fehx3020[18] = {
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
   Double_t g_fehy3020[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3020,g_fy3020,g_felx3020,g_fehx3020,g_fely3020,g_fehy3020);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1241;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3020 = new TH1F("Graph_g3020","",100,-3.5065,3.5915);
   Graph_g3020->SetMinimum(-0.0359796);
   Graph_g3020->SetMaximum(0.3957653);
   Graph_g3020->SetDirectory(0);
   Graph_g3020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3020->SetLineColor(ci);
   Graph_g3020->GetXaxis()->SetLabelFont(42);
   Graph_g3020->GetXaxis()->SetLabelSize(0.035);
   Graph_g3020->GetXaxis()->SetTitleSize(0.035);
   Graph_g3020->GetXaxis()->SetTitleFont(42);
   Graph_g3020->GetYaxis()->SetLabelFont(42);
   Graph_g3020->GetYaxis()->SetLabelSize(0.035);
   Graph_g3020->GetYaxis()->SetTitleSize(0.035);
   Graph_g3020->GetYaxis()->SetTitleOffset(0);
   Graph_g3020->GetYaxis()->SetTitleFont(42);
   Graph_g3020->GetZaxis()->SetLabelFont(42);
   Graph_g3020->GetZaxis()->SetLabelSize(0.035);
   Graph_g3020->GetZaxis()->SetTitleSize(0.035);
   Graph_g3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3020);
   
   grae->Draw(" 2");
   Double_t xAxis32[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_3__52 = new TH1D("hist_eta_3__52","",18, xAxis32);
   hist_eta_3__52->SetBinContent(1,1.676376e-05);
   hist_eta_3__52->SetBinContent(2,0.001357864);
   hist_eta_3__52->SetBinContent(3,0.01371275);
   hist_eta_3__52->SetBinContent(4,0.042647);
   hist_eta_3__52->SetBinContent(5,0.08816061);
   hist_eta_3__52->SetBinContent(6,0.1460291);
   hist_eta_3__52->SetBinContent(7,0.2090776);
   hist_eta_3__52->SetBinContent(8,0.2706006);
   hist_eta_3__52->SetBinContent(9,0.3220486);
   hist_eta_3__52->SetBinContent(10,0.3549894);
   hist_eta_3__52->SetBinContent(11,0.3824316);
   hist_eta_3__52->SetBinContent(12,0.3759105);
   hist_eta_3__52->SetBinContent(13,0.358275);
   hist_eta_3__52->SetBinContent(14,0.3120909);
   hist_eta_3__52->SetBinContent(15,0.2598718);
   hist_eta_3__52->SetBinContent(16,0.1987846);
   hist_eta_3__52->SetBinContent(17,0.09324841);
   hist_eta_3__52->SetBinContent(18,0.01321822);
   hist_eta_3__52->SetBinError(1,1.676376e-05);
   hist_eta_3__52->SetBinError(2,0.0001066839);
   hist_eta_3__52->SetBinError(3,0.0004794552);
   hist_eta_3__52->SetBinError(4,0.0008455318);
   hist_eta_3__52->SetBinError(5,0.00121569);
   hist_eta_3__52->SetBinError(6,0.001564607);
   hist_eta_3__52->SetBinError(7,0.001872145);
   hist_eta_3__52->SetBinError(8,0.002129855);
   hist_eta_3__52->SetBinError(9,0.00232352);
   hist_eta_3__52->SetBinError(10,0.002439458);
   hist_eta_3__52->SetBinError(11,0.002531994);
   hist_eta_3__52->SetBinError(12,0.002510313);
   hist_eta_3__52->SetBinError(13,0.002450722);
   hist_eta_3__52->SetBinError(14,0.002287316);
   hist_eta_3__52->SetBinError(15,0.002087206);
   hist_eta_3__52->SetBinError(16,0.00182548);
   hist_eta_3__52->SetBinError(17,0.0008840797);
   hist_eta_3__52->SetBinError(18,0.0003328567);
   hist_eta_3__52->SetEntries(211802);

   ci = TColor::GetColor("#cc0000");
   hist_eta_3__52->SetLineColor(ci);
   hist_eta_3__52->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_3__52->SetMarkerColor(ci);
   hist_eta_3__52->SetMarkerStyle(20);
   hist_eta_3__52->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_3__52->GetXaxis()->SetLabelFont(42);
   hist_eta_3__52->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_3__52->GetXaxis()->SetLabelSize(0.045);
   hist_eta_3__52->GetXaxis()->SetTitleSize(0.055);
   hist_eta_3__52->GetXaxis()->SetTitleFont(42);
   hist_eta_3__52->GetYaxis()->SetTitle("Event fraction");
   hist_eta_3__52->GetYaxis()->SetLabelFont(42);
   hist_eta_3__52->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_3__52->GetYaxis()->SetLabelSize(0.045);
   hist_eta_3__52->GetYaxis()->SetTitleSize(0.055);
   hist_eta_3__52->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_3__52->GetYaxis()->SetTitleFont(42);
   hist_eta_3__52->GetZaxis()->SetLabelFont(42);
   hist_eta_3__52->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_3__52->GetZaxis()->SetLabelSize(0.045);
   hist_eta_3__52->GetZaxis()->SetTitleSize(0.035);
   hist_eta_3__52->GetZaxis()->SetTitleFont(42);
   hist_eta_3__52->Draw("same");
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
   
   TH1D *emptyDist__53 = new TH1D("emptyDist__53","",10,-2.999,2.999);
   emptyDist__53->SetBinContent(7,1000);
   emptyDist__53->SetBinError(7,1000);
   emptyDist__53->SetMinimum(0.0001);
   emptyDist__53->SetMaximum(0.4999);
   emptyDist__53->SetEntries(1);
   
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
   emptyDist__53->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__53);

   ci = TColor::GetColor("#000099");
   emptyDist__53->SetLineColor(ci);
   emptyDist__53->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__53->GetXaxis()->CenterTitle(true);
   emptyDist__53->GetXaxis()->SetLabelFont(43);
   emptyDist__53->GetXaxis()->SetLabelSize(33);
   emptyDist__53->GetXaxis()->SetTitleSize(33);
   emptyDist__53->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__53->GetXaxis()->SetTitleFont(43);
   emptyDist__53->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__53->GetYaxis()->CenterTitle(true);
   emptyDist__53->GetYaxis()->SetNdivisions(505);
   emptyDist__53->GetYaxis()->SetLabelFont(43);
   emptyDist__53->GetYaxis()->SetLabelSize(33);
   emptyDist__53->GetYaxis()->SetTitleSize(33);
   emptyDist__53->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__53->GetYaxis()->SetTitleFont(43);
   emptyDist__53->GetZaxis()->SetLabelFont(42);
   emptyDist__53->GetZaxis()->SetLabelSize(0.035);
   emptyDist__53->GetZaxis()->SetTitleSize(0.035);
   emptyDist__53->GetZaxis()->SetTitleFont(42);
   emptyDist__53->Draw("");
   
   Double_t Graph0_fx1021[18] = {
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
   Double_t Graph0_fy1021[18] = {
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
   Double_t Graph0_fex1021[18] = {
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
   Double_t Graph0_fey1021[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1232;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph10151021 = new TH1F("Graph_Graph_Graph10151021","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10151021->SetMinimum(0.0003802179);
   Graph_Graph_Graph10151021->SetMaximum(0.3786405);
   Graph_Graph_Graph10151021->SetDirectory(0);
   Graph_Graph_Graph10151021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10151021->SetLineColor(ci);
   Graph_Graph_Graph10151021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10151021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10151021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10151021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10151021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10151021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10151021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10151021->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10151021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10151021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10151021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10151021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10151021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10151021);
   
   gre->Draw(" 2");
   
   Double_t g_fx3021[18] = {
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
   Double_t g_fy3021[18] = {
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
   Double_t g_felx3021[18] = {
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
   Double_t g_fely3021[18] = {
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
   Double_t g_fehx3021[18] = {
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
   Double_t g_fehy3021[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3021,g_fy3021,g_felx3021,g_fehx3021,g_fely3021,g_fehy3021);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1233;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3021 = new TH1F("Graph_g3021","",100,-3.5065,3.5915);
   Graph_g3021->SetMinimum(0.0006429583);
   Graph_g3021->SetMaximum(0.3547308);
   Graph_g3021->SetDirectory(0);
   Graph_g3021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3021->SetLineColor(ci);
   Graph_g3021->GetXaxis()->SetLabelFont(42);
   Graph_g3021->GetXaxis()->SetLabelSize(0.035);
   Graph_g3021->GetXaxis()->SetTitleSize(0.035);
   Graph_g3021->GetXaxis()->SetTitleFont(42);
   Graph_g3021->GetYaxis()->SetLabelFont(42);
   Graph_g3021->GetYaxis()->SetLabelSize(0.035);
   Graph_g3021->GetYaxis()->SetTitleSize(0.035);
   Graph_g3021->GetYaxis()->SetTitleOffset(0);
   Graph_g3021->GetYaxis()->SetTitleFont(42);
   Graph_g3021->GetZaxis()->SetLabelFont(42);
   Graph_g3021->GetZaxis()->SetLabelSize(0.035);
   Graph_g3021->GetZaxis()->SetTitleSize(0.035);
   Graph_g3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3021);
   
   grae->Draw(" 2");
   Double_t xAxis33[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_1__54 = new TH1D("hist_eta_1__54","",18, xAxis33);
   hist_eta_1__54->SetBinContent(1,0.000437668);
   hist_eta_1__54->SetBinContent(2,0.01148037);
   hist_eta_1__54->SetBinContent(3,0.04501248);
   hist_eta_1__54->SetBinContent(4,0.08140626);
   hist_eta_1__54->SetBinContent(5,0.1304251);
   hist_eta_1__54->SetBinContent(6,0.1749999);
   hist_eta_1__54->SetBinContent(7,0.222672);
   hist_eta_1__54->SetBinContent(8,0.2718255);
   hist_eta_1__54->SetBinContent(9,0.3053913);
   hist_eta_1__54->SetBinContent(10,0.3357587);
   hist_eta_1__54->SetBinContent(11,0.3441418);
   hist_eta_1__54->SetBinContent(12,0.3385531);
   hist_eta_1__54->SetBinContent(13,0.321989);
   hist_eta_1__54->SetBinContent(14,0.2864369);
   hist_eta_1__54->SetBinContent(15,0.2393371);
   hist_eta_1__54->SetBinContent(16,0.1875239);
   hist_eta_1__54->SetBinContent(17,0.1017242);
   hist_eta_1__54->SetBinContent(18,0.01898806);
   hist_eta_1__54->SetBinError(1,0.0001213873);
   hist_eta_1__54->SetBinError(2,0.0004396061);
   hist_eta_1__54->SetBinError(3,0.001231026);
   hist_eta_1__54->SetBinError(4,0.001655502);
   hist_eta_1__54->SetBinError(5,0.002095469);
   hist_eta_1__54->SetBinError(6,0.002427279);
   hist_eta_1__54->SetBinError(7,0.002738001);
   hist_eta_1__54->SetBinError(8,0.003025143);
   hist_eta_1__54->SetBinError(9,0.003206484);
   hist_eta_1__54->SetBinError(10,0.003362129);
   hist_eta_1__54->SetBinError(11,0.003403842);
   hist_eta_1__54->SetBinError(12,0.003376091);
   hist_eta_1__54->SetBinError(13,0.003292466);
   hist_eta_1__54->SetBinError(14,0.003105383);
   hist_eta_1__54->SetBinError(15,0.00283861);
   hist_eta_1__54->SetBinError(16,0.002512633);
   hist_eta_1__54->SetBinError(17,0.001308573);
   hist_eta_1__54->SetBinError(18,0.0005653613);
   hist_eta_1__54->SetEntries(105472);

   ci = TColor::GetColor("#cc0000");
   hist_eta_1__54->SetLineColor(ci);
   hist_eta_1__54->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_1__54->SetMarkerColor(ci);
   hist_eta_1__54->SetMarkerStyle(20);
   hist_eta_1__54->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_1__54->GetXaxis()->SetLabelFont(42);
   hist_eta_1__54->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_1__54->GetXaxis()->SetLabelSize(0.045);
   hist_eta_1__54->GetXaxis()->SetTitleSize(0.055);
   hist_eta_1__54->GetXaxis()->SetTitleFont(42);
   hist_eta_1__54->GetYaxis()->SetTitle("Event fraction");
   hist_eta_1__54->GetYaxis()->SetLabelFont(42);
   hist_eta_1__54->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_1__54->GetYaxis()->SetLabelSize(0.045);
   hist_eta_1__54->GetYaxis()->SetTitleSize(0.055);
   hist_eta_1__54->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_1__54->GetYaxis()->SetTitleFont(42);
   hist_eta_1__54->GetZaxis()->SetLabelFont(42);
   hist_eta_1__54->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_1__54->GetZaxis()->SetLabelSize(0.045);
   hist_eta_1__54->GetZaxis()->SetTitleSize(0.035);
   hist_eta_1__54->GetZaxis()->SetTitleFont(42);
   hist_eta_1__54->Draw("same");
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
   
   TH1D *emptyDist__55 = new TH1D("emptyDist__55","",10,-2.999,2.999);
   emptyDist__55->SetBinContent(7,1000);
   emptyDist__55->SetBinError(7,1000);
   emptyDist__55->SetMinimum(0.0001);
   emptyDist__55->SetMaximum(0.4999);
   emptyDist__55->SetEntries(1);
   
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
   emptyDist__55->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__55);

   ci = TColor::GetColor("#000099");
   emptyDist__55->SetLineColor(ci);
   emptyDist__55->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__55->GetXaxis()->CenterTitle(true);
   emptyDist__55->GetXaxis()->SetLabelFont(43);
   emptyDist__55->GetXaxis()->SetLabelSize(33);
   emptyDist__55->GetXaxis()->SetTitleSize(33);
   emptyDist__55->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__55->GetXaxis()->SetTitleFont(43);
   emptyDist__55->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__55->GetYaxis()->CenterTitle(true);
   emptyDist__55->GetYaxis()->SetNdivisions(505);
   emptyDist__55->GetYaxis()->SetLabelFont(43);
   emptyDist__55->GetYaxis()->SetLabelSize(33);
   emptyDist__55->GetYaxis()->SetTitleSize(33);
   emptyDist__55->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__55->GetYaxis()->SetTitleFont(43);
   emptyDist__55->GetZaxis()->SetLabelFont(42);
   emptyDist__55->GetZaxis()->SetLabelSize(0.035);
   emptyDist__55->GetZaxis()->SetTitleSize(0.035);
   emptyDist__55->GetZaxis()->SetTitleFont(42);
   emptyDist__55->Draw("");
   
   Double_t Graph0_fx1022[18] = {
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
   Double_t Graph0_fy1022[18] = {
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
   Double_t Graph0_fex1022[18] = {
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
   Double_t Graph0_fey1022[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1244;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph10161022 = new TH1F("Graph_Graph_Graph10161022","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10161022->SetMinimum(0);
   Graph_Graph_Graph10161022->SetMaximum(0.4428621);
   Graph_Graph_Graph10161022->SetDirectory(0);
   Graph_Graph_Graph10161022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10161022->SetLineColor(ci);
   Graph_Graph_Graph10161022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10161022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10161022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10161022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10161022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10161022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10161022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10161022->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10161022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10161022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10161022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10161022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10161022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10161022);
   
   gre->Draw(" 2");
   
   Double_t g_fx3022[18] = {
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
   Double_t g_fy3022[18] = {
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
   Double_t g_felx3022[18] = {
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
   Double_t g_fely3022[18] = {
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
   Double_t g_fehx3022[18] = {
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
   Double_t g_fehy3022[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3022,g_fy3022,g_felx3022,g_fehx3022,g_fely3022,g_fehy3022);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1245;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3022 = new TH1F("Graph_g3022","",100,-3.5065,3.5915);
   Graph_g3022->SetMinimum(-0.03819636);
   Graph_g3022->SetMaximum(0.42016);
   Graph_g3022->SetDirectory(0);
   Graph_g3022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3022->SetLineColor(ci);
   Graph_g3022->GetXaxis()->SetLabelFont(42);
   Graph_g3022->GetXaxis()->SetLabelSize(0.035);
   Graph_g3022->GetXaxis()->SetTitleSize(0.035);
   Graph_g3022->GetXaxis()->SetTitleFont(42);
   Graph_g3022->GetYaxis()->SetLabelFont(42);
   Graph_g3022->GetYaxis()->SetLabelSize(0.035);
   Graph_g3022->GetYaxis()->SetTitleSize(0.035);
   Graph_g3022->GetYaxis()->SetTitleOffset(0);
   Graph_g3022->GetYaxis()->SetTitleFont(42);
   Graph_g3022->GetZaxis()->SetLabelFont(42);
   Graph_g3022->GetZaxis()->SetLabelSize(0.035);
   Graph_g3022->GetZaxis()->SetTitleSize(0.035);
   Graph_g3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3022);
   
   grae->Draw(" 2");
   Double_t xAxis34[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_4__56 = new TH1D("hist_eta_4__56","",18, xAxis34);
   hist_eta_4__56->SetBinContent(2,0.0003419877);
   hist_eta_4__56->SetBinContent(3,0.005405612);
   hist_eta_4__56->SetBinContent(4,0.02594694);
   hist_eta_4__56->SetBinContent(5,0.06806659);
   hist_eta_4__56->SetBinContent(6,0.1283667);
   hist_eta_4__56->SetBinContent(7,0.1967202);
   hist_eta_4__56->SetBinContent(8,0.2624259);
   hist_eta_4__56->SetBinContent(9,0.3262783);
   hist_eta_4__56->SetBinContent(10,0.374289);
   hist_eta_4__56->SetBinContent(11,0.4017804);
   hist_eta_4__56->SetBinContent(12,0.3989342);
   hist_eta_4__56->SetBinContent(13,0.3776206);
   hist_eta_4__56->SetBinContent(14,0.3288157);
   hist_eta_4__56->SetBinContent(15,0.2688906);
   hist_eta_4__56->SetBinContent(16,0.1947565);
   hist_eta_4__56->SetBinContent(17,0.08667734);
   hist_eta_4__56->SetBinContent(18,0.008979936);
   hist_eta_4__56->SetBinError(2,6.142281e-05);
   hist_eta_4__56->SetBinError(3,0.0003453519);
   hist_eta_4__56->SetBinError(4,0.0007566281);
   hist_eta_4__56->SetBinError(5,0.00122548);
   hist_eta_4__56->SetBinError(6,0.001682929);
   hist_eta_4__56->SetBinError(7,0.002083358);
   hist_eta_4__56->SetBinError(8,0.002406261);
   hist_eta_4__56->SetBinError(9,0.002683079);
   hist_eta_4__56->SetBinError(10,0.00287371);
   hist_eta_4__56->SetBinError(11,0.002977377);
   hist_eta_4__56->SetBinError(12,0.002966812);
   hist_eta_4__56->SetBinError(13,0.002886471);
   hist_eta_4__56->SetBinError(14,0.002693492);
   hist_eta_4__56->SetBinError(15,0.002435719);
   hist_eta_4__56->SetBinError(16,0.002072934);
   hist_eta_4__56->SetBinError(17,0.0009778612);
   hist_eta_4__56->SetBinError(18,0.0003147466);
   hist_eta_4__56->SetEntries(160929);

   ci = TColor::GetColor("#cc0000");
   hist_eta_4__56->SetLineColor(ci);
   hist_eta_4__56->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_4__56->SetMarkerColor(ci);
   hist_eta_4__56->SetMarkerStyle(20);
   hist_eta_4__56->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_4__56->GetXaxis()->SetLabelFont(42);
   hist_eta_4__56->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_4__56->GetXaxis()->SetLabelSize(0.045);
   hist_eta_4__56->GetXaxis()->SetTitleSize(0.055);
   hist_eta_4__56->GetXaxis()->SetTitleFont(42);
   hist_eta_4__56->GetYaxis()->SetTitle("Event fraction");
   hist_eta_4__56->GetYaxis()->SetLabelFont(42);
   hist_eta_4__56->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_4__56->GetYaxis()->SetLabelSize(0.045);
   hist_eta_4__56->GetYaxis()->SetTitleSize(0.055);
   hist_eta_4__56->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_4__56->GetYaxis()->SetTitleFont(42);
   hist_eta_4__56->GetZaxis()->SetLabelFont(42);
   hist_eta_4__56->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_4__56->GetZaxis()->SetLabelSize(0.045);
   hist_eta_4__56->GetZaxis()->SetTitleSize(0.035);
   hist_eta_4__56->GetZaxis()->SetTitleFont(42);
   hist_eta_4__56->Draw("same");
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
   
   TH1D *emptyDist__57 = new TH1D("emptyDist__57","",10,-2.999,2.999);
   emptyDist__57->SetBinContent(7,1000);
   emptyDist__57->SetBinError(7,1000);
   emptyDist__57->SetMinimum(0.0001);
   emptyDist__57->SetMaximum(0.4999);
   emptyDist__57->SetEntries(1);
   
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
   emptyDist__57->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__57);

   ci = TColor::GetColor("#000099");
   emptyDist__57->SetLineColor(ci);
   emptyDist__57->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__57->GetXaxis()->CenterTitle(true);
   emptyDist__57->GetXaxis()->SetLabelFont(43);
   emptyDist__57->GetXaxis()->SetLabelSize(33);
   emptyDist__57->GetXaxis()->SetTitleSize(33);
   emptyDist__57->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__57->GetXaxis()->SetTitleFont(43);
   emptyDist__57->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__57->GetYaxis()->CenterTitle(true);
   emptyDist__57->GetYaxis()->SetNdivisions(505);
   emptyDist__57->GetYaxis()->SetLabelFont(43);
   emptyDist__57->GetYaxis()->SetLabelSize(33);
   emptyDist__57->GetYaxis()->SetTitleSize(33);
   emptyDist__57->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__57->GetYaxis()->SetTitleFont(43);
   emptyDist__57->GetZaxis()->SetLabelFont(42);
   emptyDist__57->GetZaxis()->SetLabelSize(0.035);
   emptyDist__57->GetZaxis()->SetTitleSize(0.035);
   emptyDist__57->GetZaxis()->SetTitleFont(42);
   emptyDist__57->Draw("");
   
   Double_t Graph0_fx1023[18] = {
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
   Double_t Graph0_fy1023[18] = {
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
   Double_t Graph0_fex1023[18] = {
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
   Double_t Graph0_fey1023[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1236;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph10171023 = new TH1F("Graph_Graph_Graph10171023","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10171023->SetMinimum(5.284598e-05);
   Graph_Graph_Graph10171023->SetMaximum(0.3999191);
   Graph_Graph_Graph10171023->SetDirectory(0);
   Graph_Graph_Graph10171023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10171023->SetLineColor(ci);
   Graph_Graph_Graph10171023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10171023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10171023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10171023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10171023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10171023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10171023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10171023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10171023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10171023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10171023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10171023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10171023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10171023);
   
   gre->Draw(" 2");
   
   Double_t g_fx3023[18] = {
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
   Double_t g_fy3023[18] = {
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
   Double_t g_felx3023[18] = {
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
   Double_t g_fely3023[18] = {
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
   Double_t g_fehx3023[18] = {
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
   Double_t g_fehy3023[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3023,g_fy3023,g_felx3023,g_fehx3023,g_fely3023,g_fehy3023);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1237;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3023 = new TH1F("Graph_g3023","",100,-3.5065,3.5915);
   Graph_g3023->SetMinimum(3.042432e-05);
   Graph_g3023->SetMaximum(0.3764363);
   Graph_g3023->SetDirectory(0);
   Graph_g3023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3023->SetLineColor(ci);
   Graph_g3023->GetXaxis()->SetLabelFont(42);
   Graph_g3023->GetXaxis()->SetLabelSize(0.035);
   Graph_g3023->GetXaxis()->SetTitleSize(0.035);
   Graph_g3023->GetXaxis()->SetTitleFont(42);
   Graph_g3023->GetYaxis()->SetLabelFont(42);
   Graph_g3023->GetYaxis()->SetLabelSize(0.035);
   Graph_g3023->GetYaxis()->SetTitleSize(0.035);
   Graph_g3023->GetYaxis()->SetTitleOffset(0);
   Graph_g3023->GetYaxis()->SetTitleFont(42);
   Graph_g3023->GetZaxis()->SetLabelFont(42);
   Graph_g3023->GetZaxis()->SetLabelSize(0.035);
   Graph_g3023->GetZaxis()->SetTitleSize(0.035);
   Graph_g3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3023);
   
   grae->Draw(" 2");
   Double_t xAxis35[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_2__58 = new TH1D("hist_eta_2__58","",18, xAxis35);
   hist_eta_2__58->SetBinContent(1,7.259398e-05);
   hist_eta_2__58->SetBinContent(2,0.004043485);
   hist_eta_2__58->SetBinContent(3,0.02668555);
   hist_eta_2__58->SetBinContent(4,0.05941092);
   hist_eta_2__58->SetBinContent(5,0.1079908);
   hist_eta_2__58->SetBinContent(6,0.1605053);
   hist_eta_2__58->SetBinContent(7,0.2192629);
   hist_eta_2__58->SetBinContent(8,0.2688155);
   hist_eta_2__58->SetBinContent(9,0.3154354);
   hist_eta_2__58->SetBinContent(10,0.3447198);
   hist_eta_2__58->SetBinContent(11,0.3628102);
   hist_eta_2__58->SetBinContent(12,0.359529);
   hist_eta_2__58->SetBinContent(13,0.341424);
   hist_eta_2__58->SetBinContent(14,0.3004229);
   hist_eta_2__58->SetBinContent(15,0.253716);
   hist_eta_2__58->SetBinContent(16,0.1895864);
   hist_eta_2__58->SetBinContent(17,0.09954813);
   hist_eta_2__58->SetBinContent(18,0.01636268);
   hist_eta_2__58->SetBinError(1,3.246502e-05);
   hist_eta_2__58->SetBinError(2,0.000171328);
   hist_eta_2__58->SetBinError(3,0.0006224484);
   hist_eta_2__58->SetBinError(4,0.0009287492);
   hist_eta_2__58->SetBinError(5,0.001252157);
   hist_eta_2__58->SetBinError(6,0.001526546);
   hist_eta_2__58->SetBinError(7,0.001784218);
   hist_eta_2__58->SetBinError(8,0.00197557);
   hist_eta_2__58->SetBinError(9,0.002140033);
   hist_eta_2__58->SetBinError(10,0.002237167);
   hist_eta_2__58->SetBinError(11,0.002295118);
   hist_eta_2__58->SetBinError(12,0.002284716);
   hist_eta_2__58->SetBinError(13,0.002226447);
   hist_eta_2__58->SetBinError(14,0.002088487);
   hist_eta_2__58->SetBinError(15,0.001919284);
   hist_eta_2__58->SetBinError(16,0.001659086);
   hist_eta_2__58->SetBinError(17,0.0008500938);
   hist_eta_2__58->SetBinError(18,0.0003446494);
   hist_eta_2__58->SetEntries(244549);

   ci = TColor::GetColor("#cc0000");
   hist_eta_2__58->SetLineColor(ci);
   hist_eta_2__58->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_2__58->SetMarkerColor(ci);
   hist_eta_2__58->SetMarkerStyle(20);
   hist_eta_2__58->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_2__58->GetXaxis()->SetLabelFont(42);
   hist_eta_2__58->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_2__58->GetXaxis()->SetLabelSize(0.045);
   hist_eta_2__58->GetXaxis()->SetTitleSize(0.055);
   hist_eta_2__58->GetXaxis()->SetTitleFont(42);
   hist_eta_2__58->GetYaxis()->SetTitle("Event fraction");
   hist_eta_2__58->GetYaxis()->SetLabelFont(42);
   hist_eta_2__58->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_2__58->GetYaxis()->SetLabelSize(0.045);
   hist_eta_2__58->GetYaxis()->SetTitleSize(0.055);
   hist_eta_2__58->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_2__58->GetYaxis()->SetTitleFont(42);
   hist_eta_2__58->GetZaxis()->SetLabelFont(42);
   hist_eta_2__58->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_2__58->GetZaxis()->SetLabelSize(0.045);
   hist_eta_2__58->GetZaxis()->SetTitleSize(0.035);
   hist_eta_2__58->GetZaxis()->SetTitleFont(42);
   hist_eta_2__58->Draw("same");
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

   ci = 1228;
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
   
   TH1D *emptyDist__59 = new TH1D("emptyDist__59","",10,-2.999,2.999);
   emptyDist__59->SetBinContent(7,1000);
   emptyDist__59->SetBinError(7,1000);
   emptyDist__59->SetMinimum(0.0001);
   emptyDist__59->SetMaximum(0.4999);
   emptyDist__59->SetEntries(1);
   
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
   emptyDist__59->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDist__59);

   ci = TColor::GetColor("#000099");
   emptyDist__59->SetLineColor(ci);
   emptyDist__59->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__59->GetXaxis()->CenterTitle(true);
   emptyDist__59->GetXaxis()->SetLabelFont(43);
   emptyDist__59->GetXaxis()->SetLabelSize(33);
   emptyDist__59->GetXaxis()->SetTitleSize(33);
   emptyDist__59->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__59->GetXaxis()->SetTitleFont(43);
   emptyDist__59->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__59->GetYaxis()->CenterTitle(true);
   emptyDist__59->GetYaxis()->SetNdivisions(505);
   emptyDist__59->GetYaxis()->SetLabelFont(43);
   emptyDist__59->GetYaxis()->SetLabelSize(33);
   emptyDist__59->GetYaxis()->SetTitleSize(33);
   emptyDist__59->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__59->GetYaxis()->SetTitleFont(43);
   emptyDist__59->GetZaxis()->SetLabelFont(42);
   emptyDist__59->GetZaxis()->SetLabelSize(0.035);
   emptyDist__59->GetZaxis()->SetTitleSize(0.035);
   emptyDist__59->GetZaxis()->SetTitleFont(42);
   emptyDist__59->Draw("");
   
   Double_t Graph0_fx1024[18] = {
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
   Double_t Graph0_fy1024[18] = {
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
   Double_t Graph0_fex1024[18] = {
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
   Double_t Graph0_fey1024[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1248;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph10181024 = new TH1F("Graph_Graph_Graph10181024","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10181024->SetMinimum(0);
   Graph_Graph_Graph10181024->SetMaximum(0.5028958);
   Graph_Graph_Graph10181024->SetDirectory(0);
   Graph_Graph_Graph10181024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10181024->SetLineColor(ci);
   Graph_Graph_Graph10181024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10181024->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10181024->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10181024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10181024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10181024->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10181024->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10181024->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10181024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10181024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10181024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10181024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10181024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10181024);
   
   gre->Draw(" 2");
   
   Double_t g_fx3024[18] = {
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
   Double_t g_fy3024[18] = {
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
   Double_t g_felx3024[18] = {
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
   Double_t g_fely3024[18] = {
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
   Double_t g_fehx3024[18] = {
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
   Double_t g_fehy3024[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3024,g_fy3024,g_felx3024,g_fehx3024,g_fely3024,g_fehy3024);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1249;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3024 = new TH1F("Graph_g3024","",100,-3.5065,3.5915);
   Graph_g3024->SetMinimum(0);
   Graph_g3024->SetMaximum(0.4783084);
   Graph_g3024->SetDirectory(0);
   Graph_g3024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3024->SetLineColor(ci);
   Graph_g3024->GetXaxis()->SetLabelFont(42);
   Graph_g3024->GetXaxis()->SetLabelSize(0.035);
   Graph_g3024->GetXaxis()->SetTitleSize(0.035);
   Graph_g3024->GetXaxis()->SetTitleFont(42);
   Graph_g3024->GetYaxis()->SetLabelFont(42);
   Graph_g3024->GetYaxis()->SetLabelSize(0.035);
   Graph_g3024->GetYaxis()->SetTitleSize(0.035);
   Graph_g3024->GetYaxis()->SetTitleOffset(0);
   Graph_g3024->GetYaxis()->SetTitleFont(42);
   Graph_g3024->GetZaxis()->SetLabelFont(42);
   Graph_g3024->GetZaxis()->SetLabelSize(0.035);
   Graph_g3024->GetZaxis()->SetTitleSize(0.035);
   Graph_g3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3024);
   
   grae->Draw(" 2");
   Double_t xAxis36[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_5__60 = new TH1D("hist_eta_5__60","",18, xAxis36);
   hist_eta_5__60->SetBinContent(2,5.787142e-05);
   hist_eta_5__60->SetBinContent(3,0.0008680713);
   hist_eta_5__60->SetBinContent(4,0.008044127);
   hist_eta_5__60->SetBinContent(5,0.03165567);
   hist_eta_5__60->SetBinContent(6,0.08773307);
   hist_eta_5__60->SetBinContent(7,0.1614613);
   hist_eta_5__60->SetBinContent(8,0.2586274);
   hist_eta_5__60->SetBinContent(9,0.3426567);
   hist_eta_5__60->SetBinContent(10,0.411813);
   hist_eta_5__60->SetBinContent(11,0.4454363);
   hist_eta_5__60->SetBinContent(12,0.4571263);
   hist_eta_5__60->SetBinContent(13,0.4134334);
   hist_eta_5__60->SetBinContent(14,0.3554463);
   hist_eta_5__60->SetBinContent(15,0.2747156);
   hist_eta_5__60->SetBinContent(16,0.1722832);
   hist_eta_5__60->SetBinContent(17,0.0609386);
   hist_eta_5__60->SetBinContent(18,0.003501221);
   hist_eta_5__60->SetBinError(2,4.092127e-05);
   hist_eta_5__60->SetBinError(3,0.000224135);
   hist_eta_5__60->SetBinError(4,0.000682294);
   hist_eta_5__60->SetBinError(5,0.001353499);
   hist_eta_5__60->SetBinError(6,0.002253273);
   hist_eta_5__60->SetBinError(7,0.003056794);
   hist_eta_5__60->SetBinError(8,0.003868738);
   hist_eta_5__60->SetBinError(9,0.004453092);
   hist_eta_5__60->SetBinError(10,0.004881824);
   hist_eta_5__60->SetBinError(11,0.005077207);
   hist_eta_5__60->SetBinError(12,0.005143399);
   hist_eta_5__60->SetBinError(13,0.004891419);
   hist_eta_5__60->SetBinError(14,0.004535436);
   hist_eta_5__60->SetBinError(15,0.003987253);
   hist_eta_5__60->SetBinError(16,0.003157574);
   hist_eta_5__60->SetBinError(17,0.001327894);
   hist_eta_5__60->SetBinError(18,0.0003182928);
   hist_eta_5__60->SetEntries(61366);

   ci = TColor::GetColor("#cc0000");
   hist_eta_5__60->SetLineColor(ci);
   hist_eta_5__60->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_5__60->SetMarkerColor(ci);
   hist_eta_5__60->SetMarkerStyle(20);
   hist_eta_5__60->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_5__60->GetXaxis()->SetLabelFont(42);
   hist_eta_5__60->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_5__60->GetXaxis()->SetLabelSize(0.045);
   hist_eta_5__60->GetXaxis()->SetTitleSize(0.055);
   hist_eta_5__60->GetXaxis()->SetTitleFont(42);
   hist_eta_5__60->GetYaxis()->SetTitle("Event fraction");
   hist_eta_5__60->GetYaxis()->SetLabelFont(42);
   hist_eta_5__60->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_5__60->GetYaxis()->SetLabelSize(0.045);
   hist_eta_5__60->GetYaxis()->SetTitleSize(0.055);
   hist_eta_5__60->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_5__60->GetYaxis()->SetTitleFont(42);
   hist_eta_5__60->GetZaxis()->SetLabelFont(42);
   hist_eta_5__60->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_5__60->GetZaxis()->SetLabelSize(0.045);
   hist_eta_5__60->GetZaxis()->SetTitleSize(0.035);
   hist_eta_5__60->GetZaxis()->SetTitleFont(42);
   hist_eta_5__60->Draw("same");
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
