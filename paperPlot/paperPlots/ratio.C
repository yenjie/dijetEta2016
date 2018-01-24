void ratio()
{
//=========Macro generated from canvas: crat/
//=========  (Tue Sep 20 14:38:55 2016) by ROOT version6.02/13

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *crat = new TCanvas("crat", "",0,0,1200,2100);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   crat->Range(0,0,1,1);
   crat->SetFillColor(0);
   crat->SetBorderMode(0);
   crat->SetBorderSize(0);
   crat->SetTickx(1);
   crat->SetTicky(1);
   crat->SetLeftMargin(0.17);
   crat->SetRightMargin(0.01);
   crat->SetTopMargin(0.01);
   crat->SetBottomMargin(0.15);
   crat->SetFrameLineColor(0);
   crat->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.8096192,0.3883495,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-5.569572,0.50001,2.999,1.749872);
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
   
   TH1D *emptyRat13 = new TH1D("emptyRat13","",10,-2.999,2.999);
   emptyRat13->SetBinContent(7,1000);
   emptyRat13->SetBinError(7,1000);
   emptyRat13->SetMinimum(0.50001);
   emptyRat13->SetMaximum(1.4999);
   emptyRat13->SetEntries(1);
   emptyRat13->SetLineStyle(0);
   emptyRat13->SetMarkerStyle(20);
   emptyRat13->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat13->GetXaxis()->CenterTitle(true);
   emptyRat13->GetXaxis()->SetLabelFont(43);
   emptyRat13->GetXaxis()->SetLabelOffset(0.01);
   emptyRat13->GetXaxis()->SetLabelSize(33);
   emptyRat13->GetXaxis()->SetTitleSize(33);
   emptyRat13->GetXaxis()->SetTitleOffset(7.5);
   emptyRat13->GetXaxis()->SetTitleFont(43);
   emptyRat13->GetYaxis()->SetTitle("pPb/pp");
   emptyRat13->GetYaxis()->CenterTitle(true);
   emptyRat13->GetYaxis()->SetNdivisions(505);
   emptyRat13->GetYaxis()->SetLabelFont(43);
   emptyRat13->GetYaxis()->SetLabelOffset(0.01);
   emptyRat13->GetYaxis()->SetLabelSize(33);
   emptyRat13->GetYaxis()->SetTitleSize(33);
   emptyRat13->GetYaxis()->SetTitleOffset(7.5);
   emptyRat13->GetYaxis()->SetTitleFont(43);
   emptyRat13->GetZaxis()->SetLabelFont(42);
   emptyRat13->GetZaxis()->SetLabelSize(0.045);
   emptyRat13->GetZaxis()->SetTitleSize(0.035);
   emptyRat13->GetZaxis()->SetTitleFont(42);
   emptyRat13->Draw("");
   
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
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 944;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","Graph",100,-3.46425,3.51675);
   Graph_Graph1007->SetMinimum(0.76691);
   Graph_Graph1007->SetMaximum(1.073808);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);
   Graph_Graph1007->SetLineStyle(0);
   Graph_Graph1007->SetMarkerStyle(20);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx19[18] = {
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
   Double_t Graph1_fy19[18] = {
   0.983601,
   0.9833614,
   1.004293,
   1.004161,
   1.007206,
   1.022209,
   1.018818,
   1.016737,
   1.011796,
   1.013383,
   1.005048,
   1.000808,
   0.9947218,
   0.9829226,
   0.978752,
   0.9762849,
   0.9675682,
   0.9614465};
   graph = new TGraph(18,Graph1_fx19,Graph1_fy19);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph19 = new TH1F("Graph_Graph19","Graph",100,-3.323417,3.267583);
   Graph_Graph19->SetMinimum(0.9553702);
   Graph_Graph19->SetMaximum(1.028285);
   Graph_Graph19->SetDirectory(0);
   Graph_Graph19->SetStats(0);
   Graph_Graph19->SetLineStyle(0);
   Graph_Graph19->SetMarkerStyle(20);
   Graph_Graph19->GetXaxis()->SetLabelFont(42);
   Graph_Graph19->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph19->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph19->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph19->GetXaxis()->SetTitleFont(42);
   Graph_Graph19->GetYaxis()->SetLabelFont(42);
   Graph_Graph19->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph19->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph19->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph19->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph19->GetYaxis()->SetTitleFont(42);
   Graph_Graph19->GetZaxis()->SetLabelFont(42);
   Graph_Graph19->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph19->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph19->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph19);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx20[18] = {
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
   Double_t Graph2_fy20[18] = {
   1.021282,
   1.014796,
   1.037974,
   1.043591,
   1.042274,
   1.032938,
   1.033078,
   1.021259,
   1.027089,
   1.017051,
   1.024038,
   1.014105,
   1.010429,
   1.004347,
   0.9909882,
   0.9864806,
   0.984866,
   0.9891139};
   graph = new TGraph(18,Graph2_fx20,Graph2_fy20);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph20 = new TH1F("Graph_Graph20","Graph",100,-3.323417,3.267583);
   Graph_Graph20->SetMinimum(0.9789935);
   Graph_Graph20->SetMaximum(1.049463);
   Graph_Graph20->SetDirectory(0);
   Graph_Graph20->SetStats(0);
   Graph_Graph20->SetLineStyle(0);
   Graph_Graph20->SetMarkerStyle(20);
   Graph_Graph20->GetXaxis()->SetLabelFont(42);
   Graph_Graph20->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph20->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph20->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph20->GetXaxis()->SetTitleFont(42);
   Graph_Graph20->GetYaxis()->SetLabelFont(42);
   Graph_Graph20->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph20->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph20->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph20->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph20->GetYaxis()->SetTitleFont(42);
   Graph_Graph20->GetZaxis()->SetLabelFont(42);
   Graph_Graph20->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph20->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph20);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx21[18] = {
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
   Double_t Graph3_fy21[18] = {
   0.8619449,
   0.9497594,
   0.9804635,
   0.9833921,
   0.9886155,
   0.9918158,
   0.9953815,
   0.9953262,
   1.009925,
   1.001079,
   1.003152,
   0.9929018,
   0.9825149,
   0.9714553,
   0.9519094,
   0.9548929,
   0.946681,
   0.9371345};
   graph = new TGraph(18,Graph3_fx21,Graph3_fy21);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","Graph",100,-3.323417,3.267583);
   Graph_Graph21->SetMinimum(0.8471468);
   Graph_Graph21->SetMaximum(1.024723);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);
   Graph_Graph21->SetLineStyle(0);
   Graph_Graph21->SetMarkerStyle(20);
   Graph_Graph21->GetXaxis()->SetLabelFont(42);
   Graph_Graph21->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph21->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph21->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph21->GetXaxis()->SetTitleFont(42);
   Graph_Graph21->GetYaxis()->SetLabelFont(42);
   Graph_Graph21->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph21->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph21->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph21->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph21->GetYaxis()->SetTitleFont(42);
   Graph_Graph21->GetZaxis()->SetLabelFont(42);
   Graph_Graph21->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph21->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph21);
   
   graph->Draw("  c");
   Double_t xAxis7[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_014 = new TH1D("hist_eta_rat_014","",18, xAxis7);
   hist_eta_rat_014->SetBinContent(0,0.7009663);
   hist_eta_rat_014->SetBinContent(1,0.9780925);
   hist_eta_rat_014->SetBinContent(2,0.7903649);
   hist_eta_rat_014->SetBinContent(3,1.002554);
   hist_eta_rat_014->SetBinContent(4,0.9415966);
   hist_eta_rat_014->SetBinContent(5,1.022632);
   hist_eta_rat_014->SetBinContent(6,0.9673216);
   hist_eta_rat_014->SetBinContent(7,1.050277);
   hist_eta_rat_014->SetBinContent(8,1.024931);
   hist_eta_rat_014->SetBinContent(9,1.03395);
   hist_eta_rat_014->SetBinContent(10,1.030084);
   hist_eta_rat_014->SetBinContent(11,0.9783376);
   hist_eta_rat_014->SetBinContent(12,1.025516);
   hist_eta_rat_014->SetBinContent(13,1.034408);
   hist_eta_rat_014->SetBinContent(14,1.028685);
   hist_eta_rat_014->SetBinContent(15,0.9958378);
   hist_eta_rat_014->SetBinContent(16,0.9523999);
   hist_eta_rat_014->SetBinContent(17,0.9441907);
   hist_eta_rat_014->SetBinContent(18,0.8048132);
   hist_eta_rat_014->SetBinError(0,0.8585049);
   hist_eta_rat_014->SetBinError(1,0.2326733);
   hist_eta_rat_014->SetBinError(2,0.05011169);
   hist_eta_rat_014->SetBinError(3,0.0531607);
   hist_eta_rat_014->SetBinError(4,0.0405803);
   hist_eta_rat_014->SetBinError(5,0.03711422);
   hist_eta_rat_014->SetBinError(6,0.03117593);
   hist_eta_rat_014->SetBinError(7,0.0309367);
   hist_eta_rat_014->SetBinError(8,0.02800293);
   hist_eta_rat_014->SetBinError(9,0.02680612);
   hist_eta_rat_014->SetBinError(10,0.0260524);
   hist_eta_rat_014->SetBinError(11,0.02456519);
   hist_eta_rat_014->SetBinError(12,0.02602307);
   hist_eta_rat_014->SetBinError(13,0.02716959);
   hist_eta_rat_014->SetBinError(14,0.02835433);
   hist_eta_rat_014->SetBinError(15,0.02968339);
   hist_eta_rat_014->SetBinError(16,0.03186721);
   hist_eta_rat_014->SetBinError(17,0.02871787);
   hist_eta_rat_014->SetBinError(18,0.05029851);
   hist_eta_rat_014->SetEntries(4150.496);

   ci = TColor::GetColor("#33cc99");
   hist_eta_rat_014->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_014->SetLineColor(ci);
   hist_eta_rat_014->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_014->SetMarkerColor(ci);
   hist_eta_rat_014->SetMarkerStyle(20);
   hist_eta_rat_014->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_014->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_014->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_014->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_014->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_014->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_014->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_014->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_014->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_014->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_014->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_014->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_014->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_014->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_014->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_014->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_014->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_014->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_014->Draw("same p");
   TLatex *   tex = new TLatex(0.5,0.82,"DSSZ");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
      tex = new TLatex(0.35,0.08,"25 < p_{T}^{ave} < 55 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   TLine *line = new TLine(-3,1,3,1);
   line->Draw();
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
   crat->cd();
  
// ------------>Primitives in pad: p_0_1
   TPad *p_0_1 = new TPad("p_0_1", "p_0_1",0,0.6573147,0.3883495,0.8096192);
   p_0_1->Draw();
   p_0_1->cd();
   p_0_1->Range(-5.569572,0.50001,2.999,1.4999);
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
   
   TH1D *emptyRat15 = new TH1D("emptyRat15","",10,-2.999,2.999);
   emptyRat15->SetBinContent(7,1000);
   emptyRat15->SetBinError(7,1000);
   emptyRat15->SetMinimum(0.50001);
   emptyRat15->SetMaximum(1.4999);
   emptyRat15->SetEntries(1);
   emptyRat15->SetLineStyle(0);
   emptyRat15->SetMarkerStyle(20);
   emptyRat15->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat15->GetXaxis()->CenterTitle(true);
   emptyRat15->GetXaxis()->SetLabelFont(43);
   emptyRat15->GetXaxis()->SetLabelOffset(0.01);
   emptyRat15->GetXaxis()->SetLabelSize(33);
   emptyRat15->GetXaxis()->SetTitleSize(33);
   emptyRat15->GetXaxis()->SetTitleOffset(7.5);
   emptyRat15->GetXaxis()->SetTitleFont(43);
   emptyRat15->GetYaxis()->SetTitle("pPb/pp");
   emptyRat15->GetYaxis()->CenterTitle(true);
   emptyRat15->GetYaxis()->SetNdivisions(505);
   emptyRat15->GetYaxis()->SetLabelFont(43);
   emptyRat15->GetYaxis()->SetLabelOffset(0.01);
   emptyRat15->GetYaxis()->SetLabelSize(33);
   emptyRat15->GetYaxis()->SetTitleSize(33);
   emptyRat15->GetYaxis()->SetTitleOffset(7.5);
   emptyRat15->GetYaxis()->SetTitleFont(43);
   emptyRat15->GetZaxis()->SetLabelFont(42);
   emptyRat15->GetZaxis()->SetLabelSize(0.045);
   emptyRat15->GetZaxis()->SetTitleSize(0.035);
   emptyRat15->GetZaxis()->SetTitleFont(42);
   emptyRat15->Draw("");
   
   Double_t Graph0_fx1008[18] = {
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
   Double_t Graph0_fy1008[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 950;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","Graph",100,-3.46425,3.51675);
   Graph_Graph1008->SetMinimum(0.7730531);
   Graph_Graph1008->SetMaximum(1.05362);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);
   Graph_Graph1008->SetLineStyle(0);
   Graph_Graph1008->SetMarkerStyle(20);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1008->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx22[18] = {
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
   Double_t Graph1_fy22[18] = {
   0.9259456,
   0.9485557,
   0.9548345,
   0.9762914,
   0.9948214,
   1.003976,
   1.011109,
   1.017643,
   1.01955,
   1.023355,
   1.016139,
   1.009954,
   1.004639,
   0.9904683,
   0.9808308,
   0.9769325,
   0.9668126,
   0.9432845};
   graph = new TGraph(18,Graph1_fx22,Graph1_fy22);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","Graph",100,-3.323417,3.267583);
   Graph_Graph22->SetMinimum(0.9162047);
   Graph_Graph22->SetMaximum(1.033096);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);
   Graph_Graph22->SetLineStyle(0);
   Graph_Graph22->SetMarkerStyle(20);
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph22->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph22->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph22->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph22->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph22->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph22);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx23[18] = {
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
   Double_t Graph2_fy23[18] = {
   0.9961922,
   1.005793,
   0.9883953,
   1.000834,
   1.024073,
   1.027609,
   1.036931,
   1.035818,
   1.044813,
   1.038827,
   1.019616,
   1.016251,
   1.016822,
   1.025281,
   1.011491,
   0.9985299,
   0.984506,
   0.9869616};
   graph = new TGraph(18,Graph2_fx23,Graph2_fy23);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","Graph",100,-3.323417,3.267583);
   Graph_Graph23->SetMinimum(0.9784752);
   Graph_Graph23->SetMaximum(1.050844);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);
   Graph_Graph23->SetLineStyle(0);
   Graph_Graph23->SetMarkerStyle(20);
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph23->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph23->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph23->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph23->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph23->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph23->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph23);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx24[18] = {
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
   Double_t Graph3_fy24[18] = {
   0.641679,
   0.9173178,
   0.921816,
   0.9317929,
   0.9662459,
   0.9724432,
   0.992547,
   1.001569,
   1.010118,
   1.006471,
   0.9964049,
   0.9892483,
   0.9884189,
   0.982961,
   0.9713803,
   0.9482782,
   0.9309831,
   0.9250279};
   graph = new TGraph(18,Graph3_fx24,Graph3_fy24);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","Graph",100,-3.323417,3.267583);
   Graph_Graph24->SetMinimum(0.6048351);
   Graph_Graph24->SetMaximum(1.046962);
   Graph_Graph24->SetDirectory(0);
   Graph_Graph24->SetStats(0);
   Graph_Graph24->SetLineStyle(0);
   Graph_Graph24->SetMarkerStyle(20);
   Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph24->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph24->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph24->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph24->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph24->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph24->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph24->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph24->GetYaxis()->SetTitleFont(42);
   Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph24->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph24->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph24);
   
   graph->Draw("  c");
   Double_t xAxis8[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_116 = new TH1D("hist_eta_rat_116","",18, xAxis8);
   hist_eta_rat_116->SetBinContent(1,0.8991901);
   hist_eta_rat_116->SetBinContent(2,1.020067);
   hist_eta_rat_116->SetBinContent(3,0.9951541);
   hist_eta_rat_116->SetBinContent(4,0.9807586);
   hist_eta_rat_116->SetBinContent(5,1.022584);
   hist_eta_rat_116->SetBinContent(6,0.994965);
   hist_eta_rat_116->SetBinContent(7,0.994765);
   hist_eta_rat_116->SetBinContent(8,1.024517);
   hist_eta_rat_116->SetBinContent(9,1.016799);
   hist_eta_rat_116->SetBinContent(10,1.030755);
   hist_eta_rat_116->SetBinContent(11,1.024302);
   hist_eta_rat_116->SetBinContent(12,1.017353);
   hist_eta_rat_116->SetBinContent(13,1.013676);
   hist_eta_rat_116->SetBinContent(14,0.9996804);
   hist_eta_rat_116->SetBinContent(15,0.9743303);
   hist_eta_rat_116->SetBinContent(16,0.9698012);
   hist_eta_rat_116->SetBinContent(17,0.9218322);
   hist_eta_rat_116->SetBinContent(18,0.7953151);
   hist_eta_rat_116->SetBinError(1,0.2654167);
   hist_eta_rat_116->SetBinError(2,0.04189644);
   hist_eta_rat_116->SetBinError(3,0.02914542);
   hist_eta_rat_116->SetBinError(4,0.02133916);
   hist_eta_rat_116->SetBinError(5,0.01762502);
   hist_eta_rat_116->SetBinError(6,0.01477849);
   hist_eta_rat_116->SetBinError(7,0.01309855);
   hist_eta_rat_116->SetBinError(8,0.01223317);
   hist_eta_rat_116->SetBinError(9,0.01144872);
   hist_eta_rat_116->SetBinError(10,0.01107849);
   hist_eta_rat_116->SetBinError(11,0.01086972);
   hist_eta_rat_116->SetBinError(12,0.01087988);
   hist_eta_rat_116->SetBinError(13,0.01111328);
   hist_eta_rat_116->SetBinError(14,0.01160966);
   hist_eta_rat_116->SetBinError(15,0.01235849);
   hist_eta_rat_116->SetBinError(16,0.01389286);
   hist_eta_rat_116->SetBinError(17,0.01263902);
   hist_eta_rat_116->SetBinError(18,0.02503083);
   hist_eta_rat_116->SetEntries(4107.488);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_116->SetLineColor(ci);
   hist_eta_rat_116->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_116->SetMarkerColor(ci);
   hist_eta_rat_116->SetMarkerStyle(20);
   hist_eta_rat_116->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_116->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_116->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_116->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_116->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_116->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_116->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_116->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_116->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_116->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_116->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_116->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_116->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_116->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_116->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_116->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_116->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_116->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_116->Draw("same p");
      tex = new TLatex(0.35,0.08,"55 < p_{T}^{ave} < 75 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_0_1->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_0_2
   TPad *p_0_2 = new TPad("p_0_2", "p_0_2",0,0.50501,0.3883495,0.6573147);
   p_0_2->Draw();
   p_0_2->cd();
   p_0_2->Range(-5.569572,0.50001,2.999,1.4999);
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
   
   TH1D *emptyRat17 = new TH1D("emptyRat17","",10,-2.999,2.999);
   emptyRat17->SetBinContent(7,1000);
   emptyRat17->SetBinError(7,1000);
   emptyRat17->SetMinimum(0.50001);
   emptyRat17->SetMaximum(1.4999);
   emptyRat17->SetEntries(1);
   emptyRat17->SetLineStyle(0);
   emptyRat17->SetMarkerStyle(20);
   emptyRat17->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat17->GetXaxis()->CenterTitle(true);
   emptyRat17->GetXaxis()->SetLabelFont(43);
   emptyRat17->GetXaxis()->SetLabelOffset(0.01);
   emptyRat17->GetXaxis()->SetLabelSize(33);
   emptyRat17->GetXaxis()->SetTitleSize(33);
   emptyRat17->GetXaxis()->SetTitleOffset(7.5);
   emptyRat17->GetXaxis()->SetTitleFont(43);
   emptyRat17->GetYaxis()->SetTitle("pPb/pp");
   emptyRat17->GetYaxis()->CenterTitle(true);
   emptyRat17->GetYaxis()->SetNdivisions(505);
   emptyRat17->GetYaxis()->SetLabelFont(43);
   emptyRat17->GetYaxis()->SetLabelOffset(0.01);
   emptyRat17->GetYaxis()->SetLabelSize(33);
   emptyRat17->GetYaxis()->SetTitleSize(33);
   emptyRat17->GetYaxis()->SetTitleOffset(7.5);
   emptyRat17->GetYaxis()->SetTitleFont(43);
   emptyRat17->GetZaxis()->SetLabelFont(42);
   emptyRat17->GetZaxis()->SetLabelSize(0.045);
   emptyRat17->GetZaxis()->SetTitleSize(0.035);
   emptyRat17->GetZaxis()->SetTitleFont(42);
   emptyRat17->Draw("");
   
   Double_t Graph0_fx1009[18] = {
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
   Double_t Graph0_fy1009[18] = {
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
   gre = new TGraphErrors(18,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 956;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,-3.46425,3.51675);
   Graph_Graph1009->SetMinimum(0.6838763);
   Graph_Graph1009->SetMaximum(2.442677);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);
   Graph_Graph1009->SetLineStyle(0);
   Graph_Graph1009->SetMarkerStyle(20);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx25[17] = {
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
   Double_t Graph1_fy25[17] = {
   0.9063779,
   0.9586523,
   0.9626519,
   0.9773637,
   0.9878859,
   0.9990996,
   1.016127,
   1.018668,
   1.023204,
   1.022877,
   1.017129,
   1.006752,
   0.9985725,
   0.9849443,
   0.9709752,
   0.9599753,
   0.9446502};
   graph = new TGraph(17,Graph1_fx25,Graph1_fy25);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph25 = new TH1F("Graph_Graph25","Graph",100,-2.858667,3.225333);
   Graph_Graph25->SetMinimum(0.8946953);
   Graph_Graph25->SetMaximum(1.034887);
   Graph_Graph25->SetDirectory(0);
   Graph_Graph25->SetStats(0);
   Graph_Graph25->SetLineStyle(0);
   Graph_Graph25->SetMarkerStyle(20);
   Graph_Graph25->GetXaxis()->SetLabelFont(42);
   Graph_Graph25->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph25->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph25->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph25->GetXaxis()->SetTitleFont(42);
   Graph_Graph25->GetYaxis()->SetLabelFont(42);
   Graph_Graph25->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph25->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph25->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph25->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph25->GetYaxis()->SetTitleFont(42);
   Graph_Graph25->GetZaxis()->SetLabelFont(42);
   Graph_Graph25->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph25->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph25);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx26[17] = {
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
   Double_t Graph2_fy26[17] = {
   0.9925173,
   0.9750734,
   0.9920486,
   1.007009,
   1.015653,
   1.027187,
   1.034316,
   1.036228,
   1.03225,
   1.026415,
   1.023536,
   1.015143,
   1.012075,
   1.012033,
   1.004982,
   0.998924,
   0.9823804};
   graph = new TGraph(17,Graph2_fx26,Graph2_fy26);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph26 = new TH1F("Graph_Graph26","Graph",100,-2.858667,3.225333);
   Graph_Graph26->SetMinimum(0.9689579);
   Graph_Graph26->SetMaximum(1.042344);
   Graph_Graph26->SetDirectory(0);
   Graph_Graph26->SetStats(0);
   Graph_Graph26->SetLineStyle(0);
   Graph_Graph26->SetMarkerStyle(20);
   Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph26->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph26->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph26->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph26->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph26->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph26->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph26->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph26->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph26->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph26);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx27[17] = {
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
   Double_t Graph3_fy27[17] = {
   0.8878893,
   0.9113686,
   0.9223433,
   0.9602986,
   0.9637525,
   0.9871378,
   0.9953105,
   0.9995954,
   1.005974,
   1.005047,
   1.004464,
   0.9901842,
   0.9772024,
   0.9737998,
   0.9522211,
   0.9478467,
   0.9129437};
   graph = new TGraph(17,Graph3_fx27,Graph3_fy27);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","Graph",100,-2.858667,3.225333);
   Graph_Graph27->SetMinimum(0.8760808);
   Graph_Graph27->SetMaximum(1.017783);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);
   Graph_Graph27->SetLineStyle(0);
   Graph_Graph27->SetMarkerStyle(20);
   Graph_Graph27->GetXaxis()->SetLabelFont(42);
   Graph_Graph27->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph27->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph27->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph27->GetXaxis()->SetTitleFont(42);
   Graph_Graph27->GetYaxis()->SetLabelFont(42);
   Graph_Graph27->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph27->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph27->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph27->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph27->GetYaxis()->SetTitleFont(42);
   Graph_Graph27->GetZaxis()->SetLabelFont(42);
   Graph_Graph27->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph27->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph27);
   
   graph->Draw("  c");
   Double_t xAxis9[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_218 = new TH1D("hist_eta_rat_218","",18, xAxis9);
   hist_eta_rat_218->SetBinContent(1,2.353356);
   hist_eta_rat_218->SetBinContent(2,1.050456);
   hist_eta_rat_218->SetBinContent(3,1.012821);
   hist_eta_rat_218->SetBinContent(4,0.9667915);
   hist_eta_rat_218->SetBinContent(5,0.9704566);
   hist_eta_rat_218->SetBinContent(6,0.9734057);
   hist_eta_rat_218->SetBinContent(7,1.000051);
   hist_eta_rat_218->SetBinContent(8,0.9986469);
   hist_eta_rat_218->SetBinContent(9,1.013215);
   hist_eta_rat_218->SetBinContent(10,1.024397);
   hist_eta_rat_218->SetBinContent(11,1.026894);
   hist_eta_rat_218->SetBinContent(12,1.015757);
   hist_eta_rat_218->SetBinContent(13,1.018752);
   hist_eta_rat_218->SetBinContent(14,1.011963);
   hist_eta_rat_218->SetBinContent(15,1.004324);
   hist_eta_rat_218->SetBinContent(16,0.9632621);
   hist_eta_rat_218->SetBinContent(17,0.9297486);
   hist_eta_rat_218->SetBinContent(18,0.8288227);
   hist_eta_rat_218->SetBinError(1,1.377984);
   hist_eta_rat_218->SetBinError(2,0.05111463);
   hist_eta_rat_218->SetBinError(3,0.02701256);
   hist_eta_rat_218->SetBinError(4,0.0171885);
   hist_eta_rat_218->SetBinError(5,0.01280288);
   hist_eta_rat_218->SetBinError(6,0.01053717);
   hist_eta_rat_218->SetBinError(7,0.009291076);
   hist_eta_rat_218->SetBinError(8,0.008377997);
   hist_eta_rat_218->SetBinError(9,0.007860271);
   hist_eta_rat_218->SetBinError(10,0.00761183);
   hist_eta_rat_218->SetBinError(11,0.007439868);
   hist_eta_rat_218->SetBinError(12,0.007383155);
   hist_eta_rat_218->SetBinError(13,0.007601361);
   hist_eta_rat_218->SetBinError(14,0.008043143);
   hist_eta_rat_218->SetBinError(15,0.008678449);
   hist_eta_rat_218->SetBinError(16,0.009582948);
   hist_eta_rat_218->SetBinError(17,0.008990346);
   hist_eta_rat_218->SetBinError(18,0.01953039);
   hist_eta_rat_218->SetEntries(192.8814);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_218->SetLineColor(ci);
   hist_eta_rat_218->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_218->SetMarkerColor(ci);
   hist_eta_rat_218->SetMarkerStyle(20);
   hist_eta_rat_218->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_218->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_218->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_218->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_218->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_218->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_218->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_218->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_218->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_218->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_218->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_218->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_218->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_218->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_218->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_218->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_218->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_218->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_218->Draw("same p");
      tex = new TLatex(0.35,0.08,"75 < p_{T}^{ave} < 95 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_0_2->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_0_3
   TPad *p_0_3 = new TPad("p_0_3", "p_0_3",0,0.3527054,0.3883495,0.50501);
   p_0_3->Draw();
   p_0_3->cd();
   p_0_3->Range(-5.569572,0.50001,2.999,1.4999);
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
   
   TH1D *emptyRat19 = new TH1D("emptyRat19","",10,-2.999,2.999);
   emptyRat19->SetBinContent(7,1000);
   emptyRat19->SetBinError(7,1000);
   emptyRat19->SetMinimum(0.50001);
   emptyRat19->SetMaximum(1.4999);
   emptyRat19->SetEntries(1);
   emptyRat19->SetLineStyle(0);
   emptyRat19->SetMarkerStyle(20);
   emptyRat19->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat19->GetXaxis()->CenterTitle(true);
   emptyRat19->GetXaxis()->SetLabelFont(43);
   emptyRat19->GetXaxis()->SetLabelOffset(0.01);
   emptyRat19->GetXaxis()->SetLabelSize(33);
   emptyRat19->GetXaxis()->SetTitleSize(33);
   emptyRat19->GetXaxis()->SetTitleOffset(7.5);
   emptyRat19->GetXaxis()->SetTitleFont(43);
   emptyRat19->GetYaxis()->SetTitle("pPb/pp");
   emptyRat19->GetYaxis()->CenterTitle(true);
   emptyRat19->GetYaxis()->SetNdivisions(505);
   emptyRat19->GetYaxis()->SetLabelFont(43);
   emptyRat19->GetYaxis()->SetLabelOffset(0.01);
   emptyRat19->GetYaxis()->SetLabelSize(33);
   emptyRat19->GetYaxis()->SetTitleSize(33);
   emptyRat19->GetYaxis()->SetTitleOffset(7.5);
   emptyRat19->GetYaxis()->SetTitleFont(43);
   emptyRat19->GetZaxis()->SetLabelFont(42);
   emptyRat19->GetZaxis()->SetLabelSize(0.045);
   emptyRat19->GetZaxis()->SetTitleSize(0.035);
   emptyRat19->GetZaxis()->SetTitleFont(42);
   emptyRat19->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 962;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,-3.46425,3.51675);
   Graph_Graph1010->SetMinimum(0);
   Graph_Graph1010->SetMaximum(1.357353);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);
   Graph_Graph1010->SetLineStyle(0);
   Graph_Graph1010->SetMarkerStyle(20);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx28[17] = {
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
   Double_t Graph1_fy28[17] = {
   0.8991004,
   0.9094056,
   0.944278,
   0.9637928,
   0.9874941,
   0.9930713,
   1.011603,
   1.012034,
   1.02234,
   1.021389,
   1.017336,
   1.012251,
   0.9949518,
   0.9928975,
   0.9736211,
   0.964983,
   0.9362692};
   graph = new TGraph(17,Graph1_fx28,Graph1_fy28);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph28 = new TH1F("Graph_Graph28","Graph",100,-2.858667,3.225333);
   Graph_Graph28->SetMinimum(0.8867764);
   Graph_Graph28->SetMaximum(1.034664);
   Graph_Graph28->SetDirectory(0);
   Graph_Graph28->SetStats(0);
   Graph_Graph28->SetLineStyle(0);
   Graph_Graph28->SetMarkerStyle(20);
   Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph28->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph28->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph28->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph28->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph28->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph28->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph28->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph28->GetYaxis()->SetTitleFont(42);
   Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph28->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph28->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph28);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx29[17] = {
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
   Double_t Graph2_fy29[17] = {
   0.9819275,
   0.9734977,
   0.9638151,
   0.9917724,
   0.9959121,
   1.016045,
   1.022188,
   1.03808,
   1.036893,
   1.032775,
   1.0222,
   1.023982,
   1.026731,
   1.004936,
   1.001381,
   0.9862754,
   0.9740107};
   graph = new TGraph(17,Graph2_fx29,Graph2_fy29);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph29 = new TH1F("Graph_Graph29","Graph",100,-2.858667,3.225333);
   Graph_Graph29->SetMinimum(0.9563885);
   Graph_Graph29->SetMaximum(1.045507);
   Graph_Graph29->SetDirectory(0);
   Graph_Graph29->SetStats(0);
   Graph_Graph29->SetLineStyle(0);
   Graph_Graph29->SetMarkerStyle(20);
   Graph_Graph29->GetXaxis()->SetLabelFont(42);
   Graph_Graph29->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph29->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph29->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph29->GetXaxis()->SetTitleFont(42);
   Graph_Graph29->GetYaxis()->SetLabelFont(42);
   Graph_Graph29->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph29->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph29->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph29->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph29->GetYaxis()->SetTitleFont(42);
   Graph_Graph29->GetZaxis()->SetLabelFont(42);
   Graph_Graph29->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph29->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph29->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph29);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx30[17] = {
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
   Double_t Graph3_fy30[17] = {
   0.8161164,
   0.8936186,
   0.905481,
   0.9429966,
   0.9504008,
   0.9765547,
   0.9796972,
   1.002608,
   1.013504,
   1.012077,
   1.004679,
   1.000329,
   0.9921531,
   0.968541,
   0.9520051,
   0.9276903,
   0.8993376};
   graph = new TGraph(17,Graph3_fx30,Graph3_fy30);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph30 = new TH1F("Graph_Graph30","Graph",100,-2.858667,3.225333);
   Graph_Graph30->SetMinimum(0.7963776);
   Graph_Graph30->SetMaximum(1.033243);
   Graph_Graph30->SetDirectory(0);
   Graph_Graph30->SetStats(0);
   Graph_Graph30->SetLineStyle(0);
   Graph_Graph30->SetMarkerStyle(20);
   Graph_Graph30->GetXaxis()->SetLabelFont(42);
   Graph_Graph30->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph30->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph30->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph30->GetXaxis()->SetTitleFont(42);
   Graph_Graph30->GetYaxis()->SetLabelFont(42);
   Graph_Graph30->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph30->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph30->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph30->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph30->GetYaxis()->SetTitleFont(42);
   Graph_Graph30->GetZaxis()->SetLabelFont(42);
   Graph_Graph30->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph30->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph30->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph30);
   
   graph->Draw("  c");
   Double_t xAxis10[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_320 = new TH1D("hist_eta_rat_320","",18, xAxis10);
   hist_eta_rat_320->SetBinContent(2,1.229353);
   hist_eta_rat_320->SetBinContent(3,0.9669839);
   hist_eta_rat_320->SetBinContent(4,0.9665762);
   hist_eta_rat_320->SetBinContent(5,0.9478743);
   hist_eta_rat_320->SetBinContent(6,0.9629507);
   hist_eta_rat_320->SetBinContent(7,0.9720505);
   hist_eta_rat_320->SetBinContent(8,0.9961309);
   hist_eta_rat_320->SetBinContent(9,1.010588);
   hist_eta_rat_320->SetBinContent(10,1.011649);
   hist_eta_rat_320->SetBinContent(11,1.029972);
   hist_eta_rat_320->SetBinContent(12,1.015178);
   hist_eta_rat_320->SetBinContent(13,1.02908);
   hist_eta_rat_320->SetBinContent(14,1.007098);
   hist_eta_rat_320->SetBinContent(15,1.004349);
   hist_eta_rat_320->SetBinContent(16,1.000708);
   hist_eta_rat_320->SetBinContent(17,0.9274416);
   hist_eta_rat_320->SetBinContent(18,0.8612056);
   hist_eta_rat_320->SetBinError(2,0.1041244);
   hist_eta_rat_320->SetBinError(3,0.03590138);
   hist_eta_rat_320->SetBinError(4,0.02034866);
   hist_eta_rat_320->SetBinError(5,0.01386378);
   hist_eta_rat_320->SetBinError(6,0.01095308);
   hist_eta_rat_320->SetBinError(7,0.009245236);
   hist_eta_rat_320->SetBinError(8,0.008339605);
   hist_eta_rat_320->SetBinError(9,0.007761978);
   hist_eta_rat_320->SetBinError(10,0.0074013);
   hist_eta_rat_320->SetBinError(11,0.007267697);
   hist_eta_rat_320->SetBinError(12,0.007218966);
   hist_eta_rat_320->SetBinError(13,0.007501821);
   hist_eta_rat_320->SetBinError(14,0.00785601);
   hist_eta_rat_320->SetBinError(15,0.008584328);
   hist_eta_rat_320->SetBinError(16,0.009777446);
   hist_eta_rat_320->SetBinError(17,0.009315331);
   hist_eta_rat_320->SetBinError(18,0.02288525);
   hist_eta_rat_320->SetEntries(20307.13);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_320->SetLineColor(ci);
   hist_eta_rat_320->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_320->SetMarkerColor(ci);
   hist_eta_rat_320->SetMarkerStyle(20);
   hist_eta_rat_320->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_320->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_320->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_320->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_320->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_320->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_320->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_320->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_320->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_320->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_320->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_320->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_320->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_320->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_320->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_320->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_320->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_320->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_320->Draw("same p");
      tex = new TLatex(0.35,0.08,"95 < p_{T}^{ave} < 115 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_0_3->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_0_4
   TPad *p_0_4 = new TPad("p_0_4", "p_0_4",0,0.2004008,0.3883495,0.3527054);
   p_0_4->Draw();
   p_0_4->cd();
   p_0_4->Range(-5.569572,0.50001,2.999,1.4999);
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
   
   TH1D *emptyRat21 = new TH1D("emptyRat21","",10,-2.999,2.999);
   emptyRat21->SetBinContent(7,1000);
   emptyRat21->SetBinError(7,1000);
   emptyRat21->SetMinimum(0.50001);
   emptyRat21->SetMaximum(1.4999);
   emptyRat21->SetEntries(1);
   emptyRat21->SetLineStyle(0);
   emptyRat21->SetMarkerStyle(20);
   emptyRat21->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat21->GetXaxis()->CenterTitle(true);
   emptyRat21->GetXaxis()->SetLabelFont(43);
   emptyRat21->GetXaxis()->SetLabelOffset(0.01);
   emptyRat21->GetXaxis()->SetLabelSize(33);
   emptyRat21->GetXaxis()->SetTitleSize(33);
   emptyRat21->GetXaxis()->SetTitleOffset(7.5);
   emptyRat21->GetXaxis()->SetTitleFont(43);
   emptyRat21->GetYaxis()->SetTitle("pPb/pp");
   emptyRat21->GetYaxis()->CenterTitle(true);
   emptyRat21->GetYaxis()->SetNdivisions(505);
   emptyRat21->GetYaxis()->SetLabelFont(43);
   emptyRat21->GetYaxis()->SetLabelOffset(0.01);
   emptyRat21->GetYaxis()->SetLabelSize(33);
   emptyRat21->GetYaxis()->SetTitleSize(33);
   emptyRat21->GetYaxis()->SetTitleOffset(7.5);
   emptyRat21->GetYaxis()->SetTitleFont(43);
   emptyRat21->GetZaxis()->SetLabelFont(42);
   emptyRat21->GetZaxis()->SetLabelSize(0.045);
   emptyRat21->GetZaxis()->SetTitleSize(0.035);
   emptyRat21->GetZaxis()->SetTitleFont(42);
   emptyRat21->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 968;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","Graph",100,-3.46425,3.51675);
   Graph_Graph1011->SetMinimum(0);
   Graph_Graph1011->SetMaximum(2.011118);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);
   Graph_Graph1011->SetLineStyle(0);
   Graph_Graph1011->SetMarkerStyle(20);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx31[16] = {
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
   Double_t Graph1_fy31[16] = {
   0.9088585,
   0.9420571,
   0.9526651,
   0.9701313,
   0.985464,
   1.001482,
   1.007989,
   1.016212,
   1.023495,
   1.021151,
   1.010028,
   0.9998901,
   0.9925883,
   0.9804457,
   0.9647899,
   0.9528979};
   graph = new TGraph(16,Graph1_fx31,Graph1_fy31);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph31 = new TH1F("Graph_Graph31","Graph",100,-2.393917,3.183083);
   Graph_Graph31->SetMinimum(0.8973949);
   Graph_Graph31->SetMaximum(1.034959);
   Graph_Graph31->SetDirectory(0);
   Graph_Graph31->SetStats(0);
   Graph_Graph31->SetLineStyle(0);
   Graph_Graph31->SetMarkerStyle(20);
   Graph_Graph31->GetXaxis()->SetLabelFont(42);
   Graph_Graph31->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph31->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph31->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph31->GetXaxis()->SetTitleFont(42);
   Graph_Graph31->GetYaxis()->SetLabelFont(42);
   Graph_Graph31->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph31->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph31->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph31->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph31->GetYaxis()->SetTitleFont(42);
   Graph_Graph31->GetZaxis()->SetLabelFont(42);
   Graph_Graph31->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph31->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph31->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph31);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx32[16] = {
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
   Double_t Graph2_fy32[16] = {
   0.9379177,
   0.9578716,
   0.9699999,
   1.003373,
   0.9971918,
   1.015347,
   1.031481,
   1.038373,
   1.024891,
   1.02237,
   1.026757,
   1.022194,
   1.003946,
   0.99081,
   0.998559,
   0.9860577};
   graph = new TGraph(16,Graph2_fx32,Graph2_fy32);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph32 = new TH1F("Graph_Graph32","Graph",100,-2.393917,3.183083);
   Graph_Graph32->SetMinimum(0.9278722);
   Graph_Graph32->SetMaximum(1.048418);
   Graph_Graph32->SetDirectory(0);
   Graph_Graph32->SetStats(0);
   Graph_Graph32->SetLineStyle(0);
   Graph_Graph32->SetMarkerStyle(20);
   Graph_Graph32->GetXaxis()->SetLabelFont(42);
   Graph_Graph32->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph32->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph32->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph32->GetXaxis()->SetTitleFont(42);
   Graph_Graph32->GetYaxis()->SetLabelFont(42);
   Graph_Graph32->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph32->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph32->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph32->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph32->GetYaxis()->SetTitleFont(42);
   Graph_Graph32->GetZaxis()->SetLabelFont(42);
   Graph_Graph32->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph32->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph32->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph32);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx33[16] = {
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
   Double_t Graph3_fy33[16] = {
   0.8578044,
   0.8991513,
   0.9239492,
   0.9607244,
   0.9604069,
   0.9777147,
   0.9994489,
   1.010307,
   1.010692,
   1.005933,
   1.005606,
   0.9930673,
   0.9714103,
   0.9441242,
   0.9452861,
   0.9163501};
   graph = new TGraph(16,Graph3_fx33,Graph3_fy33);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph33 = new TH1F("Graph_Graph33","Graph",100,-2.393917,3.183083);
   Graph_Graph33->SetMinimum(0.8425157);
   Graph_Graph33->SetMaximum(1.025981);
   Graph_Graph33->SetDirectory(0);
   Graph_Graph33->SetStats(0);
   Graph_Graph33->SetLineStyle(0);
   Graph_Graph33->SetMarkerStyle(20);
   Graph_Graph33->GetXaxis()->SetLabelFont(42);
   Graph_Graph33->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph33->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph33->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph33->GetXaxis()->SetTitleFont(42);
   Graph_Graph33->GetYaxis()->SetLabelFont(42);
   Graph_Graph33->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph33->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph33->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph33->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph33->GetYaxis()->SetTitleFont(42);
   Graph_Graph33->GetZaxis()->SetLabelFont(42);
   Graph_Graph33->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph33->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph33);
   
   graph->Draw("  c");
   Double_t xAxis11[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_422 = new TH1D("hist_eta_rat_422","",18, xAxis11);
   hist_eta_rat_422->SetBinContent(2,1.813721);
   hist_eta_rat_422->SetBinContent(3,0.9908987);
   hist_eta_rat_422->SetBinContent(4,0.958491);
   hist_eta_rat_422->SetBinContent(5,0.9426981);
   hist_eta_rat_422->SetBinContent(6,0.9477543);
   hist_eta_rat_422->SetBinContent(7,0.9598372);
   hist_eta_rat_422->SetBinContent(8,0.9645417);
   hist_eta_rat_422->SetBinContent(9,0.9982028);
   hist_eta_rat_422->SetBinContent(10,1.010392);
   hist_eta_rat_422->SetBinContent(11,1.030348);
   hist_eta_rat_422->SetBinContent(12,1.015993);
   hist_eta_rat_422->SetBinContent(13,1.023637);
   hist_eta_rat_422->SetBinContent(14,1.012336);
   hist_eta_rat_422->SetBinContent(15,1.01686);
   hist_eta_rat_422->SetBinContent(16,1.006532);
   hist_eta_rat_422->SetBinContent(17,0.9586193);
   hist_eta_rat_422->SetBinContent(18,0.883056);
   hist_eta_rat_422->SetBinError(2,0.3788104);
   hist_eta_rat_422->SetBinError(3,0.06913021);
   hist_eta_rat_422->SetBinError(4,0.03044085);
   hist_eta_rat_422->SetBinError(5,0.018461);
   hist_eta_rat_422->SetBinError(6,0.0135207);
   hist_eta_rat_422->SetBinError(7,0.01107217);
   hist_eta_rat_422->SetBinError(8,0.009637059);
   hist_eta_rat_422->SetBinError(9,0.008968998);
   hist_eta_rat_422->SetBinError(10,0.008484689);
   hist_eta_rat_422->SetBinError(11,0.00836453);
   hist_eta_rat_422->SetBinError(12,0.008267739);
   hist_eta_rat_422->SetBinError(13,0.008567105);
   hist_eta_rat_422->SetBinError(14,0.009071236);
   hist_eta_rat_422->SetBinError(15,0.01007977);
   hist_eta_rat_422->SetBinError(16,0.01171373);
   hist_eta_rat_422->SetBinError(17,0.01177863);
   hist_eta_rat_422->SetBinError(18,0.03350037);
   hist_eta_rat_422->SetEntries(2024.108);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_422->SetLineColor(ci);
   hist_eta_rat_422->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_422->SetMarkerColor(ci);
   hist_eta_rat_422->SetMarkerStyle(20);
   hist_eta_rat_422->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_422->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_422->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_422->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_422->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_422->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_422->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_422->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_422->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_422->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_422->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_422->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_422->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_422->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_422->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_422->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_422->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_422->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_422->Draw("same p");
      tex = new TLatex(0.35,0.08,"115 < p_{T}^{ave} < 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_0_4->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_0_5
   TPad *p_0_5 = new TPad("p_0_5", "p_0_5",0,0,0.3883495,0.2004008);
   p_0_5->Draw();
   p_0_5->cd();
   p_0_5->Range(-5.569572,0.1842553,2.999,1.4999);
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
   
   TH1D *emptyRat23 = new TH1D("emptyRat23","",10,-2.999,2.999);
   emptyRat23->SetBinContent(7,1000);
   emptyRat23->SetBinError(7,1000);
   emptyRat23->SetMinimum(0.50001);
   emptyRat23->SetMaximum(1.4999);
   emptyRat23->SetEntries(1);
   emptyRat23->SetLineStyle(0);
   emptyRat23->SetMarkerStyle(20);
   emptyRat23->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat23->GetXaxis()->CenterTitle(true);
   emptyRat23->GetXaxis()->SetLabelFont(43);
   emptyRat23->GetXaxis()->SetLabelOffset(0.01);
   emptyRat23->GetXaxis()->SetLabelSize(33);
   emptyRat23->GetXaxis()->SetTitleSize(33);
   emptyRat23->GetXaxis()->SetTitleOffset(7.5);
   emptyRat23->GetXaxis()->SetTitleFont(43);
   emptyRat23->GetYaxis()->SetTitle("pPb/pp");
   emptyRat23->GetYaxis()->CenterTitle(true);
   emptyRat23->GetYaxis()->SetNdivisions(505);
   emptyRat23->GetYaxis()->SetLabelFont(43);
   emptyRat23->GetYaxis()->SetLabelOffset(0.01);
   emptyRat23->GetYaxis()->SetLabelSize(33);
   emptyRat23->GetYaxis()->SetTitleSize(33);
   emptyRat23->GetYaxis()->SetTitleOffset(7.5);
   emptyRat23->GetYaxis()->SetTitleFont(43);
   emptyRat23->GetZaxis()->SetLabelFont(42);
   emptyRat23->GetZaxis()->SetLabelSize(0.045);
   emptyRat23->GetZaxis()->SetTitleSize(0.035);
   emptyRat23->GetZaxis()->SetTitleFont(42);
   emptyRat23->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 974;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","Graph",100,-3.46425,3.51675);
   Graph_Graph1012->SetMinimum(0);
   Graph_Graph1012->SetMaximum(12.25813);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);
   Graph_Graph1012->SetLineStyle(0);
   Graph_Graph1012->SetMarkerStyle(20);
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1012->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1012->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1012->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
   gre->Draw(" 2");
   
   Double_t Graph1_fx34[16] = {
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
   Double_t Graph1_fy34[16] = {
   0.8454662,
   0.8893019,
   0.9401855,
   0.962631,
   0.972804,
   0.9893375,
   1.000291,
   1.008304,
   1.01515,
   1.014514,
   1.0123,
   1.006405,
   0.9982379,
   0.9851924,
   0.9764676,
   0.929928};
   graph = new TGraph(16,Graph1_fx34,Graph1_fy34);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph34 = new TH1F("Graph_Graph34","Graph",100,-2.393917,3.183083);
   Graph_Graph34->SetMinimum(0.8284978);
   Graph_Graph34->SetMaximum(1.032118);
   Graph_Graph34->SetDirectory(0);
   Graph_Graph34->SetStats(0);
   Graph_Graph34->SetLineStyle(0);
   Graph_Graph34->SetMarkerStyle(20);
   Graph_Graph34->GetXaxis()->SetLabelFont(42);
   Graph_Graph34->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph34->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph34->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph34->GetXaxis()->SetTitleFont(42);
   Graph_Graph34->GetYaxis()->SetLabelFont(42);
   Graph_Graph34->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph34->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph34->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph34->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph34->GetYaxis()->SetTitleFont(42);
   Graph_Graph34->GetZaxis()->SetLabelFont(42);
   Graph_Graph34->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph34->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph34->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph34);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx35[16] = {
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
   Double_t Graph2_fy35[16] = {
   1.09449,
   0.9447404,
   0.9485377,
   0.9774722,
   0.9931476,
   1.000704,
   1.012539,
   1.019376,
   1.02209,
   1.02292,
   1.023835,
   1.010453,
   1.011764,
   1.006949,
   1.001789,
   0.9589323};
   graph = new TGraph(16,Graph2_fx35,Graph2_fy35);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph35 = new TH1F("Graph_Graph35","Graph",100,-2.393917,3.183083);
   Graph_Graph35->SetMinimum(0.9297654);
   Graph_Graph35->SetMaximum(1.109465);
   Graph_Graph35->SetDirectory(0);
   Graph_Graph35->SetStats(0);
   Graph_Graph35->SetLineStyle(0);
   Graph_Graph35->SetMarkerStyle(20);
   Graph_Graph35->GetXaxis()->SetLabelFont(42);
   Graph_Graph35->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph35->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph35->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph35->GetXaxis()->SetTitleFont(42);
   Graph_Graph35->GetYaxis()->SetLabelFont(42);
   Graph_Graph35->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph35->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph35->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph35->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph35->GetYaxis()->SetTitleFont(42);
   Graph_Graph35->GetZaxis()->SetLabelFont(42);
   Graph_Graph35->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph35->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph35->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph35);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx36[16] = {
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
   Double_t Graph3_fy36[16] = {
   0.5421314,
   0.860371,
   0.9025145,
   0.9391927,
   0.9644958,
   0.9743617,
   0.9891383,
   1.000364,
   1.007459,
   1.012621,
   1.008213,
   0.9897693,
   0.9798649,
   0.9634739,
   0.9481657,
   0.863611};
   graph = new TGraph(16,Graph3_fx36,Graph3_fy36);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,-2.393917,3.183083);
   Graph_Graph36->SetMinimum(0.4950825);
   Graph_Graph36->SetMaximum(1.059669);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);
   Graph_Graph36->SetLineStyle(0);
   Graph_Graph36->SetMarkerStyle(20);
   Graph_Graph36->GetXaxis()->SetLabelFont(42);
   Graph_Graph36->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph36->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph36->GetXaxis()->SetTitleFont(42);
   Graph_Graph36->GetYaxis()->SetLabelFont(42);
   Graph_Graph36->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph36->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph36->GetYaxis()->SetTitleFont(42);
   Graph_Graph36->GetZaxis()->SetLabelFont(42);
   Graph_Graph36->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph36->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph36->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("  c");
   Double_t xAxis12[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_524 = new TH1D("hist_eta_rat_524","",18, xAxis12);
   hist_eta_rat_524->SetBinContent(2,10.40849);
   hist_eta_rat_524->SetBinContent(3,0.8870872);
   hist_eta_rat_524->SetBinContent(4,0.9936676);
   hist_eta_rat_524->SetBinContent(5,0.8467346);
   hist_eta_rat_524->SetBinContent(6,0.9103075);
   hist_eta_rat_524->SetBinContent(7,0.9149816);
   hist_eta_rat_524->SetBinContent(8,0.9686298);
   hist_eta_rat_524->SetBinContent(9,0.9848296);
   hist_eta_rat_524->SetBinContent(10,1.011455);
   hist_eta_rat_524->SetBinContent(11,1.003333);
   hist_eta_rat_524->SetBinContent(12,1.034198);
   hist_eta_rat_524->SetBinContent(13,1.005249);
   hist_eta_rat_524->SetBinContent(14,1.022242);
   hist_eta_rat_524->SetBinContent(15,1.044678);
   hist_eta_rat_524->SetBinContent(16,1.006172);
   hist_eta_rat_524->SetBinContent(17,0.9896288);
   hist_eta_rat_524->SetBinContent(18,1.061912);
   hist_eta_rat_524->SetBinError(2,12.74774);
   hist_eta_rat_524->SetBinError(3,0.2477981);
   hist_eta_rat_524->SetBinError(4,0.09197665);
   hist_eta_rat_524->SetBinError(5,0.03903801);
   hist_eta_rat_524->SetBinError(6,0.02534206);
   hist_eta_rat_524->SetBinError(7,0.01878364);
   hist_eta_rat_524->SetBinError(8,0.01578038);
   hist_eta_rat_524->SetBinError(9,0.01395718);
   hist_eta_rat_524->SetBinError(10,0.01310372);
   hist_eta_rat_524->SetBinError(11,0.01249012);
   hist_eta_rat_524->SetBinError(12,0.01274022);
   hist_eta_rat_524->SetBinError(13,0.01299128);
   hist_eta_rat_524->SetBinError(14,0.01426728);
   hist_eta_rat_524->SetBinError(15,0.01661486);
   hist_eta_rat_524->SetBinError(16,0.02014486);
   hist_eta_rat_524->SetBinError(17,0.02352586);
   hist_eta_rat_524->SetBinError(18,0.1059296);
   hist_eta_rat_524->SetEntries(4.187656);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_524->SetLineColor(ci);
   hist_eta_rat_524->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_524->SetMarkerColor(ci);
   hist_eta_rat_524->SetMarkerStyle(20);
   hist_eta_rat_524->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_524->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_524->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_524->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_524->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_524->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_524->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_524->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_524->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_524->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_524->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_524->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_524->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_524->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_524->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_524->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_524->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_524->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_524->Draw("same p");
      tex = new TLatex(0.35,0.28,"150 < p_{T}^{ave} < 400 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_0_5->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_1_0
   TPad *p_1_0 = new TPad("p_1_0", "p_1_0",0.3883495,0.8096192,0.6601942,1);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(-2.999,0.50001,2.999,1.749872);
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
   
   TH1D *emptyRat25 = new TH1D("emptyRat25","",10,-2.999,2.999);
   emptyRat25->SetBinContent(7,1000);
   emptyRat25->SetBinError(7,1000);
   emptyRat25->SetMinimum(0.50001);
   emptyRat25->SetMaximum(1.4999);
   emptyRat25->SetEntries(1);
   emptyRat25->SetLineStyle(0);
   emptyRat25->SetMarkerStyle(20);
   emptyRat25->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat25->GetXaxis()->CenterTitle(true);
   emptyRat25->GetXaxis()->SetLabelFont(43);
   emptyRat25->GetXaxis()->SetLabelOffset(0.01);
   emptyRat25->GetXaxis()->SetLabelSize(33);
   emptyRat25->GetXaxis()->SetTitleSize(33);
   emptyRat25->GetXaxis()->SetTitleOffset(7.5);
   emptyRat25->GetXaxis()->SetTitleFont(43);
   emptyRat25->GetYaxis()->SetTitle("pPb/pp");
   emptyRat25->GetYaxis()->CenterTitle(true);
   emptyRat25->GetYaxis()->SetNdivisions(505);
   emptyRat25->GetYaxis()->SetLabelFont(43);
   emptyRat25->GetYaxis()->SetLabelOffset(0.01);
   emptyRat25->GetYaxis()->SetLabelSize(33);
   emptyRat25->GetYaxis()->SetTitleSize(33);
   emptyRat25->GetYaxis()->SetTitleOffset(7.5);
   emptyRat25->GetYaxis()->SetTitleFont(43);
   emptyRat25->GetZaxis()->SetLabelFont(42);
   emptyRat25->GetZaxis()->SetLabelSize(0.045);
   emptyRat25->GetZaxis()->SetTitleSize(0.035);
   emptyRat25->GetZaxis()->SetTitleFont(42);
   emptyRat25->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 944;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10071013 = new TH1F("Graph_Graph_Graph10071013","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10071013->SetMinimum(0.76691);
   Graph_Graph_Graph10071013->SetMaximum(1.073808);
   Graph_Graph_Graph10071013->SetDirectory(0);
   Graph_Graph_Graph10071013->SetStats(0);
   Graph_Graph_Graph10071013->SetLineStyle(0);
   Graph_Graph_Graph10071013->SetMarkerStyle(20);
   Graph_Graph_Graph10071013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10071013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10071013->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10071013->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10071013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10071013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10071013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10071013->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10071013->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10071013->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10071013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10071013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10071013->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10071013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10071013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10071013);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx37[18] = {
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
   Double_t Graph0_fy37[18] = {
   0.8701143,
   0.9122619,
   0.9541704,
   0.9768265,
   0.9985586,
   1.023475,
   1.034374,
   1.042816,
   1.038865,
   1.037545,
   1.029321,
   1.013031,
   0.9972174,
   0.9722379,
   0.9578875,
   0.9425261,
   0.92414,
   0.909056};
   graph = new TGraph(18,Graph0_fx37,Graph0_fy37);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph37 = new TH1F("Graph_Graph37","Graph",100,-3.323417,3.267583);
   Graph_Graph37->SetMinimum(0.8528442);
   Graph_Graph37->SetMaximum(1.060086);
   Graph_Graph37->SetDirectory(0);
   Graph_Graph37->SetStats(0);
   Graph_Graph37->SetLineStyle(0);
   Graph_Graph37->SetMarkerStyle(20);
   Graph_Graph37->GetXaxis()->SetLabelFont(42);
   Graph_Graph37->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph37->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph37->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph37->GetXaxis()->SetTitleFont(42);
   Graph_Graph37->GetYaxis()->SetLabelFont(42);
   Graph_Graph37->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph37->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph37->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph37->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph37->GetYaxis()->SetTitleFont(42);
   Graph_Graph37->GetZaxis()->SetLabelFont(42);
   Graph_Graph37->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph37->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph37->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph37);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx38[18] = {
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
   Double_t Graph1_fy38[18] = {
   0.9306436,
   0.9726863,
   1.002881,
   1.001918,
   1.018325,
   1.058112,
   1.069502,
   1.063935,
   1.072621,
   1.059842,
   1.04391,
   1.030047,
   1.009361,
   0.9999725,
   0.9834502,
   0.9848432,
   0.9749274,
   0.96079};
   graph = new TGraph(18,Graph1_fx38,Graph1_fy38);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph38 = new TH1F("Graph_Graph38","Graph",100,-3.323417,3.267583);
   Graph_Graph38->SetMinimum(0.9164459);
   Graph_Graph38->SetMaximum(1.086818);
   Graph_Graph38->SetDirectory(0);
   Graph_Graph38->SetStats(0);
   Graph_Graph38->SetLineStyle(0);
   Graph_Graph38->SetMarkerStyle(20);
   Graph_Graph38->GetXaxis()->SetLabelFont(42);
   Graph_Graph38->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph38->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph38->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph38->GetXaxis()->SetTitleFont(42);
   Graph_Graph38->GetYaxis()->SetLabelFont(42);
   Graph_Graph38->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph38->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph38->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph38->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph38->GetYaxis()->SetTitleFont(42);
   Graph_Graph38->GetZaxis()->SetLabelFont(42);
   Graph_Graph38->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph38->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph38->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph38);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx39[18] = {
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
   Double_t Graph2_fy39[18] = {
   0.7417928,
   0.8472569,
   0.9131333,
   0.9392939,
   0.965521,
   1.000564,
   1.009452,
   1.008707,
   1.021134,
   1.018573,
   1.013631,
   1.00372,
   0.9792128,
   0.9496908,
   0.9131709,
   0.9043221,
   0.8768434,
   0.8404732};
   graph = new TGraph(18,Graph2_fx39,Graph2_fy39);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph39 = new TH1F("Graph_Graph39","Graph",100,-3.323417,3.267583);
   Graph_Graph39->SetMinimum(0.7138587);
   Graph_Graph39->SetMaximum(1.049068);
   Graph_Graph39->SetDirectory(0);
   Graph_Graph39->SetStats(0);
   Graph_Graph39->SetLineStyle(0);
   Graph_Graph39->SetMarkerStyle(20);
   Graph_Graph39->GetXaxis()->SetLabelFont(42);
   Graph_Graph39->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph39->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph39->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph39->GetXaxis()->SetTitleFont(42);
   Graph_Graph39->GetYaxis()->SetLabelFont(42);
   Graph_Graph39->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph39->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph39->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph39->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph39->GetYaxis()->SetTitleFont(42);
   Graph_Graph39->GetZaxis()->SetLabelFont(42);
   Graph_Graph39->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph39->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph39->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph39);
   
   graph->Draw("  c");
   Double_t xAxis13[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_026 = new TH1D("hist_eta_rat_026","",18, xAxis13);
   hist_eta_rat_026->SetBinContent(0,0.7009663);
   hist_eta_rat_026->SetBinContent(1,0.9780925);
   hist_eta_rat_026->SetBinContent(2,0.7903649);
   hist_eta_rat_026->SetBinContent(3,1.002554);
   hist_eta_rat_026->SetBinContent(4,0.9415966);
   hist_eta_rat_026->SetBinContent(5,1.022632);
   hist_eta_rat_026->SetBinContent(6,0.9673216);
   hist_eta_rat_026->SetBinContent(7,1.050277);
   hist_eta_rat_026->SetBinContent(8,1.024931);
   hist_eta_rat_026->SetBinContent(9,1.03395);
   hist_eta_rat_026->SetBinContent(10,1.030084);
   hist_eta_rat_026->SetBinContent(11,0.9783376);
   hist_eta_rat_026->SetBinContent(12,1.025516);
   hist_eta_rat_026->SetBinContent(13,1.034408);
   hist_eta_rat_026->SetBinContent(14,1.028685);
   hist_eta_rat_026->SetBinContent(15,0.9958378);
   hist_eta_rat_026->SetBinContent(16,0.9523999);
   hist_eta_rat_026->SetBinContent(17,0.9441907);
   hist_eta_rat_026->SetBinContent(18,0.8048132);
   hist_eta_rat_026->SetBinError(0,0.8585049);
   hist_eta_rat_026->SetBinError(1,0.2326733);
   hist_eta_rat_026->SetBinError(2,0.05011169);
   hist_eta_rat_026->SetBinError(3,0.0531607);
   hist_eta_rat_026->SetBinError(4,0.0405803);
   hist_eta_rat_026->SetBinError(5,0.03711422);
   hist_eta_rat_026->SetBinError(6,0.03117593);
   hist_eta_rat_026->SetBinError(7,0.0309367);
   hist_eta_rat_026->SetBinError(8,0.02800293);
   hist_eta_rat_026->SetBinError(9,0.02680612);
   hist_eta_rat_026->SetBinError(10,0.0260524);
   hist_eta_rat_026->SetBinError(11,0.02456519);
   hist_eta_rat_026->SetBinError(12,0.02602307);
   hist_eta_rat_026->SetBinError(13,0.02716959);
   hist_eta_rat_026->SetBinError(14,0.02835433);
   hist_eta_rat_026->SetBinError(15,0.02968339);
   hist_eta_rat_026->SetBinError(16,0.03186721);
   hist_eta_rat_026->SetBinError(17,0.02871787);
   hist_eta_rat_026->SetBinError(18,0.05029851);
   hist_eta_rat_026->SetEntries(4150.496);

   ci = TColor::GetColor("#33cc99");
   hist_eta_rat_026->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_026->SetLineColor(ci);
   hist_eta_rat_026->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_026->SetMarkerColor(ci);
   hist_eta_rat_026->SetMarkerStyle(20);
   hist_eta_rat_026->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_026->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_026->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_026->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_026->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_026->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_026->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_026->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_026->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_026->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_026->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_026->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_026->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_026->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_026->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_026->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_026->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_026->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_026->Draw("same p");
      tex = new TLatex(0.25,0.82,"EPS09");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,1,3,1);
   line->Draw();
      tex = new TLatex(0.05,0.93,"p_{T,1} > 20, p_{T,2} > 30 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(24);
   tex->Draw();
   p_1_0->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_1_1
   TPad *p_1_1 = new TPad("p_1_1", "p_1_1",0.3883495,0.6573147,0.6601942,0.8096192);
   p_1_1->Draw();
   p_1_1->cd();
   p_1_1->Range(-2.999,0.50001,2.999,1.4999);
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
   
   TH1D *emptyRat27 = new TH1D("emptyRat27","",10,-2.999,2.999);
   emptyRat27->SetBinContent(7,1000);
   emptyRat27->SetBinError(7,1000);
   emptyRat27->SetMinimum(0.50001);
   emptyRat27->SetMaximum(1.4999);
   emptyRat27->SetEntries(1);
   emptyRat27->SetLineStyle(0);
   emptyRat27->SetMarkerStyle(20);
   emptyRat27->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat27->GetXaxis()->CenterTitle(true);
   emptyRat27->GetXaxis()->SetLabelFont(43);
   emptyRat27->GetXaxis()->SetLabelOffset(0.01);
   emptyRat27->GetXaxis()->SetLabelSize(33);
   emptyRat27->GetXaxis()->SetTitleSize(33);
   emptyRat27->GetXaxis()->SetTitleOffset(7.5);
   emptyRat27->GetXaxis()->SetTitleFont(43);
   emptyRat27->GetYaxis()->SetTitle("pPb/pp");
   emptyRat27->GetYaxis()->CenterTitle(true);
   emptyRat27->GetYaxis()->SetNdivisions(505);
   emptyRat27->GetYaxis()->SetLabelFont(43);
   emptyRat27->GetYaxis()->SetLabelOffset(0.01);
   emptyRat27->GetYaxis()->SetLabelSize(33);
   emptyRat27->GetYaxis()->SetTitleSize(33);
   emptyRat27->GetYaxis()->SetTitleOffset(7.5);
   emptyRat27->GetYaxis()->SetTitleFont(43);
   emptyRat27->GetZaxis()->SetLabelFont(42);
   emptyRat27->GetZaxis()->SetLabelSize(0.045);
   emptyRat27->GetZaxis()->SetTitleSize(0.035);
   emptyRat27->GetZaxis()->SetTitleFont(42);
   emptyRat27->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 950;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10081014 = new TH1F("Graph_Graph_Graph10081014","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10081014->SetMinimum(0.7730531);
   Graph_Graph_Graph10081014->SetMaximum(1.05362);
   Graph_Graph_Graph10081014->SetDirectory(0);
   Graph_Graph_Graph10081014->SetStats(0);
   Graph_Graph_Graph10081014->SetLineStyle(0);
   Graph_Graph_Graph10081014->SetMarkerStyle(20);
   Graph_Graph_Graph10081014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10081014->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10081014->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10081014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10081014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10081014->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10081014->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10081014->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10081014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10081014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081014->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10081014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10081014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10081014);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx40[18] = {
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
   Double_t Graph0_fy40[18] = {
   0.7525729,
   0.8281721,
   0.8524599,
   0.8936998,
   0.9287941,
   0.9569598,
   0.9840273,
   1.012692,
   1.041653,
   1.05451,
   1.049313,
   1.04269,
   1.030723,
   1.010908,
   0.9887992,
   0.9697355,
   0.944502,
   0.9152012};
   graph = new TGraph(18,Graph0_fx40,Graph0_fy40);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph40 = new TH1F("Graph_Graph40","Graph",100,-3.323417,3.267583);
   Graph_Graph40->SetMinimum(0.7223792);
   Graph_Graph40->SetMaximum(1.084704);
   Graph_Graph40->SetDirectory(0);
   Graph_Graph40->SetStats(0);
   Graph_Graph40->SetLineStyle(0);
   Graph_Graph40->SetMarkerStyle(20);
   Graph_Graph40->GetXaxis()->SetLabelFont(42);
   Graph_Graph40->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph40->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph40->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph40->GetXaxis()->SetTitleFont(42);
   Graph_Graph40->GetYaxis()->SetLabelFont(42);
   Graph_Graph40->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph40->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph40->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph40->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph40->GetYaxis()->SetTitleFont(42);
   Graph_Graph40->GetZaxis()->SetLabelFont(42);
   Graph_Graph40->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph40->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph40->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph40);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx41[18] = {
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
   Double_t Graph1_fy41[18] = {
   0.9732377,
   0.8857529,
   0.9256954,
   0.9436352,
   0.9803867,
   0.9910884,
   1.012704,
   1.041826,
   1.055299,
   1.07275,
   1.07718,
   1.070274,
   1.060915,
   1.039492,
   1.018692,
   1.000123,
   0.9776693,
   0.9649741};
   graph = new TGraph(18,Graph1_fx41,Graph1_fy41);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph41 = new TH1F("Graph_Graph41","Graph",100,-3.323417,3.267583);
   Graph_Graph41->SetMinimum(0.8666103);
   Graph_Graph41->SetMaximum(1.096322);
   Graph_Graph41->SetDirectory(0);
   Graph_Graph41->SetStats(0);
   Graph_Graph41->SetLineStyle(0);
   Graph_Graph41->SetMarkerStyle(20);
   Graph_Graph41->GetXaxis()->SetLabelFont(42);
   Graph_Graph41->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph41->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph41->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph41->GetXaxis()->SetTitleFont(42);
   Graph_Graph41->GetYaxis()->SetLabelFont(42);
   Graph_Graph41->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph41->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph41->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph41->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph41->GetYaxis()->SetTitleFont(42);
   Graph_Graph41->GetZaxis()->SetLabelFont(42);
   Graph_Graph41->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph41->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph41->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph41);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx42[18] = {
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
   Double_t Graph2_fy42[18] = {
   0.6909119,
   0.746117,
   0.7943366,
   0.8255476,
   0.887907,
   0.9210399,
   0.9535384,
   0.9941051,
   1.010969,
   1.019121,
   1.020722,
   1.017472,
   1.009679,
   0.9985777,
   0.9726474,
   0.9389995,
   0.8910671,
   0.8469523};
   graph = new TGraph(18,Graph2_fx42,Graph2_fy42);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph42 = new TH1F("Graph_Graph42","Graph",100,-3.323417,3.267583);
   Graph_Graph42->SetMinimum(0.6579309);
   Graph_Graph42->SetMaximum(1.053703);
   Graph_Graph42->SetDirectory(0);
   Graph_Graph42->SetStats(0);
   Graph_Graph42->SetLineStyle(0);
   Graph_Graph42->SetMarkerStyle(20);
   Graph_Graph42->GetXaxis()->SetLabelFont(42);
   Graph_Graph42->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph42->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph42->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph42->GetXaxis()->SetTitleFont(42);
   Graph_Graph42->GetYaxis()->SetLabelFont(42);
   Graph_Graph42->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph42->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph42->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph42->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph42->GetYaxis()->SetTitleFont(42);
   Graph_Graph42->GetZaxis()->SetLabelFont(42);
   Graph_Graph42->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph42->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph42->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph42);
   
   graph->Draw("  c");
   Double_t xAxis14[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_128 = new TH1D("hist_eta_rat_128","",18, xAxis14);
   hist_eta_rat_128->SetBinContent(1,0.8991901);
   hist_eta_rat_128->SetBinContent(2,1.020067);
   hist_eta_rat_128->SetBinContent(3,0.9951541);
   hist_eta_rat_128->SetBinContent(4,0.9807586);
   hist_eta_rat_128->SetBinContent(5,1.022584);
   hist_eta_rat_128->SetBinContent(6,0.994965);
   hist_eta_rat_128->SetBinContent(7,0.994765);
   hist_eta_rat_128->SetBinContent(8,1.024517);
   hist_eta_rat_128->SetBinContent(9,1.016799);
   hist_eta_rat_128->SetBinContent(10,1.030755);
   hist_eta_rat_128->SetBinContent(11,1.024302);
   hist_eta_rat_128->SetBinContent(12,1.017353);
   hist_eta_rat_128->SetBinContent(13,1.013676);
   hist_eta_rat_128->SetBinContent(14,0.9996804);
   hist_eta_rat_128->SetBinContent(15,0.9743303);
   hist_eta_rat_128->SetBinContent(16,0.9698012);
   hist_eta_rat_128->SetBinContent(17,0.9218322);
   hist_eta_rat_128->SetBinContent(18,0.7953151);
   hist_eta_rat_128->SetBinError(1,0.2654167);
   hist_eta_rat_128->SetBinError(2,0.04189644);
   hist_eta_rat_128->SetBinError(3,0.02914542);
   hist_eta_rat_128->SetBinError(4,0.02133916);
   hist_eta_rat_128->SetBinError(5,0.01762502);
   hist_eta_rat_128->SetBinError(6,0.01477849);
   hist_eta_rat_128->SetBinError(7,0.01309855);
   hist_eta_rat_128->SetBinError(8,0.01223317);
   hist_eta_rat_128->SetBinError(9,0.01144872);
   hist_eta_rat_128->SetBinError(10,0.01107849);
   hist_eta_rat_128->SetBinError(11,0.01086972);
   hist_eta_rat_128->SetBinError(12,0.01087988);
   hist_eta_rat_128->SetBinError(13,0.01111328);
   hist_eta_rat_128->SetBinError(14,0.01160966);
   hist_eta_rat_128->SetBinError(15,0.01235849);
   hist_eta_rat_128->SetBinError(16,0.01389286);
   hist_eta_rat_128->SetBinError(17,0.01263902);
   hist_eta_rat_128->SetBinError(18,0.02503083);
   hist_eta_rat_128->SetEntries(4107.488);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_128->SetLineColor(ci);
   hist_eta_rat_128->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_128->SetMarkerColor(ci);
   hist_eta_rat_128->SetMarkerStyle(20);
   hist_eta_rat_128->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_128->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_128->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_128->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_128->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_128->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_128->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_128->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_128->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_128->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_128->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_128->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_128->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_128->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_128->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_128->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_128->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_128->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_128->Draw("same p");
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_1_1->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_1_2
   TPad *p_1_2 = new TPad("p_1_2", "p_1_2",0.3883495,0.50501,0.6601942,0.6573147);
   p_1_2->Draw();
   p_1_2->cd();
   p_1_2->Range(-2.999,0.50001,2.999,1.4999);
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
   
   TH1D *emptyRat29 = new TH1D("emptyRat29","",10,-2.999,2.999);
   emptyRat29->SetBinContent(7,1000);
   emptyRat29->SetBinError(7,1000);
   emptyRat29->SetMinimum(0.50001);
   emptyRat29->SetMaximum(1.4999);
   emptyRat29->SetEntries(1);
   emptyRat29->SetLineStyle(0);
   emptyRat29->SetMarkerStyle(20);
   emptyRat29->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat29->GetXaxis()->CenterTitle(true);
   emptyRat29->GetXaxis()->SetLabelFont(43);
   emptyRat29->GetXaxis()->SetLabelOffset(0.01);
   emptyRat29->GetXaxis()->SetLabelSize(33);
   emptyRat29->GetXaxis()->SetTitleSize(33);
   emptyRat29->GetXaxis()->SetTitleOffset(7.5);
   emptyRat29->GetXaxis()->SetTitleFont(43);
   emptyRat29->GetYaxis()->SetTitle("pPb/pp");
   emptyRat29->GetYaxis()->CenterTitle(true);
   emptyRat29->GetYaxis()->SetNdivisions(505);
   emptyRat29->GetYaxis()->SetLabelFont(43);
   emptyRat29->GetYaxis()->SetLabelOffset(0.01);
   emptyRat29->GetYaxis()->SetLabelSize(33);
   emptyRat29->GetYaxis()->SetTitleSize(33);
   emptyRat29->GetYaxis()->SetTitleOffset(7.5);
   emptyRat29->GetYaxis()->SetTitleFont(43);
   emptyRat29->GetZaxis()->SetLabelFont(42);
   emptyRat29->GetZaxis()->SetLabelSize(0.045);
   emptyRat29->GetZaxis()->SetTitleSize(0.035);
   emptyRat29->GetZaxis()->SetTitleFont(42);
   emptyRat29->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 956;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10091015 = new TH1F("Graph_Graph_Graph10091015","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10091015->SetMinimum(0.6838763);
   Graph_Graph_Graph10091015->SetMaximum(2.442677);
   Graph_Graph_Graph10091015->SetDirectory(0);
   Graph_Graph_Graph10091015->SetStats(0);
   Graph_Graph_Graph10091015->SetLineStyle(0);
   Graph_Graph_Graph10091015->SetMarkerStyle(20);
   Graph_Graph_Graph10091015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10091015->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10091015->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10091015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10091015->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10091015->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10091015->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10091015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091015->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10091015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10091015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10091015);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx43[17] = {
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
   Double_t Graph0_fy43[17] = {
   0.7931302,
   0.8272253,
   0.8648749,
   0.8982352,
   0.9253379,
   0.95634,
   0.9917558,
   1.011797,
   1.03826,
   1.054105,
   1.055884,
   1.040074,
   1.024505,
   1.008433,
   0.9849111,
   0.957653,
   0.9240599};
   graph = new TGraph(17,Graph0_fx43,Graph0_fy43);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph43 = new TH1F("Graph_Graph43","Graph",100,-2.858667,3.225333);
   Graph_Graph43->SetMinimum(0.7668548);
   Graph_Graph43->SetMaximum(1.082159);
   Graph_Graph43->SetDirectory(0);
   Graph_Graph43->SetStats(0);
   Graph_Graph43->SetLineStyle(0);
   Graph_Graph43->SetMarkerStyle(20);
   Graph_Graph43->GetXaxis()->SetLabelFont(42);
   Graph_Graph43->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph43->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph43->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph43->GetXaxis()->SetTitleFont(42);
   Graph_Graph43->GetYaxis()->SetLabelFont(42);
   Graph_Graph43->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph43->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph43->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph43->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph43->GetYaxis()->SetTitleFont(42);
   Graph_Graph43->GetZaxis()->SetLabelFont(42);
   Graph_Graph43->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph43->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph43->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph43);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx44[17] = {
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
   Double_t Graph1_fy44[17] = {
   0.8471039,
   0.9082558,
   0.9191457,
   0.9510957,
   0.973735,
   0.9859425,
   1.009153,
   1.038112,
   1.054744,
   1.072277,
   1.080251,
   1.073996,
   1.065046,
   1.029618,
   1.00249,
   0.9866475,
   0.9709258};
   graph = new TGraph(17,Graph1_fx44,Graph1_fy44);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph44 = new TH1F("Graph_Graph44","Graph",100,-2.858667,3.225333);
   Graph_Graph44->SetMinimum(0.8237892);
   Graph_Graph44->SetMaximum(1.103566);
   Graph_Graph44->SetDirectory(0);
   Graph_Graph44->SetStats(0);
   Graph_Graph44->SetLineStyle(0);
   Graph_Graph44->SetMarkerStyle(20);
   Graph_Graph44->GetXaxis()->SetLabelFont(42);
   Graph_Graph44->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph44->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph44->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph44->GetXaxis()->SetTitleFont(42);
   Graph_Graph44->GetYaxis()->SetLabelFont(42);
   Graph_Graph44->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph44->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph44->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph44->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph44->GetYaxis()->SetTitleFont(42);
   Graph_Graph44->GetZaxis()->SetLabelFont(42);
   Graph_Graph44->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph44->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph44);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx45[17] = {
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
   Double_t Graph2_fy45[17] = {
   0.7058892,
   0.7633558,
   0.7896449,
   0.8309591,
   0.8873663,
   0.9205087,
   0.9651133,
   1.006014,
   1.022149,
   1.025896,
   1.026515,
   1.020946,
   1.010384,
   0.9797009,
   0.9419015,
   0.9130145,
   0.8635156};
   graph = new TGraph(17,Graph2_fx45,Graph2_fy45);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph45 = new TH1F("Graph_Graph45","Graph",100,-2.858667,3.225333);
   Graph_Graph45->SetMinimum(0.6738266);
   Graph_Graph45->SetMaximum(1.058578);
   Graph_Graph45->SetDirectory(0);
   Graph_Graph45->SetStats(0);
   Graph_Graph45->SetLineStyle(0);
   Graph_Graph45->SetMarkerStyle(20);
   Graph_Graph45->GetXaxis()->SetLabelFont(42);
   Graph_Graph45->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph45->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph45->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph45->GetXaxis()->SetTitleFont(42);
   Graph_Graph45->GetYaxis()->SetLabelFont(42);
   Graph_Graph45->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph45->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph45->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph45->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph45->GetYaxis()->SetTitleFont(42);
   Graph_Graph45->GetZaxis()->SetLabelFont(42);
   Graph_Graph45->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph45->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph45->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph45);
   
   graph->Draw("  c");
   Double_t xAxis15[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_230 = new TH1D("hist_eta_rat_230","",18, xAxis15);
   hist_eta_rat_230->SetBinContent(1,2.353356);
   hist_eta_rat_230->SetBinContent(2,1.050456);
   hist_eta_rat_230->SetBinContent(3,1.012821);
   hist_eta_rat_230->SetBinContent(4,0.9667915);
   hist_eta_rat_230->SetBinContent(5,0.9704566);
   hist_eta_rat_230->SetBinContent(6,0.9734057);
   hist_eta_rat_230->SetBinContent(7,1.000051);
   hist_eta_rat_230->SetBinContent(8,0.9986469);
   hist_eta_rat_230->SetBinContent(9,1.013215);
   hist_eta_rat_230->SetBinContent(10,1.024397);
   hist_eta_rat_230->SetBinContent(11,1.026894);
   hist_eta_rat_230->SetBinContent(12,1.015757);
   hist_eta_rat_230->SetBinContent(13,1.018752);
   hist_eta_rat_230->SetBinContent(14,1.011963);
   hist_eta_rat_230->SetBinContent(15,1.004324);
   hist_eta_rat_230->SetBinContent(16,0.9632621);
   hist_eta_rat_230->SetBinContent(17,0.9297486);
   hist_eta_rat_230->SetBinContent(18,0.8288227);
   hist_eta_rat_230->SetBinError(1,1.377984);
   hist_eta_rat_230->SetBinError(2,0.05111463);
   hist_eta_rat_230->SetBinError(3,0.02701256);
   hist_eta_rat_230->SetBinError(4,0.0171885);
   hist_eta_rat_230->SetBinError(5,0.01280288);
   hist_eta_rat_230->SetBinError(6,0.01053717);
   hist_eta_rat_230->SetBinError(7,0.009291076);
   hist_eta_rat_230->SetBinError(8,0.008377997);
   hist_eta_rat_230->SetBinError(9,0.007860271);
   hist_eta_rat_230->SetBinError(10,0.00761183);
   hist_eta_rat_230->SetBinError(11,0.007439868);
   hist_eta_rat_230->SetBinError(12,0.007383155);
   hist_eta_rat_230->SetBinError(13,0.007601361);
   hist_eta_rat_230->SetBinError(14,0.008043143);
   hist_eta_rat_230->SetBinError(15,0.008678449);
   hist_eta_rat_230->SetBinError(16,0.009582948);
   hist_eta_rat_230->SetBinError(17,0.008990346);
   hist_eta_rat_230->SetBinError(18,0.01953039);
   hist_eta_rat_230->SetEntries(192.8814);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_230->SetLineColor(ci);
   hist_eta_rat_230->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_230->SetMarkerColor(ci);
   hist_eta_rat_230->SetMarkerStyle(20);
   hist_eta_rat_230->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_230->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_230->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_230->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_230->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_230->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_230->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_230->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_230->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_230->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_230->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_230->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_230->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_230->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_230->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_230->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_230->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_230->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_230->Draw("same p");
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_1_2->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_1_3
   TPad *p_1_3 = new TPad("p_1_3", "p_1_3",0.3883495,0.3527054,0.6601942,0.50501);
   p_1_3->Draw();
   p_1_3->cd();
   p_1_3->Range(-2.999,0.50001,2.999,1.4999);
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
   
   TH1D *emptyRat31 = new TH1D("emptyRat31","",10,-2.999,2.999);
   emptyRat31->SetBinContent(7,1000);
   emptyRat31->SetBinError(7,1000);
   emptyRat31->SetMinimum(0.50001);
   emptyRat31->SetMaximum(1.4999);
   emptyRat31->SetEntries(1);
   emptyRat31->SetLineStyle(0);
   emptyRat31->SetMarkerStyle(20);
   emptyRat31->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat31->GetXaxis()->CenterTitle(true);
   emptyRat31->GetXaxis()->SetLabelFont(43);
   emptyRat31->GetXaxis()->SetLabelOffset(0.01);
   emptyRat31->GetXaxis()->SetLabelSize(33);
   emptyRat31->GetXaxis()->SetTitleSize(33);
   emptyRat31->GetXaxis()->SetTitleOffset(7.5);
   emptyRat31->GetXaxis()->SetTitleFont(43);
   emptyRat31->GetYaxis()->SetTitle("pPb/pp");
   emptyRat31->GetYaxis()->CenterTitle(true);
   emptyRat31->GetYaxis()->SetNdivisions(505);
   emptyRat31->GetYaxis()->SetLabelFont(43);
   emptyRat31->GetYaxis()->SetLabelOffset(0.01);
   emptyRat31->GetYaxis()->SetLabelSize(33);
   emptyRat31->GetYaxis()->SetTitleSize(33);
   emptyRat31->GetYaxis()->SetTitleOffset(7.5);
   emptyRat31->GetYaxis()->SetTitleFont(43);
   emptyRat31->GetZaxis()->SetLabelFont(42);
   emptyRat31->GetZaxis()->SetLabelSize(0.045);
   emptyRat31->GetZaxis()->SetTitleSize(0.035);
   emptyRat31->GetZaxis()->SetTitleFont(42);
   emptyRat31->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 962;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10101016 = new TH1F("Graph_Graph_Graph10101016","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10101016->SetMinimum(0);
   Graph_Graph_Graph10101016->SetMaximum(1.357353);
   Graph_Graph_Graph10101016->SetDirectory(0);
   Graph_Graph_Graph10101016->SetStats(0);
   Graph_Graph_Graph10101016->SetLineStyle(0);
   Graph_Graph_Graph10101016->SetMarkerStyle(20);
   Graph_Graph_Graph10101016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10101016->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10101016->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10101016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10101016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10101016->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10101016->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10101016->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10101016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10101016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101016->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10101016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10101016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10101016);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx46[17] = {
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
   Double_t Graph0_fy46[17] = {
   0.8220544,
   0.7924606,
   0.8251606,
   0.8689513,
   0.9116079,
   0.9375366,
   0.9767342,
   0.9931643,
   1.027317,
   1.042682,
   1.054359,
   1.052647,
   1.035023,
   1.028542,
   0.9938465,
   0.9646452,
   0.9172562};
   graph = new TGraph(17,Graph0_fx46,Graph0_fy46);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph46 = new TH1F("Graph_Graph46","Graph",100,-2.858667,3.225333);
   Graph_Graph46->SetMinimum(0.7662708);
   Graph_Graph46->SetMaximum(1.080549);
   Graph_Graph46->SetDirectory(0);
   Graph_Graph46->SetStats(0);
   Graph_Graph46->SetLineStyle(0);
   Graph_Graph46->SetMarkerStyle(20);
   Graph_Graph46->GetXaxis()->SetLabelFont(42);
   Graph_Graph46->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph46->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph46->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph46->GetXaxis()->SetTitleFont(42);
   Graph_Graph46->GetYaxis()->SetLabelFont(42);
   Graph_Graph46->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph46->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph46->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph46->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph46->GetYaxis()->SetTitleFont(42);
   Graph_Graph46->GetZaxis()->SetLabelFont(42);
   Graph_Graph46->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph46->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph46);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx47[17] = {
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
   Double_t Graph1_fy47[17] = {
   0.8842178,
   0.8362023,
   0.9001626,
   0.926229,
   0.9530601,
   0.9828852,
   0.9955329,
   1.019473,
   1.037808,
   1.0687,
   1.075836,
   1.088222,
   1.078965,
   1.042333,
   1.026974,
   1.008356,
   0.9764492};
   graph = new TGraph(17,Graph1_fx47,Graph1_fy47);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph47 = new TH1F("Graph_Graph47","Graph",100,-2.858667,3.225333);
   Graph_Graph47->SetMinimum(0.8110004);
   Graph_Graph47->SetMaximum(1.113424);
   Graph_Graph47->SetDirectory(0);
   Graph_Graph47->SetStats(0);
   Graph_Graph47->SetLineStyle(0);
   Graph_Graph47->SetMarkerStyle(20);
   Graph_Graph47->GetXaxis()->SetLabelFont(42);
   Graph_Graph47->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph47->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph47->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph47->GetXaxis()->SetTitleFont(42);
   Graph_Graph47->GetYaxis()->SetLabelFont(42);
   Graph_Graph47->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph47->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph47->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph47->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph47->GetYaxis()->SetTitleFont(42);
   Graph_Graph47->GetZaxis()->SetLabelFont(42);
   Graph_Graph47->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph47->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph47->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph47);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx48[17] = {
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
   Double_t Graph2_fy48[17] = {
   0.7241394,
   0.7106981,
   0.7587283,
   0.8162604,
   0.848388,
   0.8975765,
   0.9254852,
   0.9816985,
   1.014617,
   1.031195,
   1.02476,
   1.029357,
   1.014299,
   0.9820926,
   0.9674563,
   0.9310212,
   0.8651868};
   graph = new TGraph(17,Graph2_fx48,Graph2_fy48);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph48 = new TH1F("Graph_Graph48","Graph",100,-2.858667,3.225333);
   Graph_Graph48->SetMinimum(0.6786484);
   Graph_Graph48->SetMaximum(1.063245);
   Graph_Graph48->SetDirectory(0);
   Graph_Graph48->SetStats(0);
   Graph_Graph48->SetLineStyle(0);
   Graph_Graph48->SetMarkerStyle(20);
   Graph_Graph48->GetXaxis()->SetLabelFont(42);
   Graph_Graph48->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph48->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph48->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph48->GetXaxis()->SetTitleFont(42);
   Graph_Graph48->GetYaxis()->SetLabelFont(42);
   Graph_Graph48->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph48->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph48->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph48->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph48->GetYaxis()->SetTitleFont(42);
   Graph_Graph48->GetZaxis()->SetLabelFont(42);
   Graph_Graph48->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph48->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph48);
   
   graph->Draw("  c");
   Double_t xAxis16[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_332 = new TH1D("hist_eta_rat_332","",18, xAxis16);
   hist_eta_rat_332->SetBinContent(2,1.229353);
   hist_eta_rat_332->SetBinContent(3,0.9669839);
   hist_eta_rat_332->SetBinContent(4,0.9665762);
   hist_eta_rat_332->SetBinContent(5,0.9478743);
   hist_eta_rat_332->SetBinContent(6,0.9629507);
   hist_eta_rat_332->SetBinContent(7,0.9720505);
   hist_eta_rat_332->SetBinContent(8,0.9961309);
   hist_eta_rat_332->SetBinContent(9,1.010588);
   hist_eta_rat_332->SetBinContent(10,1.011649);
   hist_eta_rat_332->SetBinContent(11,1.029972);
   hist_eta_rat_332->SetBinContent(12,1.015178);
   hist_eta_rat_332->SetBinContent(13,1.02908);
   hist_eta_rat_332->SetBinContent(14,1.007098);
   hist_eta_rat_332->SetBinContent(15,1.004349);
   hist_eta_rat_332->SetBinContent(16,1.000708);
   hist_eta_rat_332->SetBinContent(17,0.9274416);
   hist_eta_rat_332->SetBinContent(18,0.8612056);
   hist_eta_rat_332->SetBinError(2,0.1041244);
   hist_eta_rat_332->SetBinError(3,0.03590138);
   hist_eta_rat_332->SetBinError(4,0.02034866);
   hist_eta_rat_332->SetBinError(5,0.01386378);
   hist_eta_rat_332->SetBinError(6,0.01095308);
   hist_eta_rat_332->SetBinError(7,0.009245236);
   hist_eta_rat_332->SetBinError(8,0.008339605);
   hist_eta_rat_332->SetBinError(9,0.007761978);
   hist_eta_rat_332->SetBinError(10,0.0074013);
   hist_eta_rat_332->SetBinError(11,0.007267697);
   hist_eta_rat_332->SetBinError(12,0.007218966);
   hist_eta_rat_332->SetBinError(13,0.007501821);
   hist_eta_rat_332->SetBinError(14,0.00785601);
   hist_eta_rat_332->SetBinError(15,0.008584328);
   hist_eta_rat_332->SetBinError(16,0.009777446);
   hist_eta_rat_332->SetBinError(17,0.009315331);
   hist_eta_rat_332->SetBinError(18,0.02288525);
   hist_eta_rat_332->SetEntries(20307.13);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_332->SetLineColor(ci);
   hist_eta_rat_332->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_332->SetMarkerColor(ci);
   hist_eta_rat_332->SetMarkerStyle(20);
   hist_eta_rat_332->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_332->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_332->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_332->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_332->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_332->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_332->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_332->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_332->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_332->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_332->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_332->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_332->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_332->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_332->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_332->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_332->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_332->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_332->Draw("same p");
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_1_3->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_1_4
   TPad *p_1_4 = new TPad("p_1_4", "p_1_4",0.3883495,0.2004008,0.6601942,0.3527054);
   p_1_4->Draw();
   p_1_4->cd();
   p_1_4->Range(-2.999,0.50001,2.999,1.4999);
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
   
   TH1D *emptyRat33 = new TH1D("emptyRat33","",10,-2.999,2.999);
   emptyRat33->SetBinContent(7,1000);
   emptyRat33->SetBinError(7,1000);
   emptyRat33->SetMinimum(0.50001);
   emptyRat33->SetMaximum(1.4999);
   emptyRat33->SetEntries(1);
   emptyRat33->SetLineStyle(0);
   emptyRat33->SetMarkerStyle(20);
   emptyRat33->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat33->GetXaxis()->CenterTitle(true);
   emptyRat33->GetXaxis()->SetLabelFont(43);
   emptyRat33->GetXaxis()->SetLabelOffset(0.01);
   emptyRat33->GetXaxis()->SetLabelSize(33);
   emptyRat33->GetXaxis()->SetTitleSize(33);
   emptyRat33->GetXaxis()->SetTitleOffset(7.5);
   emptyRat33->GetXaxis()->SetTitleFont(43);
   emptyRat33->GetYaxis()->SetTitle("pPb/pp");
   emptyRat33->GetYaxis()->CenterTitle(true);
   emptyRat33->GetYaxis()->SetNdivisions(505);
   emptyRat33->GetYaxis()->SetLabelFont(43);
   emptyRat33->GetYaxis()->SetLabelOffset(0.01);
   emptyRat33->GetYaxis()->SetLabelSize(33);
   emptyRat33->GetYaxis()->SetTitleSize(33);
   emptyRat33->GetYaxis()->SetTitleOffset(7.5);
   emptyRat33->GetYaxis()->SetTitleFont(43);
   emptyRat33->GetZaxis()->SetLabelFont(42);
   emptyRat33->GetZaxis()->SetLabelSize(0.045);
   emptyRat33->GetZaxis()->SetTitleSize(0.035);
   emptyRat33->GetZaxis()->SetTitleFont(42);
   emptyRat33->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 968;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10111017 = new TH1F("Graph_Graph_Graph10111017","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10111017->SetMinimum(0);
   Graph_Graph_Graph10111017->SetMaximum(2.011118);
   Graph_Graph_Graph10111017->SetDirectory(0);
   Graph_Graph_Graph10111017->SetStats(0);
   Graph_Graph_Graph10111017->SetLineStyle(0);
   Graph_Graph_Graph10111017->SetMarkerStyle(20);
   Graph_Graph_Graph10111017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10111017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10111017->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10111017->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10111017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10111017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10111017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10111017->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10111017->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10111017->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10111017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10111017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10111017->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10111017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10111017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10111017);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx49[16] = {
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
   Double_t Graph0_fy49[16] = {
   0.7894241,
   0.8200984,
   0.8470459,
   0.8850657,
   0.91644,
   0.9508867,
   0.9812685,
   1.013874,
   1.036857,
   1.053082,
   1.053041,
   1.046285,
   1.030948,
   1.00852,
   0.9770989,
   0.9557712};
   graph = new TGraph(16,Graph0_fx49,Graph0_fy49);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph49 = new TH1F("Graph_Graph49","Graph",100,-2.393917,3.183083);
   Graph_Graph49->SetMinimum(0.7630583);
   Graph_Graph49->SetMaximum(1.079448);
   Graph_Graph49->SetDirectory(0);
   Graph_Graph49->SetStats(0);
   Graph_Graph49->SetLineStyle(0);
   Graph_Graph49->SetMarkerStyle(20);
   Graph_Graph49->GetXaxis()->SetLabelFont(42);
   Graph_Graph49->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph49->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph49->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph49->GetXaxis()->SetTitleFont(42);
   Graph_Graph49->GetYaxis()->SetLabelFont(42);
   Graph_Graph49->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph49->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph49->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph49->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph49->GetYaxis()->SetTitleFont(42);
   Graph_Graph49->GetZaxis()->SetLabelFont(42);
   Graph_Graph49->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph49->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph49->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph49);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx50[16] = {
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
   Double_t Graph1_fy50[16] = {
   0.8839902,
   0.8699374,
   0.9022701,
   0.9410715,
   0.9612303,
   0.9846776,
   1.002204,
   1.019727,
   1.042048,
   1.068638,
   1.092702,
   1.086716,
   1.06749,
   1.041504,
   1.024671,
   0.9940271};
   graph = new TGraph(16,Graph1_fx50,Graph1_fy50);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph50 = new TH1F("Graph_Graph50","Graph",100,-2.393917,3.183083);
   Graph_Graph50->SetMinimum(0.8476609);
   Graph_Graph50->SetMaximum(1.114978);
   Graph_Graph50->SetDirectory(0);
   Graph_Graph50->SetStats(0);
   Graph_Graph50->SetLineStyle(0);
   Graph_Graph50->SetMarkerStyle(20);
   Graph_Graph50->GetXaxis()->SetLabelFont(42);
   Graph_Graph50->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph50->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph50->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph50->GetXaxis()->SetTitleFont(42);
   Graph_Graph50->GetYaxis()->SetLabelFont(42);
   Graph_Graph50->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph50->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph50->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph50->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph50->GetYaxis()->SetTitleFont(42);
   Graph_Graph50->GetZaxis()->SetLabelFont(42);
   Graph_Graph50->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph50->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph50->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph50);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx51[16] = {
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
   Double_t Graph2_fy51[16] = {
   0.7429139,
   0.7487227,
   0.778168,
   0.8287395,
   0.8702488,
   0.9180788,
   0.9545731,
   0.989729,
   1.018649,
   1.026112,
   1.032389,
   1.023585,
   1.005516,
   0.9784176,
   0.9517921,
   0.8847826};
   graph = new TGraph(16,Graph2_fx51,Graph2_fy51);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph51 = new TH1F("Graph_Graph51","Graph",100,-2.393917,3.183083);
   Graph_Graph51->SetMinimum(0.7139663);
   Graph_Graph51->SetMaximum(1.061337);
   Graph_Graph51->SetDirectory(0);
   Graph_Graph51->SetStats(0);
   Graph_Graph51->SetLineStyle(0);
   Graph_Graph51->SetMarkerStyle(20);
   Graph_Graph51->GetXaxis()->SetLabelFont(42);
   Graph_Graph51->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph51->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph51->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph51->GetXaxis()->SetTitleFont(42);
   Graph_Graph51->GetYaxis()->SetLabelFont(42);
   Graph_Graph51->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph51->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph51->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph51->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph51->GetYaxis()->SetTitleFont(42);
   Graph_Graph51->GetZaxis()->SetLabelFont(42);
   Graph_Graph51->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph51->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph51->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph51);
   
   graph->Draw("  c");
   Double_t xAxis17[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_434 = new TH1D("hist_eta_rat_434","",18, xAxis17);
   hist_eta_rat_434->SetBinContent(2,1.813721);
   hist_eta_rat_434->SetBinContent(3,0.9908987);
   hist_eta_rat_434->SetBinContent(4,0.958491);
   hist_eta_rat_434->SetBinContent(5,0.9426981);
   hist_eta_rat_434->SetBinContent(6,0.9477543);
   hist_eta_rat_434->SetBinContent(7,0.9598372);
   hist_eta_rat_434->SetBinContent(8,0.9645417);
   hist_eta_rat_434->SetBinContent(9,0.9982028);
   hist_eta_rat_434->SetBinContent(10,1.010392);
   hist_eta_rat_434->SetBinContent(11,1.030348);
   hist_eta_rat_434->SetBinContent(12,1.015993);
   hist_eta_rat_434->SetBinContent(13,1.023637);
   hist_eta_rat_434->SetBinContent(14,1.012336);
   hist_eta_rat_434->SetBinContent(15,1.01686);
   hist_eta_rat_434->SetBinContent(16,1.006532);
   hist_eta_rat_434->SetBinContent(17,0.9586193);
   hist_eta_rat_434->SetBinContent(18,0.883056);
   hist_eta_rat_434->SetBinError(2,0.3788104);
   hist_eta_rat_434->SetBinError(3,0.06913021);
   hist_eta_rat_434->SetBinError(4,0.03044085);
   hist_eta_rat_434->SetBinError(5,0.018461);
   hist_eta_rat_434->SetBinError(6,0.0135207);
   hist_eta_rat_434->SetBinError(7,0.01107217);
   hist_eta_rat_434->SetBinError(8,0.009637059);
   hist_eta_rat_434->SetBinError(9,0.008968998);
   hist_eta_rat_434->SetBinError(10,0.008484689);
   hist_eta_rat_434->SetBinError(11,0.00836453);
   hist_eta_rat_434->SetBinError(12,0.008267739);
   hist_eta_rat_434->SetBinError(13,0.008567105);
   hist_eta_rat_434->SetBinError(14,0.009071236);
   hist_eta_rat_434->SetBinError(15,0.01007977);
   hist_eta_rat_434->SetBinError(16,0.01171373);
   hist_eta_rat_434->SetBinError(17,0.01177863);
   hist_eta_rat_434->SetBinError(18,0.03350037);
   hist_eta_rat_434->SetEntries(2024.108);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_434->SetLineColor(ci);
   hist_eta_rat_434->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_434->SetMarkerColor(ci);
   hist_eta_rat_434->SetMarkerStyle(20);
   hist_eta_rat_434->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_434->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_434->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_434->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_434->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_434->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_434->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_434->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_434->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_434->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_434->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_434->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_434->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_434->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_434->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_434->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_434->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_434->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_434->Draw("same p");
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_1_4->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_1_5
   TPad *p_1_5 = new TPad("p_1_5", "p_1_5",0.3883495,0,0.6601942,0.2004008);
   p_1_5->Draw();
   p_1_5->cd();
   p_1_5->Range(-2.999,0.1842553,2.999,1.4999);
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
   
   TH1D *emptyRat35 = new TH1D("emptyRat35","",10,-2.999,2.999);
   emptyRat35->SetBinContent(7,1000);
   emptyRat35->SetBinError(7,1000);
   emptyRat35->SetMinimum(0.50001);
   emptyRat35->SetMaximum(1.4999);
   emptyRat35->SetEntries(1);
   emptyRat35->SetLineStyle(0);
   emptyRat35->SetMarkerStyle(20);
   emptyRat35->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat35->GetXaxis()->CenterTitle(true);
   emptyRat35->GetXaxis()->SetLabelFont(43);
   emptyRat35->GetXaxis()->SetLabelOffset(0.01);
   emptyRat35->GetXaxis()->SetLabelSize(33);
   emptyRat35->GetXaxis()->SetTitleSize(33);
   emptyRat35->GetXaxis()->SetTitleOffset(7.5);
   emptyRat35->GetXaxis()->SetTitleFont(43);
   emptyRat35->GetYaxis()->SetTitle("pPb/pp");
   emptyRat35->GetYaxis()->CenterTitle(true);
   emptyRat35->GetYaxis()->SetNdivisions(505);
   emptyRat35->GetYaxis()->SetLabelFont(43);
   emptyRat35->GetYaxis()->SetLabelOffset(0.01);
   emptyRat35->GetYaxis()->SetLabelSize(33);
   emptyRat35->GetYaxis()->SetTitleSize(33);
   emptyRat35->GetYaxis()->SetTitleOffset(7.5);
   emptyRat35->GetYaxis()->SetTitleFont(43);
   emptyRat35->GetZaxis()->SetLabelFont(42);
   emptyRat35->GetZaxis()->SetLabelSize(0.045);
   emptyRat35->GetZaxis()->SetTitleSize(0.035);
   emptyRat35->GetZaxis()->SetTitleFont(42);
   emptyRat35->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 974;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10121018 = new TH1F("Graph_Graph_Graph10121018","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph10121018->SetMinimum(0);
   Graph_Graph_Graph10121018->SetMaximum(12.25813);
   Graph_Graph_Graph10121018->SetDirectory(0);
   Graph_Graph_Graph10121018->SetStats(0);
   Graph_Graph_Graph10121018->SetLineStyle(0);
   Graph_Graph_Graph10121018->SetMarkerStyle(20);
   Graph_Graph_Graph10121018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10121018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10121018->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10121018->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10121018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10121018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10121018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10121018->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10121018->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10121018->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph10121018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10121018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10121018->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph10121018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10121018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10121018);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx52[16] = {
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
   Double_t Graph0_fy52[16] = {
   1.070557,
   0.8043325,
   0.8283737,
   0.8614558,
   0.8965182,
   0.9274911,
   0.9568501,
   0.9853909,
   1.009815,
   1.033695,
   1.055908,
   1.05898,
   1.054795,
   1.039999,
   1.012029,
   0.9359675};
   graph = new TGraph(16,Graph0_fx52,Graph0_fy52);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph52 = new TH1F("Graph_Graph52","Graph",100,-2.393917,3.183083);
   Graph_Graph52->SetMinimum(0.7777101);
   Graph_Graph52->SetMaximum(1.097179);
   Graph_Graph52->SetDirectory(0);
   Graph_Graph52->SetStats(0);
   Graph_Graph52->SetLineStyle(0);
   Graph_Graph52->SetMarkerStyle(20);
   Graph_Graph52->GetXaxis()->SetLabelFont(42);
   Graph_Graph52->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph52->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph52->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph52->GetXaxis()->SetTitleFont(42);
   Graph_Graph52->GetYaxis()->SetLabelFont(42);
   Graph_Graph52->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph52->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph52->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph52->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph52->GetYaxis()->SetTitleFont(42);
   Graph_Graph52->GetZaxis()->SetLabelFont(42);
   Graph_Graph52->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph52->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph52->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph52);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx53[16] = {
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
   Double_t Graph1_fy53[16] = {
   1.195946,
   0.8658927,
   0.8757369,
   0.9185222,
   0.9382057,
   0.9690414,
   0.9882919,
   0.9998034,
   1.021449,
   1.048981,
   1.076985,
   1.093624,
   1.093511,
   1.073788,
   1.054548,
   1.000818};
   graph = new TGraph(16,Graph1_fx53,Graph1_fy53);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph53 = new TH1F("Graph_Graph53","Graph",100,-2.393917,3.183083);
   Graph_Graph53->SetMinimum(0.8328873);
   Graph_Graph53->SetMaximum(1.228952);
   Graph_Graph53->SetDirectory(0);
   Graph_Graph53->SetStats(0);
   Graph_Graph53->SetLineStyle(0);
   Graph_Graph53->SetMarkerStyle(20);
   Graph_Graph53->GetXaxis()->SetLabelFont(42);
   Graph_Graph53->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph53->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph53->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph53->GetXaxis()->SetTitleFont(42);
   Graph_Graph53->GetYaxis()->SetLabelFont(42);
   Graph_Graph53->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph53->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph53->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph53->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph53->GetYaxis()->SetTitleFont(42);
   Graph_Graph53->GetZaxis()->SetLabelFont(42);
   Graph_Graph53->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph53->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph53->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph53);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx54[16] = {
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
   Double_t Graph2_fy54[16] = {
   0.9250291,
   0.7529078,
   0.7600237,
   0.8086665,
   0.8430186,
   0.8877848,
   0.9298966,
   0.9650297,
   1.007631,
   1.023182,
   1.024061,
   1.025769,
   1.018586,
   0.999701,
   0.9790101,
   0.9014425};
   graph = new TGraph(16,Graph2_fx54,Graph2_fy54);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph54 = new TH1F("Graph_Graph54","Graph",100,-2.393917,3.183083);
   Graph_Graph54->SetMinimum(0.7256217);
   Graph_Graph54->SetMaximum(1.053055);
   Graph_Graph54->SetDirectory(0);
   Graph_Graph54->SetStats(0);
   Graph_Graph54->SetLineStyle(0);
   Graph_Graph54->SetMarkerStyle(20);
   Graph_Graph54->GetXaxis()->SetLabelFont(42);
   Graph_Graph54->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph54->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph54->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph54->GetXaxis()->SetTitleFont(42);
   Graph_Graph54->GetYaxis()->SetLabelFont(42);
   Graph_Graph54->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph54->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph54->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph54->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph54->GetYaxis()->SetTitleFont(42);
   Graph_Graph54->GetZaxis()->SetLabelFont(42);
   Graph_Graph54->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph54->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph54->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph54);
   
   graph->Draw("  c");
   Double_t xAxis18[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_536 = new TH1D("hist_eta_rat_536","",18, xAxis18);
   hist_eta_rat_536->SetBinContent(2,10.40849);
   hist_eta_rat_536->SetBinContent(3,0.8870872);
   hist_eta_rat_536->SetBinContent(4,0.9936676);
   hist_eta_rat_536->SetBinContent(5,0.8467346);
   hist_eta_rat_536->SetBinContent(6,0.9103075);
   hist_eta_rat_536->SetBinContent(7,0.9149816);
   hist_eta_rat_536->SetBinContent(8,0.9686298);
   hist_eta_rat_536->SetBinContent(9,0.9848296);
   hist_eta_rat_536->SetBinContent(10,1.011455);
   hist_eta_rat_536->SetBinContent(11,1.003333);
   hist_eta_rat_536->SetBinContent(12,1.034198);
   hist_eta_rat_536->SetBinContent(13,1.005249);
   hist_eta_rat_536->SetBinContent(14,1.022242);
   hist_eta_rat_536->SetBinContent(15,1.044678);
   hist_eta_rat_536->SetBinContent(16,1.006172);
   hist_eta_rat_536->SetBinContent(17,0.9896288);
   hist_eta_rat_536->SetBinContent(18,1.061912);
   hist_eta_rat_536->SetBinError(2,12.74774);
   hist_eta_rat_536->SetBinError(3,0.2477981);
   hist_eta_rat_536->SetBinError(4,0.09197665);
   hist_eta_rat_536->SetBinError(5,0.03903801);
   hist_eta_rat_536->SetBinError(6,0.02534206);
   hist_eta_rat_536->SetBinError(7,0.01878364);
   hist_eta_rat_536->SetBinError(8,0.01578038);
   hist_eta_rat_536->SetBinError(9,0.01395718);
   hist_eta_rat_536->SetBinError(10,0.01310372);
   hist_eta_rat_536->SetBinError(11,0.01249012);
   hist_eta_rat_536->SetBinError(12,0.01274022);
   hist_eta_rat_536->SetBinError(13,0.01299128);
   hist_eta_rat_536->SetBinError(14,0.01426728);
   hist_eta_rat_536->SetBinError(15,0.01661486);
   hist_eta_rat_536->SetBinError(16,0.02014486);
   hist_eta_rat_536->SetBinError(17,0.02352586);
   hist_eta_rat_536->SetBinError(18,0.1059296);
   hist_eta_rat_536->SetEntries(4.187656);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_536->SetLineColor(ci);
   hist_eta_rat_536->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_536->SetMarkerColor(ci);
   hist_eta_rat_536->SetMarkerStyle(20);
   hist_eta_rat_536->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_536->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_536->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_536->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_536->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_536->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_536->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_536->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_536->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_536->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_536->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_536->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_536->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_536->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_536->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_536->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_536->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_536->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_536->Draw("same p");
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_1_5->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_2_0
   TPad *p_2_0 = new TPad("p_2_0", "p_2_0",0.6601942,0.8096192,1,1);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(-2.999,0.50001,4.4985,1.749872);
   p_2_0->SetFillColor(0);
   p_2_0->SetBorderMode(0);
   p_2_0->SetBorderSize(0);
   p_2_0->SetTickx(1);
   p_2_0->SetTicky(1);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetRightMargin(0.2);
   p_2_0->SetTopMargin(0.2);
   p_2_0->SetBottomMargin(0);
   p_2_0->SetFrameLineColor(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->SetFrameLineColor(0);
   p_2_0->SetFrameBorderMode(0);
   
   TH1D *emptyRat37 = new TH1D("emptyRat37","",10,-2.999,2.999);
   emptyRat37->SetBinContent(7,1000);
   emptyRat37->SetBinError(7,1000);
   emptyRat37->SetMinimum(0.50001);
   emptyRat37->SetMaximum(1.4999);
   emptyRat37->SetEntries(1);
   emptyRat37->SetLineStyle(0);
   emptyRat37->SetMarkerStyle(20);
   emptyRat37->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat37->GetXaxis()->CenterTitle(true);
   emptyRat37->GetXaxis()->SetLabelFont(43);
   emptyRat37->GetXaxis()->SetLabelOffset(0.01);
   emptyRat37->GetXaxis()->SetLabelSize(33);
   emptyRat37->GetXaxis()->SetTitleSize(33);
   emptyRat37->GetXaxis()->SetTitleOffset(7.5);
   emptyRat37->GetXaxis()->SetTitleFont(43);
   emptyRat37->GetYaxis()->SetTitle("pPb/pp");
   emptyRat37->GetYaxis()->CenterTitle(true);
   emptyRat37->GetYaxis()->SetNdivisions(505);
   emptyRat37->GetYaxis()->SetLabelFont(43);
   emptyRat37->GetYaxis()->SetLabelOffset(0.01);
   emptyRat37->GetYaxis()->SetLabelSize(33);
   emptyRat37->GetYaxis()->SetTitleSize(33);
   emptyRat37->GetYaxis()->SetTitleOffset(7.5);
   emptyRat37->GetYaxis()->SetTitleFont(43);
   emptyRat37->GetZaxis()->SetLabelFont(42);
   emptyRat37->GetZaxis()->SetLabelSize(0.045);
   emptyRat37->GetZaxis()->SetTitleSize(0.035);
   emptyRat37->GetZaxis()->SetTitleFont(42);
   emptyRat37->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 944;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph100710131019 = new TH1F("Graph_Graph_Graph_Graph100710131019","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph_Graph100710131019->SetMinimum(0.76691);
   Graph_Graph_Graph_Graph100710131019->SetMaximum(1.073808);
   Graph_Graph_Graph_Graph100710131019->SetDirectory(0);
   Graph_Graph_Graph_Graph100710131019->SetStats(0);
   Graph_Graph_Graph_Graph100710131019->SetLineStyle(0);
   Graph_Graph_Graph_Graph100710131019->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100710131019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100710131019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph100710131019->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph100710131019->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph100710131019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100710131019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100710131019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph100710131019->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph100710131019->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph100710131019->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph_Graph100710131019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100710131019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100710131019->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph100710131019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph100710131019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100710131019);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx55[18] = {
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
   Double_t Graph0_fy55[18] = {
   0.8461142,
   0.9337303,
   1.006963,
   1.030518,
   1.063572,
   1.088875,
   1.091042,
   1.088454,
   1.072223,
   1.053092,
   1.029597,
   0.9969161,
   0.9618852,
   0.9231915,
   0.8959688,
   0.8732605,
   0.8453503,
   0.8188565};
   graph = new TGraph(18,Graph0_fx55,Graph0_fy55);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph55 = new TH1F("Graph_Graph55","Graph",100,-3.323417,3.267583);
   Graph_Graph55->SetMinimum(0.791638);
   Graph_Graph55->SetMaximum(1.118261);
   Graph_Graph55->SetDirectory(0);
   Graph_Graph55->SetStats(0);
   Graph_Graph55->SetLineStyle(0);
   Graph_Graph55->SetMarkerStyle(20);
   Graph_Graph55->GetXaxis()->SetLabelFont(42);
   Graph_Graph55->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph55->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph55->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph55->GetXaxis()->SetTitleFont(42);
   Graph_Graph55->GetYaxis()->SetLabelFont(42);
   Graph_Graph55->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph55->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph55->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph55->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph55->GetYaxis()->SetTitleFont(42);
   Graph_Graph55->GetZaxis()->SetLabelFont(42);
   Graph_Graph55->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph55->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph55->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph55);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx56[18] = {
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
   Double_t Graph1_fy56[18] = {
   0.9402202,
   0.9689551,
   1.024348,
   1.055963,
   1.074526,
   1.100127,
   1.103644,
   1.089358,
   1.082302,
   1.067079,
   1.038353,
   1.005746,
   0.972293,
   0.9362512,
   0.900655,
   0.8813982,
   0.8561693,
   0.845119};
   graph = new TGraph(18,Graph1_fx56,Graph1_fy56);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph56 = new TH1F("Graph_Graph56","Graph",100,-3.323417,3.267583);
   Graph_Graph56->SetMinimum(0.8192665);
   Graph_Graph56->SetMaximum(1.129497);
   Graph_Graph56->SetDirectory(0);
   Graph_Graph56->SetStats(0);
   Graph_Graph56->SetLineStyle(0);
   Graph_Graph56->SetMarkerStyle(20);
   Graph_Graph56->GetXaxis()->SetLabelFont(42);
   Graph_Graph56->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph56->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph56->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph56->GetXaxis()->SetTitleFont(42);
   Graph_Graph56->GetYaxis()->SetLabelFont(42);
   Graph_Graph56->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph56->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph56->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph56->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph56->GetYaxis()->SetTitleFont(42);
   Graph_Graph56->GetZaxis()->SetLabelFont(42);
   Graph_Graph56->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph56->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph56->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph56);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx57[18] = {
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
   Double_t Graph2_fy57[18] = {
   0.8099099,
   0.9023173,
   0.9617156,
   1.015852,
   1.03956,
   1.08254,
   1.083674,
   1.070801,
   1.066193,
   1.049031,
   1.018145,
   0.9875851,
   0.953484,
   0.9185188,
   0.8850484,
   0.8654708,
   0.8398624,
   0.7984215};
   graph = new TGraph(18,Graph2_fx57,Graph2_fy57);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph57 = new TH1F("Graph_Graph57","Graph",100,-3.323417,3.267583);
   Graph_Graph57->SetMinimum(0.7698963);
   Graph_Graph57->SetMaximum(1.112199);
   Graph_Graph57->SetDirectory(0);
   Graph_Graph57->SetStats(0);
   Graph_Graph57->SetLineStyle(0);
   Graph_Graph57->SetMarkerStyle(20);
   Graph_Graph57->GetXaxis()->SetLabelFont(42);
   Graph_Graph57->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph57->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph57->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph57->GetXaxis()->SetTitleFont(42);
   Graph_Graph57->GetYaxis()->SetLabelFont(42);
   Graph_Graph57->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph57->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph57->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph57->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph57->GetYaxis()->SetTitleFont(42);
   Graph_Graph57->GetZaxis()->SetLabelFont(42);
   Graph_Graph57->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph57->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph57->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph57);
   
   graph->Draw("  c");
   Double_t xAxis19[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_038 = new TH1D("hist_eta_rat_038","",18, xAxis19);
   hist_eta_rat_038->SetBinContent(0,0.7009663);
   hist_eta_rat_038->SetBinContent(1,0.9780925);
   hist_eta_rat_038->SetBinContent(2,0.7903649);
   hist_eta_rat_038->SetBinContent(3,1.002554);
   hist_eta_rat_038->SetBinContent(4,0.9415966);
   hist_eta_rat_038->SetBinContent(5,1.022632);
   hist_eta_rat_038->SetBinContent(6,0.9673216);
   hist_eta_rat_038->SetBinContent(7,1.050277);
   hist_eta_rat_038->SetBinContent(8,1.024931);
   hist_eta_rat_038->SetBinContent(9,1.03395);
   hist_eta_rat_038->SetBinContent(10,1.030084);
   hist_eta_rat_038->SetBinContent(11,0.9783376);
   hist_eta_rat_038->SetBinContent(12,1.025516);
   hist_eta_rat_038->SetBinContent(13,1.034408);
   hist_eta_rat_038->SetBinContent(14,1.028685);
   hist_eta_rat_038->SetBinContent(15,0.9958378);
   hist_eta_rat_038->SetBinContent(16,0.9523999);
   hist_eta_rat_038->SetBinContent(17,0.9441907);
   hist_eta_rat_038->SetBinContent(18,0.8048132);
   hist_eta_rat_038->SetBinError(0,0.8585049);
   hist_eta_rat_038->SetBinError(1,0.2326733);
   hist_eta_rat_038->SetBinError(2,0.05011169);
   hist_eta_rat_038->SetBinError(3,0.0531607);
   hist_eta_rat_038->SetBinError(4,0.0405803);
   hist_eta_rat_038->SetBinError(5,0.03711422);
   hist_eta_rat_038->SetBinError(6,0.03117593);
   hist_eta_rat_038->SetBinError(7,0.0309367);
   hist_eta_rat_038->SetBinError(8,0.02800293);
   hist_eta_rat_038->SetBinError(9,0.02680612);
   hist_eta_rat_038->SetBinError(10,0.0260524);
   hist_eta_rat_038->SetBinError(11,0.02456519);
   hist_eta_rat_038->SetBinError(12,0.02602307);
   hist_eta_rat_038->SetBinError(13,0.02716959);
   hist_eta_rat_038->SetBinError(14,0.02835433);
   hist_eta_rat_038->SetBinError(15,0.02968339);
   hist_eta_rat_038->SetBinError(16,0.03186721);
   hist_eta_rat_038->SetBinError(17,0.02871787);
   hist_eta_rat_038->SetBinError(18,0.05029851);
   hist_eta_rat_038->SetEntries(4150.496);

   ci = TColor::GetColor("#33cc99");
   hist_eta_rat_038->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_038->SetLineColor(ci);
   hist_eta_rat_038->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_038->SetMarkerColor(ci);
   hist_eta_rat_038->SetMarkerStyle(20);
   hist_eta_rat_038->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_038->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_038->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_038->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_038->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_038->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_038->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_038->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_038->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_038->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_038->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_038->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_038->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_038->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_038->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_038->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_038->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_038->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_038->Draw("same p");
      tex = new TLatex(0.25,0.82,"nCTEQ");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,1,3,1);
   line->Draw();
      tex = new TLatex(0.05,0.93,"#Delta#phi_{1,2} > 2#pi/3");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(24);
   tex->Draw();
   p_2_0->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_2_1
   TPad *p_2_1 = new TPad("p_2_1", "p_2_1",0.6601942,0.6573147,1,0.8096192);
   p_2_1->Draw();
   p_2_1->cd();
   p_2_1->Range(-2.999,0.50001,4.4985,1.4999);
   p_2_1->SetFillColor(0);
   p_2_1->SetBorderMode(0);
   p_2_1->SetBorderSize(0);
   p_2_1->SetTickx(1);
   p_2_1->SetTicky(1);
   p_2_1->SetLeftMargin(0);
   p_2_1->SetRightMargin(0.2);
   p_2_1->SetTopMargin(0);
   p_2_1->SetBottomMargin(0);
   p_2_1->SetFrameLineColor(0);
   p_2_1->SetFrameBorderMode(0);
   p_2_1->SetFrameLineColor(0);
   p_2_1->SetFrameBorderMode(0);
   
   TH1D *emptyRat39 = new TH1D("emptyRat39","",10,-2.999,2.999);
   emptyRat39->SetBinContent(7,1000);
   emptyRat39->SetBinError(7,1000);
   emptyRat39->SetMinimum(0.50001);
   emptyRat39->SetMaximum(1.4999);
   emptyRat39->SetEntries(1);
   emptyRat39->SetLineStyle(0);
   emptyRat39->SetMarkerStyle(20);
   emptyRat39->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat39->GetXaxis()->CenterTitle(true);
   emptyRat39->GetXaxis()->SetLabelFont(43);
   emptyRat39->GetXaxis()->SetLabelOffset(0.01);
   emptyRat39->GetXaxis()->SetLabelSize(33);
   emptyRat39->GetXaxis()->SetTitleSize(33);
   emptyRat39->GetXaxis()->SetTitleOffset(7.5);
   emptyRat39->GetXaxis()->SetTitleFont(43);
   emptyRat39->GetYaxis()->SetTitle("pPb/pp");
   emptyRat39->GetYaxis()->CenterTitle(true);
   emptyRat39->GetYaxis()->SetNdivisions(505);
   emptyRat39->GetYaxis()->SetLabelFont(43);
   emptyRat39->GetYaxis()->SetLabelOffset(0.01);
   emptyRat39->GetYaxis()->SetLabelSize(33);
   emptyRat39->GetYaxis()->SetTitleSize(33);
   emptyRat39->GetYaxis()->SetTitleOffset(7.5);
   emptyRat39->GetYaxis()->SetTitleFont(43);
   emptyRat39->GetZaxis()->SetLabelFont(42);
   emptyRat39->GetZaxis()->SetLabelSize(0.045);
   emptyRat39->GetZaxis()->SetTitleSize(0.035);
   emptyRat39->GetZaxis()->SetTitleFont(42);
   emptyRat39->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 950;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph100810141020 = new TH1F("Graph_Graph_Graph_Graph100810141020","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph_Graph100810141020->SetMinimum(0.7730531);
   Graph_Graph_Graph_Graph100810141020->SetMaximum(1.05362);
   Graph_Graph_Graph_Graph100810141020->SetDirectory(0);
   Graph_Graph_Graph_Graph100810141020->SetStats(0);
   Graph_Graph_Graph_Graph100810141020->SetLineStyle(0);
   Graph_Graph_Graph_Graph100810141020->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100810141020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100810141020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph100810141020->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph100810141020->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph100810141020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100810141020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100810141020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph100810141020->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph100810141020->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph100810141020->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph_Graph100810141020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100810141020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100810141020->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph100810141020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph100810141020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100810141020);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx58[18] = {
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
   Double_t Graph0_fy58[18] = {
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
   graph = new TGraph(18,Graph0_fx58,Graph0_fy58);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph58 = new TH1F("Graph_Graph58","Graph",100,-3.323417,3.267583);
   Graph_Graph58->SetMinimum(0.6050252);
   Graph_Graph58->SetMaximum(1.131742);
   Graph_Graph58->SetDirectory(0);
   Graph_Graph58->SetStats(0);
   Graph_Graph58->SetLineStyle(0);
   Graph_Graph58->SetMarkerStyle(20);
   Graph_Graph58->GetXaxis()->SetLabelFont(42);
   Graph_Graph58->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph58->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph58->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph58->GetXaxis()->SetTitleFont(42);
   Graph_Graph58->GetYaxis()->SetLabelFont(42);
   Graph_Graph58->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph58->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph58->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph58->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph58->GetYaxis()->SetTitleFont(42);
   Graph_Graph58->GetZaxis()->SetLabelFont(42);
   Graph_Graph58->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph58->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph58->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph58);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx59[18] = {
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
   Double_t Graph1_fy59[18] = {
   0.9063457,
   0.8294432,
   0.8884118,
   0.9115875,
   0.9559567,
   1.010854,
   1.035311,
   1.075846,
   1.102912,
   1.093236,
   1.082124,
   1.059751,
   1.035354,
   0.9941774,
   0.9638366,
   0.9213744,
   0.8801818,
   0.8518093};
   graph = new TGraph(18,Graph1_fx59,Graph1_fy59);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph59 = new TH1F("Graph_Graph59","Graph",100,-3.323417,3.267583);
   Graph_Graph59->SetMinimum(0.8020963);
   Graph_Graph59->SetMaximum(1.130259);
   Graph_Graph59->SetDirectory(0);
   Graph_Graph59->SetStats(0);
   Graph_Graph59->SetLineStyle(0);
   Graph_Graph59->SetMarkerStyle(20);
   Graph_Graph59->GetXaxis()->SetLabelFont(42);
   Graph_Graph59->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph59->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph59->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph59->GetXaxis()->SetTitleFont(42);
   Graph_Graph59->GetYaxis()->SetLabelFont(42);
   Graph_Graph59->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph59->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph59->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph59->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph59->GetYaxis()->SetTitleFont(42);
   Graph_Graph59->GetZaxis()->SetLabelFont(42);
   Graph_Graph59->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph59->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph59->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph59);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx60[18] = {
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
   Double_t Graph2_fy60[18] = {
   0.6071058,
   0.7595833,
   0.8268107,
   0.8610081,
   0.9021195,
   0.9789143,
   1.004788,
   1.046141,
   1.074956,
   1.063245,
   1.052569,
   1.027967,
   1.006757,
   0.9754182,
   0.9374717,
   0.8952551,
   0.8560387,
   0.7987756};
   graph = new TGraph(18,Graph2_fx60,Graph2_fy60);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph60 = new TH1F("Graph_Graph60","Graph",100,-3.323417,3.267583);
   Graph_Graph60->SetMinimum(0.5603208);
   Graph_Graph60->SetMaximum(1.121741);
   Graph_Graph60->SetDirectory(0);
   Graph_Graph60->SetStats(0);
   Graph_Graph60->SetLineStyle(0);
   Graph_Graph60->SetMarkerStyle(20);
   Graph_Graph60->GetXaxis()->SetLabelFont(42);
   Graph_Graph60->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph60->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph60->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph60->GetXaxis()->SetTitleFont(42);
   Graph_Graph60->GetYaxis()->SetLabelFont(42);
   Graph_Graph60->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph60->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph60->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph60->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph60->GetYaxis()->SetTitleFont(42);
   Graph_Graph60->GetZaxis()->SetLabelFont(42);
   Graph_Graph60->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph60->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph60->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph60);
   
   graph->Draw("  c");
   Double_t xAxis20[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_140 = new TH1D("hist_eta_rat_140","",18, xAxis20);
   hist_eta_rat_140->SetBinContent(1,0.8991901);
   hist_eta_rat_140->SetBinContent(2,1.020067);
   hist_eta_rat_140->SetBinContent(3,0.9951541);
   hist_eta_rat_140->SetBinContent(4,0.9807586);
   hist_eta_rat_140->SetBinContent(5,1.022584);
   hist_eta_rat_140->SetBinContent(6,0.994965);
   hist_eta_rat_140->SetBinContent(7,0.994765);
   hist_eta_rat_140->SetBinContent(8,1.024517);
   hist_eta_rat_140->SetBinContent(9,1.016799);
   hist_eta_rat_140->SetBinContent(10,1.030755);
   hist_eta_rat_140->SetBinContent(11,1.024302);
   hist_eta_rat_140->SetBinContent(12,1.017353);
   hist_eta_rat_140->SetBinContent(13,1.013676);
   hist_eta_rat_140->SetBinContent(14,0.9996804);
   hist_eta_rat_140->SetBinContent(15,0.9743303);
   hist_eta_rat_140->SetBinContent(16,0.9698012);
   hist_eta_rat_140->SetBinContent(17,0.9218322);
   hist_eta_rat_140->SetBinContent(18,0.7953151);
   hist_eta_rat_140->SetBinError(1,0.2654167);
   hist_eta_rat_140->SetBinError(2,0.04189644);
   hist_eta_rat_140->SetBinError(3,0.02914542);
   hist_eta_rat_140->SetBinError(4,0.02133916);
   hist_eta_rat_140->SetBinError(5,0.01762502);
   hist_eta_rat_140->SetBinError(6,0.01477849);
   hist_eta_rat_140->SetBinError(7,0.01309855);
   hist_eta_rat_140->SetBinError(8,0.01223317);
   hist_eta_rat_140->SetBinError(9,0.01144872);
   hist_eta_rat_140->SetBinError(10,0.01107849);
   hist_eta_rat_140->SetBinError(11,0.01086972);
   hist_eta_rat_140->SetBinError(12,0.01087988);
   hist_eta_rat_140->SetBinError(13,0.01111328);
   hist_eta_rat_140->SetBinError(14,0.01160966);
   hist_eta_rat_140->SetBinError(15,0.01235849);
   hist_eta_rat_140->SetBinError(16,0.01389286);
   hist_eta_rat_140->SetBinError(17,0.01263902);
   hist_eta_rat_140->SetBinError(18,0.02503083);
   hist_eta_rat_140->SetEntries(4107.488);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_140->SetLineColor(ci);
   hist_eta_rat_140->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_140->SetMarkerColor(ci);
   hist_eta_rat_140->SetMarkerStyle(20);
   hist_eta_rat_140->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_140->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_140->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_140->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_140->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_140->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_140->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_140->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_140->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_140->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_140->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_140->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_140->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_140->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_140->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_140->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_140->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_140->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_140->Draw("same p");
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_2_1->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_2_2
   TPad *p_2_2 = new TPad("p_2_2", "p_2_2",0.6601942,0.50501,1,0.6573147);
   p_2_2->Draw();
   p_2_2->cd();
   p_2_2->Range(-2.999,0.50001,4.4985,1.4999);
   p_2_2->SetFillColor(0);
   p_2_2->SetBorderMode(0);
   p_2_2->SetBorderSize(0);
   p_2_2->SetTickx(1);
   p_2_2->SetTicky(1);
   p_2_2->SetLeftMargin(0);
   p_2_2->SetRightMargin(0.2);
   p_2_2->SetTopMargin(0);
   p_2_2->SetBottomMargin(0);
   p_2_2->SetFrameLineColor(0);
   p_2_2->SetFrameBorderMode(0);
   p_2_2->SetFrameLineColor(0);
   p_2_2->SetFrameBorderMode(0);
   
   TH1D *emptyRat41 = new TH1D("emptyRat41","",10,-2.999,2.999);
   emptyRat41->SetBinContent(7,1000);
   emptyRat41->SetBinError(7,1000);
   emptyRat41->SetMinimum(0.50001);
   emptyRat41->SetMaximum(1.4999);
   emptyRat41->SetEntries(1);
   emptyRat41->SetLineStyle(0);
   emptyRat41->SetMarkerStyle(20);
   emptyRat41->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat41->GetXaxis()->CenterTitle(true);
   emptyRat41->GetXaxis()->SetLabelFont(43);
   emptyRat41->GetXaxis()->SetLabelOffset(0.01);
   emptyRat41->GetXaxis()->SetLabelSize(33);
   emptyRat41->GetXaxis()->SetTitleSize(33);
   emptyRat41->GetXaxis()->SetTitleOffset(7.5);
   emptyRat41->GetXaxis()->SetTitleFont(43);
   emptyRat41->GetYaxis()->SetTitle("pPb/pp");
   emptyRat41->GetYaxis()->CenterTitle(true);
   emptyRat41->GetYaxis()->SetNdivisions(505);
   emptyRat41->GetYaxis()->SetLabelFont(43);
   emptyRat41->GetYaxis()->SetLabelOffset(0.01);
   emptyRat41->GetYaxis()->SetLabelSize(33);
   emptyRat41->GetYaxis()->SetTitleSize(33);
   emptyRat41->GetYaxis()->SetTitleOffset(7.5);
   emptyRat41->GetYaxis()->SetTitleFont(43);
   emptyRat41->GetZaxis()->SetLabelFont(42);
   emptyRat41->GetZaxis()->SetLabelSize(0.045);
   emptyRat41->GetZaxis()->SetTitleSize(0.035);
   emptyRat41->GetZaxis()->SetTitleFont(42);
   emptyRat41->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 956;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph100910151021 = new TH1F("Graph_Graph_Graph_Graph100910151021","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph_Graph100910151021->SetMinimum(0.6838763);
   Graph_Graph_Graph_Graph100910151021->SetMaximum(2.442677);
   Graph_Graph_Graph_Graph100910151021->SetDirectory(0);
   Graph_Graph_Graph_Graph100910151021->SetStats(0);
   Graph_Graph_Graph_Graph100910151021->SetLineStyle(0);
   Graph_Graph_Graph_Graph100910151021->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100910151021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100910151021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph100910151021->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph100910151021->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph100910151021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100910151021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100910151021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph100910151021->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph100910151021->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph100910151021->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph_Graph100910151021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100910151021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100910151021->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph100910151021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph100910151021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100910151021);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx61[17] = {
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
   Double_t Graph0_fy61[17] = {
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
   graph = new TGraph(17,Graph0_fx61,Graph0_fy61);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph61 = new TH1F("Graph_Graph61","Graph",100,-2.858667,3.225333);
   Graph_Graph61->SetMinimum(0.6941521);
   Graph_Graph61->SetMaximum(1.113047);
   Graph_Graph61->SetDirectory(0);
   Graph_Graph61->SetStats(0);
   Graph_Graph61->SetLineStyle(0);
   Graph_Graph61->SetMarkerStyle(20);
   Graph_Graph61->GetXaxis()->SetLabelFont(42);
   Graph_Graph61->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph61->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph61->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph61->GetXaxis()->SetTitleFont(42);
   Graph_Graph61->GetYaxis()->SetLabelFont(42);
   Graph_Graph61->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph61->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph61->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph61->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph61->GetYaxis()->SetTitleFont(42);
   Graph_Graph61->GetZaxis()->SetLabelFont(42);
   Graph_Graph61->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph61->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph61->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph61);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx62[17] = {
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
   Double_t Graph1_fy62[17] = {
   0.7575259,
   0.8252362,
   0.870373,
   0.9018566,
   0.949036,
   0.9844458,
   1.046605,
   1.060365,
   1.082916,
   1.098344,
   1.081924,
   1.051006,
   1.015429,
   0.9865745,
   0.9360867,
   0.9050493,
   0.8888571};
   graph = new TGraph(17,Graph1_fx62,Graph1_fy62);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph62 = new TH1F("Graph_Graph62","Graph",100,-2.858667,3.225333);
   Graph_Graph62->SetMinimum(0.723444);
   Graph_Graph62->SetMaximum(1.132426);
   Graph_Graph62->SetDirectory(0);
   Graph_Graph62->SetStats(0);
   Graph_Graph62->SetLineStyle(0);
   Graph_Graph62->SetMarkerStyle(20);
   Graph_Graph62->GetXaxis()->SetLabelFont(42);
   Graph_Graph62->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph62->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph62->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph62->GetXaxis()->SetTitleFont(42);
   Graph_Graph62->GetYaxis()->SetLabelFont(42);
   Graph_Graph62->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph62->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph62->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph62->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph62->GetYaxis()->SetTitleFont(42);
   Graph_Graph62->GetZaxis()->SetLabelFont(42);
   Graph_Graph62->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph62->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph62->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph62);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx63[17] = {
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
   Double_t Graph2_fy63[17] = {
   0.6445763,
   0.7624085,
   0.8235987,
   0.8708459,
   0.9182673,
   0.9565991,
   1.021388,
   1.032984,
   1.056168,
   1.067345,
   1.056455,
   1.026505,
   0.9915841,
   0.9636414,
   0.9084993,
   0.8765222,
   0.8216878};
   graph = new TGraph(17,Graph2_fx63,Graph2_fy63);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph63 = new TH1F("Graph_Graph63","Graph",100,-2.858667,3.225333);
   Graph_Graph63->SetMinimum(0.6022994);
   Graph_Graph63->SetMaximum(1.109622);
   Graph_Graph63->SetDirectory(0);
   Graph_Graph63->SetStats(0);
   Graph_Graph63->SetLineStyle(0);
   Graph_Graph63->SetMarkerStyle(20);
   Graph_Graph63->GetXaxis()->SetLabelFont(42);
   Graph_Graph63->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph63->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph63->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph63->GetXaxis()->SetTitleFont(42);
   Graph_Graph63->GetYaxis()->SetLabelFont(42);
   Graph_Graph63->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph63->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph63->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph63->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph63->GetYaxis()->SetTitleFont(42);
   Graph_Graph63->GetZaxis()->SetLabelFont(42);
   Graph_Graph63->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph63->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph63->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph63);
   
   graph->Draw("  c");
   Double_t xAxis21[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_242 = new TH1D("hist_eta_rat_242","",18, xAxis21);
   hist_eta_rat_242->SetBinContent(1,2.353356);
   hist_eta_rat_242->SetBinContent(2,1.050456);
   hist_eta_rat_242->SetBinContent(3,1.012821);
   hist_eta_rat_242->SetBinContent(4,0.9667915);
   hist_eta_rat_242->SetBinContent(5,0.9704566);
   hist_eta_rat_242->SetBinContent(6,0.9734057);
   hist_eta_rat_242->SetBinContent(7,1.000051);
   hist_eta_rat_242->SetBinContent(8,0.9986469);
   hist_eta_rat_242->SetBinContent(9,1.013215);
   hist_eta_rat_242->SetBinContent(10,1.024397);
   hist_eta_rat_242->SetBinContent(11,1.026894);
   hist_eta_rat_242->SetBinContent(12,1.015757);
   hist_eta_rat_242->SetBinContent(13,1.018752);
   hist_eta_rat_242->SetBinContent(14,1.011963);
   hist_eta_rat_242->SetBinContent(15,1.004324);
   hist_eta_rat_242->SetBinContent(16,0.9632621);
   hist_eta_rat_242->SetBinContent(17,0.9297486);
   hist_eta_rat_242->SetBinContent(18,0.8288227);
   hist_eta_rat_242->SetBinError(1,1.377984);
   hist_eta_rat_242->SetBinError(2,0.05111463);
   hist_eta_rat_242->SetBinError(3,0.02701256);
   hist_eta_rat_242->SetBinError(4,0.0171885);
   hist_eta_rat_242->SetBinError(5,0.01280288);
   hist_eta_rat_242->SetBinError(6,0.01053717);
   hist_eta_rat_242->SetBinError(7,0.009291076);
   hist_eta_rat_242->SetBinError(8,0.008377997);
   hist_eta_rat_242->SetBinError(9,0.007860271);
   hist_eta_rat_242->SetBinError(10,0.00761183);
   hist_eta_rat_242->SetBinError(11,0.007439868);
   hist_eta_rat_242->SetBinError(12,0.007383155);
   hist_eta_rat_242->SetBinError(13,0.007601361);
   hist_eta_rat_242->SetBinError(14,0.008043143);
   hist_eta_rat_242->SetBinError(15,0.008678449);
   hist_eta_rat_242->SetBinError(16,0.009582948);
   hist_eta_rat_242->SetBinError(17,0.008990346);
   hist_eta_rat_242->SetBinError(18,0.01953039);
   hist_eta_rat_242->SetEntries(192.8814);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_242->SetLineColor(ci);
   hist_eta_rat_242->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_242->SetMarkerColor(ci);
   hist_eta_rat_242->SetMarkerStyle(20);
   hist_eta_rat_242->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_242->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_242->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_242->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_242->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_242->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_242->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_242->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_242->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_242->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_242->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_242->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_242->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_242->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_242->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_242->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_242->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_242->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_242->Draw("same p");
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_2_2->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_2_3
   TPad *p_2_3 = new TPad("p_2_3", "p_2_3",0.6601942,0.3527054,1,0.50501);
   p_2_3->Draw();
   p_2_3->cd();
   p_2_3->Range(-2.999,0.50001,4.4985,1.4999);
   p_2_3->SetFillColor(0);
   p_2_3->SetBorderMode(0);
   p_2_3->SetBorderSize(0);
   p_2_3->SetTickx(1);
   p_2_3->SetTicky(1);
   p_2_3->SetLeftMargin(0);
   p_2_3->SetRightMargin(0.2);
   p_2_3->SetTopMargin(0);
   p_2_3->SetBottomMargin(0);
   p_2_3->SetFrameLineColor(0);
   p_2_3->SetFrameBorderMode(0);
   p_2_3->SetFrameLineColor(0);
   p_2_3->SetFrameBorderMode(0);
   
   TH1D *emptyRat43 = new TH1D("emptyRat43","",10,-2.999,2.999);
   emptyRat43->SetBinContent(7,1000);
   emptyRat43->SetBinError(7,1000);
   emptyRat43->SetMinimum(0.50001);
   emptyRat43->SetMaximum(1.4999);
   emptyRat43->SetEntries(1);
   emptyRat43->SetLineStyle(0);
   emptyRat43->SetMarkerStyle(20);
   emptyRat43->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat43->GetXaxis()->CenterTitle(true);
   emptyRat43->GetXaxis()->SetLabelFont(43);
   emptyRat43->GetXaxis()->SetLabelOffset(0.01);
   emptyRat43->GetXaxis()->SetLabelSize(33);
   emptyRat43->GetXaxis()->SetTitleSize(33);
   emptyRat43->GetXaxis()->SetTitleOffset(7.5);
   emptyRat43->GetXaxis()->SetTitleFont(43);
   emptyRat43->GetYaxis()->SetTitle("pPb/pp");
   emptyRat43->GetYaxis()->CenterTitle(true);
   emptyRat43->GetYaxis()->SetNdivisions(505);
   emptyRat43->GetYaxis()->SetLabelFont(43);
   emptyRat43->GetYaxis()->SetLabelOffset(0.01);
   emptyRat43->GetYaxis()->SetLabelSize(33);
   emptyRat43->GetYaxis()->SetTitleSize(33);
   emptyRat43->GetYaxis()->SetTitleOffset(7.5);
   emptyRat43->GetYaxis()->SetTitleFont(43);
   emptyRat43->GetZaxis()->SetLabelFont(42);
   emptyRat43->GetZaxis()->SetLabelSize(0.045);
   emptyRat43->GetZaxis()->SetTitleSize(0.035);
   emptyRat43->GetZaxis()->SetTitleFont(42);
   emptyRat43->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 962;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph101010161022 = new TH1F("Graph_Graph_Graph_Graph101010161022","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph_Graph101010161022->SetMinimum(0);
   Graph_Graph_Graph_Graph101010161022->SetMaximum(1.357353);
   Graph_Graph_Graph_Graph101010161022->SetDirectory(0);
   Graph_Graph_Graph_Graph101010161022->SetStats(0);
   Graph_Graph_Graph_Graph101010161022->SetLineStyle(0);
   Graph_Graph_Graph_Graph101010161022->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph101010161022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101010161022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph101010161022->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph101010161022->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph101010161022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101010161022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101010161022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph101010161022->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph101010161022->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph101010161022->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph_Graph101010161022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101010161022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101010161022->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph101010161022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph101010161022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph101010161022);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx64[17] = {
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
   Double_t Graph0_fy64[17] = {
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
   graph = new TGraph(17,Graph0_fx64,Graph0_fy64);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph64 = new TH1F("Graph_Graph64","Graph",100,-2.858667,3.225333);
   Graph_Graph64->SetMinimum(0.6315838);
   Graph_Graph64->SetMaximum(1.115135);
   Graph_Graph64->SetDirectory(0);
   Graph_Graph64->SetStats(0);
   Graph_Graph64->SetLineStyle(0);
   Graph_Graph64->SetMarkerStyle(20);
   Graph_Graph64->GetXaxis()->SetLabelFont(42);
   Graph_Graph64->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph64->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph64->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph64->GetXaxis()->SetTitleFont(42);
   Graph_Graph64->GetYaxis()->SetLabelFont(42);
   Graph_Graph64->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph64->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph64->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph64->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph64->GetYaxis()->SetTitleFont(42);
   Graph_Graph64->GetZaxis()->SetLabelFont(42);
   Graph_Graph64->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph64->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph64->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph64);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx65[17] = {
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
   Double_t Graph1_fy65[17] = {
   0.7621598,
   0.7484465,
   0.8255018,
   0.8625428,
   0.9168946,
   0.9532834,
   0.9974395,
   1.032101,
   1.077663,
   1.08785,
   1.087832,
   1.079745,
   1.033026,
   1.014848,
   0.9570739,
   0.9191672,
   0.8627965};
   graph = new TGraph(17,Graph1_fx65,Graph1_fy65);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph65 = new TH1F("Graph_Graph65","Graph",100,-2.858667,3.225333);
   Graph_Graph65->SetMinimum(0.7145062);
   Graph_Graph65->SetMaximum(1.12179);
   Graph_Graph65->SetDirectory(0);
   Graph_Graph65->SetStats(0);
   Graph_Graph65->SetLineStyle(0);
   Graph_Graph65->SetMarkerStyle(20);
   Graph_Graph65->GetXaxis()->SetLabelFont(42);
   Graph_Graph65->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph65->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph65->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph65->GetXaxis()->SetTitleFont(42);
   Graph_Graph65->GetYaxis()->SetLabelFont(42);
   Graph_Graph65->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph65->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph65->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph65->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph65->GetYaxis()->SetTitleFont(42);
   Graph_Graph65->GetZaxis()->SetLabelFont(42);
   Graph_Graph65->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph65->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph65->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph65);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx66[17] = {
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
   Double_t Graph2_fy66[17] = {
   0.6358468,
   0.6633105,
   0.7774991,
   0.8212858,
   0.8854681,
   0.9285226,
   0.9774203,
   1.005705,
   1.055882,
   1.064374,
   1.066593,
   1.050456,
   0.9942642,
   0.9871501,
   0.9334143,
   0.8887241,
   0.8051828};
   graph = new TGraph(17,Graph2_fx66,Graph2_fy66);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph66 = new TH1F("Graph_Graph66","Graph",100,-2.858667,3.225333);
   Graph_Graph66->SetMinimum(0.5927722);
   Graph_Graph66->SetMaximum(1.109667);
   Graph_Graph66->SetDirectory(0);
   Graph_Graph66->SetStats(0);
   Graph_Graph66->SetLineStyle(0);
   Graph_Graph66->SetMarkerStyle(20);
   Graph_Graph66->GetXaxis()->SetLabelFont(42);
   Graph_Graph66->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph66->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph66->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph66->GetXaxis()->SetTitleFont(42);
   Graph_Graph66->GetYaxis()->SetLabelFont(42);
   Graph_Graph66->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph66->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph66->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph66->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph66->GetYaxis()->SetTitleFont(42);
   Graph_Graph66->GetZaxis()->SetLabelFont(42);
   Graph_Graph66->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph66->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph66->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph66);
   
   graph->Draw("  c");
   Double_t xAxis22[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_344 = new TH1D("hist_eta_rat_344","",18, xAxis22);
   hist_eta_rat_344->SetBinContent(2,1.229353);
   hist_eta_rat_344->SetBinContent(3,0.9669839);
   hist_eta_rat_344->SetBinContent(4,0.9665762);
   hist_eta_rat_344->SetBinContent(5,0.9478743);
   hist_eta_rat_344->SetBinContent(6,0.9629507);
   hist_eta_rat_344->SetBinContent(7,0.9720505);
   hist_eta_rat_344->SetBinContent(8,0.9961309);
   hist_eta_rat_344->SetBinContent(9,1.010588);
   hist_eta_rat_344->SetBinContent(10,1.011649);
   hist_eta_rat_344->SetBinContent(11,1.029972);
   hist_eta_rat_344->SetBinContent(12,1.015178);
   hist_eta_rat_344->SetBinContent(13,1.02908);
   hist_eta_rat_344->SetBinContent(14,1.007098);
   hist_eta_rat_344->SetBinContent(15,1.004349);
   hist_eta_rat_344->SetBinContent(16,1.000708);
   hist_eta_rat_344->SetBinContent(17,0.9274416);
   hist_eta_rat_344->SetBinContent(18,0.8612056);
   hist_eta_rat_344->SetBinError(2,0.1041244);
   hist_eta_rat_344->SetBinError(3,0.03590138);
   hist_eta_rat_344->SetBinError(4,0.02034866);
   hist_eta_rat_344->SetBinError(5,0.01386378);
   hist_eta_rat_344->SetBinError(6,0.01095308);
   hist_eta_rat_344->SetBinError(7,0.009245236);
   hist_eta_rat_344->SetBinError(8,0.008339605);
   hist_eta_rat_344->SetBinError(9,0.007761978);
   hist_eta_rat_344->SetBinError(10,0.0074013);
   hist_eta_rat_344->SetBinError(11,0.007267697);
   hist_eta_rat_344->SetBinError(12,0.007218966);
   hist_eta_rat_344->SetBinError(13,0.007501821);
   hist_eta_rat_344->SetBinError(14,0.00785601);
   hist_eta_rat_344->SetBinError(15,0.008584328);
   hist_eta_rat_344->SetBinError(16,0.009777446);
   hist_eta_rat_344->SetBinError(17,0.009315331);
   hist_eta_rat_344->SetBinError(18,0.02288525);
   hist_eta_rat_344->SetEntries(20307.13);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_344->SetLineColor(ci);
   hist_eta_rat_344->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_344->SetMarkerColor(ci);
   hist_eta_rat_344->SetMarkerStyle(20);
   hist_eta_rat_344->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_344->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_344->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_344->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_344->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_344->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_344->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_344->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_344->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_344->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_344->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_344->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_344->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_344->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_344->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_344->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_344->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_344->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_344->Draw("same p");
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_2_3->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_2_4
   TPad *p_2_4 = new TPad("p_2_4", "p_2_4",0.6601942,0.2004008,1,0.3527054);
   p_2_4->Draw();
   p_2_4->cd();
   p_2_4->Range(-2.999,0.50001,4.4985,1.4999);
   p_2_4->SetFillColor(0);
   p_2_4->SetBorderMode(0);
   p_2_4->SetBorderSize(0);
   p_2_4->SetTickx(1);
   p_2_4->SetTicky(1);
   p_2_4->SetLeftMargin(0);
   p_2_4->SetRightMargin(0.2);
   p_2_4->SetTopMargin(0);
   p_2_4->SetBottomMargin(0);
   p_2_4->SetFrameLineColor(0);
   p_2_4->SetFrameBorderMode(0);
   p_2_4->SetFrameLineColor(0);
   p_2_4->SetFrameBorderMode(0);
   
   TH1D *emptyRat45 = new TH1D("emptyRat45","",10,-2.999,2.999);
   emptyRat45->SetBinContent(7,1000);
   emptyRat45->SetBinError(7,1000);
   emptyRat45->SetMinimum(0.50001);
   emptyRat45->SetMaximum(1.4999);
   emptyRat45->SetEntries(1);
   emptyRat45->SetLineStyle(0);
   emptyRat45->SetMarkerStyle(20);
   emptyRat45->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat45->GetXaxis()->CenterTitle(true);
   emptyRat45->GetXaxis()->SetLabelFont(43);
   emptyRat45->GetXaxis()->SetLabelOffset(0.01);
   emptyRat45->GetXaxis()->SetLabelSize(33);
   emptyRat45->GetXaxis()->SetTitleSize(33);
   emptyRat45->GetXaxis()->SetTitleOffset(7.5);
   emptyRat45->GetXaxis()->SetTitleFont(43);
   emptyRat45->GetYaxis()->SetTitle("pPb/pp");
   emptyRat45->GetYaxis()->CenterTitle(true);
   emptyRat45->GetYaxis()->SetNdivisions(505);
   emptyRat45->GetYaxis()->SetLabelFont(43);
   emptyRat45->GetYaxis()->SetLabelOffset(0.01);
   emptyRat45->GetYaxis()->SetLabelSize(33);
   emptyRat45->GetYaxis()->SetTitleSize(33);
   emptyRat45->GetYaxis()->SetTitleOffset(7.5);
   emptyRat45->GetYaxis()->SetTitleFont(43);
   emptyRat45->GetZaxis()->SetLabelFont(42);
   emptyRat45->GetZaxis()->SetLabelSize(0.045);
   emptyRat45->GetZaxis()->SetTitleSize(0.035);
   emptyRat45->GetZaxis()->SetTitleFont(42);
   emptyRat45->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 968;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph101110171023 = new TH1F("Graph_Graph_Graph_Graph101110171023","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph_Graph101110171023->SetMinimum(0);
   Graph_Graph_Graph_Graph101110171023->SetMaximum(2.011118);
   Graph_Graph_Graph_Graph101110171023->SetDirectory(0);
   Graph_Graph_Graph_Graph101110171023->SetStats(0);
   Graph_Graph_Graph_Graph101110171023->SetLineStyle(0);
   Graph_Graph_Graph_Graph101110171023->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph101110171023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101110171023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph101110171023->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph101110171023->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph101110171023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101110171023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101110171023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph101110171023->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph101110171023->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph101110171023->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph_Graph101110171023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101110171023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101110171023->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph101110171023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph101110171023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph101110171023);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx67[16] = {
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
   Double_t Graph0_fy67[16] = {
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
   graph = new TGraph(16,Graph0_fx67,Graph0_fy67);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph67 = new TH1F("Graph_Graph67","Graph",100,-2.393917,3.183083);
   Graph_Graph67->SetMinimum(0.6490423);
   Graph_Graph67->SetMaximum(1.112716);
   Graph_Graph67->SetDirectory(0);
   Graph_Graph67->SetStats(0);
   Graph_Graph67->SetLineStyle(0);
   Graph_Graph67->SetMarkerStyle(20);
   Graph_Graph67->GetXaxis()->SetLabelFont(42);
   Graph_Graph67->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph67->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph67->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph67->GetXaxis()->SetTitleFont(42);
   Graph_Graph67->GetYaxis()->SetLabelFont(42);
   Graph_Graph67->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph67->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph67->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph67->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph67->GetYaxis()->SetTitleFont(42);
   Graph_Graph67->GetZaxis()->SetLabelFont(42);
   Graph_Graph67->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph67->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph67->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph67);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx68[16] = {
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
   Double_t Graph1_fy68[16] = {
   0.7470579,
   0.7987197,
   0.8283262,
   0.8824208,
   0.9098042,
   0.9707116,
   1.005438,
   1.046631,
   1.072842,
   1.08655,
   1.075929,
   1.051048,
   1.029368,
   0.9753723,
   0.9390512,
   0.9195781};
   graph = new TGraph(16,Graph1_fx68,Graph1_fy68);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph68 = new TH1F("Graph_Graph68","Graph",100,-2.393917,3.183083);
   Graph_Graph68->SetMinimum(0.7131087);
   Graph_Graph68->SetMaximum(1.120499);
   Graph_Graph68->SetDirectory(0);
   Graph_Graph68->SetStats(0);
   Graph_Graph68->SetLineStyle(0);
   Graph_Graph68->SetMarkerStyle(20);
   Graph_Graph68->GetXaxis()->SetLabelFont(42);
   Graph_Graph68->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph68->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph68->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph68->GetXaxis()->SetTitleFont(42);
   Graph_Graph68->GetYaxis()->SetLabelFont(42);
   Graph_Graph68->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph68->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph68->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph68->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph68->GetYaxis()->SetTitleFont(42);
   Graph_Graph68->GetZaxis()->SetLabelFont(42);
   Graph_Graph68->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph68->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph68->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph68);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx69[16] = {
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
   Double_t Graph2_fy69[16] = {
   0.6588868,
   0.7458324,
   0.7897893,
   0.8531773,
   0.8833541,
   0.9491069,
   0.9918054,
   1.028361,
   1.052821,
   1.067895,
   1.056907,
   1.033836,
   1.006071,
   0.9536618,
   0.9096707,
   0.8514045};
   graph = new TGraph(16,Graph2_fx69,Graph2_fy69);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph69 = new TH1F("Graph_Graph69","Graph",100,-2.393917,3.183083);
   Graph_Graph69->SetMinimum(0.617986);
   Graph_Graph69->SetMaximum(1.108795);
   Graph_Graph69->SetDirectory(0);
   Graph_Graph69->SetStats(0);
   Graph_Graph69->SetLineStyle(0);
   Graph_Graph69->SetMarkerStyle(20);
   Graph_Graph69->GetXaxis()->SetLabelFont(42);
   Graph_Graph69->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph69->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph69->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph69->GetXaxis()->SetTitleFont(42);
   Graph_Graph69->GetYaxis()->SetLabelFont(42);
   Graph_Graph69->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph69->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph69->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph69->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph69->GetYaxis()->SetTitleFont(42);
   Graph_Graph69->GetZaxis()->SetLabelFont(42);
   Graph_Graph69->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph69->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph69->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph69);
   
   graph->Draw("  c");
   Double_t xAxis23[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_446 = new TH1D("hist_eta_rat_446","",18, xAxis23);
   hist_eta_rat_446->SetBinContent(2,1.813721);
   hist_eta_rat_446->SetBinContent(3,0.9908987);
   hist_eta_rat_446->SetBinContent(4,0.958491);
   hist_eta_rat_446->SetBinContent(5,0.9426981);
   hist_eta_rat_446->SetBinContent(6,0.9477543);
   hist_eta_rat_446->SetBinContent(7,0.9598372);
   hist_eta_rat_446->SetBinContent(8,0.9645417);
   hist_eta_rat_446->SetBinContent(9,0.9982028);
   hist_eta_rat_446->SetBinContent(10,1.010392);
   hist_eta_rat_446->SetBinContent(11,1.030348);
   hist_eta_rat_446->SetBinContent(12,1.015993);
   hist_eta_rat_446->SetBinContent(13,1.023637);
   hist_eta_rat_446->SetBinContent(14,1.012336);
   hist_eta_rat_446->SetBinContent(15,1.01686);
   hist_eta_rat_446->SetBinContent(16,1.006532);
   hist_eta_rat_446->SetBinContent(17,0.9586193);
   hist_eta_rat_446->SetBinContent(18,0.883056);
   hist_eta_rat_446->SetBinError(2,0.3788104);
   hist_eta_rat_446->SetBinError(3,0.06913021);
   hist_eta_rat_446->SetBinError(4,0.03044085);
   hist_eta_rat_446->SetBinError(5,0.018461);
   hist_eta_rat_446->SetBinError(6,0.0135207);
   hist_eta_rat_446->SetBinError(7,0.01107217);
   hist_eta_rat_446->SetBinError(8,0.009637059);
   hist_eta_rat_446->SetBinError(9,0.008968998);
   hist_eta_rat_446->SetBinError(10,0.008484689);
   hist_eta_rat_446->SetBinError(11,0.00836453);
   hist_eta_rat_446->SetBinError(12,0.008267739);
   hist_eta_rat_446->SetBinError(13,0.008567105);
   hist_eta_rat_446->SetBinError(14,0.009071236);
   hist_eta_rat_446->SetBinError(15,0.01007977);
   hist_eta_rat_446->SetBinError(16,0.01171373);
   hist_eta_rat_446->SetBinError(17,0.01177863);
   hist_eta_rat_446->SetBinError(18,0.03350037);
   hist_eta_rat_446->SetEntries(2024.108);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_446->SetLineColor(ci);
   hist_eta_rat_446->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_446->SetMarkerColor(ci);
   hist_eta_rat_446->SetMarkerStyle(20);
   hist_eta_rat_446->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_446->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_446->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_446->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_446->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_446->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_446->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_446->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_446->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_446->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_446->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_446->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_446->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_446->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_446->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_446->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_446->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_446->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_446->Draw("same p");
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_2_4->Modified();
   crat->cd();
  
// ------------>Primitives in pad: p_2_5
   TPad *p_2_5 = new TPad("p_2_5", "p_2_5",0.6601942,0,1,0.2004008);
   p_2_5->Draw();
   p_2_5->cd();
   p_2_5->Range(-2.999,0.1842553,4.4985,1.4999);
   p_2_5->SetFillColor(0);
   p_2_5->SetBorderMode(0);
   p_2_5->SetBorderSize(0);
   p_2_5->SetTickx(1);
   p_2_5->SetTicky(1);
   p_2_5->SetLeftMargin(0);
   p_2_5->SetRightMargin(0.2);
   p_2_5->SetTopMargin(0);
   p_2_5->SetBottomMargin(0.24);
   p_2_5->SetFrameLineColor(0);
   p_2_5->SetFrameBorderMode(0);
   p_2_5->SetFrameLineColor(0);
   p_2_5->SetFrameBorderMode(0);
   
   TH1D *emptyRat47 = new TH1D("emptyRat47","",10,-2.999,2.999);
   emptyRat47->SetBinContent(7,1000);
   emptyRat47->SetBinError(7,1000);
   emptyRat47->SetMinimum(0.50001);
   emptyRat47->SetMaximum(1.4999);
   emptyRat47->SetEntries(1);
   emptyRat47->SetLineStyle(0);
   emptyRat47->SetMarkerStyle(20);
   emptyRat47->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyRat47->GetXaxis()->CenterTitle(true);
   emptyRat47->GetXaxis()->SetLabelFont(43);
   emptyRat47->GetXaxis()->SetLabelOffset(0.01);
   emptyRat47->GetXaxis()->SetLabelSize(33);
   emptyRat47->GetXaxis()->SetTitleSize(33);
   emptyRat47->GetXaxis()->SetTitleOffset(7.5);
   emptyRat47->GetXaxis()->SetTitleFont(43);
   emptyRat47->GetYaxis()->SetTitle("pPb/pp");
   emptyRat47->GetYaxis()->CenterTitle(true);
   emptyRat47->GetYaxis()->SetNdivisions(505);
   emptyRat47->GetYaxis()->SetLabelFont(43);
   emptyRat47->GetYaxis()->SetLabelOffset(0.01);
   emptyRat47->GetYaxis()->SetLabelSize(33);
   emptyRat47->GetYaxis()->SetTitleSize(33);
   emptyRat47->GetYaxis()->SetTitleOffset(7.5);
   emptyRat47->GetYaxis()->SetTitleFont(43);
   emptyRat47->GetZaxis()->SetLabelFont(42);
   emptyRat47->GetZaxis()->SetLabelSize(0.045);
   emptyRat47->GetZaxis()->SetTitleSize(0.035);
   emptyRat47->GetZaxis()->SetTitleFont(42);
   emptyRat47->Draw("");
   
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
   gre = new TGraphErrors(18,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 974;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph101210181024 = new TH1F("Graph_Graph_Graph_Graph101210181024","Graph",100,-3.46425,3.51675);
   Graph_Graph_Graph_Graph101210181024->SetMinimum(0);
   Graph_Graph_Graph_Graph101210181024->SetMaximum(12.25813);
   Graph_Graph_Graph_Graph101210181024->SetDirectory(0);
   Graph_Graph_Graph_Graph101210181024->SetStats(0);
   Graph_Graph_Graph_Graph101210181024->SetLineStyle(0);
   Graph_Graph_Graph_Graph101210181024->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph101210181024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101210181024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph101210181024->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph101210181024->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph101210181024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101210181024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101210181024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_Graph101210181024->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph101210181024->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph_Graph101210181024->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph_Graph101210181024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101210181024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101210181024->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph_Graph_Graph101210181024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph101210181024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph101210181024);
   
   gre->Draw(" 2");
   
   Double_t Graph0_fx70[16] = {
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
   Double_t Graph0_fy70[16] = {
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
   graph = new TGraph(16,Graph0_fx70,Graph0_fy70);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph70 = new TH1F("Graph_Graph70","Graph",100,-2.393917,3.183083);
   Graph_Graph70->SetMinimum(0.6398967);
   Graph_Graph70->SetMaximum(1.114825);
   Graph_Graph70->SetDirectory(0);
   Graph_Graph70->SetStats(0);
   Graph_Graph70->SetLineStyle(0);
   Graph_Graph70->SetMarkerStyle(20);
   Graph_Graph70->GetXaxis()->SetLabelFont(42);
   Graph_Graph70->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph70->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph70->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph70->GetXaxis()->SetTitleFont(42);
   Graph_Graph70->GetYaxis()->SetLabelFont(42);
   Graph_Graph70->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph70->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph70->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph70->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph70->GetYaxis()->SetTitleFont(42);
   Graph_Graph70->GetZaxis()->SetLabelFont(42);
   Graph_Graph70->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph70->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph70->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph70);
   
   graph->Draw(" c");
   
   Double_t Graph1_fx71[16] = {
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
   Double_t Graph1_fy71[16] = {
   0.7715239,
   0.7300761,
   0.7965195,
   0.8356121,
   0.8789607,
   0.9129685,
   0.9571895,
   1.002664,
   1.038144,
   1.068537,
   1.078687,
   1.075639,
   1.053708,
   1.030017,
   0.9782421,
   0.929738};
   graph = new TGraph(16,Graph1_fx71,Graph1_fy71);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph71 = new TH1F("Graph_Graph71","Graph",100,-2.393917,3.183083);
   Graph_Graph71->SetMinimum(0.695215);
   Graph_Graph71->SetMaximum(1.113548);
   Graph_Graph71->SetDirectory(0);
   Graph_Graph71->SetStats(0);
   Graph_Graph71->SetLineStyle(0);
   Graph_Graph71->SetMarkerStyle(20);
   Graph_Graph71->GetXaxis()->SetLabelFont(42);
   Graph_Graph71->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph71->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph71->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph71->GetXaxis()->SetTitleFont(42);
   Graph_Graph71->GetYaxis()->SetLabelFont(42);
   Graph_Graph71->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph71->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph71->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph71->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph71->GetYaxis()->SetTitleFont(42);
   Graph_Graph71->GetZaxis()->SetLabelFont(42);
   Graph_Graph71->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph71->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph71->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph71);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx72[16] = {
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
   Double_t Graph2_fy72[16] = {
   0.5387965,
   0.645317,
   0.7481544,
   0.8064851,
   0.8582718,
   0.8963948,
   0.9469664,
   0.9911429,
   1.023265,
   1.053604,
   1.065492,
   1.064529,
   1.037126,
   1.007317,
   0.9468029,
   0.8428461};
   graph = new TGraph(16,Graph2_fx72,Graph2_fy72);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#1b4f72");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph72 = new TH1F("Graph_Graph72","Graph",100,-2.393917,3.183083);
   Graph_Graph72->SetMinimum(0.4861269);
   Graph_Graph72->SetMaximum(1.118162);
   Graph_Graph72->SetDirectory(0);
   Graph_Graph72->SetStats(0);
   Graph_Graph72->SetLineStyle(0);
   Graph_Graph72->SetMarkerStyle(20);
   Graph_Graph72->GetXaxis()->SetLabelFont(42);
   Graph_Graph72->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph72->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph72->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph72->GetXaxis()->SetTitleFont(42);
   Graph_Graph72->GetYaxis()->SetLabelFont(42);
   Graph_Graph72->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph72->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph72->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph72->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph72->GetYaxis()->SetTitleFont(42);
   Graph_Graph72->GetZaxis()->SetLabelFont(42);
   Graph_Graph72->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph72->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph72->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph72);
   
   graph->Draw("  c");
   Double_t xAxis24[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_rat_548 = new TH1D("hist_eta_rat_548","",18, xAxis24);
   hist_eta_rat_548->SetBinContent(2,10.40849);
   hist_eta_rat_548->SetBinContent(3,0.8870872);
   hist_eta_rat_548->SetBinContent(4,0.9936676);
   hist_eta_rat_548->SetBinContent(5,0.8467346);
   hist_eta_rat_548->SetBinContent(6,0.9103075);
   hist_eta_rat_548->SetBinContent(7,0.9149816);
   hist_eta_rat_548->SetBinContent(8,0.9686298);
   hist_eta_rat_548->SetBinContent(9,0.9848296);
   hist_eta_rat_548->SetBinContent(10,1.011455);
   hist_eta_rat_548->SetBinContent(11,1.003333);
   hist_eta_rat_548->SetBinContent(12,1.034198);
   hist_eta_rat_548->SetBinContent(13,1.005249);
   hist_eta_rat_548->SetBinContent(14,1.022242);
   hist_eta_rat_548->SetBinContent(15,1.044678);
   hist_eta_rat_548->SetBinContent(16,1.006172);
   hist_eta_rat_548->SetBinContent(17,0.9896288);
   hist_eta_rat_548->SetBinContent(18,1.061912);
   hist_eta_rat_548->SetBinError(2,12.74774);
   hist_eta_rat_548->SetBinError(3,0.2477981);
   hist_eta_rat_548->SetBinError(4,0.09197665);
   hist_eta_rat_548->SetBinError(5,0.03903801);
   hist_eta_rat_548->SetBinError(6,0.02534206);
   hist_eta_rat_548->SetBinError(7,0.01878364);
   hist_eta_rat_548->SetBinError(8,0.01578038);
   hist_eta_rat_548->SetBinError(9,0.01395718);
   hist_eta_rat_548->SetBinError(10,0.01310372);
   hist_eta_rat_548->SetBinError(11,0.01249012);
   hist_eta_rat_548->SetBinError(12,0.01274022);
   hist_eta_rat_548->SetBinError(13,0.01299128);
   hist_eta_rat_548->SetBinError(14,0.01426728);
   hist_eta_rat_548->SetBinError(15,0.01661486);
   hist_eta_rat_548->SetBinError(16,0.02014486);
   hist_eta_rat_548->SetBinError(17,0.02352586);
   hist_eta_rat_548->SetBinError(18,0.1059296);
   hist_eta_rat_548->SetEntries(4.187656);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_548->SetLineColor(ci);
   hist_eta_rat_548->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_rat_548->SetMarkerColor(ci);
   hist_eta_rat_548->SetMarkerStyle(20);
   hist_eta_rat_548->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_rat_548->GetXaxis()->SetLabelFont(42);
   hist_eta_rat_548->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_rat_548->GetXaxis()->SetLabelSize(0.045);
   hist_eta_rat_548->GetXaxis()->SetTitleSize(0.055);
   hist_eta_rat_548->GetXaxis()->SetTitleFont(42);
   hist_eta_rat_548->GetYaxis()->SetTitle("Event fraction");
   hist_eta_rat_548->GetYaxis()->SetLabelFont(42);
   hist_eta_rat_548->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_rat_548->GetYaxis()->SetLabelSize(0.045);
   hist_eta_rat_548->GetYaxis()->SetTitleSize(0.055);
   hist_eta_rat_548->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_rat_548->GetYaxis()->SetTitleFont(42);
   hist_eta_rat_548->GetZaxis()->SetLabelFont(42);
   hist_eta_rat_548->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_rat_548->GetZaxis()->SetLabelSize(0.045);
   hist_eta_rat_548->GetZaxis()->SetTitleSize(0.035);
   hist_eta_rat_548->GetZaxis()->SetTitleFont(42);
   hist_eta_rat_548->Draw("same p");
   line = new TLine(-3,1,3,1);
   line->Draw();
   p_2_5->Modified();
   crat->cd();
   crat->Modified();
   crat->cd();
   crat->SetSelected(crat);
}
