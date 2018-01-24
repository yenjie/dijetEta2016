void pPbppRatCTppjecv1()
{
//=========Macro generated from canvas: cRat1/
//=========  (Wed Jan 24 15:16:19 2018) by ROOT version6.10/08

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cRat1 = new TCanvas("cRat1", "",54,559,1300,800);
   cRat1->Range(0,0,1,1);
   cRat1->SetFillColor(0);
   cRat1->SetBorderMode(0);
   cRat1->SetBorderSize(2);
   cRat1->SetFrameBorderMode(0);
  
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
   
   TH1D *emptyRat__23 = new TH1D("emptyRat__23","",10,-2.999,2.999);
   emptyRat__23->SetBinContent(7,1000);
   emptyRat__23->SetBinError(7,1000);
   emptyRat__23->SetMinimum(0.601);
   emptyRat__23->SetMaximum(1.15);
   emptyRat__23->SetEntries(1);
   emptyRat__23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   emptyRat__23->SetLineColor(ci);
   emptyRat__23->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__23->GetXaxis()->CenterTitle(true);
   emptyRat__23->GetXaxis()->SetLabelFont(43);
   emptyRat__23->GetXaxis()->SetLabelSize(33);
   emptyRat__23->GetXaxis()->SetTitleSize(33);
   emptyRat__23->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__23->GetXaxis()->SetTitleFont(43);
   emptyRat__23->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__23->GetYaxis()->CenterTitle(true);
   emptyRat__23->GetYaxis()->SetNdivisions(505);
   emptyRat__23->GetYaxis()->SetLabelFont(43);
   emptyRat__23->GetYaxis()->SetLabelSize(33);
   emptyRat__23->GetYaxis()->SetTitleSize(33);
   emptyRat__23->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__23->GetYaxis()->SetTitleFont(43);
   emptyRat__23->GetZaxis()->SetLabelFont(42);
   emptyRat__23->GetZaxis()->SetLabelSize(0.035);
   emptyRat__23->GetZaxis()->SetTitleSize(0.035);
   emptyRat__23->GetZaxis()->SetTitleFont(42);
   emptyRat__23->Draw("");
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

   ci = 1228;
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
   entry=leg->AddEntry("","EPPS16","f");

   ci = 1236;
   color = new TColor(ci, 0, 1, 0, " ", 0.7);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3356);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   p_0_0->Modified();
   cRat1->cd();
  
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
   
   TH1D *emptyRat__24 = new TH1D("emptyRat__24","",10,-2.999,2.999);
   emptyRat__24->SetBinContent(7,1000);
   emptyRat__24->SetBinError(7,1000);
   emptyRat__24->SetMinimum(0.601);
   emptyRat__24->SetMaximum(1.15);
   emptyRat__24->SetEntries(1);
   emptyRat__24->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyRat__24->SetLineColor(ci);
   emptyRat__24->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__24->GetXaxis()->CenterTitle(true);
   emptyRat__24->GetXaxis()->SetLabelFont(43);
   emptyRat__24->GetXaxis()->SetLabelSize(33);
   emptyRat__24->GetXaxis()->SetTitleSize(33);
   emptyRat__24->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__24->GetXaxis()->SetTitleFont(43);
   emptyRat__24->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__24->GetYaxis()->CenterTitle(true);
   emptyRat__24->GetYaxis()->SetNdivisions(505);
   emptyRat__24->GetYaxis()->SetLabelFont(43);
   emptyRat__24->GetYaxis()->SetLabelSize(33);
   emptyRat__24->GetYaxis()->SetTitleSize(33);
   emptyRat__24->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__24->GetYaxis()->SetTitleFont(43);
   emptyRat__24->GetZaxis()->SetLabelFont(42);
   emptyRat__24->GetZaxis()->SetLabelSize(0.035);
   emptyRat__24->GetZaxis()->SetTitleSize(0.035);
   emptyRat__24->GetZaxis()->SetTitleFont(42);
   emptyRat__24->Draw("");
   
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,g_fx3016,g_fy3016,g_felx3016,g_fehx3016,g_fely3016,g_fehy3016);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1245;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(62);
   
   TH1F *Graph_g3016 = new TH1F("Graph_g3016","",100,-3.5065,3.5915);
   Graph_g3016->SetMinimum(0.5843873);
   Graph_g3016->SetMaximum(1105.675);
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
   
   Double_t _fx3017[17] = {
   -2.35165,
   -1.92915,
   -1.6475,
   -1.36585,
   -1.08415,
   -0.8025,
   -0.52085,
   -0.23915,
   0.0425,
   0.32415,
   0.60585,
   0.8875,
   1.16915,
   1.45085,
   1.7325,
   2.155,
   2.71835};
   Double_t _fy3017[17] = {
   0.8261347,
   0.8481351,
   0.8731813,
   0.8815734,
   0.9387882,
   0.9637616,
   0.9857561,
   1.011942,
   1.020013,
   1.036381,
   1.039651,
   1.032648,
   1.028432,
   1.004696,
   0.9918116,
   0.9626135,
   0.9100233};
   Double_t _felx3017[17] = {
   0.28165,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.2817,
   0.28165};
   Double_t _fely3017[17] = {
   0.0577067,
   0.06094437,
   0.06621806,
   0.06530988,
   0.06079615,
   0.05017875,
   0.04053812,
   0.03742218,
   0.03440156,
   0.03131032,
   0.02916249,
   0.0314385,
   0.03521087,
   0.04392625,
   0.05836393,
   0.08212827,
   0.1096209};
   Double_t _fehx3017[17] = {
   0.28165,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.2817,
   0.28165};
   Double_t _fehy3017[17] = {
   0.04873593,
   0.05423305,
   0.05350265,
   0.04729348,
   0.04368576,
   0.03938808,
   0.03443433,
   0.03109965,
   0.02947924,
   0.030979,
   0.03402676,
   0.03480305,
   0.03920396,
   0.04526593,
   0.05688527,
   0.0778286,
   0.1109266};
   grae = new TGraphAsymmErrors(17,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");

   ci = 1246;
   color = new TColor(ci, 0, 1, 0, " ", 0.7);
   grae->SetFillColor(ci);
   grae->SetFillStyle(3356);
   grae->SetLineColor(3);
   grae->SetLineWidth(0);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-3.19663,3.56333);
   Graph_Graph3017->SetMinimum(0.737903);
   Graph_Graph3017->SetMaximum(1.104203);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3017->SetLineColor(ci);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw(" 5");
   
   Double_t Graph0_fx1011[18] = {
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
   Double_t Graph0_fy1011[18] = {
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
   Double_t Graph0_fex1011[18] = {
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
   Double_t Graph0_fey1011[18] = {
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
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1242;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(2);
   
   TH1F *Graph_Graph_Graph10061011 = new TH1F("Graph_Graph_Graph10061011","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10061011->SetMinimum(0.611785);
   Graph_Graph_Graph10061011->SetMaximum(3.002481);
   Graph_Graph_Graph10061011->SetDirectory(0);
   Graph_Graph_Graph10061011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10061011->SetLineColor(ci);
   Graph_Graph_Graph10061011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10061011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10061011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10061011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10061011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10061011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10061011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10061011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10061011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10061011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10061011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10061011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10061011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10061011);
   
   gre->Draw(" 5");
   Double_t xAxis11[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_3__25 = new TH1D("hist_eta_rat_3__25","",18, xAxis11);
   hist_eta_rat_3__25->SetBinContent(1,1000);
   hist_eta_rat_3__25->SetBinContent(2,0.9116656);
   hist_eta_rat_3__25->SetBinContent(3,0.8524474);
   hist_eta_rat_3__25->SetBinContent(4,0.8989739);
   hist_eta_rat_3__25->SetBinContent(5,0.9111603);
   hist_eta_rat_3__25->SetBinContent(6,0.9396645);
   hist_eta_rat_3__25->SetBinContent(7,0.9623363);
   hist_eta_rat_3__25->SetBinContent(8,0.9903204);
   hist_eta_rat_3__25->SetBinContent(9,1.011398);
   hist_eta_rat_3__25->SetBinContent(10,1.017393);
   hist_eta_rat_3__25->SetBinContent(11,1.043345);
   hist_eta_rat_3__25->SetBinContent(12,1.030637);
   hist_eta_rat_3__25->SetBinContent(13,1.042192);
   hist_eta_rat_3__25->SetBinContent(14,1.017161);
   hist_eta_rat_3__25->SetBinContent(15,1.011422);
   hist_eta_rat_3__25->SetBinContent(16,1.003408);
   hist_eta_rat_3__25->SetBinContent(17,0.9133288);
   hist_eta_rat_3__25->SetBinContent(18,0.809533);
   hist_eta_rat_3__25->SetBinError(1,2.02439);
   hist_eta_rat_3__25->SetBinError(2,0.07600164);
   hist_eta_rat_3__25->SetBinError(3,0.03151034);
   hist_eta_rat_3__25->SetBinError(4,0.0188971);
   hist_eta_rat_3__25->SetBinError(5,0.01333137);
   hist_eta_rat_3__25->SetBinError(6,0.01070109);
   hist_eta_rat_3__25->SetBinError(7,0.00917168);
   hist_eta_rat_3__25->SetBinError(8,0.008310487);
   hist_eta_rat_3__25->SetBinError(9,0.007789899);
   hist_eta_rat_3__25->SetBinError(10,0.00746636);
   hist_eta_rat_3__25->SetBinError(11,0.007388564);
   hist_eta_rat_3__25->SetBinError(12,0.007355957);
   hist_eta_rat_3__25->SetBinError(13,0.007624622);
   hist_eta_rat_3__25->SetBinError(14,0.007961064);
   hist_eta_rat_3__25->SetBinError(15,0.008672094);
   hist_eta_rat_3__25->SetBinError(16,0.009832093);
   hist_eta_rat_3__25->SetBinError(17,0.009188959);
   hist_eta_rat_3__25->SetBinError(18,0.02149447);
   hist_eta_rat_3__25->SetEntries(82.45342);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_3__25->SetLineColor(ci);
   hist_eta_rat_3__25->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_3__25->SetMarkerColor(ci);
   hist_eta_rat_3__25->SetMarkerStyle(20);
   hist_eta_rat_3__25->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_3__25->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_3__25->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_3__25->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_3__25->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_3__25->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_3__25->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_3__25->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_3__25->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_3__25->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_3__25->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_3__25->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_3__25->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_3__25->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_3__25->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_3__25->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_3__25->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_3__25->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_3__25->Draw("same");
   TLine *line = new TLine(-2.999,1,2.999,1);
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
   p_1_0->Range(-2.999,0.601,2.999,1.217854);
   p_1_0->SetFillColor(0);
   p_1_0->SetBorderMode(0);
   p_1_0->SetBorderSize(2);
   p_1_0->SetLeftMargin(0);
   p_1_0->SetRightMargin(0);
   p_1_0->SetBottomMargin(0);
   p_1_0->SetFrameBorderMode(0);
   p_1_0->SetFrameBorderMode(0);
   
   TH1D *emptyRat__26 = new TH1D("emptyRat__26","",10,-2.999,2.999);
   emptyRat__26->SetBinContent(7,1000);
   emptyRat__26->SetBinError(7,1000);
   emptyRat__26->SetMinimum(0.601);
   emptyRat__26->SetMaximum(1.15);
   emptyRat__26->SetEntries(1);
   emptyRat__26->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyRat__26->SetLineColor(ci);
   emptyRat__26->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__26->GetXaxis()->CenterTitle(true);
   emptyRat__26->GetXaxis()->SetLabelFont(43);
   emptyRat__26->GetXaxis()->SetLabelSize(33);
   emptyRat__26->GetXaxis()->SetTitleSize(33);
   emptyRat__26->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__26->GetXaxis()->SetTitleFont(43);
   emptyRat__26->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__26->GetYaxis()->CenterTitle(true);
   emptyRat__26->GetYaxis()->SetNdivisions(505);
   emptyRat__26->GetYaxis()->SetLabelFont(43);
   emptyRat__26->GetYaxis()->SetLabelSize(33);
   emptyRat__26->GetYaxis()->SetTitleSize(33);
   emptyRat__26->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__26->GetYaxis()->SetTitleFont(43);
   emptyRat__26->GetZaxis()->SetLabelFont(42);
   emptyRat__26->GetZaxis()->SetLabelSize(0.035);
   emptyRat__26->GetZaxis()->SetTitleSize(0.035);
   emptyRat__26->GetZaxis()->SetTitleFont(42);
   emptyRat__26->Draw("");
   
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
   grae = new TGraphAsymmErrors(18,g_fx3018,g_fy3018,g_felx3018,g_fehx3018,g_fely3018,g_fehy3018);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1235;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(62);
   
   TH1F *Graph_g3018 = new TH1F("Graph_g3018","",100,-3.5065,3.5915);
   Graph_g3018->SetMinimum(0.5878343);
   Graph_g3018->SetMaximum(1.146271);
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
   
   Double_t _fx3019[18] = {
   -2.77415,
   -2.35165,
   -1.92915,
   -1.6475,
   -1.36585,
   -1.08415,
   -0.8025,
   -0.52085,
   -0.23915,
   0.0425,
   0.32415,
   0.60585,
   0.8875,
   1.16915,
   1.45085,
   1.7325,
   2.155,
   2.71835};
   Double_t _fy3019[18] = {
   0.8303968,
   0.8651304,
   0.9014361,
   0.9276223,
   0.9716249,
   0.9777976,
   1.014237,
   1.025382,
   1.035561,
   1.042809,
   1.034495,
   1.032687,
   1.017219,
   0.9939628,
   0.9782006,
   0.9587713,
   0.9314296,
   0.8946384};
   Double_t _felx3019[18] = {
   0.14085,
   0.28165,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.2817,
   0.28165};
   Double_t _fely3019[18] = {
   0.0570987,
   0.07440033,
   0.07627342,
   0.07145351,
   0.06235248,
   0.05276372,
   0.05222794,
   0.05039537,
   0.04594986,
   0.04039915,
   0.03574879,
   0.0333959,
   0.03212991,
   0.03996325,
   0.05703583,
   0.07762898,
   0.103315,
   0.1285407};
   Double_t _fehx3019[18] = {
   0.14085,
   0.28165,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.2817,
   0.28165};
   Double_t _fehy3019[18] = {
   0.04539119,
   0.05411096,
   0.05092257,
   0.05071179,
   0.04971803,
   0.04665975,
   0.04566941,
   0.04519349,
   0.04512315,
   0.04391186,
   0.03940866,
   0.03353975,
   0.03322277,
   0.04077014,
   0.05593351,
   0.07445854,
   0.1050362,
   0.1354434};
   grae = new TGraphAsymmErrors(18,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = 1236;
   color = new TColor(ci, 0, 1, 0, " ", 0.7);
   grae->SetFillColor(ci);
   grae->SetFillStyle(3356);
   grae->SetLineColor(3);
   grae->SetLineWidth(0);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-3.5065,3.5915);
   Graph_Graph3019->SetMinimum(0.7340353);
   Graph_Graph3019->SetMaximum(1.118783);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3019->SetLineColor(ci);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw(" 5");
   
   Double_t Graph0_fx1012[18] = {
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
   Double_t Graph0_fy1012[18] = {
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
   Double_t Graph0_fex1012[18] = {
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
   Double_t Graph0_fey1012[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1232;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(2);
   
   TH1F *Graph_Graph_Graph10071012 = new TH1F("Graph_Graph_Graph10071012","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10071012->SetMinimum(0.671647);
   Graph_Graph_Graph10071012->SetMaximum(1.080586);
   Graph_Graph_Graph10071012->SetDirectory(0);
   Graph_Graph_Graph10071012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10071012->SetLineColor(ci);
   Graph_Graph_Graph10071012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10071012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10071012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10071012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10071012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10071012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10071012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10071012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10071012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10071012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10071012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10071012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10071012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10071012);
   
   gre->Draw(" 5");
   Double_t xAxis12[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_1__27 = new TH1D("hist_eta_rat_1__27","",18, xAxis12);
   hist_eta_rat_1__27->SetBinContent(1,0.6844656);
   hist_eta_rat_1__27->SetBinContent(2,0.8566838);
   hist_eta_rat_1__27->SetBinContent(3,0.8885932);
   hist_eta_rat_1__27->SetBinContent(4,0.9016656);
   hist_eta_rat_1__27->SetBinContent(5,0.9657551);
   hist_eta_rat_1__27->SetBinContent(6,0.9627173);
   hist_eta_rat_1__27->SetBinContent(7,0.9760507);
   hist_eta_rat_1__27->SetBinContent(8,1.017309);
   hist_eta_rat_1__27->SetBinContent(9,1.022232);
   hist_eta_rat_1__27->SetBinContent(10,1.046103);
   hist_eta_rat_1__27->SetBinContent(11,1.045738);
   hist_eta_rat_1__27->SetBinContent(12,1.045804);
   hist_eta_rat_1__27->SetBinContent(13,1.039695);
   hist_eta_rat_1__27->SetBinContent(14,1.021309);
   hist_eta_rat_1__27->SetBinContent(15,0.9903823);
   hist_eta_rat_1__27->SetBinContent(16,0.9773088);
   hist_eta_rat_1__27->SetBinContent(17,0.913462);
   hist_eta_rat_1__27->SetBinContent(18,0.7474494);
   hist_eta_rat_1__27->SetBinError(1,0.2000205);
   hist_eta_rat_1__27->SetBinError(2,0.03499277);
   hist_eta_rat_1__27->SetBinError(3,0.02598156);
   hist_eta_rat_1__27->SetBinError(4,0.01962206);
   hist_eta_rat_1__27->SetBinError(5,0.01667869);
   hist_eta_rat_1__27->SetBinError(6,0.01435038);
   hist_eta_rat_1__27->SetBinError(7,0.01291);
   hist_eta_rat_1__27->SetBinError(8,0.01221341);
   hist_eta_rat_1__27->SetBinError(9,0.01158239);
   hist_eta_rat_1__27->SetBinError(10,0.01132278);
   hist_eta_rat_1__27->SetBinError(11,0.01117984);
   hist_eta_rat_1__27->SetBinError(12,0.0112725);
   hist_eta_rat_1__27->SetBinError(13,0.01148646);
   hist_eta_rat_1__27->SetBinError(14,0.01194791);
   hist_eta_rat_1__27->SetBinError(15,0.01264786);
   hist_eta_rat_1__27->SetBinError(16,0.01408731);
   hist_eta_rat_1__27->SetBinError(17,0.01258494);
   hist_eta_rat_1__27->SetBinError(18,0.02355569);
   hist_eta_rat_1__27->SetEntries(6506.793);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_1__27->SetLineColor(ci);
   hist_eta_rat_1__27->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_1__27->SetMarkerColor(ci);
   hist_eta_rat_1__27->SetMarkerStyle(20);
   hist_eta_rat_1__27->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_1__27->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_1__27->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_1__27->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_1__27->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_1__27->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_1__27->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_1__27->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_1__27->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_1__27->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_1__27->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_1__27->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_1__27->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_1__27->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_1__27->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_1__27->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_1__27->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_1__27->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_1__27->Draw("same");
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
   
   TH1D *emptyRat__28 = new TH1D("emptyRat__28","",10,-2.999,2.999);
   emptyRat__28->SetBinContent(7,1000);
   emptyRat__28->SetBinError(7,1000);
   emptyRat__28->SetMinimum(0.601);
   emptyRat__28->SetMaximum(1.15);
   emptyRat__28->SetEntries(1);
   emptyRat__28->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyRat__28->SetLineColor(ci);
   emptyRat__28->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__28->GetXaxis()->CenterTitle(true);
   emptyRat__28->GetXaxis()->SetLabelFont(43);
   emptyRat__28->GetXaxis()->SetLabelSize(33);
   emptyRat__28->GetXaxis()->SetTitleSize(33);
   emptyRat__28->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__28->GetXaxis()->SetTitleFont(43);
   emptyRat__28->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__28->GetYaxis()->CenterTitle(true);
   emptyRat__28->GetYaxis()->SetNdivisions(505);
   emptyRat__28->GetYaxis()->SetLabelFont(43);
   emptyRat__28->GetYaxis()->SetLabelSize(33);
   emptyRat__28->GetYaxis()->SetTitleSize(33);
   emptyRat__28->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__28->GetYaxis()->SetTitleFont(43);
   emptyRat__28->GetZaxis()->SetLabelFont(42);
   emptyRat__28->GetZaxis()->SetLabelSize(0.035);
   emptyRat__28->GetZaxis()->SetTitleSize(0.035);
   emptyRat__28->GetZaxis()->SetTitleFont(42);
   emptyRat__28->Draw("");
   
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
   grae = new TGraphAsymmErrors(18,g_fx3020,g_fy3020,g_felx3020,g_fehx3020,g_fely3020,g_fehy3020);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1250;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(62);
   
   TH1F *Graph_g3020 = new TH1F("Graph_g3020","",100,-3.5065,3.5915);
   Graph_g3020->SetMinimum(0.6018376);
   Graph_g3020->SetMaximum(1104.099);
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
   
   Double_t _fx3021[16] = {
   -1.92915,
   -1.6475,
   -1.36585,
   -1.08415,
   -0.8025,
   -0.52085,
   -0.23915,
   0.0425,
   0.32415,
   0.60585,
   0.8875,
   1.16915,
   1.45085,
   1.7325,
   2.155,
   2.71835};
   Double_t _fy3021[16] = {
   0.847962,
   0.8476423,
   0.8930275,
   0.9111005,
   0.9413567,
   0.9699034,
   0.9888499,
   1.008945,
   1.026306,
   1.039063,
   1.040125,
   1.032447,
   1.021067,
   1.004083,
   0.9782689,
   0.9476648};
   Double_t _felx3021[16] = {
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.2817,
   0.28165};
   Double_t _fely3021[16] = {
   0.05782515,
   0.05984342,
   0.06382812,
   0.06113296,
   0.05383641,
   0.0427544,
   0.03397294,
   0.03077677,
   0.02868404,
   0.0272011,
   0.02942231,
   0.03446806,
   0.04153537,
   0.05353399,
   0.07400634,
   0.1048754};
   Double_t _fehx3021[16] = {
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.2817,
   0.28165};
   Double_t _fehy3021[16] = {
   0.05177505,
   0.0548299,
   0.0527066,
   0.04555385,
   0.03963803,
   0.03413425,
   0.02839702,
   0.02459295,
   0.02455244,
   0.02994129,
   0.03529541,
   0.03933925,
   0.04572424,
   0.05319328,
   0.07055453,
   0.1039251};
   grae = new TGraphAsymmErrors(16,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");

   ci = 1251;
   color = new TColor(ci, 0, 1, 0, " ", 0.7);
   grae->SetFillColor(ci);
   grae->SetFillStyle(3356);
   grae->SetLineColor(3);
   grae->SetLineWidth(0);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-2.577,3.507);
   Graph_Graph3021->SetMinimum(0.7590367);
   Graph_Graph3021->SetMaximum(1.104183);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3021->SetLineColor(ci);
   Graph_Graph3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw(" 5");
   
   Double_t Graph0_fx1013[18] = {
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
   Double_t Graph0_fy1013[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1247;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(2);
   
   TH1F *Graph_Graph_Graph10081013 = new TH1F("Graph_Graph_Graph10081013","Graph",100,-1003.192,11000.53);
   Graph_Graph_Graph10081013->SetMinimum(0);
   Graph_Graph_Graph10081013->SetMaximum(1.244368);
   Graph_Graph_Graph10081013->SetDirectory(0);
   Graph_Graph_Graph10081013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10081013->SetLineColor(ci);
   Graph_Graph_Graph10081013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10081013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10081013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10081013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10081013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10081013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10081013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10081013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10081013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10081013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10081013);
   
   gre->Draw(" 5");
   Double_t xAxis13[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_4__29 = new TH1D("hist_eta_rat_4__29","",18, xAxis13);
   hist_eta_rat_4__29->SetBinContent(1,1000);
   hist_eta_rat_4__29->SetBinContent(2,1000);
   hist_eta_rat_4__29->SetBinContent(3,0.8675753);
   hist_eta_rat_4__29->SetBinContent(4,0.8987785);
   hist_eta_rat_4__29->SetBinContent(5,0.9086055);
   hist_eta_rat_4__29->SetBinContent(6,0.9336589);
   hist_eta_rat_4__29->SetBinContent(7,0.9523605);
   hist_eta_rat_4__29->SetBinContent(8,0.9609187);
   hist_eta_rat_4__29->SetBinContent(9,1.001282);
   hist_eta_rat_4__29->SetBinContent(10,1.016526);
   hist_eta_rat_4__29->SetBinContent(11,1.037566);
   hist_eta_rat_4__29->SetBinContent(12,1.025952);
   hist_eta_rat_4__29->SetBinContent(13,1.032274);
   hist_eta_rat_4__29->SetBinContent(14,1.02023);
   hist_eta_rat_4__29->SetBinContent(15,1.018945);
   hist_eta_rat_4__29->SetBinContent(16,1.00273);
   hist_eta_rat_4__29->SetBinContent(17,0.9408388);
   hist_eta_rat_4__29->SetBinContent(18,0.8200193);
   hist_eta_rat_4__29->SetBinError(2,0.2229042);
   hist_eta_rat_4__29->SetBinError(3,0.06001566);
   hist_eta_rat_4__29->SetBinError(4,0.02845345);
   hist_eta_rat_4__29->SetBinError(5,0.01777433);
   hist_eta_rat_4__29->SetBinError(6,0.01332787);
   hist_eta_rat_4__29->SetBinError(7,0.01099905);
   hist_eta_rat_4__29->SetBinError(8,0.009615502);
   hist_eta_rat_4__29->SetBinError(9,0.009015892);
   hist_eta_rat_4__29->SetBinError(10,0.008556761);
   hist_eta_rat_4__29->SetBinError(11,0.008444415);
   hist_eta_rat_4__29->SetBinError(12,0.008371608);
   hist_eta_rat_4__29->SetBinError(13,0.008662159);
   hist_eta_rat_4__29->SetBinError(14,0.009165347);
   hist_eta_rat_4__29->SetBinError(15,0.01012149);
   hist_eta_rat_4__29->SetBinError(16,0.01168789);
   hist_eta_rat_4__29->SetBinError(17,0.01156398);
   hist_eta_rat_4__29->SetBinError(18,0.03099523);
   hist_eta_rat_4__29->SetEntries(4849.988);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_4__29->SetLineColor(ci);
   hist_eta_rat_4__29->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_4__29->SetMarkerColor(ci);
   hist_eta_rat_4__29->SetMarkerStyle(20);
   hist_eta_rat_4__29->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_4__29->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_4__29->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_4__29->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_4__29->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_4__29->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_4__29->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_4__29->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_4__29->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_4__29->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_4__29->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_4__29->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_4__29->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_4__29->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_4__29->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_4__29->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_4__29->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_4__29->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_4__29->Draw("same");
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
   p_2_0->Range(-2.999,0.601,3.740326,1.217854);
   p_2_0->SetFillColor(0);
   p_2_0->SetBorderMode(0);
   p_2_0->SetBorderSize(2);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetBottomMargin(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->SetFrameBorderMode(0);
   
   TH1D *emptyRat__30 = new TH1D("emptyRat__30","",10,-2.999,2.999);
   emptyRat__30->SetBinContent(7,1000);
   emptyRat__30->SetBinError(7,1000);
   emptyRat__30->SetMinimum(0.601);
   emptyRat__30->SetMaximum(1.15);
   emptyRat__30->SetEntries(1);
   emptyRat__30->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyRat__30->SetLineColor(ci);
   emptyRat__30->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__30->GetXaxis()->CenterTitle(true);
   emptyRat__30->GetXaxis()->SetLabelFont(43);
   emptyRat__30->GetXaxis()->SetLabelSize(33);
   emptyRat__30->GetXaxis()->SetTitleSize(33);
   emptyRat__30->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__30->GetXaxis()->SetTitleFont(43);
   emptyRat__30->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__30->GetYaxis()->CenterTitle(true);
   emptyRat__30->GetYaxis()->SetNdivisions(505);
   emptyRat__30->GetYaxis()->SetLabelFont(43);
   emptyRat__30->GetYaxis()->SetLabelSize(33);
   emptyRat__30->GetYaxis()->SetTitleSize(33);
   emptyRat__30->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__30->GetYaxis()->SetTitleFont(43);
   emptyRat__30->GetZaxis()->SetLabelFont(42);
   emptyRat__30->GetZaxis()->SetLabelSize(0.035);
   emptyRat__30->GetZaxis()->SetTitleSize(0.035);
   emptyRat__30->GetZaxis()->SetTitleFont(42);
   emptyRat__30->Draw("");
   
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
   grae = new TGraphAsymmErrors(18,g_fx3022,g_fy3022,g_felx3022,g_fehx3022,g_fely3022,g_fehy3022);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1240;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(62);
   
   TH1F *Graph_g3022 = new TH1F("Graph_g3022","",100,-3.5065,3.5915);
   Graph_g3022->SetMinimum(0.6095148);
   Graph_g3022->SetMaximum(1100.201);
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
   
   Double_t _fx3023[17] = {
   -2.35165,
   -1.92915,
   -1.6475,
   -1.36585,
   -1.08415,
   -0.8025,
   -0.52085,
   -0.23915,
   0.0425,
   0.32415,
   0.60585,
   0.8875,
   1.16915,
   1.45085,
   1.7325,
   2.155,
   2.71835};
   Double_t _fy3023[17] = {
   0.835956,
   0.8582054,
   0.9031081,
   0.9261696,
   0.9646468,
   0.9848606,
   1.002964,
   1.018672,
   1.034211,
   1.034579,
   1.039895,
   1.02781,
   1.0125,
   0.9961927,
   0.970159,
   0.9447459,
   0.9353893};
   Double_t _felx3023[17] = {
   0.28165,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.2817,
   0.28165};
   Double_t _fely3023[17] = {
   0.06010712,
   0.06854447,
   0.07158742,
   0.06600584,
   0.05696711,
   0.04645116,
   0.04351831,
   0.04111695,
   0.03737911,
   0.0328953,
   0.03185235,
   0.0322501,
   0.03642089,
   0.04816671,
   0.06554044,
   0.09133227,
   0.1217441};
   Double_t _fehx3023[17] = {
   0.28165,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.2817,
   0.28165};
   Double_t _fehy3023[17] = {
   0.05147188,
   0.05345575,
   0.05021424,
   0.04638796,
   0.04422886,
   0.04011096,
   0.03713828,
   0.03582039,
   0.03588133,
   0.03626734,
   0.03527186,
   0.03458423,
   0.03866696,
   0.0483085,
   0.0628539,
   0.08960012,
   0.1255289};
   grae = new TGraphAsymmErrors(17,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = 1241;
   color = new TColor(ci, 0, 1, 0, " ", 0.7);
   grae->SetFillColor(ci);
   grae->SetFillStyle(3356);
   grae->SetLineColor(3);
   grae->SetLineWidth(0);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-3.19663,3.56333);
   Graph_Graph3023->SetMinimum(0.745917);
   Graph_Graph3023->SetMaximum(1.105099);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3023->SetLineColor(ci);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw(" 5");
   
   Double_t Graph0_fx1014[18] = {
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
   Double_t Graph0_fy1014[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1237;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(2);
   
   TH1F *Graph_Graph_Graph10091014 = new TH1F("Graph_Graph_Graph10091014","Graph",100,-1002.836,11000.38);
   Graph_Graph_Graph10091014->SetMinimum(0.7408833);
   Graph_Graph_Graph10091014->SetMaximum(1.28245);
   Graph_Graph_Graph10091014->SetDirectory(0);
   Graph_Graph_Graph10091014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10091014->SetLineColor(ci);
   Graph_Graph_Graph10091014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10091014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10091014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10091014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10091014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10091014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10091014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10091014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10091014);
   
   gre->Draw(" 5");
   Double_t xAxis14[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_2__31 = new TH1D("hist_eta_rat_2__31","",18, xAxis14);
   hist_eta_rat_2__31->SetBinContent(1,1000);
   hist_eta_rat_2__31->SetBinContent(2,0.8446867);
   hist_eta_rat_2__31->SetBinContent(3,0.9097642);
   hist_eta_rat_2__31->SetBinContent(4,0.8980041);
   hist_eta_rat_2__31->SetBinContent(5,0.928142);
   hist_eta_rat_2__31->SetBinContent(6,0.9480704);
   hist_eta_rat_2__31->SetBinContent(7,0.9865738);
   hist_eta_rat_2__31->SetBinContent(8,0.9959402);
   hist_eta_rat_2__31->SetBinContent(9,1.018127);
   hist_eta_rat_2__31->SetBinContent(10,1.035616);
   hist_eta_rat_2__31->SetBinContent(11,1.041086);
   hist_eta_rat_2__31->SetBinContent(12,1.031883);
   hist_eta_rat_2__31->SetBinContent(13,1.036544);
   hist_eta_rat_2__31->SetBinContent(14,1.026707);
   hist_eta_rat_2__31->SetBinContent(15,1.011485);
   hist_eta_rat_2__31->SetBinContent(16,0.9656523);
   hist_eta_rat_2__31->SetBinContent(17,0.9179404);
   hist_eta_rat_2__31->SetBinContent(18,0.7844801);
   hist_eta_rat_2__31->SetBinError(1,0.6750337);
   hist_eta_rat_2__31->SetBinError(2,0.04045325);
   hist_eta_rat_2__31->SetBinError(3,0.02418498);
   hist_eta_rat_2__31->SetBinError(4,0.01597545);
   hist_eta_rat_2__31->SetBinError(5,0.01229371);
   hist_eta_rat_2__31->SetBinError(6,0.0103263);
   hist_eta_rat_2__31->SetBinError(7,0.009238053);
   hist_eta_rat_2__31->SetBinError(8,0.008432251);
   hist_eta_rat_2__31->SetBinError(9,0.007979459);
   hist_eta_rat_2__31->SetBinError(10,0.007780821);
   hist_eta_rat_2__31->SetBinError(11,0.007629531);
   hist_eta_rat_2__31->SetBinError(12,0.007587949);
   hist_eta_rat_2__31->SetBinError(13,0.007826179);
   hist_eta_rat_2__31->SetBinError(14,0.008254011);
   hist_eta_rat_2__31->SetBinError(15,0.008831963);
   hist_eta_rat_2__31->SetBinError(16,0.009698852);
   hist_eta_rat_2__31->SetBinError(17,0.008943066);
   hist_eta_rat_2__31->SetBinError(18,0.01853112);
   hist_eta_rat_2__31->SetEntries(679.8344);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_2__31->SetLineColor(ci);
   hist_eta_rat_2__31->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_2__31->SetMarkerColor(ci);
   hist_eta_rat_2__31->SetMarkerStyle(20);
   hist_eta_rat_2__31->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_2__31->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_2__31->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_2__31->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_2__31->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_2__31->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_2__31->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_2__31->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_2__31->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_2__31->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_2__31->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_2__31->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_2__31->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_2__31->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_2__31->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_2__31->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_2__31->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_2__31->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_2__31->Draw("same");
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
   cRat1->cd();
  
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
   
   TH1D *emptyRat__32 = new TH1D("emptyRat__32","",10,-2.999,2.999);
   emptyRat__32->SetBinContent(7,1000);
   emptyRat__32->SetBinError(7,1000);
   emptyRat__32->SetMinimum(0.601);
   emptyRat__32->SetMaximum(1.15);
   emptyRat__32->SetEntries(1);
   emptyRat__32->SetStats(0);

   ci = TColor::GetColor("#000099");
   emptyRat__32->SetLineColor(ci);
   emptyRat__32->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat__32->GetXaxis()->CenterTitle(true);
   emptyRat__32->GetXaxis()->SetLabelFont(43);
   emptyRat__32->GetXaxis()->SetLabelSize(33);
   emptyRat__32->GetXaxis()->SetTitleSize(33);
   emptyRat__32->GetXaxis()->SetTitleOffset(2.5);
   emptyRat__32->GetXaxis()->SetTitleFont(43);
   emptyRat__32->GetYaxis()->SetTitle("pPb/pp ");
   emptyRat__32->GetYaxis()->CenterTitle(true);
   emptyRat__32->GetYaxis()->SetNdivisions(505);
   emptyRat__32->GetYaxis()->SetLabelFont(43);
   emptyRat__32->GetYaxis()->SetLabelSize(33);
   emptyRat__32->GetYaxis()->SetTitleSize(33);
   emptyRat__32->GetYaxis()->SetTitleOffset(2.5);
   emptyRat__32->GetYaxis()->SetTitleFont(43);
   emptyRat__32->GetZaxis()->SetLabelFont(42);
   emptyRat__32->GetZaxis()->SetLabelSize(0.035);
   emptyRat__32->GetZaxis()->SetTitleSize(0.035);
   emptyRat__32->GetZaxis()->SetTitleFont(42);
   emptyRat__32->Draw("");
   
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
   grae = new TGraphAsymmErrors(18,g_fx3024,g_fy3024,g_felx3024,g_fehx3024,g_fely3024,g_fehy3024);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1255;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(62);
   
   TH1F *Graph_g3024 = new TH1F("Graph_g3024","",100,-3.5065,3.5915);
   Graph_g3024->SetMinimum(0.5811255);
   Graph_g3024->SetMaximum(1100.123);
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
   
   Double_t _fx3025[16] = {
   -1.92915,
   -1.6475,
   -1.36585,
   -1.08415,
   -0.8025,
   -0.52085,
   -0.23915,
   0.0425,
   0.32415,
   0.60585,
   0.8875,
   1.16915,
   1.45085,
   1.7325,
   2.155,
   2.71835};
   Double_t _fy3025[16] = {
   0.8762833,
   0.8290146,
   0.8617423,
   0.8860925,
   0.9125273,
   0.940762,
   0.9692774,
   0.9897179,
   1.013226,
   1.030009,
   1.041423,
   1.047265,
   1.041261,
   1.027824,
   1.00116,
   0.9632854};
   Double_t _felx3025[16] = {
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.2817,
   0.28165};
   Double_t _fely3025[16] = {
   0.068484,
   0.05423937,
   0.05477855,
   0.05571201,
   0.05326382,
   0.04647438,
   0.0361638,
   0.02529312,
   0.02244037,
   0.02347466,
   0.02593738,
   0.03314215,
   0.04128519,
   0.0501662,
   0.06564775,
   0.09455173};
   Double_t _fehx3025[16] = {
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.14085,
   0.14085,
   0.1408,
   0.2817,
   0.28165};
   Double_t _fehy3025[16] = {
   0.06165372,
   0.05044401,
   0.05393596,
   0.05069771,
   0.04337869,
   0.03517042,
   0.02815051,
   0.02122224,
   0.01678663,
   0.01982869,
   0.03139365,
   0.04116156,
   0.04762964,
   0.0543214,
   0.06361269,
   0.09081617};
   grae = new TGraphAsymmErrors(16,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");

   ci = 1256;
   color = new TColor(ci, 0, 1, 0, " ", 0.7);
   grae->SetFillColor(ci);
   grae->SetFillStyle(3356);
   grae->SetLineColor(3);
   grae->SetLineWidth(0);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-2.577,3.507);
   Graph_Graph3025->SetMinimum(0.7433637);
   Graph_Graph3025->SetMaximum(1.120303);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3025->SetLineColor(ci);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw(" 5");
   
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
   gre = new TGraphErrors(18,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1252;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(2);
   
   TH1F *Graph_Graph_Graph10101015 = new TH1F("Graph_Graph_Graph10101015","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10101015->SetMinimum(0);
   Graph_Graph_Graph10101015->SetMaximum(3.966495);
   Graph_Graph_Graph10101015->SetDirectory(0);
   Graph_Graph_Graph10101015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10101015->SetLineColor(ci);
   Graph_Graph_Graph10101015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10101015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10101015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10101015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10101015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10101015->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10101015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10101015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10101015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10101015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10101015);
   
   gre->Draw(" 5");
   Double_t xAxis15[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_5__33 = new TH1D("hist_eta_rat_5__33","",18, xAxis15);
   hist_eta_rat_5__33->SetBinContent(1,1000);
   hist_eta_rat_5__33->SetBinContent(2,1000);
   hist_eta_rat_5__33->SetBinContent(3,0.7893722);
   hist_eta_rat_5__33->SetBinContent(4,0.9476728);
   hist_eta_rat_5__33->SetBinContent(5,0.8374043);
   hist_eta_rat_5__33->SetBinContent(6,0.9102454);
   hist_eta_rat_5__33->SetBinContent(7,0.9191412);
   hist_eta_rat_5__33->SetBinContent(8,0.9722379);
   hist_eta_rat_5__33->SetBinContent(9,0.9880032);
   hist_eta_rat_5__33->SetBinContent(10,1.014302);
   hist_eta_rat_5__33->SetBinContent(11,1.00676);
   hist_eta_rat_5__33->SetBinContent(12,1.036132);
   hist_eta_rat_5__33->SetBinContent(13,1.003793);
   hist_eta_rat_5__33->SetBinContent(14,1.020498);
   hist_eta_rat_5__33->SetBinContent(15,1.040108);
   hist_eta_rat_5__33->SetBinContent(16,1.000316);
   hist_eta_rat_5__33->SetBinContent(17,0.9791528);
   hist_eta_rat_5__33->SetBinContent(18,0.9521649);
   hist_eta_rat_5__33->SetBinError(2,3.074538);
   hist_eta_rat_5__33->SetBinError(3,0.2191604);
   hist_eta_rat_5__33->SetBinError(4,0.08759579);
   hist_eta_rat_5__33->SetBinError(5,0.03865856);
   hist_eta_rat_5__33->SetBinError(6,0.02539699);
   hist_eta_rat_5__33->SetBinError(7,0.01891809);
   hist_eta_rat_5__33->SetBinError(8,0.01588133);
   hist_eta_rat_5__33->SetBinError(9,0.01403938);
   hist_eta_rat_5__33->SetBinError(10,0.01317588);
   hist_eta_rat_5__33->SetBinError(11,0.01256683);
   hist_eta_rat_5__33->SetBinError(12,0.01279793);
   hist_eta_rat_5__33->SetBinError(13,0.01300251);
   hist_eta_rat_5__33->SetBinError(14,0.0142761);
   hist_eta_rat_5__33->SetBinError(15,0.01657757);
   hist_eta_rat_5__33->SetBinError(16,0.02006675);
   hist_eta_rat_5__33->SetBinError(17,0.02331256);
   hist_eta_rat_5__33->SetBinError(18,0.09436571);
   hist_eta_rat_5__33->SetEntries(41.05852);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_5__33->SetLineColor(ci);
   hist_eta_rat_5__33->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_5__33->SetMarkerColor(ci);
   hist_eta_rat_5__33->SetMarkerStyle(20);
   hist_eta_rat_5__33->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_5__33->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_5__33->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_5__33->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_5__33->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_5__33->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_5__33->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_5__33->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_5__33->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_5__33->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_5__33->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_5__33->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_5__33->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_5__33->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_5__33->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_5__33->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_5__33->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_5__33->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_5__33->Draw("same");
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
