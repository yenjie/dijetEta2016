void pPbppRatMM()
{
//=========Macro generated from canvas: cRat0/
//=========  (Wed Jan 24 15:16:17 2018) by ROOT version6.10/08

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cRat0 = new TCanvas("cRat0", "",1259,52,1300,800);
   cRat0->Range(0,0,1,1);
   cRat0->SetFillColor(0);
   cRat0->SetBorderMode(0);
   cRat0->SetBorderSize(2);
   cRat0->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.5393939,0.3825653,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-4.893105,0.601,2.999,1.217854);
   p_0_0->SetFillColor(0);
   p_0_0->SetBorderMode(0);
   p_0_0->SetBorderSize(2);
   p_0_0->SetLeftMargin(0.24);
   p_0_0->SetRightMargin(0);
   p_0_0->SetBottomMargin(0);
   p_0_0->SetFrameBorderMode(0);
   p_0_0->SetFrameBorderMode(0);
   
   TH1D *emptyRat__12 = new TH1D("emptyRat__12","",10,-2.999,2.999);
   emptyRat__12->SetBinContent(7,1000);
   emptyRat__12->SetBinError(7,1000);
   emptyRat__12->SetMinimum(0.601);
   emptyRat__12->SetMaximum(1.15);
   emptyRat__12->SetEntries(1);
   emptyRat__12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   emptyRat__12->SetLineColor(ci);
   emptyRat__12->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__12->GetXaxis()->CenterTitle(true);
   emptyRat__12->GetXaxis()->SetLabelFont(43);
   emptyRat__12->GetXaxis()->SetLabelSize(33);
   emptyRat__12->GetXaxis()->SetTitleSize(33);
   emptyRat__12->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__12->GetXaxis()->SetTitleFont(43);
   emptyRat__12->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__12->GetYaxis()->CenterTitle(true);
   emptyRat__12->GetYaxis()->SetNdivisions(505);
   emptyRat__12->GetYaxis()->SetLabelFont(43);
   emptyRat__12->GetYaxis()->SetLabelSize(33);
   emptyRat__12->GetYaxis()->SetTitleSize(33);
   emptyRat__12->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__12->GetYaxis()->SetTitleFont(43);
   emptyRat__12->GetZaxis()->SetLabelFont(42);
   emptyRat__12->GetZaxis()->SetLabelSize(0.035);
   emptyRat__12->GetZaxis()->SetTitleSize(0.035);
   emptyRat__12->GetZaxis()->SetTitleFont(42);
   emptyRat__12->Draw("");
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
   TLegendEntry *entry=leg->AddEntry("hist_eta_rat_0","pPb","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph","Exp. Uncer.","f");

   ci = 1204;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("g","nCTEQ15","f");

   ci = 1211;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(62);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   p_0_0->Modified();
   cRat0->cd();
  
// ------------>Primitives in pad: p_0_1
   TPad *p_0_1 = new TPad("p_0_1", "p_0_1",0,0,0.3825653,0.539394);
   p_0_1->Draw();
   p_0_1->cd();
   p_0_1->Range(-4.893105,0.4276316,2.999,1.15);
   p_0_1->SetFillColor(0);
   p_0_1->SetBorderMode(0);
   p_0_1->SetBorderSize(2);
   p_0_1->SetLeftMargin(0.24);
   p_0_1->SetRightMargin(0);
   p_0_1->SetTopMargin(0);
   p_0_1->SetBottomMargin(0.24);
   p_0_1->SetFrameBorderMode(0);
   p_0_1->SetFrameBorderMode(0);
   
   TH1D *emptyRat__13 = new TH1D("emptyRat__13","",10,-2.999,2.999);
   emptyRat__13->SetBinContent(7,1000);
   emptyRat__13->SetBinError(7,1000);
   emptyRat__13->SetMinimum(0.601);
   emptyRat__13->SetMaximum(1.15);
   emptyRat__13->SetEntries(1);
   emptyRat__13->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyRat__13->SetLineColor(ci);
   emptyRat__13->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__13->GetXaxis()->CenterTitle(true);
   emptyRat__13->GetXaxis()->SetLabelFont(43);
   emptyRat__13->GetXaxis()->SetLabelSize(33);
   emptyRat__13->GetXaxis()->SetTitleSize(33);
   emptyRat__13->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__13->GetXaxis()->SetTitleFont(43);
   emptyRat__13->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__13->GetYaxis()->CenterTitle(true);
   emptyRat__13->GetYaxis()->SetNdivisions(505);
   emptyRat__13->GetYaxis()->SetLabelFont(43);
   emptyRat__13->GetYaxis()->SetLabelSize(33);
   emptyRat__13->GetYaxis()->SetTitleSize(33);
   emptyRat__13->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__13->GetYaxis()->SetTitleFont(43);
   emptyRat__13->GetZaxis()->SetLabelFont(42);
   emptyRat__13->GetZaxis()->SetLabelSize(0.035);
   emptyRat__13->GetZaxis()->SetTitleSize(0.035);
   emptyRat__13->GetZaxis()->SetTitleFont(42);
   emptyRat__13->Draw("");
   
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
   1000,
   0.6718797,
   0.7387602,
   0.7926707,
   0.8498818,
   0.8943683,
   0.9383659,
   0.9905297,
   1.030731,
   1.059735,
   1.074839,
   1.071719,
   1.057569,
   1.033026,
   0.9915602,
   0.9478617,
   0.8989565,
   0.8402657};
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
   0.03603294,
   0.07544964,
   0.01517152,
   0.02859596,
   0.008900233,
   0.009843353,
   0.01310939,
   0.02502517,
   0.00385286,
   0.01046548,
   0.0051268,
   0.007113756,
   0.03876162,
   0.004410095,
   0.01444742,
   0.01023239,
   0.03508291};
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
   34.61002,
   0.09028004,
   0.00968634,
   0.03283109,
   0.01266103,
   0.02252628,
   0.01491743,
   0.006909797,
   0.001370709,
   0.01792784,
   0.01301057,
   0.01611305,
   0.02217579,
   0,
   0.0232876,
   0.009212201,
   0.02021065,
   0.0225308};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,g_fx3011,g_fy3011,g_felx3011,g_fehx3011,g_fely3011,g_fehy3011);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1219;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(62);
   
   TH1F *Graph_g3011 = new TH1F("Graph_g3011","",100,-3.5065,3.5915);
   Graph_g3011->SetMinimum(0.5722621);
   Graph_g3011->SetMaximum(1138.007);
   Graph_g3011->SetDirectory(0);
   Graph_g3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3011->SetLineColor(ci);
   Graph_g3011->GetXaxis()->SetLabelFont(42);
   Graph_g3011->GetXaxis()->SetLabelSize(0.035);
   Graph_g3011->GetXaxis()->SetTitleSize(0.035);
   Graph_g3011->GetXaxis()->SetTitleFont(42);
   Graph_g3011->GetYaxis()->SetLabelFont(42);
   Graph_g3011->GetYaxis()->SetLabelSize(0.035);
   Graph_g3011->GetYaxis()->SetTitleSize(0.035);
   Graph_g3011->GetYaxis()->SetTitleOffset(0);
   Graph_g3011->GetYaxis()->SetTitleFont(42);
   Graph_g3011->GetZaxis()->SetLabelFont(42);
   Graph_g3011->GetZaxis()->SetLabelSize(0.035);
   Graph_g3011->GetZaxis()->SetTitleSize(0.035);
   Graph_g3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3011);
   
   grae->Draw(" 2");
   
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
   2.803257,
   0.91508,
   0.8484641,
   0.8947423,
   0.9065346,
   0.9347406,
   0.9589134,
   0.9879696,
   1.010201,
   1.017197,
   1.043396,
   1.030789,
   1.042572,
   1.019244,
   1.014706,
   1.008229,
   0.9176547,
   0.8110097};
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
   -4.128759,
   -0.130876,
   -0.04579119,
   -0.02378523,
   -0.01226105,
   -0.007511619,
   -0.004760684,
   -0.004440122,
   -0.003750028,
   -0.003866612,
   -0.004175253,
   -0.00441607,
   -0.004722757,
   -0.004941507,
   -0.005146209,
   -0.006332324,
   -0.01135073,
   -0.03493203};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1216;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(2);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,-3.46425,3.51675);
   Graph_Graph1006->SetMinimum(0.611785);
   Graph_Graph1006->SetMaximum(3.002481);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw(" 5");
   Double_t xAxis6[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_3__14 = new TH1D("hist_eta_rat_3__14","",18, xAxis6);
   hist_eta_rat_3__14->SetBinContent(1,1000);
   hist_eta_rat_3__14->SetBinContent(2,0.9116656);
   hist_eta_rat_3__14->SetBinContent(3,0.8524474);
   hist_eta_rat_3__14->SetBinContent(4,0.8989739);
   hist_eta_rat_3__14->SetBinContent(5,0.9111603);
   hist_eta_rat_3__14->SetBinContent(6,0.9396645);
   hist_eta_rat_3__14->SetBinContent(7,0.9623363);
   hist_eta_rat_3__14->SetBinContent(8,0.9903204);
   hist_eta_rat_3__14->SetBinContent(9,1.011398);
   hist_eta_rat_3__14->SetBinContent(10,1.017393);
   hist_eta_rat_3__14->SetBinContent(11,1.043345);
   hist_eta_rat_3__14->SetBinContent(12,1.030637);
   hist_eta_rat_3__14->SetBinContent(13,1.042192);
   hist_eta_rat_3__14->SetBinContent(14,1.017161);
   hist_eta_rat_3__14->SetBinContent(15,1.011422);
   hist_eta_rat_3__14->SetBinContent(16,1.003408);
   hist_eta_rat_3__14->SetBinContent(17,0.9133288);
   hist_eta_rat_3__14->SetBinContent(18,0.809533);
   hist_eta_rat_3__14->SetBinError(1,2.02439);
   hist_eta_rat_3__14->SetBinError(2,0.07600164);
   hist_eta_rat_3__14->SetBinError(3,0.03151034);
   hist_eta_rat_3__14->SetBinError(4,0.0188971);
   hist_eta_rat_3__14->SetBinError(5,0.01333137);
   hist_eta_rat_3__14->SetBinError(6,0.01070109);
   hist_eta_rat_3__14->SetBinError(7,0.00917168);
   hist_eta_rat_3__14->SetBinError(8,0.008310487);
   hist_eta_rat_3__14->SetBinError(9,0.007789899);
   hist_eta_rat_3__14->SetBinError(10,0.00746636);
   hist_eta_rat_3__14->SetBinError(11,0.007388564);
   hist_eta_rat_3__14->SetBinError(12,0.007355957);
   hist_eta_rat_3__14->SetBinError(13,0.007624622);
   hist_eta_rat_3__14->SetBinError(14,0.007961064);
   hist_eta_rat_3__14->SetBinError(15,0.008672094);
   hist_eta_rat_3__14->SetBinError(16,0.009832093);
   hist_eta_rat_3__14->SetBinError(17,0.009188959);
   hist_eta_rat_3__14->SetBinError(18,0.02149447);
   hist_eta_rat_3__14->SetEntries(81.45342);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_3__14->SetLineColor(ci);
   hist_eta_rat_3__14->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_3__14->SetMarkerColor(ci);
   hist_eta_rat_3__14->SetMarkerStyle(20);
   hist_eta_rat_3__14->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_3__14->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_3__14->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_3__14->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_3__14->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_3__14->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_3__14->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_3__14->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_3__14->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_3__14->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_3__14->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_3__14->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_3__14->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_3__14->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_3__14->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_3__14->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_3__14->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_3__14->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_3__14->Draw("same");
   TLine *line = new TLine(-2.999,1,2.999,1);
   line->Draw();
      tex = new TLatex(0.45,0.29,"95 < p_{T}^{ave} < 115 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_0_1->Modified();
   cRat0->cd();
  
// ------------>Primitives in pad: p_1_0
   TPad *p_1_0 = new TPad("p_1_0", "p_1_0",0.3825653,0.5393939,0.673315,1);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(-2.999,0.601,2.999,1.217854);
   p_1_0->SetFillColor(0);
   p_1_0->SetBorderMode(0);
   p_1_0->SetBorderSize(2);
   p_1_0->SetLeftMargin(0);
   p_1_0->SetRightMargin(0);
   p_1_0->SetBottomMargin(0);
   p_1_0->SetFrameBorderMode(0);
   p_1_0->SetFrameBorderMode(0);
   
   TH1D *emptyRat__15 = new TH1D("emptyRat__15","",10,-2.999,2.999);
   emptyRat__15->SetBinContent(7,1000);
   emptyRat__15->SetBinError(7,1000);
   emptyRat__15->SetMinimum(0.601);
   emptyRat__15->SetMaximum(1.15);
   emptyRat__15->SetEntries(1);
   emptyRat__15->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyRat__15->SetLineColor(ci);
   emptyRat__15->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__15->GetXaxis()->CenterTitle(true);
   emptyRat__15->GetXaxis()->SetLabelFont(43);
   emptyRat__15->GetXaxis()->SetLabelSize(33);
   emptyRat__15->GetXaxis()->SetTitleSize(33);
   emptyRat__15->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__15->GetXaxis()->SetTitleFont(43);
   emptyRat__15->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__15->GetYaxis()->CenterTitle(true);
   emptyRat__15->GetYaxis()->SetNdivisions(505);
   emptyRat__15->GetYaxis()->SetLabelFont(43);
   emptyRat__15->GetYaxis()->SetLabelSize(33);
   emptyRat__15->GetYaxis()->SetTitleSize(33);
   emptyRat__15->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__15->GetYaxis()->SetTitleFont(43);
   emptyRat__15->GetZaxis()->SetLabelFont(42);
   emptyRat__15->GetZaxis()->SetLabelSize(0.035);
   emptyRat__15->GetZaxis()->SetTitleSize(0.035);
   emptyRat__15->GetZaxis()->SetTitleFont(42);
   emptyRat__15->Draw("");
   
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
   0.6489183,
   0.7989673,
   0.8364997,
   0.8915345,
   0.9463785,
   0.981763,
   1.027978,
   1.059463,
   1.077591,
   1.087849,
   1.069611,
   1.050046,
   1.020769,
   0.9843212,
   0.9437832,
   0.9110261,
   0.8659768,
   0.8215663};
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
   0.04181249,
   0.03938409,
   0.009689021,
   0.03052635,
   0.04425893,
   0.002848713,
   0.02318953,
   0.01332169,
   0.002635001,
   0.02460463,
   0.01704236,
   0.02207843,
   0.01401228,
   0.008903006,
   0.006311457,
   0.01577103,
   0.009938085,
   0.0227907};
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
   0.2574275,
   0.03047585,
   0.05191205,
   0.02005307,
   0.009578222,
   0.02909082,
   0.007333171,
   0.01638323,
   0.02532083,
   0.005386995,
   0.01251261,
   0.009705148,
   0.01458487,
   0.009856203,
   0.02005341,
   0.01034829,
   0.014205,
   0.03024299};
   grae = new TGraphAsymmErrors(18,g_fx3012,g_fy3012,g_felx3012,g_fehx3012,g_fely3012,g_fehy3012);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1211;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(62);
   
   TH1F *Graph_g3012 = new TH1F("Graph_g3012","",100,-3.5065,3.5915);
   Graph_g3012->SetMinimum(0.5575252);
   Graph_g3012->SetMaximum(1.152493);
   Graph_g3012->SetDirectory(0);
   Graph_g3012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3012->SetLineColor(ci);
   Graph_g3012->GetXaxis()->SetLabelFont(42);
   Graph_g3012->GetXaxis()->SetLabelSize(0.035);
   Graph_g3012->GetXaxis()->SetTitleSize(0.035);
   Graph_g3012->GetXaxis()->SetTitleFont(42);
   Graph_g3012->GetYaxis()->SetLabelFont(42);
   Graph_g3012->GetYaxis()->SetLabelSize(0.035);
   Graph_g3012->GetYaxis()->SetTitleSize(0.035);
   Graph_g3012->GetYaxis()->SetTitleOffset(0);
   Graph_g3012->GetYaxis()->SetTitleFont(42);
   Graph_g3012->GetZaxis()->SetLabelFont(42);
   Graph_g3012->GetZaxis()->SetLabelSize(0.035);
   Graph_g3012->GetZaxis()->SetTitleSize(0.035);
   Graph_g3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3012);
   
   grae->Draw(" 2");
   
   Double_t Graph0_fx1007[18] = {
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
   Double_t Graph0_fy1007[18] = {
   0.7057253,
   0.8590625,
   0.8877687,
   0.9003959,
   0.9620714,
   0.958599,
   0.9723792,
   1.01619,
   1.021375,
   1.045579,
   1.046508,
   1.045542,
   1.040149,
   1.023711,
   0.9920378,
   0.9836399,
   0.9157124,
   0.7485006};
   Double_t Graph0_fex1007[18] = {
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
   Double_t Graph0_fey1007[18] = {
   -0.2870738,
   -0.09448942,
   -0.03621142,
   -0.01974207,
   -0.01196365,
   -0.007350115,
   -0.005952919,
   -0.005935024,
   -0.006442229,
   -0.006548829,
   -0.008283582,
   -0.006887993,
   -0.006473951,
   -0.007284638,
   -0.005956798,
   -0.009134344,
   -0.01029699,
   -0.04645153};
   gre = new TGraphErrors(18,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1208;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(2);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","Graph",100,-3.46425,3.51675);
   Graph_Graph1007->SetMinimum(0.671647);
   Graph_Graph1007->SetMaximum(1.080586);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   gre->Draw(" 5");
   Double_t xAxis7[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_1__16 = new TH1D("hist_eta_rat_1__16","",18, xAxis7);
   hist_eta_rat_1__16->SetBinContent(1,0.6844656);
   hist_eta_rat_1__16->SetBinContent(2,0.8566838);
   hist_eta_rat_1__16->SetBinContent(3,0.8885932);
   hist_eta_rat_1__16->SetBinContent(4,0.9016656);
   hist_eta_rat_1__16->SetBinContent(5,0.9657551);
   hist_eta_rat_1__16->SetBinContent(6,0.9627173);
   hist_eta_rat_1__16->SetBinContent(7,0.9760507);
   hist_eta_rat_1__16->SetBinContent(8,1.017309);
   hist_eta_rat_1__16->SetBinContent(9,1.022232);
   hist_eta_rat_1__16->SetBinContent(10,1.046103);
   hist_eta_rat_1__16->SetBinContent(11,1.045738);
   hist_eta_rat_1__16->SetBinContent(12,1.045804);
   hist_eta_rat_1__16->SetBinContent(13,1.039695);
   hist_eta_rat_1__16->SetBinContent(14,1.021309);
   hist_eta_rat_1__16->SetBinContent(15,0.9903823);
   hist_eta_rat_1__16->SetBinContent(16,0.9773088);
   hist_eta_rat_1__16->SetBinContent(17,0.913462);
   hist_eta_rat_1__16->SetBinContent(18,0.7474494);
   hist_eta_rat_1__16->SetBinError(1,0.2000205);
   hist_eta_rat_1__16->SetBinError(2,0.03499277);
   hist_eta_rat_1__16->SetBinError(3,0.02598156);
   hist_eta_rat_1__16->SetBinError(4,0.01962206);
   hist_eta_rat_1__16->SetBinError(5,0.01667869);
   hist_eta_rat_1__16->SetBinError(6,0.01435038);
   hist_eta_rat_1__16->SetBinError(7,0.01291);
   hist_eta_rat_1__16->SetBinError(8,0.01221341);
   hist_eta_rat_1__16->SetBinError(9,0.01158239);
   hist_eta_rat_1__16->SetBinError(10,0.01132278);
   hist_eta_rat_1__16->SetBinError(11,0.01117984);
   hist_eta_rat_1__16->SetBinError(12,0.0112725);
   hist_eta_rat_1__16->SetBinError(13,0.01148646);
   hist_eta_rat_1__16->SetBinError(14,0.01194791);
   hist_eta_rat_1__16->SetBinError(15,0.01264786);
   hist_eta_rat_1__16->SetBinError(16,0.01408731);
   hist_eta_rat_1__16->SetBinError(17,0.01258494);
   hist_eta_rat_1__16->SetBinError(18,0.02355569);
   hist_eta_rat_1__16->SetEntries(6506.793);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_1__16->SetLineColor(ci);
   hist_eta_rat_1__16->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_1__16->SetMarkerColor(ci);
   hist_eta_rat_1__16->SetMarkerStyle(20);
   hist_eta_rat_1__16->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_1__16->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_1__16->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_1__16->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_1__16->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_1__16->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_1__16->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_1__16->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_1__16->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_1__16->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_1__16->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_1__16->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_1__16->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_1__16->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_1__16->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_1__16->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_1__16->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_1__16->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_1__16->Draw("same");
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
      tex = new TLatex(0.05,0.8,"pp NLO: MMHT14");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_0->Modified();
   cRat0->cd();
  
// ------------>Primitives in pad: p_1_1
   TPad *p_1_1 = new TPad("p_1_1", "p_1_1",0.3825653,0,0.673315,0.539394);
   p_1_1->Draw();
   p_1_1->cd();
   p_1_1->Range(-2.999,0.4276316,2.999,1.15);
   p_1_1->SetFillColor(0);
   p_1_1->SetBorderMode(0);
   p_1_1->SetBorderSize(2);
   p_1_1->SetLeftMargin(0);
   p_1_1->SetRightMargin(0);
   p_1_1->SetTopMargin(0);
   p_1_1->SetBottomMargin(0.24);
   p_1_1->SetFrameBorderMode(0);
   p_1_1->SetFrameBorderMode(0);
   
   TH1D *emptyRat__17 = new TH1D("emptyRat__17","",10,-2.999,2.999);
   emptyRat__17->SetBinContent(7,1000);
   emptyRat__17->SetBinError(7,1000);
   emptyRat__17->SetMinimum(0.601);
   emptyRat__17->SetMaximum(1.15);
   emptyRat__17->SetEntries(1);
   emptyRat__17->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyRat__17->SetLineColor(ci);
   emptyRat__17->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__17->GetXaxis()->CenterTitle(true);
   emptyRat__17->GetXaxis()->SetLabelFont(43);
   emptyRat__17->GetXaxis()->SetLabelSize(33);
   emptyRat__17->GetXaxis()->SetTitleSize(33);
   emptyRat__17->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__17->GetXaxis()->SetTitleFont(43);
   emptyRat__17->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__17->GetYaxis()->CenterTitle(true);
   emptyRat__17->GetYaxis()->SetNdivisions(505);
   emptyRat__17->GetYaxis()->SetLabelFont(43);
   emptyRat__17->GetYaxis()->SetLabelSize(33);
   emptyRat__17->GetYaxis()->SetTitleSize(33);
   emptyRat__17->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__17->GetYaxis()->SetTitleFont(43);
   emptyRat__17->GetZaxis()->SetLabelFont(42);
   emptyRat__17->GetZaxis()->SetLabelSize(0.035);
   emptyRat__17->GetZaxis()->SetTitleSize(0.035);
   emptyRat__17->GetZaxis()->SetTitleFont(42);
   emptyRat__17->Draw("");
   
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
   1000,
   1000,
   0.6876818,
   0.7606646,
   0.8107619,
   0.8582816,
   0.9070706,
   0.951885,
   0.999625,
   1.037807,
   1.066365,
   1.074077,
   1.068121,
   1.047749,
   1.010399,
   0.9719991,
   0.9194268,
   0.8599626};
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
   13.96034,
   0.1575448,
   0.028795,
   0.01483222,
   0.02097261,
   0.005104233,
   0.02371647,
   0.002778107,
   0.007819536,
   0.009446081,
   0.0135446,
   0.006182201,
   0.01121316,
   0.01391214,
   0.004327593,
   0.01833725,
   0.009756122,
   0.008558125};
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
   2.649501,
   0.1370773,
   0.05937616,
   0.03805505,
   0.01756428,
   0.02413924,
   0.00273364,
   0.01882653,
   0.00581349,
   0.008824117,
   0.00647646,
   0.0124729,
   0.007808652,
   0.003299238,
   0.01896913,
   0.003373222,
   0.01962435,
   0.05961547};
   grae = new TGraphAsymmErrors(18,g_fx3013,g_fy3013,g_felx3013,g_fehx3013,g_fely3013,g_fehy3013);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1223;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(62);
   
   TH1F *Graph_g3013 = new TH1F("Graph_g3013","",100,-3.5065,3.5915);
   Graph_g3013->SetMinimum(0.5929981);
   Graph_g3013->SetMaximum(1102.849);
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
   
   Double_t Graph0_fx1008[18] = {
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
   Double_t Graph0_fy1008[18] = {
   0,
   1.131244,
   0.86302,
   0.8966965,
   0.9033064,
   0.9286316,
   0.9479594,
   0.9578607,
   0.9993354,
   1.015877,
   1.037147,
   1.02601,
   1.033695,
   1.022166,
   1.022073,
   1.006902,
   0.9473376,
   0.8248477};
   Double_t Graph0_fex1008[18] = {
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
   Double_t Graph0_fey1008[18] = {
   -0,
   -0.2002314,
   -0.05822686,
   -0.02528312,
   -0.01366313,
   -0.0076275,
   -0.004479789,
   -0.004232352,
   -0.003182075,
   -0.003817998,
   -0.003296271,
   -0.003818545,
   -0.00326697,
   -0.003573525,
   -0.005117072,
   -0.006668361,
   -0.01252774,
   -0.0297517};
   gre = new TGraphErrors(18,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1220;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(2);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","Graph",100,-1003.192,11000.53);
   Graph_Graph1008->SetMinimum(0);
   Graph_Graph1008->SetMaximum(1.244368);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
   gre->Draw(" 5");
   Double_t xAxis8[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_4__18 = new TH1D("hist_eta_rat_4__18","",18, xAxis8);
   hist_eta_rat_4__18->SetBinContent(1,1000);
   hist_eta_rat_4__18->SetBinContent(2,1000);
   hist_eta_rat_4__18->SetBinContent(3,0.8675753);
   hist_eta_rat_4__18->SetBinContent(4,0.8987785);
   hist_eta_rat_4__18->SetBinContent(5,0.9086055);
   hist_eta_rat_4__18->SetBinContent(6,0.9336589);
   hist_eta_rat_4__18->SetBinContent(7,0.9523605);
   hist_eta_rat_4__18->SetBinContent(8,0.9609187);
   hist_eta_rat_4__18->SetBinContent(9,1.001282);
   hist_eta_rat_4__18->SetBinContent(10,1.016526);
   hist_eta_rat_4__18->SetBinContent(11,1.037566);
   hist_eta_rat_4__18->SetBinContent(12,1.025952);
   hist_eta_rat_4__18->SetBinContent(13,1.032274);
   hist_eta_rat_4__18->SetBinContent(14,1.02023);
   hist_eta_rat_4__18->SetBinContent(15,1.018945);
   hist_eta_rat_4__18->SetBinContent(16,1.00273);
   hist_eta_rat_4__18->SetBinContent(17,0.9408388);
   hist_eta_rat_4__18->SetBinContent(18,0.8200193);
   hist_eta_rat_4__18->SetBinError(2,0.2229042);
   hist_eta_rat_4__18->SetBinError(3,0.06001566);
   hist_eta_rat_4__18->SetBinError(4,0.02845345);
   hist_eta_rat_4__18->SetBinError(5,0.01777433);
   hist_eta_rat_4__18->SetBinError(6,0.01332787);
   hist_eta_rat_4__18->SetBinError(7,0.01099905);
   hist_eta_rat_4__18->SetBinError(8,0.009615502);
   hist_eta_rat_4__18->SetBinError(9,0.009015892);
   hist_eta_rat_4__18->SetBinError(10,0.008556761);
   hist_eta_rat_4__18->SetBinError(11,0.008444415);
   hist_eta_rat_4__18->SetBinError(12,0.008371608);
   hist_eta_rat_4__18->SetBinError(13,0.008662159);
   hist_eta_rat_4__18->SetBinError(14,0.009165347);
   hist_eta_rat_4__18->SetBinError(15,0.01012149);
   hist_eta_rat_4__18->SetBinError(16,0.01168789);
   hist_eta_rat_4__18->SetBinError(17,0.01156398);
   hist_eta_rat_4__18->SetBinError(18,0.03099523);
   hist_eta_rat_4__18->SetEntries(4847.988);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_4__18->SetLineColor(ci);
   hist_eta_rat_4__18->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_4__18->SetMarkerColor(ci);
   hist_eta_rat_4__18->SetMarkerStyle(20);
   hist_eta_rat_4__18->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_4__18->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_4__18->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_4__18->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_4__18->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_4__18->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_4__18->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_4__18->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_4__18->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_4__18->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_4__18->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_4__18->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_4__18->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_4__18->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_4__18->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_4__18->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_4__18->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_4__18->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_4__18->Draw("same");
   line = new TLine(-2.999,1,2.999,1);
   line->Draw();
      tex = new TLatex(0.28,0.29,"115 < p_{T}^{ave} < 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_1->Modified();
   cRat0->cd();
  
// ------------>Primitives in pad: p_2_0
   TPad *p_2_0 = new TPad("p_2_0", "p_2_0",0.673315,0.5393939,1,1);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(-2.999,0.601,3.740326,1.217854);
   p_2_0->SetFillColor(0);
   p_2_0->SetBorderMode(0);
   p_2_0->SetBorderSize(2);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetBottomMargin(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->SetFrameBorderMode(0);
   
   TH1D *emptyRat__19 = new TH1D("emptyRat__19","",10,-2.999,2.999);
   emptyRat__19->SetBinContent(7,1000);
   emptyRat__19->SetBinError(7,1000);
   emptyRat__19->SetMinimum(0.601);
   emptyRat__19->SetMaximum(1.15);
   emptyRat__19->SetEntries(1);
   emptyRat__19->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyRat__19->SetLineColor(ci);
   emptyRat__19->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__19->GetXaxis()->CenterTitle(true);
   emptyRat__19->GetXaxis()->SetLabelFont(43);
   emptyRat__19->GetXaxis()->SetLabelSize(33);
   emptyRat__19->GetXaxis()->SetTitleSize(33);
   emptyRat__19->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__19->GetXaxis()->SetTitleFont(43);
   emptyRat__19->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__19->GetYaxis()->CenterTitle(true);
   emptyRat__19->GetYaxis()->SetNdivisions(505);
   emptyRat__19->GetYaxis()->SetLabelFont(43);
   emptyRat__19->GetYaxis()->SetLabelSize(33);
   emptyRat__19->GetYaxis()->SetTitleSize(33);
   emptyRat__19->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__19->GetYaxis()->SetTitleFont(43);
   emptyRat__19->GetZaxis()->SetLabelFont(42);
   emptyRat__19->GetZaxis()->SetLabelSize(0.035);
   emptyRat__19->GetZaxis()->SetTitleSize(0.035);
   emptyRat__19->GetZaxis()->SetTitleFont(42);
   emptyRat__19->Draw("");
   
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
   1000,
   0.72906,
   0.8010704,
   0.8389524,
   0.8862344,
   0.9292669,
   0.9763092,
   1.02212,
   1.056553,
   1.076133,
   1.078139,
   1.068725,
   1.042177,
   1.011055,
   0.9704,
   0.9288281,
   0.8823334,
   0.8296831};
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
   0.6051582,
   0.08448368,
   0.03866193,
   0.01535367,
   0.01538846,
   0.0109996,
   0.01971013,
   0.0007320141,
   0.0235688,
   0.01996504,
   0.0107937,
   0.01226991,
   0.01567187,
   0.01947061,
   0.006758601,
   0.02032876,
   0.005811164,
   0.007995322};
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
   0.2543975,
   0.02846588,
   0.0241658,
   0.03142057,
   0.01562222,
   0.01976915,
   0.008136586,
   0.02448552,
   0.003811436,
   0.006782925,
   0.02020559,
   0.01319906,
   0.008829027,
   0.004373848,
   0.01617456,
   0.007258606,
   0.02271589,
   0.05917398};
   grae = new TGraphAsymmErrors(18,g_fx3014,g_fy3014,g_felx3014,g_fehx3014,g_fely3014,g_fehy3014);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1215;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(62);
   
   TH1F *Graph_g3014 = new TH1F("Graph_g3014","",100,-3.5065,3.5915);
   Graph_g3014->SetMinimum(0.5801187);
   Graph_g3014->SetMaximum(1100.215);
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
   
   Double_t Graph0_fx1009[18] = {
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
   Double_t Graph0_fy1009[18] = {
   1.237319,
   0.8530033,
   0.909708,
   0.8974143,
   0.926767,
   0.9457847,
   0.9841432,
   0.9941382,
   1.0171,
   1.035555,
   1.040082,
   1.031064,
   1.036097,
   1.02772,
   1.014889,
   0.9683751,
   0.9217112,
   0.7860138};
   Double_t Graph0_fex1009[18] = {
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
   Double_t Graph0_fey1009[18] = {
   -1.045357,
   -0.1015672,
   -0.04909448,
   -0.0235025,
   -0.01329256,
   -0.009089424,
   -0.006071788,
   -0.004407322,
   -0.005465845,
   -0.005035422,
   -0.005982649,
   -0.006539212,
   -0.007026251,
   -0.007018811,
   -0.006039655,
   -0.006071496,
   -0.01099452,
   -0.041673};
   gre = new TGraphErrors(18,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1212;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(2);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,-1002.836,11000.38);
   Graph_Graph1009->SetMinimum(0.7408833);
   Graph_Graph1009->SetMaximum(1.28245);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   gre->Draw(" 5");
   Double_t xAxis9[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_2__20 = new TH1D("hist_eta_rat_2__20","",18, xAxis9);
   hist_eta_rat_2__20->SetBinContent(1,1000);
   hist_eta_rat_2__20->SetBinContent(2,0.8446867);
   hist_eta_rat_2__20->SetBinContent(3,0.9097642);
   hist_eta_rat_2__20->SetBinContent(4,0.8980041);
   hist_eta_rat_2__20->SetBinContent(5,0.928142);
   hist_eta_rat_2__20->SetBinContent(6,0.9480704);
   hist_eta_rat_2__20->SetBinContent(7,0.9865738);
   hist_eta_rat_2__20->SetBinContent(8,0.9959402);
   hist_eta_rat_2__20->SetBinContent(9,1.018127);
   hist_eta_rat_2__20->SetBinContent(10,1.035616);
   hist_eta_rat_2__20->SetBinContent(11,1.041086);
   hist_eta_rat_2__20->SetBinContent(12,1.031883);
   hist_eta_rat_2__20->SetBinContent(13,1.036544);
   hist_eta_rat_2__20->SetBinContent(14,1.026707);
   hist_eta_rat_2__20->SetBinContent(15,1.011485);
   hist_eta_rat_2__20->SetBinContent(16,0.9656523);
   hist_eta_rat_2__20->SetBinContent(17,0.9179404);
   hist_eta_rat_2__20->SetBinContent(18,0.7844801);
   hist_eta_rat_2__20->SetBinError(1,0.6750337);
   hist_eta_rat_2__20->SetBinError(2,0.04045325);
   hist_eta_rat_2__20->SetBinError(3,0.02418498);
   hist_eta_rat_2__20->SetBinError(4,0.01597545);
   hist_eta_rat_2__20->SetBinError(5,0.01229371);
   hist_eta_rat_2__20->SetBinError(6,0.0103263);
   hist_eta_rat_2__20->SetBinError(7,0.009238053);
   hist_eta_rat_2__20->SetBinError(8,0.008432251);
   hist_eta_rat_2__20->SetBinError(9,0.007979459);
   hist_eta_rat_2__20->SetBinError(10,0.007780821);
   hist_eta_rat_2__20->SetBinError(11,0.007629531);
   hist_eta_rat_2__20->SetBinError(12,0.007587949);
   hist_eta_rat_2__20->SetBinError(13,0.007826179);
   hist_eta_rat_2__20->SetBinError(14,0.008254011);
   hist_eta_rat_2__20->SetBinError(15,0.008831963);
   hist_eta_rat_2__20->SetBinError(16,0.009698852);
   hist_eta_rat_2__20->SetBinError(17,0.008943066);
   hist_eta_rat_2__20->SetBinError(18,0.01853112);
   hist_eta_rat_2__20->SetEntries(678.8344);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_2__20->SetLineColor(ci);
   hist_eta_rat_2__20->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_2__20->SetMarkerColor(ci);
   hist_eta_rat_2__20->SetMarkerStyle(20);
   hist_eta_rat_2__20->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_2__20->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_2__20->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_2__20->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_2__20->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_2__20->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_2__20->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_2__20->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_2__20->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_2__20->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_2__20->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_2__20->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_2__20->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_2__20->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_2__20->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_2__20->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_2__20->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_2__20->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_2__20->Draw("same");
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
   p_2_0->Modified();
   cRat0->cd();
  
// ------------>Primitives in pad: p_2_1
   TPad *p_2_1 = new TPad("p_2_1", "p_2_1",0.673315,0,1,0.539394);
   p_2_1->Draw();
   p_2_1->cd();
   p_2_1->Range(-2.999,0.4276316,3.740326,1.15);
   p_2_1->SetFillColor(0);
   p_2_1->SetBorderMode(0);
   p_2_1->SetBorderSize(2);
   p_2_1->SetLeftMargin(0);
   p_2_1->SetTopMargin(0);
   p_2_1->SetBottomMargin(0.24);
   p_2_1->SetFrameBorderMode(0);
   p_2_1->SetFrameBorderMode(0);
   
   TH1D *emptyRat__21 = new TH1D("emptyRat__21","",10,-2.999,2.999);
   emptyRat__21->SetBinContent(7,1000);
   emptyRat__21->SetBinError(7,1000);
   emptyRat__21->SetMinimum(0.601);
   emptyRat__21->SetMaximum(1.15);
   emptyRat__21->SetEntries(1);
   emptyRat__21->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyRat__21->SetLineColor(ci);
   emptyRat__21->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__21->GetXaxis()->CenterTitle(true);
   emptyRat__21->GetXaxis()->SetLabelFont(43);
   emptyRat__21->GetXaxis()->SetLabelSize(33);
   emptyRat__21->GetXaxis()->SetTitleSize(33);
   emptyRat__21->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__21->GetXaxis()->SetTitleFont(43);
   emptyRat__21->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__21->GetYaxis()->CenterTitle(true);
   emptyRat__21->GetYaxis()->SetNdivisions(505);
   emptyRat__21->GetYaxis()->SetLabelFont(43);
   emptyRat__21->GetYaxis()->SetLabelSize(33);
   emptyRat__21->GetYaxis()->SetTitleSize(33);
   emptyRat__21->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__21->GetYaxis()->SetTitleFont(43);
   emptyRat__21->GetZaxis()->SetLabelFont(42);
   emptyRat__21->GetZaxis()->SetLabelSize(0.035);
   emptyRat__21->GetZaxis()->SetTitleSize(0.035);
   emptyRat__21->GetZaxis()->SetTitleFont(42);
   emptyRat__21->Draw("");
   
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
   1000,
   1000,
   0.679474,
   0.6915509,
   0.7621929,
   0.8209108,
   0.8622038,
   0.9103044,
   0.9521466,
   0.9937854,
   1.034694,
   1.060115,
   1.075247,
   1.067695,
   1.050493,
   1.009886,
   0.9633241,
   0.8595006};
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
   0,
   0.4690431,
   0.1406776,
   0.0462339,
   0.01403848,
   0.01442574,
   0.00393203,
   0.01390957,
   0.005180169,
   0.002642469,
   0.01142928,
   0.006511487,
   0.009755353,
   0.003165518,
   0.01336668,
   0.002569732,
   0.01652121,
   0.01665453};
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
   0,
   0.799356,
   0.09204993,
   0.03852524,
   0.03432659,
   0.01470122,
   0.01675691,
   0.002664066,
   0.005042932,
   0.008878776,
   0.003449634,
   0.008422179,
   0.003439363,
   0.007944002,
   0.003215571,
   0.02013054,
   0.01491802,
   0.07023735};
   grae = new TGraphAsymmErrors(18,g_fx3015,g_fy3015,g_felx3015,g_fehx3015,g_fely3015,g_fehy3015);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1227;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(62);
   
   TH1F *Graph_g3015 = new TH1F("Graph_g3015","",100,-3.5065,3.5915);
   Graph_g3015->SetMinimum(0.4849168);
   Graph_g3015->SetMaximum(1100.825);
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
   
   Double_t Graph0_fx1010[18] = {
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
   Double_t Graph0_fy1010[18] = {
   0,
   3.605905,
   0.7931957,
   0.9445387,
   0.8344834,
   0.906352,
   0.9156444,
   0.968357,
   0.985495,
   1.013019,
   1.006132,
   1.036018,
   1.004211,
   1.022753,
   1.044345,
   1.005701,
   0.988787,
   0.9525992};
   Double_t Graph0_fex1010[18] = {
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
   Double_t Graph0_fey1010[18] = {
   -0,
   -0.6040803,
   -0.05273999,
   -0.02908149,
   -0.01528517,
   -0.009354242,
   -0.005767281,
   -0.003977565,
   -0.003662225,
   -0.003807347,
   -0.003468318,
   -0.002675679,
   -0.002808632,
   -0.003368629,
   -0.004469237,
   -0.00799378,
   -0.01836205,
   -0.04804259};
   gre = new TGraphErrors(18,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1224;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(2);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,-3.46425,3.51675);
   Graph_Graph1010->SetMinimum(0);
   Graph_Graph1010->SetMaximum(3.966495);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
   gre->Draw(" 5");
   Double_t xAxis10[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_5__22 = new TH1D("hist_eta_rat_5__22","",18, xAxis10);
   hist_eta_rat_5__22->SetBinContent(1,1000);
   hist_eta_rat_5__22->SetBinContent(2,1000);
   hist_eta_rat_5__22->SetBinContent(3,0.7893722);
   hist_eta_rat_5__22->SetBinContent(4,0.9476728);
   hist_eta_rat_5__22->SetBinContent(5,0.8374043);
   hist_eta_rat_5__22->SetBinContent(6,0.9102454);
   hist_eta_rat_5__22->SetBinContent(7,0.9191412);
   hist_eta_rat_5__22->SetBinContent(8,0.9722379);
   hist_eta_rat_5__22->SetBinContent(9,0.9880032);
   hist_eta_rat_5__22->SetBinContent(10,1.014302);
   hist_eta_rat_5__22->SetBinContent(11,1.00676);
   hist_eta_rat_5__22->SetBinContent(12,1.036132);
   hist_eta_rat_5__22->SetBinContent(13,1.003793);
   hist_eta_rat_5__22->SetBinContent(14,1.020498);
   hist_eta_rat_5__22->SetBinContent(15,1.040108);
   hist_eta_rat_5__22->SetBinContent(16,1.000316);
   hist_eta_rat_5__22->SetBinContent(17,0.9791528);
   hist_eta_rat_5__22->SetBinContent(18,0.9521649);
   hist_eta_rat_5__22->SetBinError(2,3.074538);
   hist_eta_rat_5__22->SetBinError(3,0.2191604);
   hist_eta_rat_5__22->SetBinError(4,0.08759579);
   hist_eta_rat_5__22->SetBinError(5,0.03865856);
   hist_eta_rat_5__22->SetBinError(6,0.02539699);
   hist_eta_rat_5__22->SetBinError(7,0.01891809);
   hist_eta_rat_5__22->SetBinError(8,0.01588133);
   hist_eta_rat_5__22->SetBinError(9,0.01403938);
   hist_eta_rat_5__22->SetBinError(10,0.01317588);
   hist_eta_rat_5__22->SetBinError(11,0.01256683);
   hist_eta_rat_5__22->SetBinError(12,0.01279793);
   hist_eta_rat_5__22->SetBinError(13,0.01300251);
   hist_eta_rat_5__22->SetBinError(14,0.0142761);
   hist_eta_rat_5__22->SetBinError(15,0.01657757);
   hist_eta_rat_5__22->SetBinError(16,0.02006675);
   hist_eta_rat_5__22->SetBinError(17,0.02331256);
   hist_eta_rat_5__22->SetBinError(18,0.09436571);
   hist_eta_rat_5__22->SetEntries(39.05852);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_5__22->SetLineColor(ci);
   hist_eta_rat_5__22->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_5__22->SetMarkerColor(ci);
   hist_eta_rat_5__22->SetMarkerStyle(20);
   hist_eta_rat_5__22->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_5__22->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_5__22->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_5__22->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_5__22->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_5__22->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_5__22->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_5__22->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_5__22->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_5__22->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_5__22->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_5__22->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_5__22->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_5__22->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_5__22->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_5__22->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_5__22->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_5__22->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_5__22->Draw("same");
   line = new TLine(-2.999,1,2.999,1);
   line->Draw();
      tex = new TLatex(0.35,0.29,"p_{T}^{ave} > 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_2_1->Modified();
   cRat0->cd();
   cRat0->Modified();
   cRat0->cd();
   cRat0->SetSelected(cRat0);
}
