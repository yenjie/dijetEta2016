void ppDistsNBppjecv1()
{
//=========Macro generated from canvas: cppNB/
//=========  (Wed Nov 15 22:06:56 2017) by ROOT version6.10/08

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cppNB = new TCanvas("cppNB", "",619,52,1300,800);
   cppNB->Range(0,0,1,1);
   cppNB->SetFillColor(0);
   cppNB->SetBorderMode(0);
   cppNB->SetBorderSize(2);
   cppNB->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.5393939,0.3825653,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-0.9457368,0.0001,2.999,1.123471);
   p_0_0->SetFillColor(0);
   p_0_0->SetBorderMode(0);
   p_0_0->SetBorderSize(2);
   p_0_0->SetLeftMargin(0.24);
   p_0_0->SetRightMargin(0);
   p_0_0->SetBottomMargin(0);
   p_0_0->SetFrameBorderMode(0);
   p_0_0->SetFrameBorderMode(0);
   
   TH1D *emptyNB__13 = new TH1D("emptyNB__13","",10,0.001,2.999);
   emptyNB__13->SetBinContent(4,1000);
   emptyNB__13->SetBinError(4,1000);
   emptyNB__13->SetMinimum(0.0001);
   emptyNB__13->SetMaximum(0.9999);
   emptyNB__13->SetEntries(1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("emptyNB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyNB__13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyNB__13);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   emptyNB__13->SetLineColor(ci);
   emptyNB__13->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__13->GetXaxis()->CenterTitle(true);
   emptyNB__13->GetXaxis()->SetLabelFont(43);
   emptyNB__13->GetXaxis()->SetLabelSize(33);
   emptyNB__13->GetXaxis()->SetTitleSize(33);
   emptyNB__13->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__13->GetXaxis()->SetTitleFont(43);
   emptyNB__13->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__13->GetYaxis()->CenterTitle(true);
   emptyNB__13->GetYaxis()->SetNdivisions(505);
   emptyNB__13->GetYaxis()->SetLabelFont(43);
   emptyNB__13->GetYaxis()->SetLabelSize(33);
   emptyNB__13->GetYaxis()->SetTitleSize(33);
   emptyNB__13->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__13->GetYaxis()->SetTitleFont(43);
   emptyNB__13->GetZaxis()->SetLabelFont(42);
   emptyNB__13->GetZaxis()->SetLabelSize(0.035);
   emptyNB__13->GetZaxis()->SetTitleSize(0.035);
   emptyNB__13->GetZaxis()->SetTitleFont(42);
   emptyNB__13->Draw("");
   
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
   0.03531938,
   0.1129712,
   0.2577587,
   0.3097887,
   0.3965857,
   0.4629152,
   0.5098091,
   0.5700127,
   0.6055596,
   0.6074186,
   0.6054197,
   0.5455041,
   0.4928683,
   0.465511,
   0.3664511,
   0.3099503,
   0.2033578,
   0.03541572};
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
   -0.006955237,
   -0.007295814,
   -0.006958126,
   -0.006377582,
   -0.003838358,
   -0.002975514,
   -0.003494116,
   -0.005272064,
   -0.004485772,
   -0.005350952,
   -0.005685281,
   -0.003986211,
   -0.004493313,
   -0.003881027,
   -0.005822665,
   -0.00464365,
   -0.004320875,
   -0.001754857};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1198;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","Graph",100,-3.46425,3.51675);
   Graph_Graph1007->SetMinimum(0.03178744);
   Graph_Graph1007->SetMaximum(0.6646285);
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
   p_0_1->SetBorderSize(2);
   p_0_1->SetLeftMargin(0.24);
   p_0_1->SetRightMargin(0);
   p_0_1->SetTopMargin(0);
   p_0_1->SetBottomMargin(0.24);
   p_0_1->SetFrameBorderMode(0);
   p_0_1->SetFrameBorderMode(0);
   
   TH1D *emptyNB__17 = new TH1D("emptyNB__17","",10,0.001,2.999);
   emptyNB__17->SetBinContent(4,1000);
   emptyNB__17->SetBinError(4,1000);
   emptyNB__17->SetMinimum(0.0001);
   emptyNB__17->SetMaximum(0.9999);
   emptyNB__17->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyNB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyNB__17->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyNB__17);

   ci = TColor::GetColor("#000099");
   emptyNB__17->SetLineColor(ci);
   emptyNB__17->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__17->GetXaxis()->CenterTitle(true);
   emptyNB__17->GetXaxis()->SetLabelFont(43);
   emptyNB__17->GetXaxis()->SetLabelSize(33);
   emptyNB__17->GetXaxis()->SetTitleSize(33);
   emptyNB__17->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__17->GetXaxis()->SetTitleFont(43);
   emptyNB__17->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__17->GetYaxis()->CenterTitle(true);
   emptyNB__17->GetYaxis()->SetNdivisions(505);
   emptyNB__17->GetYaxis()->SetLabelFont(43);
   emptyNB__17->GetYaxis()->SetLabelSize(33);
   emptyNB__17->GetYaxis()->SetTitleSize(33);
   emptyNB__17->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__17->GetYaxis()->SetTitleFont(43);
   emptyNB__17->GetZaxis()->SetLabelFont(42);
   emptyNB__17->GetZaxis()->SetLabelSize(0.035);
   emptyNB__17->GetZaxis()->SetTitleSize(0.035);
   emptyNB__17->GetZaxis()->SetTitleFont(42);
   emptyNB__17->Draw("");
   
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
   0.01380092,
   0.05233004,
   0.2017121,
   0.2720095,
   0.4069333,
   0.4652584,
   0.5740491,
   0.6473658,
   0.6729548,
   0.682226,
   0.6723338,
   0.6190811,
   0.5216844,
   0.4689236,
   0.3429458,
   0.2744452,
   0.130804,
   0.007610739};
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
   -0.01380116,
   -0.01404918,
   -0.01856816,
   -0.01108064,
   -0.007636308,
   -0.00502635,
   -0.001967744,
   -0.001936544,
   -0.00502598,
   -0.004543592,
   -0.006114394,
   -0.003136474,
   -0.00329702,
   -0.002370845,
   -0.001334474,
   -0.001247967,
   -0.001713354,
   -0.0003650633};
   gre = new TGraphErrors(18,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1201;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","Graph",100,-3.46425,3.51675);
   Graph_Graph1008->SetMinimum(0.006849665);
   Graph_Graph1008->SetMaximum(0.7496875);
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
   p_1_0->SetBorderSize(2);
   p_1_0->SetLeftMargin(0);
   p_1_0->SetRightMargin(0);
   p_1_0->SetBottomMargin(0);
   p_1_0->SetFrameBorderMode(0);
   p_1_0->SetFrameBorderMode(0);
   
   TH1D *emptyNB__21 = new TH1D("emptyNB__21","",10,0.001,2.999);
   emptyNB__21->SetBinContent(4,1000);
   emptyNB__21->SetBinError(4,1000);
   emptyNB__21->SetMinimum(0.0001);
   emptyNB__21->SetMaximum(0.9999);
   emptyNB__21->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyNB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyNB__21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyNB__21);

   ci = TColor::GetColor("#000099");
   emptyNB__21->SetLineColor(ci);
   emptyNB__21->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__21->GetXaxis()->CenterTitle(true);
   emptyNB__21->GetXaxis()->SetLabelFont(43);
   emptyNB__21->GetXaxis()->SetLabelSize(33);
   emptyNB__21->GetXaxis()->SetTitleSize(33);
   emptyNB__21->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__21->GetXaxis()->SetTitleFont(43);
   emptyNB__21->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__21->GetYaxis()->CenterTitle(true);
   emptyNB__21->GetYaxis()->SetNdivisions(505);
   emptyNB__21->GetYaxis()->SetLabelFont(43);
   emptyNB__21->GetYaxis()->SetLabelSize(33);
   emptyNB__21->GetYaxis()->SetTitleSize(33);
   emptyNB__21->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__21->GetYaxis()->SetTitleFont(43);
   emptyNB__21->GetZaxis()->SetLabelFont(42);
   emptyNB__21->GetZaxis()->SetLabelSize(0.035);
   emptyNB__21->GetZaxis()->SetTitleSize(0.035);
   emptyNB__21->GetZaxis()->SetTitleFont(42);
   emptyNB__21->Draw("");
   
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
   0.02016033,
   0.09828542,
   0.2397812,
   0.3085687,
   0.4152721,
   0.4477397,
   0.5358276,
   0.5749004,
   0.6156195,
   0.601002,
   0.6173957,
   0.5776627,
   0.4979698,
   0.4472646,
   0.3734173,
   0.3111564,
   0.1898669,
   0.02707993};
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
   -0.01191381,
   -0.01082168,
   -0.01087245,
   -0.006442682,
   -0.00649089,
   -0.003246656,
   -0.002061231,
   -0.002405334,
   -0.003040544,
   -0.004816683,
   -0.005090407,
   -0.005949661,
   -0.003956702,
   -0.002303625,
   -0.002813263,
   -0.002523996,
   -0.001634806,
   -0.001467191};
   gre = new TGraphErrors(18,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1199;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,-3.46425,3.51675);
   Graph_Graph1009->SetMinimum(0.01814429);
   Graph_Graph1009->SetMaximum(0.6771192);
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
   p_1_1->SetBorderSize(2);
   p_1_1->SetLeftMargin(0);
   p_1_1->SetRightMargin(0);
   p_1_1->SetTopMargin(0);
   p_1_1->SetBottomMargin(0.24);
   p_1_1->SetFrameBorderMode(0);
   p_1_1->SetFrameBorderMode(0);
   
   TH1D *emptyNB__25 = new TH1D("emptyNB__25","",10,0.001,2.999);
   emptyNB__25->SetBinContent(4,1000);
   emptyNB__25->SetBinError(4,1000);
   emptyNB__25->SetMinimum(0.0001);
   emptyNB__25->SetMaximum(0.9999);
   emptyNB__25->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyNB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyNB__25->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyNB__25);

   ci = TColor::GetColor("#000099");
   emptyNB__25->SetLineColor(ci);
   emptyNB__25->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__25->GetXaxis()->CenterTitle(true);
   emptyNB__25->GetXaxis()->SetLabelFont(43);
   emptyNB__25->GetXaxis()->SetLabelSize(33);
   emptyNB__25->GetXaxis()->SetTitleSize(33);
   emptyNB__25->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__25->GetXaxis()->SetTitleFont(43);
   emptyNB__25->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__25->GetYaxis()->CenterTitle(true);
   emptyNB__25->GetYaxis()->SetNdivisions(505);
   emptyNB__25->GetYaxis()->SetLabelFont(43);
   emptyNB__25->GetYaxis()->SetLabelSize(33);
   emptyNB__25->GetYaxis()->SetTitleSize(33);
   emptyNB__25->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__25->GetYaxis()->SetTitleFont(43);
   emptyNB__25->GetZaxis()->SetLabelFont(42);
   emptyNB__25->GetZaxis()->SetLabelSize(0.035);
   emptyNB__25->GetZaxis()->SetTitleSize(0.035);
   emptyNB__25->GetZaxis()->SetTitleFont(42);
   emptyNB__25->Draw("");
   
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
   0.008922187,
   0.0360696,
   0.1846614,
   0.2583954,
   0.400327,
   0.4695274,
   0.5717405,
   0.663985,
   0.6912051,
   0.7060249,
   0.6931776,
   0.6236538,
   0.5313839,
   0.4724342,
   0.3360238,
   0.262807,
   0.1191604,
   0.004898222};
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
   -0.008922278,
   -0.01880744,
   -0.0324534,
   -0.01823828,
   -0.01523288,
   -0.008073376,
   -0.002172847,
   -0.001792486,
   -0.002183513,
   -0.004740627,
   -0.005269023,
   -0.005607496,
   -0.004464618,
   -0.002483941,
   -0.001093934,
   -0.0003354866,
   -0.001855398,
   -0.0002360018};
   gre = new TGraphErrors(18,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1202;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,-3.46425,3.51675);
   Graph_Graph1010->SetMinimum(0.0044084);
   Graph_Graph1010->SetMaximum(0.7761376);
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
   p_2_0->SetBorderSize(2);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetBottomMargin(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->SetFrameBorderMode(0);
   
   TH1D *emptyNB__29 = new TH1D("emptyNB__29","",10,0.001,2.999);
   emptyNB__29->SetBinContent(4,1000);
   emptyNB__29->SetBinError(4,1000);
   emptyNB__29->SetMinimum(0.0001);
   emptyNB__29->SetMaximum(0.9999);
   emptyNB__29->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyNB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyNB__29->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyNB__29);

   ci = TColor::GetColor("#000099");
   emptyNB__29->SetLineColor(ci);
   emptyNB__29->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__29->GetXaxis()->CenterTitle(true);
   emptyNB__29->GetXaxis()->SetLabelFont(43);
   emptyNB__29->GetXaxis()->SetLabelSize(33);
   emptyNB__29->GetXaxis()->SetTitleSize(33);
   emptyNB__29->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__29->GetXaxis()->SetTitleFont(43);
   emptyNB__29->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__29->GetYaxis()->CenterTitle(true);
   emptyNB__29->GetYaxis()->SetNdivisions(505);
   emptyNB__29->GetYaxis()->SetLabelFont(43);
   emptyNB__29->GetYaxis()->SetLabelSize(33);
   emptyNB__29->GetYaxis()->SetTitleSize(33);
   emptyNB__29->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__29->GetYaxis()->SetTitleFont(43);
   emptyNB__29->GetZaxis()->SetLabelFont(42);
   emptyNB__29->GetZaxis()->SetLabelSize(0.035);
   emptyNB__29->GetZaxis()->SetTitleSize(0.035);
   emptyNB__29->GetZaxis()->SetTitleFont(42);
   emptyNB__29->Draw("");
   
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
   0.005146275,
   0.07365063,
   0.2197647,
   0.2879781,
   0.4059188,
   0.463015,
   0.5556263,
   0.6237282,
   0.6384202,
   0.6524999,
   0.6407363,
   0.5942732,
   0.513999,
   0.4671987,
   0.3492879,
   0.2913857,
   0.1566649,
   0.01529677};
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
   -0.01578615,
   -0.01351277,
   -0.01589562,
   -0.0111602,
   -0.007223944,
   -0.004105855,
   -0.00221715,
   -0.002282174,
   -0.003826481,
   -0.005008965,
   -0.005447485,
   -0.00501396,
   -0.004191059,
   -0.003900329,
   -0.002007361,
   -0.001452296,
   -0.00206593,
   -0.0005903054};
   gre = new TGraphErrors(18,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1200;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","Graph",100,-3.46425,3.51675);
   Graph_Graph1011->SetMinimum(0.004631647);
   Graph_Graph1011->SetMaximum(0.7172352);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
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
   p_2_1->SetBorderSize(2);
   p_2_1->SetLeftMargin(0);
   p_2_1->SetTopMargin(0);
   p_2_1->SetBottomMargin(0.24);
   p_2_1->SetFrameBorderMode(0);
   p_2_1->SetFrameBorderMode(0);
   
   TH1D *emptyNB__33 = new TH1D("emptyNB__33","",10,0.001,2.999);
   emptyNB__33->SetBinContent(4,1000);
   emptyNB__33->SetBinError(4,1000);
   emptyNB__33->SetMinimum(0.0001);
   emptyNB__33->SetMaximum(0.9999);
   emptyNB__33->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyNB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyNB__33->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyNB__33);

   ci = TColor::GetColor("#000099");
   emptyNB__33->SetLineColor(ci);
   emptyNB__33->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyNB__33->GetXaxis()->CenterTitle(true);
   emptyNB__33->GetXaxis()->SetLabelFont(43);
   emptyNB__33->GetXaxis()->SetLabelSize(33);
   emptyNB__33->GetXaxis()->SetTitleSize(33);
   emptyNB__33->GetXaxis()->SetTitleOffset(2.5);
   emptyNB__33->GetXaxis()->SetTitleFont(43);
   emptyNB__33->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyNB__33->GetYaxis()->CenterTitle(true);
   emptyNB__33->GetYaxis()->SetNdivisions(505);
   emptyNB__33->GetYaxis()->SetLabelFont(43);
   emptyNB__33->GetYaxis()->SetLabelSize(33);
   emptyNB__33->GetYaxis()->SetTitleSize(33);
   emptyNB__33->GetYaxis()->SetTitleOffset(2.5);
   emptyNB__33->GetYaxis()->SetTitleFont(43);
   emptyNB__33->GetZaxis()->SetLabelFont(42);
   emptyNB__33->GetZaxis()->SetLabelSize(0.035);
   emptyNB__33->GetZaxis()->SetTitleSize(0.035);
   emptyNB__33->GetZaxis()->SetTitleFont(42);
   emptyNB__33->Draw("");
   
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
   0.004561785,
   0.01774823,
   0.1702862,
   0.2370358,
   0.3972822,
   0.4694424,
   0.5937098,
   0.6831086,
   0.7128605,
   0.7287111,
   0.7133815,
   0.647752,
   0.536584,
   0.4721644,
   0.3218946,
   0.2471773,
   0.09882585,
   0.002468786};
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
   -0.004561929,
   -0.02287355,
   -0.04575053,
   -0.02854696,
   -0.02488469,
   -0.01449206,
   -0.008415139,
   -0.001766236,
   -0.00363806,
   -0.005855035,
   -0.006948354,
   -0.005575472,
   -0.004249775,
   -0.002343632,
   -0.001122331,
   -0.002241644,
   -0.003021208,
   -0.000234762};
   gre = new TGraphErrors(18,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 1203;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetLineColor(0);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","Graph",100,-3.46425,3.51675);
   Graph_Graph1012->SetMinimum(0.002221908);
   Graph_Graph1012->SetMaximum(0.8013353);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelSize(0.035);
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
