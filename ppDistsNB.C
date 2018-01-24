void ppDistsNB()
{
//=========Macro generated from canvas: cppNB/
//=========  (Tue Aug  2 10:06:23 2016) by ROOT version6.06/01

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cppNB = new TCanvas("cppNB", "",0,0,1300,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   cppNB->Range(0,0,1,1);
   cppNB->SetFillColor(0);
   cppNB->SetBorderMode(0);
   cppNB->SetBorderSize(0);
   cppNB->SetTickx(1);
   cppNB->SetTicky(1);
   cppNB->SetLeftMargin(0.17);
   cppNB->SetRightMargin(0.01);
   cppNB->SetTopMargin(0.01);
   cppNB->SetBottomMargin(0.15);
   cppNB->SetFrameLineColor(0);
   cppNB->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.5393939,0.3825653,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-0.9457368,0.0001,2.999,1.123471);
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
   
   TH1D *emptyNB__13 = new TH1D("emptyNB__13","",10,0.001,2.999);
   emptyNB__13->SetBinContent(4,1000);
   emptyNB__13->SetBinError(4,1000);
   emptyNB__13->SetMinimum(0.0001);
   emptyNB__13->SetMaximum(0.9999);
   emptyNB__13->SetEntries(1);
   emptyNB__13->SetLineStyle(0);
   emptyNB__13->SetMarkerStyle(20);
   emptyNB__13->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__13->GetXaxis()->CenterTitle(true);
   emptyNB__13->GetXaxis()->SetLabelFont(43);
   emptyNB__13->GetXaxis()->SetLabelOffset(0.01);
   emptyNB__13->GetXaxis()->SetLabelSize(33);
   emptyNB__13->GetXaxis()->SetTitleSize(33);
   emptyNB__13->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__13->GetXaxis()->SetTitleFont(43);
   emptyNB__13->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__13->GetYaxis()->CenterTitle(true);
   emptyNB__13->GetYaxis()->SetNdivisions(505);
   emptyNB__13->GetYaxis()->SetLabelFont(43);
   emptyNB__13->GetYaxis()->SetLabelOffset(0.01);
   emptyNB__13->GetYaxis()->SetLabelSize(33);
   emptyNB__13->GetYaxis()->SetTitleSize(33);
   emptyNB__13->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__13->GetYaxis()->SetTitleFont(43);
   emptyNB__13->GetZaxis()->SetLabelFont(42);
   emptyNB__13->GetZaxis()->SetLabelSize(0.045);
   emptyNB__13->GetZaxis()->SetTitleSize(0.035);
   emptyNB__13->GetZaxis()->SetTitleFont(42);
   emptyNB__13->Draw("");
   
   Double_t Graph0_fx1007[28] = {
   -2.7495,
   -2.336,
   -2.051,
   -1.835,
   -1.653,
   -1.479,
   -1.305,
   -1.131,
   -0.9615,
   -0.7875,
   -0.609,
   -0.435,
   -0.261,
   -0.087,
   0.087,
   0.261,
   0.435,
   0.609,
   0.7875,
   0.9615,
   1.131,
   1.305,
   1.479,
   1.653,
   1.835,
   2.051,
   2.336,
   2.7495};
   Double_t Graph0_fy1007[28] = {
   0.03531947,
   0.1129342,
   0.2037247,
   0.2603105,
   0.3093688,
   0.3645438,
   0.3957806,
   0.4639052,
   0.4925287,
   0.5094144,
   0.5462353,
   0.5708224,
   0.6048219,
   0.6071086,
   0.6076578,
   0.6052545,
   0.5695481,
   0.545025,
   0.5091323,
   0.4910836,
   0.4626671,
   0.3960373,
   0.3658499,
   0.3096013,
   0.258304,
   0.2029748,
   0.1138444,
   0.03548956};
   Double_t Graph0_fex1007[28] = {
   0.1919231,
   0.1261539,
   0.09307691,
   0.0730769,
   0.06692309,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06346155,
   0.07038463,
   0.06692307,
   0.06692309,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692309,
   0.06692307,
   0.07038463,
   0.06346155,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06692309,
   0.0730769,
   0.09307691,
   0.1261539,
   0.1919231};
   Double_t Graph0_fey1007[28] = {
   -0.003596933,
   -0.00605957,
   -0.008622997,
   -0.00849482,
   -0.006396132,
   -0.004228278,
   -0.003336807,
   -0.003144626,
   -0.004511081,
   -0.005282822,
   -0.00524361,
   -0.006530943,
   -0.006473092,
   -0.007517321,
   -0.008542919,
   -0.006996026,
   -0.006243719,
   -0.005841709,
   -0.005817918,
   -0.006358802,
   -0.006008302,
   -0.005757655,
   -0.005886507,
   -0.005543863,
   -0.005339358,
   -0.005603825,
   -0.005352395,
   -0.002970911};
   TGraphErrors *gre = new TGraphErrors(28,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1199;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","Graph",100,-3.529708,3.529708);
   Graph_Graph1007->SetMinimum(0);
   Graph_Graph1007->SetMaximum(0.6648917);
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
   Double_t xAxis7[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_0__14 = new TH1D("hist_eta_mc_0__14","",14, xAxis7);
   hist_eta_mc_0__14->SetBinContent(1,0.5707192);
   hist_eta_mc_0__14->SetBinContent(2,0.5710336);
   hist_eta_mc_0__14->SetBinContent(3,0.5707192);
   hist_eta_mc_0__14->SetBinContent(4,0.5288979);
   hist_eta_mc_0__14->SetBinContent(5,0.4828548);
   hist_eta_mc_0__14->SetBinContent(6,0.4755107);
   hist_eta_mc_0__14->SetBinContent(7,0.470411);
   hist_eta_mc_0__14->SetBinContent(8,0.4106663);
   hist_eta_mc_0__14->SetBinContent(9,0.3606694);
   hist_eta_mc_0__14->SetBinContent(10,0.3175903);
   hist_eta_mc_0__14->SetBinContent(11,0.2672326);
   hist_eta_mc_0__14->SetBinContent(12,0.2093586);
   hist_eta_mc_0__14->SetBinContent(13,0.1421218);
   hist_eta_mc_0__14->SetBinContent(14,0.0476962);
   hist_eta_mc_0__14->SetBinError(1,0.01339628);
   hist_eta_mc_0__14->SetBinError(2,0.01339997);
   hist_eta_mc_0__14->SetBinError(3,0.01339628);
   hist_eta_mc_0__14->SetBinError(4,0.01289611);
   hist_eta_mc_0__14->SetBinError(5,0.01201518);
   hist_eta_mc_0__14->SetBinError(6,0.01255699);
   hist_eta_mc_0__14->SetBinError(7,0.01216219);
   hist_eta_mc_0__14->SetBinError(8,0.01136364);
   hist_eta_mc_0__14->SetBinError(9,0.01064946);
   hist_eta_mc_0__14->SetBinError(10,0.009993245);
   hist_eta_mc_0__14->SetBinError(11,0.00877234);
   hist_eta_mc_0__14->SetBinError(12,0.006879949);
   hist_eta_mc_0__14->SetBinError(13,0.004869014);
   hist_eta_mc_0__14->SetBinError(14,0.002286858);
   hist_eta_mc_0__14->SetEntries(18291);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_0__14->SetLineColor(ci);
   hist_eta_mc_0__14->SetLineStyle(0);
   hist_eta_mc_0__14->SetMarkerStyle(20);
   hist_eta_mc_0__14->SetMarkerSize(0);
   hist_eta_mc_0__14->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_0__14->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_0__14->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_0__14->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_0__14->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_0__14->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_0__14->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_0__14->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_0__14->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_0__14->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_0__14->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_0__14->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_0__14->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_0__14->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_0__14->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_0__14->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_0__14->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_0__14->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_0__14->Draw("same");
   Double_t xAxis8[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_0__15 = new TH1D("hist_eta_mc_0__15","",14, xAxis8);
   hist_eta_mc_0__15->SetBinContent(1,0.5707192);
   hist_eta_mc_0__15->SetBinContent(2,0.5710336);
   hist_eta_mc_0__15->SetBinContent(3,0.5707192);
   hist_eta_mc_0__15->SetBinContent(4,0.5288979);
   hist_eta_mc_0__15->SetBinContent(5,0.4828548);
   hist_eta_mc_0__15->SetBinContent(6,0.4755107);
   hist_eta_mc_0__15->SetBinContent(7,0.470411);
   hist_eta_mc_0__15->SetBinContent(8,0.4106663);
   hist_eta_mc_0__15->SetBinContent(9,0.3606694);
   hist_eta_mc_0__15->SetBinContent(10,0.3175903);
   hist_eta_mc_0__15->SetBinContent(11,0.2672326);
   hist_eta_mc_0__15->SetBinContent(12,0.2093586);
   hist_eta_mc_0__15->SetBinContent(13,0.1421218);
   hist_eta_mc_0__15->SetBinContent(14,0.0476962);
   hist_eta_mc_0__15->SetBinError(1,0.01339628);
   hist_eta_mc_0__15->SetBinError(2,0.01339997);
   hist_eta_mc_0__15->SetBinError(3,0.01339628);
   hist_eta_mc_0__15->SetBinError(4,0.01289611);
   hist_eta_mc_0__15->SetBinError(5,0.01201518);
   hist_eta_mc_0__15->SetBinError(6,0.01255699);
   hist_eta_mc_0__15->SetBinError(7,0.01216219);
   hist_eta_mc_0__15->SetBinError(8,0.01136364);
   hist_eta_mc_0__15->SetBinError(9,0.01064946);
   hist_eta_mc_0__15->SetBinError(10,0.009993245);
   hist_eta_mc_0__15->SetBinError(11,0.00877234);
   hist_eta_mc_0__15->SetBinError(12,0.006879949);
   hist_eta_mc_0__15->SetBinError(13,0.004869014);
   hist_eta_mc_0__15->SetBinError(14,0.002286858);
   hist_eta_mc_0__15->SetEntries(18291);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_0__15->SetLineColor(ci);
   hist_eta_mc_0__15->SetLineStyle(0);
   hist_eta_mc_0__15->SetMarkerStyle(20);
   hist_eta_mc_0__15->SetMarkerSize(0);
   hist_eta_mc_0__15->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_0__15->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_0__15->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_0__15->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_0__15->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_0__15->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_0__15->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_0__15->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_0__15->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_0__15->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_0__15->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_0__15->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_0__15->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_0__15->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_0__15->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_0__15->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_0__15->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_0__15->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_0__15->Draw("same hist");
   Double_t xAxis9[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_0__16 = new TH1D("hist_eta_0__16","",14, xAxis9);
   hist_eta_0__16->SetBinContent(1,0.6072586);
   hist_eta_0__16->SetBinContent(2,0.6055191);
   hist_eta_0__16->SetBinContent(3,0.5702073);
   hist_eta_0__16->SetBinContent(4,0.5458544);
   hist_eta_0__16->SetBinContent(5,0.5105739);
   hist_eta_0__16->SetBinContent(6,0.4927143);
   hist_eta_0__16->SetBinContent(7,0.4637501);
   hist_eta_0__16->SetBinContent(8,0.3969534);
   hist_eta_0__16->SetBinContent(9,0.3666861);
   hist_eta_0__16->SetBinContent(10,0.3099785);
   hist_eta_0__16->SetBinContent(11,0.259024);
   hist_eta_0__16->SetBinContent(12,0.2029908);
   hist_eta_0__16->SetBinContent(13,0.1130408);
   hist_eta_0__16->SetBinContent(14,0.0343312);
   hist_eta_0__16->SetBinError(1,0.01027777);
   hist_eta_0__16->SetBinError(2,0.01026304);
   hist_eta_0__16->SetBinError(3,0.009959289);
   hist_eta_0__16->SetBinError(4,0.009744293);
   hist_eta_0__16->SetBinError(5,0.009189467);
   hist_eta_0__16->SetBinError(6,0.009506971);
   hist_eta_0__16->SetBinError(7,0.008981605);
   hist_eta_0__16->SetBinError(8,0.00830963);
   hist_eta_0__16->SetBinError(9,0.007986549);
   hist_eta_0__16->SetBinError(10,0.007343071);
   hist_eta_0__16->SetBinError(11,0.006423619);
   hist_eta_0__16->SetBinError(12,0.005038683);
   hist_eta_0__16->SetBinError(13,0.003229738);
   hist_eta_0__16->SetBinError(14,0.001443048);
   hist_eta_0__16->SetEntries(33053);

   ci = TColor::GetColor("#0000cc");
   hist_eta_0__16->SetLineColor(ci);
   hist_eta_0__16->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_0__16->SetMarkerColor(ci);
   hist_eta_0__16->SetMarkerStyle(21);
   hist_eta_0__16->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_0__16->GetXaxis()->SetLabelFont(42);
   hist_eta_0__16->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_0__16->GetXaxis()->SetLabelSize(0.045);
   hist_eta_0__16->GetXaxis()->SetTitleSize(0.055);
   hist_eta_0__16->GetXaxis()->SetTitleFont(42);
   hist_eta_0__16->GetYaxis()->SetTitle("Event fraction");
   hist_eta_0__16->GetYaxis()->SetLabelFont(42);
   hist_eta_0__16->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_0__16->GetYaxis()->SetLabelSize(0.045);
   hist_eta_0__16->GetYaxis()->SetTitleSize(0.055);
   hist_eta_0__16->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_0__16->GetYaxis()->SetTitleFont(42);
   hist_eta_0__16->GetZaxis()->SetLabelFont(42);
   hist_eta_0__16->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_0__16->GetZaxis()->SetLabelSize(0.045);
   hist_eta_0__16->GetZaxis()->SetTitleSize(0.035);
   hist_eta_0__16->GetZaxis()->SetTitleFont(42);
   hist_eta_0__16->Draw("same");
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
      tex = new TLatex(0.25,0.08,"25 < p_{T}^{ave} < 55 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_0_0->Modified();
   cppNB->cd();
  
// ------------>Primitives in pad: p_0_1
   TPad *p_0_1 = new TPad("p_0_1", "p_0_1",0,0,0.3825653,0.539394);
   p_0_1->Draw();
   p_0_1->cd();
   p_0_1->Range(-0.9457368,-0.3156263,2.999,0.9999);
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
   
   TH1D *emptyNB__17 = new TH1D("emptyNB__17","",10,0.001,2.999);
   emptyNB__17->SetBinContent(4,1000);
   emptyNB__17->SetBinError(4,1000);
   emptyNB__17->SetMinimum(0.0001);
   emptyNB__17->SetMaximum(0.9999);
   emptyNB__17->SetEntries(1);
   emptyNB__17->SetLineStyle(0);
   emptyNB__17->SetMarkerStyle(20);
   emptyNB__17->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__17->GetXaxis()->CenterTitle(true);
   emptyNB__17->GetXaxis()->SetLabelFont(43);
   emptyNB__17->GetXaxis()->SetLabelOffset(0.01);
   emptyNB__17->GetXaxis()->SetLabelSize(33);
   emptyNB__17->GetXaxis()->SetTitleSize(33);
   emptyNB__17->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__17->GetXaxis()->SetTitleFont(43);
   emptyNB__17->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__17->GetYaxis()->CenterTitle(true);
   emptyNB__17->GetYaxis()->SetNdivisions(505);
   emptyNB__17->GetYaxis()->SetLabelFont(43);
   emptyNB__17->GetYaxis()->SetLabelOffset(0.01);
   emptyNB__17->GetYaxis()->SetLabelSize(33);
   emptyNB__17->GetYaxis()->SetTitleSize(33);
   emptyNB__17->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__17->GetYaxis()->SetTitleFont(43);
   emptyNB__17->GetZaxis()->SetLabelFont(42);
   emptyNB__17->GetZaxis()->SetLabelSize(0.045);
   emptyNB__17->GetZaxis()->SetTitleSize(0.035);
   emptyNB__17->GetZaxis()->SetTitleFont(42);
   emptyNB__17->Draw("");
   
   Double_t Graph0_fx1008[28] = {
   -2.7495,
   -2.336,
   -2.051,
   -1.835,
   -1.653,
   -1.479,
   -1.305,
   -1.131,
   -0.9615,
   -0.7875,
   -0.609,
   -0.435,
   -0.261,
   -0.087,
   0.087,
   0.261,
   0.435,
   0.609,
   0.7875,
   0.9615,
   1.131,
   1.305,
   1.479,
   1.653,
   1.835,
   2.051,
   2.336,
   2.7495};
   Double_t Graph0_fy1008[28] = {
   0.007229907,
   0.05696677,
   0.130559,
   0.2058586,
   0.2733904,
   0.3430156,
   0.4081894,
   0.4693367,
   0.5236344,
   0.5751489,
   0.6192943,
   0.6468971,
   0.6724481,
   0.6813266,
   0.6817587,
   0.6737393,
   0.6481268,
   0.6175544,
   0.5733925,
   0.5212969,
   0.4671186,
   0.4067921,
   0.3423929,
   0.2730578,
   0.2059209,
   0.1298205,
   0.05695034,
   0.007260045};
   Double_t Graph0_fex1008[28] = {
   0.1919231,
   0.1261539,
   0.09307691,
   0.0730769,
   0.06692309,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06346155,
   0.07038463,
   0.06692307,
   0.06692309,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692309,
   0.06692307,
   0.07038463,
   0.06346155,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06692309,
   0.0730769,
   0.09307691,
   0.1261539,
   0.1919231};
   Double_t Graph0_fey1008[28] = {
   -0.001114474,
   -0.003394677,
   -0.003451457,
   -0.003024597,
   -0.002944451,
   -0.000947648,
   -0.001645048,
   -0.002333101,
   -0.003098298,
   -0.003287734,
   -0.00394313,
   -0.005697991,
   -0.005600122,
   -0.005347217,
   -0.004788879,
   -0.004178131,
   -0.003289347,
   -0.001455156,
   -0.001006421,
   -0.001830869,
   -0.002462598,
   -0.002717907,
   -0.002982219,
   -0.004305253,
   -0.00422982,
   -0.004704143,
   -0.003621352,
   -0.0009051725};
   gre = new TGraphErrors(28,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1202;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","Graph",100,-3.529708,3.529708);
   Graph_Graph1008->SetMinimum(0);
   Graph_Graph1008->SetMaximum(0.7492116);
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
   Double_t xAxis10[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_3__18 = new TH1D("hist_eta_mc_3__18","",14, xAxis10);
   hist_eta_mc_3__18->SetBinContent(1,0.634252);
   hist_eta_mc_3__18->SetBinContent(2,0.6266243);
   hist_eta_mc_3__18->SetBinContent(3,0.6061878);
   hist_eta_mc_3__18->SetBinContent(4,0.5815776);
   hist_eta_mc_3__18->SetBinContent(5,0.5410702);
   hist_eta_mc_3__18->SetBinContent(6,0.5220866);
   hist_eta_mc_3__18->SetBinContent(7,0.4652909);
   hist_eta_mc_3__18->SetBinContent(8,0.4257131);
   hist_eta_mc_3__18->SetBinContent(9,0.3619569);
   hist_eta_mc_3__18->SetBinContent(10,0.304677);
   hist_eta_mc_3__18->SetBinContent(11,0.2398755);
   hist_eta_mc_3__18->SetBinContent(12,0.1638074);
   hist_eta_mc_3__18->SetBinContent(13,0.07978303);
   hist_eta_mc_3__18->SetBinContent(14,0.0127468);
   hist_eta_mc_3__18->SetBinError(1,0.009554112);
   hist_eta_mc_3__18->SetBinError(2,0.009496488);
   hist_eta_mc_3__18->SetBinError(3,0.009340347);
   hist_eta_mc_3__18->SetBinError(4,0.009148781);
   hist_eta_mc_3__18->SetBinError(5,0.008604692);
   hist_eta_mc_3__18->SetBinError(6,0.008901503);
   hist_eta_mc_3__18->SetBinError(7,0.008183172);
   hist_eta_mc_3__18->SetBinError(8,0.007827407);
   hist_eta_mc_3__18->SetBinError(9,0.007217517);
   hist_eta_mc_3__18->SetBinError(10,0.006621849);
   hist_eta_mc_3__18->SetBinError(11,0.005622768);
   hist_eta_mc_3__18->SetBinError(12,0.004117116);
   hist_eta_mc_3__18->SetBinError(13,0.002468041);
   hist_eta_mc_3__18->SetBinError(14,0.0007998055);
   hist_eta_mc_3__18->SetEntries(39947);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_3__18->SetLineColor(ci);
   hist_eta_mc_3__18->SetLineStyle(0);
   hist_eta_mc_3__18->SetMarkerStyle(20);
   hist_eta_mc_3__18->SetMarkerSize(0);
   hist_eta_mc_3__18->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_3__18->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_3__18->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_3__18->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_3__18->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_3__18->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_3__18->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_3__18->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_3__18->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_3__18->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_3__18->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_3__18->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_3__18->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_3__18->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_3__18->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_3__18->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_3__18->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_3__18->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_3__18->Draw("same");
   Double_t xAxis11[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_3__19 = new TH1D("hist_eta_mc_3__19","",14, xAxis11);
   hist_eta_mc_3__19->SetBinContent(1,0.634252);
   hist_eta_mc_3__19->SetBinContent(2,0.6266243);
   hist_eta_mc_3__19->SetBinContent(3,0.6061878);
   hist_eta_mc_3__19->SetBinContent(4,0.5815776);
   hist_eta_mc_3__19->SetBinContent(5,0.5410702);
   hist_eta_mc_3__19->SetBinContent(6,0.5220866);
   hist_eta_mc_3__19->SetBinContent(7,0.4652909);
   hist_eta_mc_3__19->SetBinContent(8,0.4257131);
   hist_eta_mc_3__19->SetBinContent(9,0.3619569);
   hist_eta_mc_3__19->SetBinContent(10,0.304677);
   hist_eta_mc_3__19->SetBinContent(11,0.2398755);
   hist_eta_mc_3__19->SetBinContent(12,0.1638074);
   hist_eta_mc_3__19->SetBinContent(13,0.07978303);
   hist_eta_mc_3__19->SetBinContent(14,0.0127468);
   hist_eta_mc_3__19->SetBinError(1,0.009554112);
   hist_eta_mc_3__19->SetBinError(2,0.009496488);
   hist_eta_mc_3__19->SetBinError(3,0.009340347);
   hist_eta_mc_3__19->SetBinError(4,0.009148781);
   hist_eta_mc_3__19->SetBinError(5,0.008604692);
   hist_eta_mc_3__19->SetBinError(6,0.008901503);
   hist_eta_mc_3__19->SetBinError(7,0.008183172);
   hist_eta_mc_3__19->SetBinError(8,0.007827407);
   hist_eta_mc_3__19->SetBinError(9,0.007217517);
   hist_eta_mc_3__19->SetBinError(10,0.006621849);
   hist_eta_mc_3__19->SetBinError(11,0.005622768);
   hist_eta_mc_3__19->SetBinError(12,0.004117116);
   hist_eta_mc_3__19->SetBinError(13,0.002468041);
   hist_eta_mc_3__19->SetBinError(14,0.0007998055);
   hist_eta_mc_3__19->SetEntries(39947);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_3__19->SetLineColor(ci);
   hist_eta_mc_3__19->SetLineStyle(0);
   hist_eta_mc_3__19->SetMarkerStyle(20);
   hist_eta_mc_3__19->SetMarkerSize(0);
   hist_eta_mc_3__19->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_3__19->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_3__19->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_3__19->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_3__19->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_3__19->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_3__19->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_3__19->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_3__19->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_3__19->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_3__19->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_3__19->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_3__19->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_3__19->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_3__19->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_3__19->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_3__19->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_3__19->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_3__19->Draw("same hist");
   Double_t xAxis12[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_3__20 = new TH1D("hist_eta_3__20","",14, xAxis12);
   hist_eta_3__20->SetBinContent(1,0.6807665);
   hist_eta_3__20->SetBinContent(2,0.6723327);
   hist_eta_3__20->SetBinContent(3,0.6472075);
   hist_eta_3__20->SetBinContent(4,0.618078);
   hist_eta_3__20->SetBinContent(5,0.573635);
   hist_eta_3__20->SetBinContent(6,0.5219166);
   hist_eta_3__20->SetBinContent(7,0.4680322);
   hist_eta_3__20->SetBinContent(8,0.4077192);
   hist_eta_3__20->SetBinContent(9,0.3430701);
   hist_eta_3__20->SetBinContent(10,0.2739602);
   hist_eta_3__20->SetBinContent(11,0.2060206);
   hist_eta_3__20->SetBinContent(12,0.1309021);
   hist_eta_3__20->SetBinContent(13,0.05782154);
   hist_eta_3__20->SetBinContent(14,0.007571003);
   hist_eta_3__20->SetBinError(1,0.002657461);
   hist_eta_3__20->SetBinError(2,0.002640948);
   hist_eta_3__20->SetBinError(3,0.002591132);
   hist_eta_3__20->SetBinError(4,0.00253215);
   hist_eta_3__20->SetBinError(5,0.002378673);
   hist_eta_3__20->SetBinError(6,0.002389467);
   hist_eta_3__20->SetBinError(7,0.002203462);
   hist_eta_3__20->SetBinError(8,0.002056593);
   hist_eta_3__20->SetBinError(9,0.00188651);
   hist_eta_3__20->SetBinError(10,0.001685821);
   hist_eta_3__20->SetBinError(11,0.00139901);
   hist_eta_3__20->SetBinError(12,0.000988116);
   hist_eta_3__20->SetBinError(13,0.0005640924);
   hist_eta_3__20->SetBinError(14,0.0001654889);
   hist_eta_3__20->SetEntries(554021);

   ci = TColor::GetColor("#0000cc");
   hist_eta_3__20->SetLineColor(ci);
   hist_eta_3__20->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_3__20->SetMarkerColor(ci);
   hist_eta_3__20->SetMarkerStyle(21);
   hist_eta_3__20->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_3__20->GetXaxis()->SetLabelFont(42);
   hist_eta_3__20->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_3__20->GetXaxis()->SetLabelSize(0.045);
   hist_eta_3__20->GetXaxis()->SetTitleSize(0.055);
   hist_eta_3__20->GetXaxis()->SetTitleFont(42);
   hist_eta_3__20->GetYaxis()->SetTitle("Event fraction");
   hist_eta_3__20->GetYaxis()->SetLabelFont(42);
   hist_eta_3__20->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_3__20->GetYaxis()->SetLabelSize(0.045);
   hist_eta_3__20->GetYaxis()->SetTitleSize(0.055);
   hist_eta_3__20->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_3__20->GetYaxis()->SetTitleFont(42);
   hist_eta_3__20->GetZaxis()->SetLabelFont(42);
   hist_eta_3__20->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_3__20->GetZaxis()->SetLabelSize(0.045);
   hist_eta_3__20->GetZaxis()->SetTitleSize(0.035);
   hist_eta_3__20->GetZaxis()->SetTitleFont(42);
   hist_eta_3__20->Draw("same");
      tex = new TLatex(0.25,0.29,"95 < p_{T}^{ave} < 115 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_0_1->Modified();
   cppNB->cd();
  
// ------------>Primitives in pad: p_1_0
   TPad *p_1_0 = new TPad("p_1_0", "p_1_0",0.3825653,0.5393939,0.673315,1);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(0.001,0.0001,2.999,1.123471);
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
   
   TH1D *emptyNB__21 = new TH1D("emptyNB__21","",10,0.001,2.999);
   emptyNB__21->SetBinContent(4,1000);
   emptyNB__21->SetBinError(4,1000);
   emptyNB__21->SetMinimum(0.0001);
   emptyNB__21->SetMaximum(0.9999);
   emptyNB__21->SetEntries(1);
   emptyNB__21->SetLineStyle(0);
   emptyNB__21->SetMarkerStyle(20);
   emptyNB__21->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__21->GetXaxis()->CenterTitle(true);
   emptyNB__21->GetXaxis()->SetLabelFont(43);
   emptyNB__21->GetXaxis()->SetLabelOffset(0.01);
   emptyNB__21->GetXaxis()->SetLabelSize(33);
   emptyNB__21->GetXaxis()->SetTitleSize(33);
   emptyNB__21->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__21->GetXaxis()->SetTitleFont(43);
   emptyNB__21->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__21->GetYaxis()->CenterTitle(true);
   emptyNB__21->GetYaxis()->SetNdivisions(505);
   emptyNB__21->GetYaxis()->SetLabelFont(43);
   emptyNB__21->GetYaxis()->SetLabelOffset(0.01);
   emptyNB__21->GetYaxis()->SetLabelSize(33);
   emptyNB__21->GetYaxis()->SetTitleSize(33);
   emptyNB__21->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__21->GetYaxis()->SetTitleFont(43);
   emptyNB__21->GetZaxis()->SetLabelFont(42);
   emptyNB__21->GetZaxis()->SetLabelSize(0.045);
   emptyNB__21->GetZaxis()->SetTitleSize(0.035);
   emptyNB__21->GetZaxis()->SetTitleFont(42);
   emptyNB__21->Draw("");
   
   Double_t Graph0_fx1009[28] = {
   -2.7495,
   -2.336,
   -2.051,
   -1.835,
   -1.653,
   -1.479,
   -1.305,
   -1.131,
   -0.9615,
   -0.7875,
   -0.609,
   -0.435,
   -0.261,
   -0.087,
   0.087,
   0.261,
   0.435,
   0.609,
   0.7875,
   0.9615,
   1.131,
   1.305,
   1.479,
   1.653,
   1.835,
   2.051,
   2.336,
   2.7495};
   Double_t Graph0_fy1009[28] = {
   0.02718834,
   0.1017913,
   0.1877352,
   0.2409478,
   0.3099809,
   0.3723995,
   0.4179062,
   0.4476868,
   0.4973355,
   0.5373895,
   0.5746771,
   0.5736465,
   0.6163843,
   0.6001021,
   0.5998263,
   0.6173452,
   0.5759414,
   0.5776083,
   0.539108,
   0.4990223,
   0.4486733,
   0.4179581,
   0.3698537,
   0.3087979,
   0.2417091,
   0.1895519,
   0.1026649,
   0.02649999};
   Double_t Graph0_fex1009[28] = {
   0.1919231,
   0.1261539,
   0.09307691,
   0.0730769,
   0.06692309,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06346155,
   0.07038463,
   0.06692307,
   0.06692309,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692309,
   0.06692307,
   0.07038463,
   0.06346155,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06692309,
   0.0730769,
   0.09307691,
   0.1261539,
   0.1919231};
   Double_t Graph0_fey1009[28] = {
   -0.002086059,
   -0.003812566,
   -0.004740607,
   -0.004089561,
   -0.00347218,
   -0.002928486,
   -0.002905819,
   -0.003020972,
   -0.002861037,
   -0.00332159,
   -0.003026598,
   -0.0042031,
   -0.004613782,
   -0.005006728,
   -0.004944464,
   -0.004641294,
   -0.004526579,
   -0.00511603,
   -0.005311818,
   -0.003715087,
   -0.003191356,
   -0.002791539,
   -0.005603112,
   -0.004750771,
   -0.004145275,
   -0.004919935,
   -0.004129283,
   -0.002137657};
   gre = new TGraphErrors(28,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1200;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,-3.529708,3.529708);
   Graph_Graph1009->SetMinimum(0);
   Graph_Graph1009->SetMaximum(0.6764297);
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
   Double_t xAxis13[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_1__22 = new TH1D("hist_eta_mc_1__22","",14, xAxis13);
   hist_eta_mc_1__22->SetBinContent(1,0.5765465);
   hist_eta_mc_1__22->SetBinContent(2,0.5640533);
   hist_eta_mc_1__22->SetBinContent(3,0.5572769);
   hist_eta_mc_1__22->SetBinContent(4,0.5317768);
   hist_eta_mc_1__22->SetBinContent(5,0.5180216);
   hist_eta_mc_1__22->SetBinContent(6,0.4860704);
   hist_eta_mc_1__22->SetBinContent(7,0.4489817);
   hist_eta_mc_1__22->SetBinContent(8,0.4054324);
   hist_eta_mc_1__22->SetBinContent(9,0.3755966);
   hist_eta_mc_1__22->SetBinContent(10,0.3210316);
   hist_eta_mc_1__22->SetBinContent(11,0.2771151);
   hist_eta_mc_1__22->SetBinContent(12,0.2139905);
   hist_eta_mc_1__22->SetBinContent(13,0.1310327);
   hist_eta_mc_1__22->SetBinContent(14,0.03956524);
   hist_eta_mc_1__22->SetBinError(1,0.004303065);
   hist_eta_mc_1__22->SetBinError(2,0.004256188);
   hist_eta_mc_1__22->SetBinError(3,0.004230544);
   hist_eta_mc_1__22->SetBinError(4,0.004132619);
   hist_eta_mc_1__22->SetBinError(5,0.003977258);
   hist_eta_mc_1__22->SetBinError(6,0.004057355);
   hist_eta_mc_1__22->SetBinError(7,0.003797301);
   hist_eta_mc_1__22->SetBinError(8,0.003608444);
   hist_eta_mc_1__22->SetBinError(9,0.003473134);
   hist_eta_mc_1__22->SetBinError(10,0.003210958);
   hist_eta_mc_1__22->SetBinError(11,0.002854885);
   hist_eta_mc_1__22->SetBinError(12,0.002222926);
   hist_eta_mc_1__22->SetBinError(13,0.00149413);
   hist_eta_mc_1__22->SetBinError(14,0.000665644);
   hist_eta_mc_1__22->SetEntries(178963);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_1__22->SetLineColor(ci);
   hist_eta_mc_1__22->SetLineStyle(0);
   hist_eta_mc_1__22->SetMarkerStyle(20);
   hist_eta_mc_1__22->SetMarkerSize(0);
   hist_eta_mc_1__22->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_1__22->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_1__22->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_1__22->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_1__22->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_1__22->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_1__22->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_1__22->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_1__22->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_1__22->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_1__22->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_1__22->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_1__22->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_1__22->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_1__22->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_1__22->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_1__22->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_1__22->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_1__22->Draw("same");
   Double_t xAxis14[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_1__23 = new TH1D("hist_eta_mc_1__23","",14, xAxis14);
   hist_eta_mc_1__23->SetBinContent(1,0.5765465);
   hist_eta_mc_1__23->SetBinContent(2,0.5640533);
   hist_eta_mc_1__23->SetBinContent(3,0.5572769);
   hist_eta_mc_1__23->SetBinContent(4,0.5317768);
   hist_eta_mc_1__23->SetBinContent(5,0.5180216);
   hist_eta_mc_1__23->SetBinContent(6,0.4860704);
   hist_eta_mc_1__23->SetBinContent(7,0.4489817);
   hist_eta_mc_1__23->SetBinContent(8,0.4054324);
   hist_eta_mc_1__23->SetBinContent(9,0.3755966);
   hist_eta_mc_1__23->SetBinContent(10,0.3210316);
   hist_eta_mc_1__23->SetBinContent(11,0.2771151);
   hist_eta_mc_1__23->SetBinContent(12,0.2139905);
   hist_eta_mc_1__23->SetBinContent(13,0.1310327);
   hist_eta_mc_1__23->SetBinContent(14,0.03956524);
   hist_eta_mc_1__23->SetBinError(1,0.004303065);
   hist_eta_mc_1__23->SetBinError(2,0.004256188);
   hist_eta_mc_1__23->SetBinError(3,0.004230544);
   hist_eta_mc_1__23->SetBinError(4,0.004132619);
   hist_eta_mc_1__23->SetBinError(5,0.003977258);
   hist_eta_mc_1__23->SetBinError(6,0.004057355);
   hist_eta_mc_1__23->SetBinError(7,0.003797301);
   hist_eta_mc_1__23->SetBinError(8,0.003608444);
   hist_eta_mc_1__23->SetBinError(9,0.003473134);
   hist_eta_mc_1__23->SetBinError(10,0.003210958);
   hist_eta_mc_1__23->SetBinError(11,0.002854885);
   hist_eta_mc_1__23->SetBinError(12,0.002222926);
   hist_eta_mc_1__23->SetBinError(13,0.00149413);
   hist_eta_mc_1__23->SetBinError(14,0.000665644);
   hist_eta_mc_1__23->SetEntries(178963);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_1__23->SetLineColor(ci);
   hist_eta_mc_1__23->SetLineStyle(0);
   hist_eta_mc_1__23->SetMarkerStyle(20);
   hist_eta_mc_1__23->SetMarkerSize(0);
   hist_eta_mc_1__23->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_1__23->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_1__23->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_1__23->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_1__23->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_1__23->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_1__23->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_1__23->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_1__23->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_1__23->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_1__23->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_1__23->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_1__23->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_1__23->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_1__23->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_1__23->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_1__23->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_1__23->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_1__23->Draw("same hist");
   Double_t xAxis15[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_1__24 = new TH1D("hist_eta_1__24","",14, xAxis15);
   hist_eta_1__24->SetBinContent(1,0.5996671);
   hist_eta_1__24->SetBinContent(2,0.616249);
   hist_eta_1__24->SetBinContent(3,0.5746583);
   hist_eta_1__24->SetBinContent(4,0.5757456);
   hist_eta_1__24->SetBinContent(5,0.5368332);
   hist_eta_1__24->SetBinContent(6,0.4970717);
   hist_eta_1__24->SetBinContent(7,0.4479834);
   hist_eta_1__24->SetBinContent(8,0.4183534);
   hist_eta_1__24->SetBinContent(9,0.3726852);
   hist_eta_1__24->SetBinContent(10,0.3107069);
   hist_eta_1__24->SetBinContent(11,0.2424707);
   hist_eta_1__24->SetBinContent(12,0.1891969);
   hist_eta_1__24->SetBinContent(13,0.1013761);
   hist_eta_1__24->SetBinContent(14,0.02654064);
   hist_eta_1__24->SetBinError(1,0.01276755);
   hist_eta_1__24->SetBinError(2,0.01294287);
   hist_eta_1__24->SetBinError(3,0.01249848);
   hist_eta_1__24->SetBinError(4,0.0125103);
   hist_eta_1__24->SetBinError(5,0.01177934);
   hist_eta_1__24->SetBinError(6,0.01193698);
   hist_eta_1__24->SetBinError(7,0.01103528);
   hist_eta_1__24->SetBinError(8,0.01066409);
   hist_eta_1__24->SetBinError(9,0.01006522);
   hist_eta_1__24->SetBinError(10,0.00919026);
   hist_eta_1__24->SetBinError(11,0.007769263);
   hist_eta_1__24->SetBinError(12,0.006081017);
   hist_eta_1__24->SetBinError(13,0.003823471);
   hist_eta_1__24->SetBinError(14,0.001586107);
   hist_eta_1__24->SetEntries(21156);

   ci = TColor::GetColor("#0000cc");
   hist_eta_1__24->SetLineColor(ci);
   hist_eta_1__24->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_1__24->SetMarkerColor(ci);
   hist_eta_1__24->SetMarkerStyle(21);
   hist_eta_1__24->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_1__24->GetXaxis()->SetLabelFont(42);
   hist_eta_1__24->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_1__24->GetXaxis()->SetLabelSize(0.045);
   hist_eta_1__24->GetXaxis()->SetTitleSize(0.055);
   hist_eta_1__24->GetXaxis()->SetTitleFont(42);
   hist_eta_1__24->GetYaxis()->SetTitle("Event fraction");
   hist_eta_1__24->GetYaxis()->SetLabelFont(42);
   hist_eta_1__24->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_1__24->GetYaxis()->SetLabelSize(0.045);
   hist_eta_1__24->GetYaxis()->SetTitleSize(0.055);
   hist_eta_1__24->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_1__24->GetYaxis()->SetTitleFont(42);
   hist_eta_1__24->GetZaxis()->SetLabelFont(42);
   hist_eta_1__24->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_1__24->GetZaxis()->SetLabelSize(0.045);
   hist_eta_1__24->GetZaxis()->SetTitleSize(0.035);
   hist_eta_1__24->GetZaxis()->SetTitleFont(42);
   hist_eta_1__24->Draw("same");
      tex = new TLatex(0.05,0.93,"p_{T,1} > 20, p_{T,2} > 30 GeV, #Delta#phi_{1,2} > 2#pi/3");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(24);
   tex->Draw();
      tex = new TLatex(0.1,0.08,"55 < p_{T}^{ave} < 75 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_0->Modified();
   cppNB->cd();
  
// ------------>Primitives in pad: p_1_1
   TPad *p_1_1 = new TPad("p_1_1", "p_1_1",0.3825653,0,0.673315,0.539394);
   p_1_1->Draw();
   p_1_1->cd();
   p_1_1->Range(0.001,-0.3156263,2.999,0.9999);
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
   
   TH1D *emptyNB__25 = new TH1D("emptyNB__25","",10,0.001,2.999);
   emptyNB__25->SetBinContent(4,1000);
   emptyNB__25->SetBinError(4,1000);
   emptyNB__25->SetMinimum(0.0001);
   emptyNB__25->SetMaximum(0.9999);
   emptyNB__25->SetEntries(1);
   emptyNB__25->SetLineStyle(0);
   emptyNB__25->SetMarkerStyle(20);
   emptyNB__25->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__25->GetXaxis()->CenterTitle(true);
   emptyNB__25->GetXaxis()->SetLabelFont(43);
   emptyNB__25->GetXaxis()->SetLabelOffset(0.01);
   emptyNB__25->GetXaxis()->SetLabelSize(33);
   emptyNB__25->GetXaxis()->SetTitleSize(33);
   emptyNB__25->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__25->GetXaxis()->SetTitleFont(43);
   emptyNB__25->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__25->GetYaxis()->CenterTitle(true);
   emptyNB__25->GetYaxis()->SetNdivisions(505);
   emptyNB__25->GetYaxis()->SetLabelFont(43);
   emptyNB__25->GetYaxis()->SetLabelOffset(0.01);
   emptyNB__25->GetYaxis()->SetLabelSize(33);
   emptyNB__25->GetYaxis()->SetTitleSize(33);
   emptyNB__25->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__25->GetYaxis()->SetTitleFont(43);
   emptyNB__25->GetZaxis()->SetLabelFont(42);
   emptyNB__25->GetZaxis()->SetLabelSize(0.045);
   emptyNB__25->GetZaxis()->SetTitleSize(0.035);
   emptyNB__25->GetZaxis()->SetTitleFont(42);
   emptyNB__25->Draw("");
   
   Double_t Graph0_fx1010[28] = {
   -2.7495,
   -2.336,
   -2.051,
   -1.835,
   -1.653,
   -1.479,
   -1.305,
   -1.131,
   -0.9615,
   -0.7875,
   -0.609,
   -0.435,
   -0.261,
   -0.087,
   0.087,
   0.261,
   0.435,
   0.609,
   0.7875,
   0.9615,
   1.131,
   1.305,
   1.479,
   1.653,
   1.835,
   2.051,
   2.336,
   2.7495};
   Double_t Graph0_fy1010[28] = {
   0.004252869,
   0.04505762,
   0.117552,
   0.1950454,
   0.2619139,
   0.3353576,
   0.4043357,
   0.4699774,
   0.5290209,
   0.5720866,
   0.6247572,
   0.6672331,
   0.6925119,
   0.7045923,
   0.7051771,
   0.6912513,
   0.6655285,
   0.6232269,
   0.5728244,
   0.5308072,
   0.4724997,
   0.4064366,
   0.3362866,
   0.2623862,
   0.195022,
   0.1175852,
   0.04523423,
   0.004247101};
   Double_t Graph0_fex1010[28] = {
   0.1919231,
   0.1261539,
   0.09307691,
   0.0730769,
   0.06692309,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06346155,
   0.07038463,
   0.06692307,
   0.06692309,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692309,
   0.06692307,
   0.07038463,
   0.06346155,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06692309,
   0.0730769,
   0.09307691,
   0.1261539,
   0.1919231};
   Double_t Graph0_fey1010[28] = {
   -0.001539827,
   -0.005028103,
   -0.005621106,
   -0.005347752,
   -0.003638337,
   -0.003163372,
   -0.003239402,
   -0.003002277,
   -0.003068595,
   -0.002982906,
   -0.005381016,
   -0.005262932,
   -0.005579888,
   -0.004590422,
   -0.002897057,
   -0.002919574,
   -0.00301361,
   -0.003040962,
   -0.002974678,
   -0.002229591,
   -0.002903668,
   -0.003286538,
   -0.005267145,
   -0.005286897,
   -0.006213747,
   -0.006279866,
   -0.004143896,
   -0.001623818};
   gre = new TGraphErrors(28,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1203;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,-3.529708,3.529708);
   Graph_Graph1010->SetMinimum(0);
   Graph_Graph1010->SetMaximum(0.7752701);
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
   Double_t xAxis16[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_4__26 = new TH1D("hist_eta_mc_4__26","",14, xAxis16);
   hist_eta_mc_4__26->SetBinContent(1,0.6317667);
   hist_eta_mc_4__26->SetBinContent(2,0.6328504);
   hist_eta_mc_4__26->SetBinContent(3,0.6260776);
   hist_eta_mc_4__26->SetBinContent(4,0.5962772);
   hist_eta_mc_4__26->SetBinContent(5,0.5499513);
   hist_eta_mc_4__26->SetBinContent(6,0.5350955);
   hist_eta_mc_4__26->SetBinContent(7,0.4797851);
   hist_eta_mc_4__26->SetBinContent(8,0.4280409);
   hist_eta_mc_4__26->SetBinContent(9,0.3735876);
   hist_eta_mc_4__26->SetBinContent(10,0.2925849);
   hist_eta_mc_4__26->SetBinContent(11,0.2222961);
   hist_eta_mc_4__26->SetBinContent(12,0.1468701);
   hist_eta_mc_4__26->SetBinContent(13,0.06812114);
   hist_eta_mc_4__26->SetBinContent(14,0.008690899);
   hist_eta_mc_4__26->SetBinError(1,0.01308255);
   hist_eta_mc_4__26->SetBinError(2,0.01309377);
   hist_eta_mc_4__26->SetBinError(3,0.01302351);
   hist_eta_mc_4__26->SetBinError(4,0.01270979);
   hist_eta_mc_4__26->SetBinError(5,0.01190215);
   hist_eta_mc_4__26->SetBinError(6,0.0123641);
   hist_eta_mc_4__26->SetBinError(7,0.01140086);
   hist_eta_mc_4__26->SetBinError(8,0.01076854);
   hist_eta_mc_4__26->SetBinError(9,0.01006029);
   hist_eta_mc_4__26->SetBinError(10,0.008903076);
   hist_eta_mc_4__26->SetBinError(11,0.007426391);
   hist_eta_mc_4__26->SetBinError(12,0.005348694);
   hist_eta_mc_4__26->SetBinError(13,0.003128908);
   hist_eta_mc_4__26->SetBinError(14,0.0009060889);
   hist_eta_mc_4__26->SetEntries(21228);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_4__26->SetLineColor(ci);
   hist_eta_mc_4__26->SetLineStyle(0);
   hist_eta_mc_4__26->SetMarkerStyle(20);
   hist_eta_mc_4__26->SetMarkerSize(0);
   hist_eta_mc_4__26->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_4__26->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_4__26->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_4__26->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_4__26->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_4__26->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_4__26->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_4__26->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_4__26->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_4__26->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_4__26->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_4__26->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_4__26->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_4__26->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_4__26->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_4__26->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_4__26->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_4__26->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_4__26->Draw("same");
   Double_t xAxis17[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_4__27 = new TH1D("hist_eta_mc_4__27","",14, xAxis17);
   hist_eta_mc_4__27->SetBinContent(1,0.6317667);
   hist_eta_mc_4__27->SetBinContent(2,0.6328504);
   hist_eta_mc_4__27->SetBinContent(3,0.6260776);
   hist_eta_mc_4__27->SetBinContent(4,0.5962772);
   hist_eta_mc_4__27->SetBinContent(5,0.5499513);
   hist_eta_mc_4__27->SetBinContent(6,0.5350955);
   hist_eta_mc_4__27->SetBinContent(7,0.4797851);
   hist_eta_mc_4__27->SetBinContent(8,0.4280409);
   hist_eta_mc_4__27->SetBinContent(9,0.3735876);
   hist_eta_mc_4__27->SetBinContent(10,0.2925849);
   hist_eta_mc_4__27->SetBinContent(11,0.2222961);
   hist_eta_mc_4__27->SetBinContent(12,0.1468701);
   hist_eta_mc_4__27->SetBinContent(13,0.06812114);
   hist_eta_mc_4__27->SetBinContent(14,0.008690899);
   hist_eta_mc_4__27->SetBinError(1,0.01308255);
   hist_eta_mc_4__27->SetBinError(2,0.01309377);
   hist_eta_mc_4__27->SetBinError(3,0.01302351);
   hist_eta_mc_4__27->SetBinError(4,0.01270979);
   hist_eta_mc_4__27->SetBinError(5,0.01190215);
   hist_eta_mc_4__27->SetBinError(6,0.0123641);
   hist_eta_mc_4__27->SetBinError(7,0.01140086);
   hist_eta_mc_4__27->SetBinError(8,0.01076854);
   hist_eta_mc_4__27->SetBinError(9,0.01006029);
   hist_eta_mc_4__27->SetBinError(10,0.008903076);
   hist_eta_mc_4__27->SetBinError(11,0.007426391);
   hist_eta_mc_4__27->SetBinError(12,0.005348694);
   hist_eta_mc_4__27->SetBinError(13,0.003128908);
   hist_eta_mc_4__27->SetBinError(14,0.0009060889);
   hist_eta_mc_4__27->SetEntries(21228);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_4__27->SetLineColor(ci);
   hist_eta_mc_4__27->SetLineStyle(0);
   hist_eta_mc_4__27->SetMarkerStyle(20);
   hist_eta_mc_4__27->SetMarkerSize(0);
   hist_eta_mc_4__27->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_4__27->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_4__27->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_4__27->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_4__27->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_4__27->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_4__27->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_4__27->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_4__27->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_4__27->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_4__27->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_4__27->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_4__27->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_4__27->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_4__27->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_4__27->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_4__27->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_4__27->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_4__27->Draw("same hist");
   Double_t xAxis18[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_4__28 = new TH1D("hist_eta_4__28","",14, xAxis18);
   hist_eta_4__28->SetBinContent(1,0.7046996);
   hist_eta_4__28->SetBinContent(2,0.6909722);
   hist_eta_4__28->SetBinContent(3,0.6653155);
   hist_eta_4__28->SetBinContent(4,0.6231085);
   hist_eta_4__28->SetBinContent(5,0.5728119);
   hist_eta_4__28->SetBinContent(6,0.5301952);
   hist_eta_4__28->SetBinContent(7,0.471469);
   hist_eta_4__28->SetBinContent(8,0.4051327);
   hist_eta_4__28->SetBinContent(9,0.3356836);
   hist_eta_4__28->SetBinContent(10,0.2626963);
   hist_eta_4__28->SetBinContent(11,0.1972119);
   hist_eta_4__28->SetBinContent(12,0.1191505);
   hist_eta_4__28->SetBinContent(13,0.0465447);
   hist_eta_4__28->SetBinContent(14,0.004894583);
   hist_eta_4__28->SetBinError(1,0.003691197);
   hist_eta_4__28->SetBinError(2,0.003655068);
   hist_eta_4__28->SetBinError(3,0.003586567);
   hist_eta_4__28->SetBinError(4,0.003470939);
   hist_eta_4__28->SetBinError(5,0.003245042);
   hist_eta_4__28->SetBinError(6,0.003287878);
   hist_eta_4__28->SetBinError(7,0.003019199);
   hist_eta_4__28->SetBinError(8,0.002798748);
   hist_eta_4__28->SetBinError(9,0.002547594);
   hist_eta_4__28->SetBinError(10,0.002253679);
   hist_eta_4__28->SetBinError(11,0.001868657);
   hist_eta_4__28->SetBinError(12,0.001287004);
   hist_eta_4__28->SetBinError(13,0.0006909363);
   hist_eta_4__28->SetBinError(14,0.000181655);
   hist_eta_4__28->SetEntries(297263);

   ci = TColor::GetColor("#0000cc");
   hist_eta_4__28->SetLineColor(ci);
   hist_eta_4__28->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_4__28->SetMarkerColor(ci);
   hist_eta_4__28->SetMarkerStyle(21);
   hist_eta_4__28->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_4__28->GetXaxis()->SetLabelFont(42);
   hist_eta_4__28->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_4__28->GetXaxis()->SetLabelSize(0.045);
   hist_eta_4__28->GetXaxis()->SetTitleSize(0.055);
   hist_eta_4__28->GetXaxis()->SetTitleFont(42);
   hist_eta_4__28->GetYaxis()->SetTitle("Event fraction");
   hist_eta_4__28->GetYaxis()->SetLabelFont(42);
   hist_eta_4__28->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_4__28->GetYaxis()->SetLabelSize(0.045);
   hist_eta_4__28->GetYaxis()->SetTitleSize(0.055);
   hist_eta_4__28->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_4__28->GetYaxis()->SetTitleFont(42);
   hist_eta_4__28->GetZaxis()->SetLabelFont(42);
   hist_eta_4__28->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_4__28->GetZaxis()->SetLabelSize(0.045);
   hist_eta_4__28->GetZaxis()->SetTitleSize(0.035);
   hist_eta_4__28->GetZaxis()->SetTitleFont(42);
   hist_eta_4__28->Draw("same");
      tex = new TLatex(0.08,0.29,"115 < p_{T}^{ave} < 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_1->Modified();
   cppNB->cd();
  
// ------------>Primitives in pad: p_2_0
   TPad *p_2_0 = new TPad("p_2_0", "p_2_0",0.673315,0.5393939,1,1);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(0.001,0.0001,3.369539,1.123471);
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
   
   TH1D *emptyNB__29 = new TH1D("emptyNB__29","",10,0.001,2.999);
   emptyNB__29->SetBinContent(4,1000);
   emptyNB__29->SetBinError(4,1000);
   emptyNB__29->SetMinimum(0.0001);
   emptyNB__29->SetMaximum(0.9999);
   emptyNB__29->SetEntries(1);
   emptyNB__29->SetLineStyle(0);
   emptyNB__29->SetMarkerStyle(20);
   emptyNB__29->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__29->GetXaxis()->CenterTitle(true);
   emptyNB__29->GetXaxis()->SetLabelFont(43);
   emptyNB__29->GetXaxis()->SetLabelOffset(0.01);
   emptyNB__29->GetXaxis()->SetLabelSize(33);
   emptyNB__29->GetXaxis()->SetTitleSize(33);
   emptyNB__29->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__29->GetXaxis()->SetTitleFont(43);
   emptyNB__29->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__29->GetYaxis()->CenterTitle(true);
   emptyNB__29->GetYaxis()->SetNdivisions(505);
   emptyNB__29->GetYaxis()->SetLabelFont(43);
   emptyNB__29->GetYaxis()->SetLabelOffset(0.01);
   emptyNB__29->GetYaxis()->SetLabelSize(33);
   emptyNB__29->GetYaxis()->SetTitleSize(33);
   emptyNB__29->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__29->GetYaxis()->SetTitleFont(43);
   emptyNB__29->GetZaxis()->SetLabelFont(42);
   emptyNB__29->GetZaxis()->SetLabelSize(0.045);
   emptyNB__29->GetZaxis()->SetTitleSize(0.035);
   emptyNB__29->GetZaxis()->SetTitleFont(42);
   emptyNB__29->Draw("");
   
   Double_t Graph0_fx1011[28] = {
   -2.7495,
   -2.336,
   -2.051,
   -1.835,
   -1.653,
   -1.479,
   -1.305,
   -1.131,
   -0.9615,
   -0.7875,
   -0.609,
   -0.435,
   -0.261,
   -0.087,
   0.087,
   0.261,
   0.435,
   0.609,
   0.7875,
   0.9615,
   1.131,
   1.305,
   1.479,
   1.653,
   1.835,
   2.051,
   2.336,
   2.7495};
   Double_t Graph0_fy1011[28] = {
   0.01426452,
   0.07797132,
   0.1562848,
   0.2230081,
   0.2902222,
   0.3469628,
   0.4073432,
   0.4656111,
   0.5128949,
   0.5561668,
   0.593231,
   0.6253302,
   0.6397726,
   0.6527801,
   0.6528352,
   0.6396063,
   0.6254999,
   0.5943895,
   0.5572686,
   0.5131947,
   0.4663005,
   0.4086444,
   0.3475558,
   0.2907411,
   0.2237133,
   0.1554432,
   0.07754686,
   0.01473256};
   Double_t Graph0_fex1011[28] = {
   0.1919231,
   0.1261539,
   0.09307691,
   0.0730769,
   0.06692309,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06346155,
   0.07038463,
   0.06692307,
   0.06692309,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692309,
   0.06692307,
   0.07038463,
   0.06346155,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06692309,
   0.0730769,
   0.09307691,
   0.1261539,
   0.1919231};
   Double_t Graph0_fey1011[28] = {
   -0.0020246,
   -0.00337118,
   -0.004141136,
   -0.003536851,
   -0.002834198,
   -0.002909323,
   -0.002849151,
   -0.003570755,
   -0.004696758,
   -0.005155701,
   -0.005566302,
   -0.005705044,
   -0.006619774,
   -0.00626309,
   -0.004550271,
   -0.00416431,
   -0.004490794,
   -0.004473153,
   -0.003316481,
   -0.002520984,
   -0.002112149,
   -0.001694408,
   -0.00293415,
   -0.003245711,
   -0.004167497,
   -0.004348668,
   -0.003883823,
   -0.001450288};
   gre = new TGraphErrors(28,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1201;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","Graph",100,-3.529708,3.529708);
   Graph_Graph1011->SetMinimum(0);
   Graph_Graph1011->SetMaximum(0.7166923);
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
   Double_t xAxis19[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_2__30 = new TH1D("hist_eta_mc_2__30","",14, xAxis19);
   hist_eta_mc_2__30->SetBinContent(1,0.5992986);
   hist_eta_mc_2__30->SetBinContent(2,0.5905302);
   hist_eta_mc_2__30->SetBinContent(3,0.5767512);
   hist_eta_mc_2__30->SetBinContent(4,0.5529021);
   hist_eta_mc_2__30->SetBinContent(5,0.5341875);
   hist_eta_mc_2__30->SetBinContent(6,0.4989335);
   hist_eta_mc_2__30->SetBinContent(7,0.4653652);
   hist_eta_mc_2__30->SetBinContent(8,0.4188213);
   hist_eta_mc_2__30->SetBinContent(9,0.3720809);
   hist_eta_mc_2__30->SetBinContent(10,0.3204774);
   hist_eta_mc_2__30->SetBinContent(11,0.2635515);
   hist_eta_mc_2__30->SetBinContent(12,0.1896316);
   hist_eta_mc_2__30->SetBinContent(13,0.1057868);
   hist_eta_mc_2__30->SetBinContent(14,0.02267024);
   hist_eta_mc_2__30->SetBinError(1,0.003836616);
   hist_eta_mc_2__30->SetBinError(2,0.003808446);
   hist_eta_mc_2__30->SetBinError(3,0.003763752);
   hist_eta_mc_2__30->SetBinError(4,0.003685113);
   hist_eta_mc_2__30->SetBinError(5,0.003532016);
   hist_eta_mc_2__30->SetBinError(6,0.00359485);
   hist_eta_mc_2__30->SetBinError(7,0.003380833);
   hist_eta_mc_2__30->SetBinError(8,0.003207311);
   hist_eta_mc_2__30->SetBinError(9,0.003023051);
   hist_eta_mc_2__30->SetBinError(10,0.002805598);
   hist_eta_mc_2__30->SetBinError(11,0.002434766);
   hist_eta_mc_2__30->SetBinError(12,0.001829991);
   hist_eta_mc_2__30->SetBinError(13,0.001174033);
   hist_eta_mc_2__30->SetBinError(14,0.0004406351);
   hist_eta_mc_2__30->SetEntries(234004);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_2__30->SetLineColor(ci);
   hist_eta_mc_2__30->SetLineStyle(0);
   hist_eta_mc_2__30->SetMarkerStyle(20);
   hist_eta_mc_2__30->SetMarkerSize(0);
   hist_eta_mc_2__30->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_2__30->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_2__30->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_2__30->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_2__30->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_2__30->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_2__30->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_2__30->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_2__30->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_2__30->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_2__30->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_2__30->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_2__30->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_2__30->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_2__30->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_2__30->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_2__30->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_2__30->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_2__30->Draw("same");
   Double_t xAxis20[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_2__31 = new TH1D("hist_eta_mc_2__31","",14, xAxis20);
   hist_eta_mc_2__31->SetBinContent(1,0.5992986);
   hist_eta_mc_2__31->SetBinContent(2,0.5905302);
   hist_eta_mc_2__31->SetBinContent(3,0.5767512);
   hist_eta_mc_2__31->SetBinContent(4,0.5529021);
   hist_eta_mc_2__31->SetBinContent(5,0.5341875);
   hist_eta_mc_2__31->SetBinContent(6,0.4989335);
   hist_eta_mc_2__31->SetBinContent(7,0.4653652);
   hist_eta_mc_2__31->SetBinContent(8,0.4188213);
   hist_eta_mc_2__31->SetBinContent(9,0.3720809);
   hist_eta_mc_2__31->SetBinContent(10,0.3204774);
   hist_eta_mc_2__31->SetBinContent(11,0.2635515);
   hist_eta_mc_2__31->SetBinContent(12,0.1896316);
   hist_eta_mc_2__31->SetBinContent(13,0.1057868);
   hist_eta_mc_2__31->SetBinContent(14,0.02267024);
   hist_eta_mc_2__31->SetBinError(1,0.003836616);
   hist_eta_mc_2__31->SetBinError(2,0.003808446);
   hist_eta_mc_2__31->SetBinError(3,0.003763752);
   hist_eta_mc_2__31->SetBinError(4,0.003685113);
   hist_eta_mc_2__31->SetBinError(5,0.003532016);
   hist_eta_mc_2__31->SetBinError(6,0.00359485);
   hist_eta_mc_2__31->SetBinError(7,0.003380833);
   hist_eta_mc_2__31->SetBinError(8,0.003207311);
   hist_eta_mc_2__31->SetBinError(9,0.003023051);
   hist_eta_mc_2__31->SetBinError(10,0.002805598);
   hist_eta_mc_2__31->SetBinError(11,0.002434766);
   hist_eta_mc_2__31->SetBinError(12,0.001829991);
   hist_eta_mc_2__31->SetBinError(13,0.001174033);
   hist_eta_mc_2__31->SetBinError(14,0.0004406351);
   hist_eta_mc_2__31->SetEntries(234004);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_2__31->SetLineColor(ci);
   hist_eta_mc_2__31->SetLineStyle(0);
   hist_eta_mc_2__31->SetMarkerStyle(20);
   hist_eta_mc_2__31->SetMarkerSize(0);
   hist_eta_mc_2__31->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_2__31->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_2__31->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_2__31->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_2__31->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_2__31->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_2__31->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_2__31->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_2__31->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_2__31->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_2__31->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_2__31->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_2__31->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_2__31->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_2__31->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_2__31->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_2__31->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_2__31->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_2__31->Draw("same hist");
   Double_t xAxis21[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_2__32 = new TH1D("hist_eta_2__32","",14, xAxis21);
   hist_eta_2__32->SetBinContent(1,0.6516173);
   hist_eta_2__32->SetBinContent(2,0.6379832);
   hist_eta_2__32->SetBinContent(3,0.6241913);
   hist_eta_2__32->SetBinContent(4,0.5936045);
   hist_eta_2__32->SetBinContent(5,0.5559017);
   hist_eta_2__32->SetBinContent(6,0.5120844);
   hist_eta_2__32->SetBinContent(7,0.465589);
   hist_eta_2__32->SetBinContent(8,0.4082819);
   hist_eta_2__32->SetBinContent(9,0.3482795);
   hist_eta_2__32->SetBinContent(10,0.2917533);
   hist_eta_2__32->SetBinContent(11,0.2250305);
   hist_eta_2__32->SetBinContent(12,0.1567252);
   hist_eta_2__32->SetBinContent(13,0.078955);
   hist_eta_2__32->SetBinContent(14,0.01500872);
   hist_eta_2__32->SetBinError(1,0.002211835);
   hist_eta_2__32->SetBinError(2,0.002188573);
   hist_eta_2__32->SetBinError(3,0.002164788);
   hist_eta_2__32->SetBinError(4,0.002111082);
   hist_eta_2__32->SetBinError(5,0.00199207);
   hist_eta_2__32->SetBinError(6,0.002013538);
   hist_eta_2__32->SetBinError(7,0.001869639);
   hist_eta_2__32->SetBinError(8,0.0017508);
   hist_eta_2__32->SetBinError(9,0.001617039);
   hist_eta_2__32->SetBinError(10,0.001480009);
   hist_eta_2__32->SetBinError(11,0.00124387);
   hist_eta_2__32->SetBinError(12,0.0009197987);
   hist_eta_2__32->SetBinError(13,0.000560769);
   hist_eta_2__32->SetBinError(14,0.0001982223);
   hist_eta_2__32->SetEntries(765501);

   ci = TColor::GetColor("#0000cc");
   hist_eta_2__32->SetLineColor(ci);
   hist_eta_2__32->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_2__32->SetMarkerColor(ci);
   hist_eta_2__32->SetMarkerStyle(21);
   hist_eta_2__32->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_2__32->GetXaxis()->SetLabelFont(42);
   hist_eta_2__32->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_2__32->GetXaxis()->SetLabelSize(0.045);
   hist_eta_2__32->GetXaxis()->SetTitleSize(0.055);
   hist_eta_2__32->GetXaxis()->SetTitleFont(42);
   hist_eta_2__32->GetYaxis()->SetTitle("Event fraction");
   hist_eta_2__32->GetYaxis()->SetLabelFont(42);
   hist_eta_2__32->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_2__32->GetYaxis()->SetLabelSize(0.045);
   hist_eta_2__32->GetYaxis()->SetTitleSize(0.055);
   hist_eta_2__32->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_2__32->GetYaxis()->SetTitleFont(42);
   hist_eta_2__32->GetZaxis()->SetLabelFont(42);
   hist_eta_2__32->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_2__32->GetZaxis()->SetLabelSize(0.045);
   hist_eta_2__32->GetZaxis()->SetTitleSize(0.035);
   hist_eta_2__32->GetZaxis()->SetTitleFont(42);
   hist_eta_2__32->Draw("same");
      tex = new TLatex(0.65,0.93,"pp 25.8 pb^{-1}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
      tex = new TLatex(0.1,0.08,"75 < p_{T}^{ave} < 95 GeV");
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
   TLegendEntry *entry=leg->AddEntry("hist_eta_0","pp","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("hist_eta_mc_0","PYTHIA 8","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   p_2_0->Modified();
   cppNB->cd();
  
// ------------>Primitives in pad: p_2_1
   TPad *p_2_1 = new TPad("p_2_1", "p_2_1",0.673315,0,1,0.539394);
   p_2_1->Draw();
   p_2_1->cd();
   p_2_1->Range(0.001,-0.3156263,3.369539,0.9999);
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
   
   TH1D *emptyNB__33 = new TH1D("emptyNB__33","",10,0.001,2.999);
   emptyNB__33->SetBinContent(4,1000);
   emptyNB__33->SetBinError(4,1000);
   emptyNB__33->SetMinimum(0.0001);
   emptyNB__33->SetMaximum(0.9999);
   emptyNB__33->SetEntries(1);
   emptyNB__33->SetLineStyle(0);
   emptyNB__33->SetMarkerStyle(20);
   emptyNB__33->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__33->GetXaxis()->CenterTitle(true);
   emptyNB__33->GetXaxis()->SetLabelFont(43);
   emptyNB__33->GetXaxis()->SetLabelOffset(0.01);
   emptyNB__33->GetXaxis()->SetLabelSize(33);
   emptyNB__33->GetXaxis()->SetTitleSize(33);
   emptyNB__33->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__33->GetXaxis()->SetTitleFont(43);
   emptyNB__33->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__33->GetYaxis()->CenterTitle(true);
   emptyNB__33->GetYaxis()->SetNdivisions(505);
   emptyNB__33->GetYaxis()->SetLabelFont(43);
   emptyNB__33->GetYaxis()->SetLabelOffset(0.01);
   emptyNB__33->GetYaxis()->SetLabelSize(33);
   emptyNB__33->GetYaxis()->SetTitleSize(33);
   emptyNB__33->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__33->GetYaxis()->SetTitleFont(43);
   emptyNB__33->GetZaxis()->SetLabelFont(42);
   emptyNB__33->GetZaxis()->SetLabelSize(0.045);
   emptyNB__33->GetZaxis()->SetTitleSize(0.035);
   emptyNB__33->GetZaxis()->SetTitleFont(42);
   emptyNB__33->Draw("");
   
   Double_t Graph0_fx1012[28] = {
   -2.7495,
   -2.336,
   -2.051,
   -1.835,
   -1.653,
   -1.479,
   -1.305,
   -1.131,
   -0.9615,
   -0.7875,
   -0.609,
   -0.435,
   -0.261,
   -0.087,
   0.087,
   0.261,
   0.435,
   0.609,
   0.7875,
   0.9615,
   1.131,
   1.305,
   1.479,
   1.653,
   1.835,
   2.051,
   2.336,
   2.7495};
   Double_t Graph0_fy1012[28] = {
   0.002142309,
   0.0327369,
   0.09834717,
   0.1735213,
   0.2453997,
   0.3211178,
   0.4013303,
   0.4715523,
   0.5357625,
   0.5940947,
   0.6475323,
   0.6839231,
   0.7144815,
   0.7282594,
   0.7285286,
   0.7141261,
   0.6839964,
   0.6479954,
   0.594133,
   0.5356081,
   0.4712499,
   0.4014961,
   0.3206656,
   0.2458006,
   0.1727825,
   0.09777428,
   0.03241166,
   0.001828822};
   Double_t Graph0_fex1012[28] = {
   0.1919231,
   0.1261539,
   0.09307691,
   0.0730769,
   0.06692309,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06346155,
   0.07038463,
   0.06692307,
   0.06692309,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692307,
   0.06692309,
   0.06692307,
   0.07038463,
   0.06346155,
   0.06692309,
   0.06692304,
   0.06692309,
   0.06692309,
   0.0730769,
   0.09307691,
   0.1261539,
   0.1919231};
   Double_t Graph0_fey1012[28] = {
   -0.001744254,
   -0.00669416,
   -0.009844578,
   -0.01022046,
   -0.008451975,
   -0.00660449,
   -0.004892958,
   -0.004317096,
   -0.00510316,
   -0.005878561,
   -0.005139599,
   -0.005730172,
   -0.006302854,
   -0.005617523,
   -0.005324773,
   -0.00520285,
   -0.004323176,
   -0.003470128,
   -0.001875264,
   -0.002717259,
   -0.003294955,
   -0.005935838,
   -0.007019944,
   -0.009627802,
   -0.01029762,
   -0.00933493,
   -0.006956448,
   -0.001591154};
   gre = new TGraphErrors(28,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1204;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","Graph",100,-3.529708,3.529708);
   Graph_Graph1012->SetMinimum(0);
   Graph_Graph1012->SetMaximum(0.8011986);
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
   Double_t xAxis22[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_5__34 = new TH1D("hist_eta_mc_5__34","",14, xAxis22);
   hist_eta_mc_5__34->SetBinContent(1,0.6705956);
   hist_eta_mc_5__34->SetBinContent(2,0.6620073);
   hist_eta_mc_5__34->SetBinContent(3,0.6451368);
   hist_eta_mc_5__34->SetBinContent(4,0.6120268);
   hist_eta_mc_5__34->SetBinContent(5,0.5728155);
   hist_eta_mc_5__34->SetBinContent(6,0.530355);
   hist_eta_mc_5__34->SetBinContent(7,0.4827432);
   hist_eta_mc_5__34->SetBinContent(8,0.4222616);
   hist_eta_mc_5__34->SetBinContent(9,0.3543968);
   hist_eta_mc_5__34->SetBinContent(10,0.2823238);
   hist_eta_mc_5__34->SetBinContent(11,0.2086786);
   hist_eta_mc_5__34->SetBinContent(12,0.128081);
   hist_eta_mc_5__34->SetBinContent(13,0.04804593);
   hist_eta_mc_5__34->SetBinContent(14,0.004775545);
   hist_eta_mc_5__34->SetBinError(1,0.003581467);
   hist_eta_mc_5__34->SetBinError(2,0.003558459);
   hist_eta_mc_5__34->SetBinError(3,0.003512825);
   hist_eta_mc_5__34->SetBinError(4,0.003421494);
   hist_eta_mc_5__34->SetBinError(5,0.003227655);
   hist_eta_mc_5__34->SetBinError(6,0.003270744);
   hist_eta_mc_5__34->SetBinError(7,0.003038706);
   hist_eta_mc_5__34->SetBinError(8,0.002841982);
   hist_eta_mc_5__34->SetBinError(9,0.002603607);
   hist_eta_mc_5__34->SetBinError(10,0.00232383);
   hist_eta_mc_5__34->SetBinError(11,0.00191191);
   hist_eta_mc_5__34->SetBinError(12,0.001327211);
   hist_eta_mc_5__34->SetBinError(13,0.0006982269);
   hist_eta_mc_5__34->SetBinError(14,0.0001784705);
   hist_eta_mc_5__34->SetEntries(300476);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_5__34->SetLineColor(ci);
   hist_eta_mc_5__34->SetLineStyle(0);
   hist_eta_mc_5__34->SetMarkerStyle(20);
   hist_eta_mc_5__34->SetMarkerSize(0);
   hist_eta_mc_5__34->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_5__34->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_5__34->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_5__34->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_5__34->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_5__34->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_5__34->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_5__34->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_5__34->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_5__34->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_5__34->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_5__34->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_5__34->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_5__34->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_5__34->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_5__34->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_5__34->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_5__34->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_5__34->Draw("same");
   Double_t xAxis23[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_mc_5__35 = new TH1D("hist_eta_mc_5__35","",14, xAxis23);
   hist_eta_mc_5__35->SetBinContent(1,0.6705956);
   hist_eta_mc_5__35->SetBinContent(2,0.6620073);
   hist_eta_mc_5__35->SetBinContent(3,0.6451368);
   hist_eta_mc_5__35->SetBinContent(4,0.6120268);
   hist_eta_mc_5__35->SetBinContent(5,0.5728155);
   hist_eta_mc_5__35->SetBinContent(6,0.530355);
   hist_eta_mc_5__35->SetBinContent(7,0.4827432);
   hist_eta_mc_5__35->SetBinContent(8,0.4222616);
   hist_eta_mc_5__35->SetBinContent(9,0.3543968);
   hist_eta_mc_5__35->SetBinContent(10,0.2823238);
   hist_eta_mc_5__35->SetBinContent(11,0.2086786);
   hist_eta_mc_5__35->SetBinContent(12,0.128081);
   hist_eta_mc_5__35->SetBinContent(13,0.04804593);
   hist_eta_mc_5__35->SetBinContent(14,0.004775545);
   hist_eta_mc_5__35->SetBinError(1,0.003581467);
   hist_eta_mc_5__35->SetBinError(2,0.003558459);
   hist_eta_mc_5__35->SetBinError(3,0.003512825);
   hist_eta_mc_5__35->SetBinError(4,0.003421494);
   hist_eta_mc_5__35->SetBinError(5,0.003227655);
   hist_eta_mc_5__35->SetBinError(6,0.003270744);
   hist_eta_mc_5__35->SetBinError(7,0.003038706);
   hist_eta_mc_5__35->SetBinError(8,0.002841982);
   hist_eta_mc_5__35->SetBinError(9,0.002603607);
   hist_eta_mc_5__35->SetBinError(10,0.00232383);
   hist_eta_mc_5__35->SetBinError(11,0.00191191);
   hist_eta_mc_5__35->SetBinError(12,0.001327211);
   hist_eta_mc_5__35->SetBinError(13,0.0006982269);
   hist_eta_mc_5__35->SetBinError(14,0.0001784705);
   hist_eta_mc_5__35->SetEntries(300476);

   ci = TColor::GetColor("#cc0000");
   hist_eta_mc_5__35->SetLineColor(ci);
   hist_eta_mc_5__35->SetLineStyle(0);
   hist_eta_mc_5__35->SetMarkerStyle(20);
   hist_eta_mc_5__35->SetMarkerSize(0);
   hist_eta_mc_5__35->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_mc_5__35->GetXaxis()->SetLabelFont(42);
   hist_eta_mc_5__35->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_mc_5__35->GetXaxis()->SetLabelSize(0.045);
   hist_eta_mc_5__35->GetXaxis()->SetTitleSize(0.055);
   hist_eta_mc_5__35->GetXaxis()->SetTitleFont(42);
   hist_eta_mc_5__35->GetYaxis()->SetTitle("Event fraction");
   hist_eta_mc_5__35->GetYaxis()->SetLabelFont(42);
   hist_eta_mc_5__35->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_mc_5__35->GetYaxis()->SetLabelSize(0.045);
   hist_eta_mc_5__35->GetYaxis()->SetTitleSize(0.055);
   hist_eta_mc_5__35->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_mc_5__35->GetYaxis()->SetTitleFont(42);
   hist_eta_mc_5__35->GetZaxis()->SetLabelFont(42);
   hist_eta_mc_5__35->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_mc_5__35->GetZaxis()->SetLabelSize(0.045);
   hist_eta_mc_5__35->GetZaxis()->SetTitleSize(0.035);
   hist_eta_mc_5__35->GetZaxis()->SetTitleFont(42);
   hist_eta_mc_5__35->Draw("same hist");
   Double_t xAxis24[15] = {0, 0.174, 0.348, 0.522, 0.696, 0.879, 1.044, 1.218, 1.392, 1.566, 1.74, 1.93, 2.172, 2.5, 2.999}; 
   
   TH1D *hist_eta_5__36 = new TH1D("hist_eta_5__36","",14, xAxis24);
   hist_eta_5__36->SetBinContent(1,0.7274174);
   hist_eta_5__36->SetBinContent(2,0.7130434);
   hist_eta_5__36->SetBinContent(3,0.683029);
   hist_eta_5__36->SetBinContent(4,0.6471448);
   hist_eta_5__36->SetBinContent(5,0.5941104);
   hist_eta_5__36->SetBinContent(6,0.5358318);
   hist_eta_5__36->SetBinContent(7,0.4716618);
   hist_eta_5__36->SetBinContent(8,0.4016214);
   hist_eta_5__36->SetBinContent(9,0.3216203);
   hist_eta_5__36->SetBinContent(10,0.2473091);
   hist_eta_5__36->SetBinContent(11,0.1752712);
   hist_eta_5__36->SetBinContent(12,0.09944021);
   hist_eta_5__36->SetBinContent(13,0.03419301);
   hist_eta_5__36->SetBinContent(14,0.002502546);
   hist_eta_5__36->SetBinError(1,0.00157147);
   hist_eta_5__36->SetBinError(2,0.001555866);
   hist_eta_5__36->SetBinError(3,0.001522768);
   hist_eta_5__36->SetBinError(4,0.001482228);
   hist_eta_5__36->SetBinError(5,0.001384831);
   hist_eta_5__36->SetBinError(6,0.001385036);
   hist_eta_5__36->SetBinError(7,0.001265405);
   hist_eta_5__36->SetBinError(8,0.001167677);
   hist_eta_5__36->SetBinError(9,0.001044927);
   hist_eta_5__36->SetBinError(10,0.0009162928);
   hist_eta_5__36->SetBinError(11,0.0007381886);
   hist_eta_5__36->SetBinError(12,0.0004926769);
   hist_eta_5__36->SetBinError(13,0.0002481536);
   hist_eta_5__36->SetBinError(14,5.442891e-05);
   hist_eta_5__36->SetEntries(1692879);

   ci = TColor::GetColor("#0000cc");
   hist_eta_5__36->SetLineColor(ci);
   hist_eta_5__36->SetLineStyle(0);

   ci = TColor::GetColor("#0000cc");
   hist_eta_5__36->SetMarkerColor(ci);
   hist_eta_5__36->SetMarkerStyle(21);
   hist_eta_5__36->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_5__36->GetXaxis()->SetLabelFont(42);
   hist_eta_5__36->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_5__36->GetXaxis()->SetLabelSize(0.045);
   hist_eta_5__36->GetXaxis()->SetTitleSize(0.055);
   hist_eta_5__36->GetXaxis()->SetTitleFont(42);
   hist_eta_5__36->GetYaxis()->SetTitle("Event fraction");
   hist_eta_5__36->GetYaxis()->SetLabelFont(42);
   hist_eta_5__36->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_5__36->GetYaxis()->SetLabelSize(0.045);
   hist_eta_5__36->GetYaxis()->SetTitleSize(0.055);
   hist_eta_5__36->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_5__36->GetYaxis()->SetTitleFont(42);
   hist_eta_5__36->GetZaxis()->SetLabelFont(42);
   hist_eta_5__36->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_5__36->GetZaxis()->SetLabelSize(0.045);
   hist_eta_5__36->GetZaxis()->SetTitleSize(0.035);
   hist_eta_5__36->GetZaxis()->SetTitleFont(42);
   hist_eta_5__36->Draw("same");
      tex = new TLatex(0.15,0.29,"p_{T}^{ave} > 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_2_1->Modified();
   cppNB->cd();
   cppNB->Modified();
   cppNB->cd();
   cppNB->SetSelected(cppNB);
}
