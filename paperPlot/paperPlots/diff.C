void diff()
{
//=========Macro generated from canvas: cdiff/
//=========  (Tue Sep 20 14:38:54 2016) by ROOT version6.02/13

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cdiff = new TCanvas("cdiff", "",0,0,1200,2100);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   cdiff->Range(0,0,1,1);
   cdiff->SetFillColor(0);
   cdiff->SetBorderMode(0);
   cdiff->SetBorderSize(0);
   cdiff->SetTickx(1);
   cdiff->SetTicky(1);
   cdiff->SetLeftMargin(0.17);
   cdiff->SetRightMargin(0.01);
   cdiff->SetTopMargin(0.01);
   cdiff->SetBottomMargin(0.15);
   cdiff->SetFrameLineColor(0);
   cdiff->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.8096192,0.3883495,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-5.569572,-0.03501,2.999,0.0586275);
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
   
   TH1D *emptyDiff1 = new TH1D("emptyDiff1","",10,-2.999,2.999);
   emptyDiff1->SetBinContent(7,1000);
   emptyDiff1->SetBinError(7,1000);
   emptyDiff1->SetMinimum(-0.03501);
   emptyDiff1->SetMaximum(0.0399);
   emptyDiff1->SetEntries(1);
   emptyDiff1->SetLineStyle(0);
   emptyDiff1->SetMarkerStyle(20);
   emptyDiff1->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff1->GetXaxis()->CenterTitle(true);
   emptyDiff1->GetXaxis()->SetLabelFont(43);
   emptyDiff1->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff1->GetXaxis()->SetLabelSize(33);
   emptyDiff1->GetXaxis()->SetTitleSize(33);
   emptyDiff1->GetXaxis()->SetTitleOffset(7.5);
   emptyDiff1->GetXaxis()->SetTitleFont(43);
   emptyDiff1->GetYaxis()->SetTitle("PbPb - pp");
   emptyDiff1->GetYaxis()->CenterTitle(true);
   emptyDiff1->GetYaxis()->SetNdivisions(505);
   emptyDiff1->GetYaxis()->SetLabelFont(43);
   emptyDiff1->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff1->GetYaxis()->SetLabelSize(33);
   emptyDiff1->GetYaxis()->SetTitleSize(33);
   emptyDiff1->GetYaxis()->SetTitleOffset(7.5);
   emptyDiff1->GetYaxis()->SetTitleFont(43);
   emptyDiff1->GetZaxis()->SetLabelFont(42);
   emptyDiff1->GetZaxis()->SetLabelSize(0.045);
   emptyDiff1->GetZaxis()->SetTitleSize(0.035);
   emptyDiff1->GetZaxis()->SetTitleFont(42);
   emptyDiff1->Draw("");
   
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
   -7.867815e-05,
   -0.006040556,
   0.0001819847,
   -0.006536377,
   0.003402429,
   -0.006435731,
   0.01130003,
   0.006604965,
   0.009938616,
   0.009274246,
   -0.006981939,
   0.007833979,
   0.009811033,
   0.007450904,
   -0.000942083,
   -0.008778105,
   -0.006260033,
   -0.005722047};
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
   -0.001602278,
   -0.003360802,
   -0.004405221,
   -0.005115381,
   -0.006129052,
   -0.005950817,
   -0.005448212,
   -0.004353547,
   -0.003818089,
   -0.002948359,
   -0.003104661,
   -0.003606571,
   -0.004555627,
   -0.005531156,
   -0.006828363,
   -0.006632137,
   -0.00544275,
   -0.002647081};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 928;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,-3.46425,3.51675);
   Graph_Graph1001->SetMinimum(-0.01078592);
   Graph_Graph1001->SetMaximum(0.01330784);
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
   
   Double_t Graph1_fx1[18] = {
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
   Double_t Graph1_fy1[18] = {
   -0.0001016268,
   -0.0005555756,
   0.0003290453,
   0.0004777027,
   0.001119208,
   0.004317112,
   0.004381431,
   0.004475416,
   0.003478897,
   0.004184804,
   0.001597228,
   0.0002499986,
   -0.001535692,
   -0.004467796,
   -0.004709448,
   -0.004126262,
   -0.003304367,
   -0.0009750653};
   graph = new TGraph(18,Graph1_fx1,Graph1_fy1);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-3.323417,3.267583);
   Graph_Graph1->SetMinimum(-0.005627934);
   Graph_Graph1->SetMaximum(0.005393902);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx2[18] = {
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
   Double_t Graph2_fy2[18] = {
   0.0001318863,
   0.0004940565,
   0.002910871,
   0.005003849,
   0.006565661,
   0.006402692,
   0.007701572,
   0.00568453,
   0.007989252,
   0.005331986,
   0.007605475,
   0.004363526,
   0.003034225,
   0.001137309,
   -0.001997401,
   -0.002352274,
   -0.001541958,
   -0.0002753222};
   graph = new TGraph(18,Graph2_fx2,Graph2_fy2);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,-3.323417,3.267583);
   Graph_Graph2->SetMinimum(-0.003386426);
   Graph_Graph2->SetMaximum(0.009023404);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineStyle(0);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx3[18] = {
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
   Double_t Graph3_fy3[18] = {
   -0.0008555463,
   -0.001677568,
   -0.001497557,
   -0.001906451,
   -0.001768154,
   -0.001590915,
   -0.001075331,
   -0.001249766,
   0.002927213,
   0.0003375372,
   0.0009971476,
   -0.002195897,
   -0.005087297,
   -0.007467876,
   -0.01065889,
   -0.007848298,
   -0.005432496,
   -0.001589944};
   graph = new TGraph(18,Graph3_fx3,Graph3_fy3);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,-3.323417,3.267583);
   Graph_Graph3->SetMinimum(-0.0120175);
   Graph_Graph3->SetMaximum(0.004285824);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetLineStyle(0);
   Graph_Graph3->SetMarkerStyle(20);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("  c");
   Double_t xAxis1[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_02 = new TH1D("hist_eta_diff_02","",18, xAxis1);
   hist_eta_diff_02->SetBinContent(0,-1.406952e-05);
   hist_eta_diff_02->SetBinContent(1,-7.867816e-05);
   hist_eta_diff_02->SetBinContent(2,-0.006040556);
   hist_eta_diff_02->SetBinContent(3,0.0001819847);
   hist_eta_diff_02->SetBinContent(4,-0.006536377);
   hist_eta_diff_02->SetBinContent(5,0.003402429);
   hist_eta_diff_02->SetBinContent(6,-0.006435732);
   hist_eta_diff_02->SetBinContent(7,0.01130003);
   hist_eta_diff_02->SetBinContent(8,0.006604966);
   hist_eta_diff_02->SetBinContent(9,0.009938616);
   hist_eta_diff_02->SetBinContent(10,0.009274247);
   hist_eta_diff_02->SetBinContent(11,-0.006981939);
   hist_eta_diff_02->SetBinContent(12,0.007833979);
   hist_eta_diff_02->SetBinContent(13,0.009811034);
   hist_eta_diff_02->SetBinContent(14,0.007450904);
   hist_eta_diff_02->SetBinContent(15,-0.000942083);
   hist_eta_diff_02->SetBinContent(16,-0.008778106);
   hist_eta_diff_02->SetBinContent(17,-0.006260033);
   hist_eta_diff_02->SetBinContent(18,-0.005722047);
   hist_eta_diff_02->SetBinError(0,4.684612e-05);
   hist_eta_diff_02->SetBinError(1,0.000843362);
   hist_eta_diff_02->SetBinError(2,0.001592677);
   hist_eta_diff_02->SetBinError(3,0.003783313);
   hist_eta_diff_02->SetBinError(4,0.004656884);
   hist_eta_diff_02->SetBinError(5,0.0055279);
   hist_eta_diff_02->SetBinError(6,0.00622536);
   hist_eta_diff_02->SetBinError(7,0.006812581);
   hist_eta_diff_02->SetBinError(8,0.007343075);
   hist_eta_diff_02->SetBinError(9,0.007738899);
   hist_eta_diff_02->SetBinError(10,0.007932794);
   hist_eta_diff_02->SetBinError(11,0.007990034);
   hist_eta_diff_02->SetBinError(12,0.007906279);
   hist_eta_diff_02->SetBinError(13,0.007638776);
   hist_eta_diff_02->SetBinError(14,0.007278803);
   hist_eta_diff_02->SetBinError(15,0.006730243);
   hist_eta_diff_02->SetBinError(16,0.005997296);
   hist_eta_diff_02->SetBinError(17,0.003299181);
   hist_eta_diff_02->SetBinError(18,0.001614166);
   hist_eta_diff_02->SetEntries(0.4890708);

   ci = TColor::GetColor("#33cc99");
   hist_eta_diff_02->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_02->SetLineColor(ci);
   hist_eta_diff_02->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_02->SetMarkerColor(ci);
   hist_eta_diff_02->SetMarkerStyle(20);
   hist_eta_diff_02->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_02->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_02->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_02->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_02->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_02->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_02->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_02->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_02->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_02->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_02->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_02->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_02->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_02->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_02->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_02->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_02->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_02->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_02->Draw("same p");
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
   TLine *line = new TLine(-3,0,3,0);
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
   cdiff->cd();
  
// ------------>Primitives in pad: p_0_1
   TPad *p_0_1 = new TPad("p_0_1", "p_0_1",0,0.6573147,0.3883495,0.8096192);
   p_0_1->Draw();
   p_0_1->cd();
   p_0_1->Range(-5.569572,-0.03501,2.999,0.0399);
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
   
   TH1D *emptyDiff3 = new TH1D("emptyDiff3","",10,-2.999,2.999);
   emptyDiff3->SetBinContent(7,1000);
   emptyDiff3->SetBinError(7,1000);
   emptyDiff3->SetMinimum(-0.03501);
   emptyDiff3->SetMaximum(0.0399);
   emptyDiff3->SetEntries(1);
   emptyDiff3->SetLineStyle(0);
   emptyDiff3->SetMarkerStyle(20);
   emptyDiff3->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff3->GetXaxis()->CenterTitle(true);
   emptyDiff3->GetXaxis()->SetLabelFont(43);
   emptyDiff3->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff3->GetXaxis()->SetLabelSize(33);
   emptyDiff3->GetXaxis()->SetTitleSize(33);
   emptyDiff3->GetXaxis()->SetTitleOffset(7.5);
   emptyDiff3->GetXaxis()->SetTitleFont(43);
   emptyDiff3->GetYaxis()->SetTitle("PbPb - pp");
   emptyDiff3->GetYaxis()->CenterTitle(true);
   emptyDiff3->GetYaxis()->SetNdivisions(505);
   emptyDiff3->GetYaxis()->SetLabelFont(43);
   emptyDiff3->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff3->GetYaxis()->SetLabelSize(33);
   emptyDiff3->GetYaxis()->SetTitleSize(33);
   emptyDiff3->GetYaxis()->SetTitleOffset(7.5);
   emptyDiff3->GetYaxis()->SetTitleFont(43);
   emptyDiff3->GetZaxis()->SetLabelFont(42);
   emptyDiff3->GetZaxis()->SetLabelSize(0.045);
   emptyDiff3->GetZaxis()->SetTitleSize(0.035);
   emptyDiff3->GetZaxis()->SetTitleFont(42);
   emptyDiff3->Draw("");
   
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
   -4.906778e-05,
   0.0002258451,
   -0.0002191903,
   -0.001597103,
   0.002880423,
   -0.0008855846,
   -0.001171814,
   0.006504828,
   0.005045488,
   0.01001822,
   0.008164894,
   0.005774759,
   0.004344218,
   -9.156792e-05,
   -0.006305573,
   -0.005839335,
   -0.008625813,
   -0.004886829};
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
   -0.000447888,
   -0.001964194,
   -0.002811722,
   -0.002604374,
   -0.002571638,
   -0.002195107,
   -0.00207099,
   -0.001865851,
   -0.00211726,
   -0.00236848,
   -0.002849916,
   -0.002731748,
   -0.002600471,
   -0.002698197,
   -0.00230326,
   -0.003176579,
   -0.001552712,
   -0.001360632};
   gre = new TGraphErrors(18,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 930;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,-3.46425,3.51675);
   Graph_Graph1002->SetMinimum(-0.01049022);
   Graph_Graph1002->SetMaximum(0.01188262);
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
   
   Double_t Graph1_fx4[18] = {
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
   Double_t Graph1_fy4[18] = {
   -7.47334e-05,
   -0.000909702,
   -0.002697759,
   -0.002350403,
   -0.0007373961,
   0.0007402717,
   0.002515295,
   0.004588582,
   0.005620935,
   0.007160644,
   0.005143145,
   0.003160521,
   0.001407463,
   -0.002665573,
   -0.004658514,
   -0.004536453,
   -0.003862953,
   -0.001535358};
   graph = new TGraph(18,Graph1_fx4,Graph1_fy4);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,-3.323417,3.267583);
   Graph_Graph4->SetMinimum(-0.005840429);
   Graph_Graph4->SetMaximum(0.00834256);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineStyle(0);
   Graph_Graph4->SetMarkerStyle(20);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx5[18] = {
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
   Double_t Graph2_fy5[18] = {
   -3.842715e-06,
   0.0001024413,
   -0.0006931555,
   8.265751e-05,
   0.003427807,
   0.005140417,
   0.008361925,
   0.009315211,
   0.01288464,
   0.01190448,
   0.006251475,
   0.005160175,
   0.005103274,
   0.007069868,
   0.002792444,
   -0.0002891002,
   -0.001803473,
   -0.0003529656};
   graph = new TGraph(18,Graph2_fx5,Graph2_fy5);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,-3.323417,3.267583);
   Graph_Graph5->SetMinimum(-0.003272285);
   Graph_Graph5->SetMaximum(0.01435345);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);
   Graph_Graph5->SetLineStyle(0);
   Graph_Graph5->SetMarkerStyle(20);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph5->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx6[18] = {
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
   Double_t Graph3_fy6[18] = {
   -0.0003616065,
   -0.001462088,
   -0.004669975,
   -0.006761848,
   -0.004806351,
   -0.005130718,
   -0.001687512,
   0.0004081741,
   0.002909072,
   0.001984074,
   -0.001145711,
   -0.003413958,
   -0.003513389,
   -0.004765004,
   -0.006955171,
   -0.01017159,
   -0.00803343,
   -0.002029587};
   graph = new TGraph(18,Graph3_fx6,Graph3_fy6);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,-3.323417,3.267583);
   Graph_Graph6->SetMinimum(-0.01147966);
   Graph_Graph6->SetMaximum(0.004217138);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);
   Graph_Graph6->SetLineStyle(0);
   Graph_Graph6->SetMarkerStyle(20);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph6->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("  c");
   Double_t xAxis2[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_14 = new TH1D("hist_eta_diff_14","",18, xAxis2);
   hist_eta_diff_14->SetBinContent(0,-1.398952e-06);
   hist_eta_diff_14->SetBinContent(1,-4.906779e-05);
   hist_eta_diff_14->SetBinContent(2,0.0002258451);
   hist_eta_diff_14->SetBinContent(3,-0.0002191903);
   hist_eta_diff_14->SetBinContent(4,-0.001597103);
   hist_eta_diff_14->SetBinContent(5,0.002880423);
   hist_eta_diff_14->SetBinContent(6,-0.0008855846);
   hist_eta_diff_14->SetBinContent(7,-0.001171814);
   hist_eta_diff_14->SetBinContent(8,0.006504828);
   hist_eta_diff_14->SetBinContent(9,0.005045488);
   hist_eta_diff_14->SetBinContent(10,0.01001822);
   hist_eta_diff_14->SetBinContent(11,0.008164893);
   hist_eta_diff_14->SetBinContent(12,0.005774759);
   hist_eta_diff_14->SetBinContent(13,0.004344218);
   hist_eta_diff_14->SetBinContent(14,-9.156792e-05);
   hist_eta_diff_14->SetBinContent(15,-0.006305573);
   hist_eta_diff_14->SetBinContent(16,-0.005839335);
   hist_eta_diff_14->SetBinContent(17,-0.008625812);
   hist_eta_diff_14->SetBinContent(18,-0.004886829);
   hist_eta_diff_14->SetBinError(0,1.398952e-06);
   hist_eta_diff_14->SetBinError(1,0.0001309669);
   hist_eta_diff_14->SetBinError(2,0.0004703216);
   hist_eta_diff_14->SetBinError(3,0.00131912);
   hist_eta_diff_14->SetBinError(4,0.001775651);
   hist_eta_diff_14->SetBinError(5,0.002241532);
   hist_eta_diff_14->SetBinError(6,0.002601009);
   hist_eta_diff_14->SetBinError(7,0.00293401);
   hist_eta_diff_14->SetBinError(8,0.003235623);
   hist_eta_diff_14->SetBinError(9,0.003431219);
   hist_eta_diff_14->SetBinError(10,0.003594686);
   hist_eta_diff_14->SetBinError(11,0.003640719);
   hist_eta_diff_14->SetBinError(12,0.003612589);
   hist_eta_diff_14->SetBinError(13,0.003523915);
   hist_eta_diff_14->SetBinError(14,0.003326636);
   hist_eta_diff_14->SetBinError(15,0.003045938);
   hist_eta_diff_14->SetBinError(16,0.00269698);
   hist_eta_diff_14->SetBinError(17,0.001409397);
   hist_eta_diff_14->SetBinError(18,0.0006155672);
   hist_eta_diff_14->SetEntries(1.364282);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_14->SetLineColor(ci);
   hist_eta_diff_14->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_14->SetMarkerColor(ci);
   hist_eta_diff_14->SetMarkerStyle(20);
   hist_eta_diff_14->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_14->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_14->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_14->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_14->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_14->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_14->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_14->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_14->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_14->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_14->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_14->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_14->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_14->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_14->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_14->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_14->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_14->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_14->Draw("same p");
      tex = new TLatex(0.35,0.08,"55 < p_{T}^{ave} < 75 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,0,3,0);
   line->Draw();
   p_0_1->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_0_2
   TPad *p_0_2 = new TPad("p_0_2", "p_0_2",0,0.50501,0.3883495,0.6573147);
   p_0_2->Draw();
   p_0_2->cd();
   p_0_2->Range(-5.569572,-0.03501,2.999,0.0399);
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
   
   TH1D *emptyDiff5 = new TH1D("emptyDiff5","",10,-2.999,2.999);
   emptyDiff5->SetBinContent(7,1000);
   emptyDiff5->SetBinError(7,1000);
   emptyDiff5->SetMinimum(-0.03501);
   emptyDiff5->SetMaximum(0.0399);
   emptyDiff5->SetEntries(1);
   emptyDiff5->SetLineStyle(0);
   emptyDiff5->SetMarkerStyle(20);
   emptyDiff5->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff5->GetXaxis()->CenterTitle(true);
   emptyDiff5->GetXaxis()->SetLabelFont(43);
   emptyDiff5->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff5->GetXaxis()->SetLabelSize(33);
   emptyDiff5->GetXaxis()->SetTitleSize(33);
   emptyDiff5->GetXaxis()->SetTitleOffset(7.5);
   emptyDiff5->GetXaxis()->SetTitleFont(43);
   emptyDiff5->GetYaxis()->SetTitle("PbPb - pp");
   emptyDiff5->GetYaxis()->CenterTitle(true);
   emptyDiff5->GetYaxis()->SetNdivisions(505);
   emptyDiff5->GetYaxis()->SetLabelFont(43);
   emptyDiff5->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff5->GetYaxis()->SetLabelSize(33);
   emptyDiff5->GetYaxis()->SetTitleSize(33);
   emptyDiff5->GetYaxis()->SetTitleOffset(7.5);
   emptyDiff5->GetYaxis()->SetTitleFont(43);
   emptyDiff5->GetZaxis()->SetLabelFont(42);
   emptyDiff5->GetZaxis()->SetLabelSize(0.045);
   emptyDiff5->GetZaxis()->SetTitleSize(0.035);
   emptyDiff5->GetZaxis()->SetTitleFont(42);
   emptyDiff5->Draw("");
   
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
   4.174698e-05,
   0.0001942199,
   0.0003378031,
   -0.002040716,
   -0.003287541,
   -0.004385141,
   1.120079e-05,
   -0.0003642199,
   0.004114227,
   0.00820986,
   0.009501886,
   0.005577257,
   0.006284581,
   0.003551407,
   0.001092257,
   -0.007230637,
   -0.00752181,
   -0.003379396};
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
   -8.663962e-05,
   -0.00107518,
   -0.002472978,
   -0.002694967,
   -0.002559614,
   -0.002396049,
   -0.002132542,
   -0.00161969,
   -0.001988911,
   -0.001922936,
   -0.002412444,
   -0.002773652,
   -0.002851846,
   -0.002767232,
   -0.002473939,
   -0.001896328,
   -0.00182296,
   -0.001142843};
   gre = new TGraphErrors(18,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 932;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,-3.46425,3.51675);
   Graph_Graph1003->SetMinimum(-0.009224179);
   Graph_Graph1003->SetMaximum(0.01120426);
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
   
   Double_t Graph1_fx7[18] = {
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
   Double_t Graph1_fy7[18] = {
   -6.575982e-06,
   -0.0006935323,
   -0.001581396,
   -0.002919916,
   -0.002867111,
   -0.002139646,
   -0.000203133,
   0.00428887,
   0.005576428,
   0.007475989,
   0.007625471,
   0.005692334,
   0.002157274,
   -0.0004157923,
   -0.00379307,
   -0.005851863,
   -0.004541692,
   -0.001283707};
   graph = new TGraph(18,Graph1_fx7,Graph1_fy7);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,-3.323417,3.267583);
   Graph_Graph7->SetMinimum(-0.007199597);
   Graph_Graph7->SetMaximum(0.008973204);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);
   Graph_Graph7->SetLineStyle(0);
   Graph_Graph7->SetMarkerStyle(20);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph7->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx8[18] = {
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
   Double_t Graph2_fy8[18] = {
   1.557825e-05,
   -5.543026e-05,
   -0.0009533494,
   -0.0006216506,
   0.0008877492,
   0.002764644,
   0.006133276,
   0.009126467,
   0.01082177,
   0.01039018,
   0.008804656,
   0.007821305,
   0.004837934,
   0.003517181,
   0.003031548,
   0.001004356,
   -0.0001221009,
   -0.0004086445};
   graph = new TGraph(18,Graph2_fx8,Graph2_fy8);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,-3.323417,3.267583);
   Graph_Graph8->SetMinimum(-0.002130861);
   Graph_Graph8->SetMaximum(0.01199928);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);
   Graph_Graph8->SetLineStyle(0);
   Graph_Graph8->SetMarkerStyle(20);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph8->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx9[18] = {
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
   Double_t Graph3_fy9[18] = {
   -5.033334e-05,
   -0.0008304918,
   -0.003389818,
   -0.006071283,
   -0.005028579,
   -0.006402209,
   -0.002901627,
   -0.001247177,
   -0.0001208687,
   0.001924779,
   0.001682256,
   0.001483367,
   -0.003135934,
   -0.006640481,
   -0.006600756,
   -0.009632982,
   -0.005917954,
   -0.002019062};
   graph = new TGraph(18,Graph3_fx9,Graph3_fy9);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,-3.323417,3.267583);
   Graph_Graph9->SetMinimum(-0.01078876);
   Graph_Graph9->SetMaximum(0.003080555);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);
   Graph_Graph9->SetLineStyle(0);
   Graph_Graph9->SetMarkerStyle(20);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph9->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   graph->Draw("  c");
   Double_t xAxis3[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_26 = new TH1D("hist_eta_diff_26","",18, xAxis3);
   hist_eta_diff_26->SetBinContent(1,4.174698e-05);
   hist_eta_diff_26->SetBinContent(2,0.0001942199);
   hist_eta_diff_26->SetBinContent(3,0.0003378031);
   hist_eta_diff_26->SetBinContent(4,-0.002040716);
   hist_eta_diff_26->SetBinContent(5,-0.003287542);
   hist_eta_diff_26->SetBinContent(6,-0.004385141);
   hist_eta_diff_26->SetBinContent(7,1.120079e-05);
   hist_eta_diff_26->SetBinContent(8,-0.0003642199);
   hist_eta_diff_26->SetBinContent(9,0.004114227);
   hist_eta_diff_26->SetBinContent(10,0.00820986);
   hist_eta_diff_26->SetBinContent(11,0.009501886);
   hist_eta_diff_26->SetBinContent(12,0.005577257);
   hist_eta_diff_26->SetBinContent(13,0.006284582);
   hist_eta_diff_26->SetBinContent(14,0.003551407);
   hist_eta_diff_26->SetBinContent(15,0.001092257);
   hist_eta_diff_26->SetBinContent(16,-0.007230637);
   hist_eta_diff_26->SetBinContent(17,-0.00752181);
   hist_eta_diff_26->SetBinContent(18,-0.003379396);
   hist_eta_diff_26->SetBinError(1,3.449509e-05);
   hist_eta_diff_26->SetBinError(2,0.0001945111);
   hist_eta_diff_26->SetBinError(3,0.0007096119);
   hist_eta_diff_26->SetBinError(4,0.001064601);
   hist_eta_diff_26->SetBinError(5,0.001434667);
   hist_eta_diff_26->SetBinError(6,0.001748419);
   hist_eta_diff_26->SetBinError(7,0.00203706);
   hist_eta_diff_26->SetBinError(8,0.002255898);
   hist_eta_diff_26->SetBinError(9,0.002439599);
   hist_eta_diff_26->SetBinError(10,0.00254712);
   hist_eta_diff_26->SetBinError(11,0.002612374);
   hist_eta_diff_26->SetBinError(12,0.002603784);
   hist_eta_diff_26->SetBinError(13,0.002536519);
   hist_eta_diff_26->SetBinError(14,0.002381178);
   hist_eta_diff_26->SetBinError(15,0.002190181);
   hist_eta_diff_26->SetBinError(16,0.001902599);
   hist_eta_diff_26->SetBinError(17,0.0009790673);
   hist_eta_diff_26->SetBinError(18,0.0004028425);
   hist_eta_diff_26->SetEntries(1.799253);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_26->SetLineColor(ci);
   hist_eta_diff_26->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_26->SetMarkerColor(ci);
   hist_eta_diff_26->SetMarkerStyle(20);
   hist_eta_diff_26->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_26->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_26->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_26->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_26->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_26->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_26->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_26->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_26->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_26->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_26->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_26->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_26->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_26->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_26->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_26->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_26->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_26->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_26->Draw("same p");
      tex = new TLatex(0.35,0.08,"75 < p_{T}^{ave} < 95 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,0,3,0);
   line->Draw();
   p_0_2->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_0_3
   TPad *p_0_3 = new TPad("p_0_3", "p_0_3",0,0.3527054,0.3883495,0.50501);
   p_0_3->Draw();
   p_0_3->cd();
   p_0_3->Range(-5.569572,-0.03501,2.999,0.0399);
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
   
   TH1D *emptyDiff7 = new TH1D("emptyDiff7","",10,-2.999,2.999);
   emptyDiff7->SetBinContent(7,1000);
   emptyDiff7->SetBinError(7,1000);
   emptyDiff7->SetMinimum(-0.03501);
   emptyDiff7->SetMaximum(0.0399);
   emptyDiff7->SetEntries(1);
   emptyDiff7->SetLineStyle(0);
   emptyDiff7->SetMarkerStyle(20);
   emptyDiff7->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff7->GetXaxis()->CenterTitle(true);
   emptyDiff7->GetXaxis()->SetLabelFont(43);
   emptyDiff7->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff7->GetXaxis()->SetLabelSize(33);
   emptyDiff7->GetXaxis()->SetTitleSize(33);
   emptyDiff7->GetXaxis()->SetTitleOffset(7.5);
   emptyDiff7->GetXaxis()->SetTitleFont(43);
   emptyDiff7->GetYaxis()->SetTitle("PbPb - pp");
   emptyDiff7->GetYaxis()->CenterTitle(true);
   emptyDiff7->GetYaxis()->SetNdivisions(505);
   emptyDiff7->GetYaxis()->SetLabelFont(43);
   emptyDiff7->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff7->GetYaxis()->SetLabelSize(33);
   emptyDiff7->GetYaxis()->SetTitleSize(33);
   emptyDiff7->GetYaxis()->SetTitleOffset(7.5);
   emptyDiff7->GetYaxis()->SetTitleFont(43);
   emptyDiff7->GetZaxis()->SetLabelFont(42);
   emptyDiff7->GetZaxis()->SetLabelSize(0.045);
   emptyDiff7->GetZaxis()->SetTitleSize(0.035);
   emptyDiff7->GetZaxis()->SetTitleFont(42);
   emptyDiff7->Draw("");
   
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
   1.676376e-05,
   0.0002533288,
   -0.0004682001,
   -0.001474718,
   -0.004848146,
   -0.00561844,
   -0.006011639,
   -0.00105104,
   0.003374013,
   0.004087568,
   0.01112855,
   0.005620214,
   0.0101241,
   0.002199555,
   0.001125199,
   0.0001407211,
   -0.00729529,
   -0.002130288};
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
   -4.575747e-06,
   -0.0004146186,
   -0.001460165,
   -0.002058608,
   -0.002165576,
   -0.002265224,
   -0.001965814,
   -0.001851625,
   -0.001633552,
   -0.001601232,
   -0.001786112,
   -0.001877419,
   -0.001965375,
   -0.002170844,
   -0.002254434,
   -0.002293859,
   -0.00189933,
   -0.0007928441};
   gre = new TGraphErrors(18,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 934;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,-3.46425,3.51675);
   Graph_Graph1004->SetMinimum(-0.009137674);
   Graph_Graph1004->SetMaximum(0.01297093);
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
   
   Double_t Graph1_fx10[18] = {
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
   Double_t Graph1_fy10[18] = {
   -2.183341e-07,
   -0.0002424761,
   -0.002033596,
   -0.003237172,
   -0.003912963,
   -0.002062906,
   -0.001536676,
   0.003136617,
   0.003727192,
   0.007504526,
   0.007491543,
   0.006069219,
   0.004080361,
   -0.001533721,
   -0.001838455,
   -0.005358135,
   -0.003803719,
   -0.001201614};
   graph = new TGraph(18,Graph1_fx10,Graph1_fy10);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,-3.323417,3.267583);
   Graph_Graph10->SetMinimum(-0.006644401);
   Graph_Graph10->SetMaximum(0.008790792);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);
   Graph_Graph10->SetLineStyle(0);
   Graph_Graph10->SetMarkerStyle(20);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph10->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx11[18] = {
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
   Double_t Graph2_fy11[18] = {
   7.804258e-07,
   -4.343088e-05,
   -0.0005949029,
   -0.002102166,
   -0.0008891669,
   -0.0006743157,
   0.003558416,
   0.005998372,
   0.01179418,
   0.012393,
   0.01147958,
   0.007772171,
   0.007987615,
   0.008121204,
   0.001277644,
   0.0002804267,
   -0.001490832,
   -0.0004900153};
   graph = new TGraph(18,Graph2_fx11,Graph2_fy11);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,-3.323417,3.267583);
   Graph_Graph11->SetMinimum(-0.003551683);
   Graph_Graph11->SetMaximum(0.01384252);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);
   Graph_Graph11->SetLineStyle(0);
   Graph_Graph11->SetMarkerStyle(20);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph11->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx12[18] = {
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
   Double_t Graph3_fy12[18] = {
   -6.450844e-07,
   -0.0004418984,
   -0.002387971,
   -0.005491083,
   -0.006160442,
   -0.008181586,
   -0.005199789,
   -0.005488604,
   0.0008078804,
   0.004536299,
   0.004230089,
   0.001637972,
   0.0001094843,
   -0.002384001,
   -0.00814298,
   -0.009748808,
   -0.00785465,
   -0.001897943};
   graph = new TGraph(18,Graph3_fx12,Graph3_fy12);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,-3.323417,3.267583);
   Graph_Graph12->SetMinimum(-0.01117732);
   Graph_Graph12->SetMaximum(0.00596481);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);
   Graph_Graph12->SetLineStyle(0);
   Graph_Graph12->SetMarkerStyle(20);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph12->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("  c");
   Double_t xAxis4[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_38 = new TH1D("hist_eta_diff_38","",18, xAxis4);
   hist_eta_diff_38->SetBinContent(1,1.676376e-05);
   hist_eta_diff_38->SetBinContent(2,0.0002533288);
   hist_eta_diff_38->SetBinContent(3,-0.0004682001);
   hist_eta_diff_38->SetBinContent(4,-0.001474718);
   hist_eta_diff_38->SetBinContent(5,-0.004848146);
   hist_eta_diff_38->SetBinContent(6,-0.005618441);
   hist_eta_diff_38->SetBinContent(7,-0.006011639);
   hist_eta_diff_38->SetBinContent(8,-0.00105104);
   hist_eta_diff_38->SetBinContent(9,0.003374013);
   hist_eta_diff_38->SetBinContent(10,0.004087568);
   hist_eta_diff_38->SetBinContent(11,0.01112855);
   hist_eta_diff_38->SetBinContent(12,0.005620214);
   hist_eta_diff_38->SetBinContent(13,0.0101241);
   hist_eta_diff_38->SetBinContent(14,0.002199555);
   hist_eta_diff_38->SetBinContent(15,0.001125199);
   hist_eta_diff_38->SetBinContent(16,0.0001407211);
   hist_eta_diff_38->SetBinContent(17,-0.007295291);
   hist_eta_diff_38->SetBinContent(18,-0.002130288);
   hist_eta_diff_38->SetBinError(1,1.676376e-05);
   hist_eta_diff_38->SetBinError(2,0.0001122616);
   hist_eta_diff_38->SetBinError(3,0.0005111119);
   hist_eta_diff_38->SetBinError(4,0.0009013821);
   hist_eta_diff_38->SetBinError(5,0.001297525);
   hist_eta_diff_38->SetBinError(6,0.001668332);
   hist_eta_diff_38->SetBinError(7,0.001995131);
   hist_eta_diff_38->SetBinError(8,0.002266491);
   hist_eta_diff_38->SetBinError(9,0.002470511);
   hist_eta_diff_38->SetBinError(10,0.002593627);
   hist_eta_diff_38->SetBinError(11,0.002689247);
   hist_eta_diff_38->SetBinError(12,0.002668425);
   hist_eta_diff_38->SetBinError(13,0.002603055);
   hist_eta_diff_38->SetBinError(14,0.002432504);
   hist_eta_diff_38->SetBinError(15,0.002220043);
   hist_eta_diff_38->SetBinError(16,0.00194207);
   hist_eta_diff_38->SetBinError(17,0.0009448609);
   hist_eta_diff_38->SetBinError(18,0.0003574402);
   hist_eta_diff_38->SetEntries(1.30906);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_38->SetLineColor(ci);
   hist_eta_diff_38->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_38->SetMarkerColor(ci);
   hist_eta_diff_38->SetMarkerStyle(20);
   hist_eta_diff_38->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_38->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_38->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_38->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_38->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_38->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_38->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_38->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_38->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_38->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_38->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_38->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_38->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_38->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_38->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_38->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_38->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_38->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_38->Draw("same p");
      tex = new TLatex(0.35,0.08,"95 < p_{T}^{ave} < 115 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,0,3,0);
   line->Draw();
   p_0_3->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_0_4
   TPad *p_0_4 = new TPad("p_0_4", "p_0_4",0,0.2004008,0.3883495,0.3527054);
   p_0_4->Draw();
   p_0_4->cd();
   p_0_4->Range(-5.569572,-0.03501,2.999,0.0399);
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
   
   TH1D *emptyDiff9 = new TH1D("emptyDiff9","",10,-2.999,2.999);
   emptyDiff9->SetBinContent(7,1000);
   emptyDiff9->SetBinError(7,1000);
   emptyDiff9->SetMinimum(-0.03501);
   emptyDiff9->SetMaximum(0.0399);
   emptyDiff9->SetEntries(1);
   emptyDiff9->SetLineStyle(0);
   emptyDiff9->SetMarkerStyle(20);
   emptyDiff9->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff9->GetXaxis()->CenterTitle(true);
   emptyDiff9->GetXaxis()->SetLabelFont(43);
   emptyDiff9->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff9->GetXaxis()->SetLabelSize(33);
   emptyDiff9->GetXaxis()->SetTitleSize(33);
   emptyDiff9->GetXaxis()->SetTitleOffset(7.5);
   emptyDiff9->GetXaxis()->SetTitleFont(43);
   emptyDiff9->GetYaxis()->SetTitle("PbPb - pp");
   emptyDiff9->GetYaxis()->CenterTitle(true);
   emptyDiff9->GetYaxis()->SetNdivisions(505);
   emptyDiff9->GetYaxis()->SetLabelFont(43);
   emptyDiff9->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff9->GetYaxis()->SetLabelSize(33);
   emptyDiff9->GetYaxis()->SetTitleSize(33);
   emptyDiff9->GetYaxis()->SetTitleOffset(7.5);
   emptyDiff9->GetYaxis()->SetTitleFont(43);
   emptyDiff9->GetZaxis()->SetLabelFont(42);
   emptyDiff9->GetZaxis()->SetLabelSize(0.045);
   emptyDiff9->GetZaxis()->SetTitleSize(0.035);
   emptyDiff9->GetZaxis()->SetTitleFont(42);
   emptyDiff9->Draw("");
   
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
   -4.285359e-06,
   0.0001534319,
   -4.964999e-05,
   -0.001123675,
   -0.00413743,
   -0.007076319,
   -0.00823143,
   -0.009647243,
   -0.000587429,
   0.003849701,
   0.01183415,
   0.006279578,
   0.008719767,
   0.004006871,
   0.004458224,
   0.001263949,
   -0.003741598,
   -0.001189222};
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
   -0.0001192071,
   -0.0008175975,
   -0.001396145,
   -0.001940475,
   -0.002064929,
   -0.00201271,
   -0.002090804,
   -0.001623588,
   -0.001747477,
   -0.001551667,
   -0.00193748,
   -0.001749711,
   -0.001845701,
   -0.002129046,
   -0.002189118,
   -0.002087217,
   -0.0005623884};
   gre = new TGraphErrors(18,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 936;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,-3.46425,3.51675);
   Graph_Graph1005->SetMinimum(-0.01179538);
   Graph_Graph1005->SetMaximum(0.01398228);
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
   
   Double_t Graph1_fx13[18] = {
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
   Double_t Graph1_fy13[18] = {
   -1.991494e-11,
   -9.457054e-05,
   -0.0008633194,
   -0.002112338,
   -0.004044194,
   -0.00441355,
   -0.00312154,
   0.0004064912,
   0.002572726,
   0.005754338,
   0.00872637,
   0.007849241,
   0.003542791,
   -3.490107e-05,
   -0.001972856,
   -0.003943234,
   -0.003472748,
   -0.0006056929};
   graph = new TGraph(18,Graph1_fx13,Graph1_fy13);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Graph",100,-3.323417,3.267583);
   Graph_Graph13->SetMinimum(-0.005727542);
   Graph_Graph13->SetMaximum(0.01004036);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);
   Graph_Graph13->SetLineStyle(0);
   Graph_Graph13->SetMarkerStyle(20);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph13->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx14[18] = {
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
   Double_t Graph2_fy14[18] = {
   4.280763e-10,
   2.581977e-05,
   -0.0005880625,
   -0.001535814,
   -0.002563141,
   0.0004983831,
   -0.0006030413,
   0.004209175,
   0.01013738,
   0.01362005,
   0.009244778,
   0.008301337,
   0.009453499,
   0.007049136,
   0.001050248,
   -0.001853214,
   -0.0001421271,
   -0.0001792855};
   graph = new TGraph(18,Graph2_fx14,Graph2_fy14);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Graph",100,-3.323417,3.267583);
   Graph_Graph14->SetMinimum(-0.00418146);
   Graph_Graph14->SetMaximum(0.01523837);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);
   Graph_Graph14->SetLineStyle(0);
   Graph_Graph14->SetMarkerStyle(20);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph14->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx15[18] = {
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
   Double_t Graph3_fy15[18] = {
   -1.624344e-10,
   -0.0002411663,
   -0.001346919,
   -0.003676492,
   -0.00649762,
   -0.005803559,
   -0.008502416,
   -0.006111973,
   -0.0001774539,
   0.003658329,
   0.003971113,
   0.002201672,
   0.001980743,
   -0.00220196,
   -0.007610052,
   -0.01126768,
   -0.005396399,
   -0.001075666};
   graph = new TGraph(18,Graph3_fx15,Graph3_fy15);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Graph",100,-3.323417,3.267583);
   Graph_Graph15->SetMinimum(-0.01279156);
   Graph_Graph15->SetMaximum(0.005494993);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);
   Graph_Graph15->SetLineStyle(0);
   Graph_Graph15->SetMarkerStyle(20);
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph15->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph15);
   
   graph->Draw("  c");
   Double_t xAxis5[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_410 = new TH1D("hist_eta_diff_410","",18, xAxis5);
   hist_eta_diff_410->SetBinContent(1,-4.285359e-06);
   hist_eta_diff_410->SetBinContent(2,0.0001534319);
   hist_eta_diff_410->SetBinContent(3,-4.964999e-05);
   hist_eta_diff_410->SetBinContent(4,-0.001123675);
   hist_eta_diff_410->SetBinContent(5,-0.00413743);
   hist_eta_diff_410->SetBinContent(6,-0.007076319);
   hist_eta_diff_410->SetBinContent(7,-0.00823143);
   hist_eta_diff_410->SetBinContent(8,-0.009647242);
   hist_eta_diff_410->SetBinContent(9,-0.000587429);
   hist_eta_diff_410->SetBinContent(10,0.003849701);
   hist_eta_diff_410->SetBinContent(11,0.01183415);
   hist_eta_diff_410->SetBinContent(12,0.006279578);
   hist_eta_diff_410->SetBinContent(13,0.008719767);
   hist_eta_diff_410->SetBinContent(14,0.004006872);
   hist_eta_diff_410->SetBinContent(15,0.004458224);
   hist_eta_diff_410->SetBinContent(16,0.001263949);
   hist_eta_diff_410->SetBinContent(17,-0.003741598);
   hist_eta_diff_410->SetBinContent(18,-0.001189222);
   hist_eta_diff_410->SetBinError(1,4.285359e-06);
   hist_eta_diff_410->SetBinError(2,6.462798e-05);
   hist_eta_diff_410->SetBinError(3,0.0003776847);
   hist_eta_diff_410->SetBinError(4,0.000829755);
   hist_eta_diff_410->SetBinError(5,0.001345817);
   hist_eta_diff_410->SetBinError(6,0.001847341);
   hist_eta_diff_410->SetBinError(7,0.002284441);
   hist_eta_diff_410->SetBinError(8,0.002637428);
   hist_eta_diff_410->SetBinError(9,0.002932516);
   hist_eta_diff_410->SetBinError(10,0.003137782);
   hist_eta_diff_410->SetBinError(11,0.003245895);
   hist_eta_diff_410->SetBinError(12,0.003237999);
   hist_eta_diff_410->SetBinError(13,0.003148427);
   hist_eta_diff_410->SetBinError(14,0.002940548);
   hist_eta_diff_410->SetBinError(15,0.002658179);
   hist_eta_diff_410->SetBinError(16,0.00226412);
   hist_eta_diff_410->SetBinError(17,0.001072358);
   hist_eta_diff_410->SetBinError(18,0.0003476416);
   hist_eta_diff_410->SetEntries(0.2543793);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_410->SetLineColor(ci);
   hist_eta_diff_410->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_410->SetMarkerColor(ci);
   hist_eta_diff_410->SetMarkerStyle(20);
   hist_eta_diff_410->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_410->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_410->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_410->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_410->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_410->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_410->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_410->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_410->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_410->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_410->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_410->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_410->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_410->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_410->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_410->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_410->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_410->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_410->Draw("same p");
      tex = new TLatex(0.35,0.08,"115 < p_{T}^{ave} < 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,0,3,0);
   line->Draw();
   p_0_4->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_0_5
   TPad *p_0_5 = new TPad("p_0_5", "p_0_5",0,0,0.3883495,0.2004008);
   p_0_5->Draw();
   p_0_5->cd();
   p_0_5->Range(-5.569572,-0.05866579,2.999,0.0399);
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
   
   TH1D *emptyDiff11 = new TH1D("emptyDiff11","",10,-2.999,2.999);
   emptyDiff11->SetBinContent(7,1000);
   emptyDiff11->SetBinError(7,1000);
   emptyDiff11->SetMinimum(-0.03501);
   emptyDiff11->SetMaximum(0.0399);
   emptyDiff11->SetEntries(1);
   emptyDiff11->SetLineStyle(0);
   emptyDiff11->SetMarkerStyle(20);
   emptyDiff11->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff11->GetXaxis()->CenterTitle(true);
   emptyDiff11->GetXaxis()->SetLabelFont(43);
   emptyDiff11->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff11->GetXaxis()->SetLabelSize(33);
   emptyDiff11->GetXaxis()->SetTitleSize(33);
   emptyDiff11->GetXaxis()->SetTitleOffset(7.5);
   emptyDiff11->GetXaxis()->SetTitleFont(43);
   emptyDiff11->GetYaxis()->SetTitle("PbPb - pp");
   emptyDiff11->GetYaxis()->CenterTitle(true);
   emptyDiff11->GetYaxis()->SetNdivisions(505);
   emptyDiff11->GetYaxis()->SetLabelFont(43);
   emptyDiff11->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff11->GetYaxis()->SetLabelSize(33);
   emptyDiff11->GetYaxis()->SetTitleSize(33);
   emptyDiff11->GetYaxis()->SetTitleOffset(7.5);
   emptyDiff11->GetYaxis()->SetTitleFont(43);
   emptyDiff11->GetZaxis()->SetLabelFont(42);
   emptyDiff11->GetZaxis()->SetLabelSize(0.045);
   emptyDiff11->GetZaxis()->SetTitleSize(0.035);
   emptyDiff11->GetZaxis()->SetTitleFont(42);
   emptyDiff11->Draw("");
   
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
   5.23114e-05,
   -0.0001104924,
   -5.126335e-05,
   -0.005729915,
   -0.008644333,
   -0.01500269,
   -0.008375958,
   -0.005278323,
   0.004663799,
   0.001479755,
   0.01511579,
   0.002158664,
   0.007733662,
   0.01174887,
   0.001056807,
   -0.0006386284,
   0.0002041284};
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
   -4.315877e-06,
   -0.000113736,
   -0.0005039157,
   -0.001178359,
   -0.001898505,
   -0.002541709,
   -0.00226703,
   -0.002238202,
   -0.00226173,
   -0.002086217,
   -0.001561524,
   -0.00148199,
   -0.001924115,
   -0.002352628,
   -0.002560969,
   -0.002115565,
   -0.0002551883};
   gre = new TGraphErrors(18,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = 938;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,-3.46425,3.51675);
   Graph_Graph1006->SetMinimum(-0.01801454);
   Graph_Graph1006->SetMaximum(0.01812764);
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
   
   Double_t Graph1_fx16[18] = {
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
   Double_t Graph1_fy16[18] = {
   0,
   -2.973942e-06,
   -0.0001817294,
   -0.001294432,
   -0.002657076,
   -0.003933317,
   -0.005060991,
   -0.002895771,
   0.0001002161,
   0.00330465,
   0.006435552,
   0.006169552,
   0.004881416,
   0.002199366,
   -0.0004729246,
   -0.002685886,
   -0.00162562,
   -0.0003257188};
   graph = new TGraph(18,Graph1_fx16,Graph1_fy16);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Graph",100,-3.323417,3.267583);
   Graph_Graph16->SetMinimum(-0.006210646);
   Graph_Graph16->SetMaximum(0.007585207);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);
   Graph_Graph16->SetLineStyle(0);
   Graph_Graph16->SetMarkerStyle(20);
   Graph_Graph16->GetXaxis()->SetLabelFont(42);
   Graph_Graph16->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph16->GetXaxis()->SetTitleFont(42);
   Graph_Graph16->GetYaxis()->SetLabelFont(42);
   Graph_Graph16->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph16->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph16->GetYaxis()->SetTitleFont(42);
   Graph_Graph16->GetZaxis()->SetLabelFont(42);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph16);
   
   graph->Draw(" c");
   
   Double_t Graph2_fx17[18] = {
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
   Double_t Graph2_fy17[18] = {
   0,
   4.744634e-06,
   0.0001111189,
   -0.0006461699,
   -0.002286058,
   -0.002371185,
   -0.001275189,
   0.0001911969,
   0.004322747,
   0.007710226,
   0.009383832,
   0.009742694,
   0.009459533,
   0.003589547,
   0.003157275,
   0.001260445,
   0.0001236002,
   -0.0001908968};
   graph = new TGraph(18,Graph2_fx17,Graph2_fy17);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","Graph",100,-3.323417,3.267583);
   Graph_Graph17->SetMinimum(-0.003582573);
   Graph_Graph17->SetMaximum(0.01095408);
   Graph_Graph17->SetDirectory(0);
   Graph_Graph17->SetStats(0);
   Graph_Graph17->SetLineStyle(0);
   Graph_Graph17->SetMarkerStyle(20);
   Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph17->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph17->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph17->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph17->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph17->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph17->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph17->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph17->GetYaxis()->SetTitleFont(42);
   Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph17->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph17->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph17);
   
   graph->Draw(" c");
   
   Double_t Graph3_fx18[18] = {
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
   Double_t Graph3_fy18[18] = {
   0,
   -1.113282e-05,
   -0.0005384465,
   -0.00163273,
   -0.004330497,
   -0.006400336,
   -0.006607092,
   -0.006963005,
   -0.003744423,
   0.0001448898,
   0.003168499,
   0.005364598,
   0.003259515,
   -0.003513286,
   -0.005404146,
   -0.0066253,
   -0.003580721,
   -0.0006339835};
   graph = new TGraph(18,Graph3_fx18,Graph3_fy18);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","Graph",100,-3.323417,3.267583);
   Graph_Graph18->SetMinimum(-0.008195765);
   Graph_Graph18->SetMaximum(0.006597358);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);
   Graph_Graph18->SetLineStyle(0);
   Graph_Graph18->SetMarkerStyle(20);
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph18->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph18->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph18->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph18->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph18->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph18->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph18);
   
   graph->Draw("  c");
   Double_t xAxis6[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_512 = new TH1D("hist_eta_diff_512","",18, xAxis6);
   hist_eta_diff_512->SetBinContent(2,5.23114e-05);
   hist_eta_diff_512->SetBinContent(3,-0.0001104924);
   hist_eta_diff_512->SetBinContent(4,-5.126334e-05);
   hist_eta_diff_512->SetBinContent(5,-0.005729915);
   hist_eta_diff_512->SetBinContent(6,-0.008644333);
   hist_eta_diff_512->SetBinContent(7,-0.01500269);
   hist_eta_diff_512->SetBinContent(8,-0.008375957);
   hist_eta_diff_512->SetBinContent(9,-0.005278323);
   hist_eta_diff_512->SetBinContent(10,0.004663799);
   hist_eta_diff_512->SetBinContent(11,0.001479755);
   hist_eta_diff_512->SetBinContent(12,0.01511579);
   hist_eta_diff_512->SetBinContent(13,0.002158664);
   hist_eta_diff_512->SetBinContent(14,0.007733662);
   hist_eta_diff_512->SetBinContent(15,0.01174887);
   hist_eta_diff_512->SetBinContent(16,0.001056807);
   hist_eta_diff_512->SetBinContent(17,-0.0006386284);
   hist_eta_diff_512->SetBinContent(18,0.0002041284);
   hist_eta_diff_512->SetBinError(2,4.129727e-05);
   hist_eta_diff_512->SetBinError(3,0.0002472209);
   hist_eta_diff_512->SetBinError(4,0.0007453497);
   hist_eta_diff_512->SetBinError(5,0.001499229);
   hist_eta_diff_512->SetBinError(6,0.002479709);
   hist_eta_diff_512->SetBinError(7,0.003362481);
   hist_eta_diff_512->SetBinError(8,0.004235118);
   hist_eta_diff_512->SetBinError(9,0.00486817);
   hist_eta_diff_512->SetBinError(10,0.005325385);
   hist_eta_diff_512->SetBinError(11,0.005542098);
   hist_eta_diff_512->SetBinError(12,0.005600868);
   hist_eta_diff_512->SetBinError(13,0.00533848);
   hist_eta_diff_512->SetBinError(14,0.004943355);
   hist_eta_diff_512->SetBinError(15,0.004338477);
   hist_eta_diff_512->SetBinError(16,0.003445913);
   hist_eta_diff_512->SetBinError(17,0.001451094);
   hist_eta_diff_512->SetBinError(18,0.0003458934);
   hist_eta_diff_512->SetEntries(0.0006130645);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_512->SetLineColor(ci);
   hist_eta_diff_512->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_512->SetMarkerColor(ci);
   hist_eta_diff_512->SetMarkerStyle(20);
   hist_eta_diff_512->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_512->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_512->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_512->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_512->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_512->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_512->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_512->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_512->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_512->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_512->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_512->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_512->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_512->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_512->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_512->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_512->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_512->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_512->Draw("same p");
      tex = new TLatex(0.35,0.28,"150 < p_{T}^{ave} < 400 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(33);
   tex->Draw();
   line = new TLine(-3,0,3,0);
   line->Draw();
   p_0_5->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_1_0
   TPad *p_1_0 = new TPad("p_1_0", "p_1_0",0.3883495,0.8096192,0.6601942,1);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(0,0,1,1);
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
      tex = new TLatex(0.05,0.93,"p_{T,1} > 20, p_{T,2} > 30 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_0->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_1_1
   TPad *p_1_1 = new TPad("p_1_1", "p_1_1",0.3883495,0.6573147,0.6601942,0.8096192);
   p_1_1->Draw();
   p_1_1->cd();
   p_1_1->Range(0,0,1,1);
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
   p_1_1->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_1_2
   TPad *p_1_2 = new TPad("p_1_2", "p_1_2",0.3883495,0.50501,0.6601942,0.6573147);
   p_1_2->Draw();
   p_1_2->cd();
   p_1_2->Range(0,0,1,1);
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
   p_1_2->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_1_3
   TPad *p_1_3 = new TPad("p_1_3", "p_1_3",0.3883495,0.3527054,0.6601942,0.50501);
   p_1_3->Draw();
   p_1_3->cd();
   p_1_3->Range(0,0,1,1);
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
   p_1_3->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_1_4
   TPad *p_1_4 = new TPad("p_1_4", "p_1_4",0.3883495,0.2004008,0.6601942,0.3527054);
   p_1_4->Draw();
   p_1_4->cd();
   p_1_4->Range(0,0,1,1);
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
   p_1_4->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_1_5
   TPad *p_1_5 = new TPad("p_1_5", "p_1_5",0.3883495,0,0.6601942,0.2004008);
   p_1_5->Draw();
   p_1_5->cd();
   p_1_5->Range(0,0,1,1);
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
   p_1_5->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_2_0
   TPad *p_2_0 = new TPad("p_2_0", "p_2_0",0.6601942,0.8096192,1,1);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(0,0,1,1);
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
      tex = new TLatex(0.05,0.93,"#Delta#phi_{1,2} > 2#pi/3");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_2_0->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_2_1
   TPad *p_2_1 = new TPad("p_2_1", "p_2_1",0.6601942,0.6573147,1,0.8096192);
   p_2_1->Draw();
   p_2_1->cd();
   p_2_1->Range(0,0,1,1);
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
   p_2_1->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_2_2
   TPad *p_2_2 = new TPad("p_2_2", "p_2_2",0.6601942,0.50501,1,0.6573147);
   p_2_2->Draw();
   p_2_2->cd();
   p_2_2->Range(0,0,1,1);
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
   p_2_2->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_2_3
   TPad *p_2_3 = new TPad("p_2_3", "p_2_3",0.6601942,0.3527054,1,0.50501);
   p_2_3->Draw();
   p_2_3->cd();
   p_2_3->Range(0,0,1,1);
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
   p_2_3->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_2_4
   TPad *p_2_4 = new TPad("p_2_4", "p_2_4",0.6601942,0.2004008,1,0.3527054);
   p_2_4->Draw();
   p_2_4->cd();
   p_2_4->Range(0,0,1,1);
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
   p_2_4->Modified();
   cdiff->cd();
  
// ------------>Primitives in pad: p_2_5
   TPad *p_2_5 = new TPad("p_2_5", "p_2_5",0.6601942,0,1,0.2004008);
   p_2_5->Draw();
   p_2_5->cd();
   p_2_5->Range(0,0,1,1);
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
   p_2_5->Modified();
   cdiff->cd();
   cdiff->Modified();
   cdiff->cd();
   cdiff->SetSelected(cdiff);
}
