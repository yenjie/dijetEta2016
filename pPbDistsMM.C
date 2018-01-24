void pPbDistsMM()
{
//=========Macro generated from canvas: cpPb/
//=========  (Tue Aug  2 10:06:23 2016) by ROOT version6.06/01

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cpPb = new TCanvas("cpPb", "",0,0,1300,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   cpPb->Range(0,0,1,1);
   cpPb->SetFillColor(0);
   cpPb->SetBorderMode(0);
   cpPb->SetBorderSize(0);
   cpPb->SetTickx(1);
   cpPb->SetTicky(1);
   cpPb->SetLeftMargin(0.17);
   cpPb->SetRightMargin(0.01);
   cpPb->SetTopMargin(0.01);
   cpPb->SetBottomMargin(0.15);
   cpPb->SetFrameLineColor(0);
   cpPb->SetFrameBorderMode(0);
  
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
   
   TH1D *emptyDist__37 = new TH1D("emptyDist__37","",10,-2.999,2.999);
   emptyDist__37->SetBinContent(7,1000);
   emptyDist__37->SetBinError(7,1000);
   emptyDist__37->SetMinimum(0.0001);
   emptyDist__37->SetMaximum(0.4999);
   emptyDist__37->SetEntries(1);
   emptyDist__37->SetLineStyle(0);
   emptyDist__37->SetMarkerStyle(20);
   emptyDist__37->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__37->GetXaxis()->CenterTitle(true);
   emptyDist__37->GetXaxis()->SetLabelFont(43);
   emptyDist__37->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__37->GetXaxis()->SetLabelSize(33);
   emptyDist__37->GetXaxis()->SetTitleSize(33);
   emptyDist__37->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__37->GetXaxis()->SetTitleFont(43);
   emptyDist__37->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__37->GetYaxis()->CenterTitle(true);
   emptyDist__37->GetYaxis()->SetNdivisions(505);
   emptyDist__37->GetYaxis()->SetLabelFont(43);
   emptyDist__37->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__37->GetYaxis()->SetLabelSize(33);
   emptyDist__37->GetYaxis()->SetTitleSize(33);
   emptyDist__37->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__37->GetYaxis()->SetTitleFont(43);
   emptyDist__37->GetZaxis()->SetLabelFont(42);
   emptyDist__37->GetZaxis()->SetLabelSize(0.045);
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

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1205;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","Graph",100,-3.46425,3.51675);
   Graph_Graph1013->SetMinimum(0);
   Graph_Graph1013->SetMaximum(0.3486352);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);
   Graph_Graph1013->SetLineStyle(0);
   Graph_Graph1013->SetMarkerStyle(20);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1013->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.045);
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

   ci = 1206;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3013 = new TH1F("Graph_g3013","",100,-3.5065,3.5915);
   Graph_g3013->SetMinimum(0);
   Graph_g3013->SetMaximum(0.3558713);
   Graph_g3013->SetDirectory(0);
   Graph_g3013->SetStats(0);
   Graph_g3013->SetLineStyle(0);
   Graph_g3013->SetMarkerStyle(20);
   Graph_g3013->GetXaxis()->SetLabelFont(42);
   Graph_g3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3013->GetXaxis()->SetLabelSize(0.045);
   Graph_g3013->GetXaxis()->SetTitleSize(0.055);
   Graph_g3013->GetXaxis()->SetTitleFont(42);
   Graph_g3013->GetYaxis()->SetLabelFont(42);
   Graph_g3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3013->GetYaxis()->SetLabelSize(0.045);
   Graph_g3013->GetYaxis()->SetTitleSize(0.055);
   Graph_g3013->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3013->GetYaxis()->SetTitleFont(42);
   Graph_g3013->GetZaxis()->SetLabelFont(42);
   Graph_g3013->GetZaxis()->SetLabelSize(0.045);
   Graph_g3013->GetZaxis()->SetTitleSize(0.035);
   Graph_g3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3013);
   
   grae->Draw(" 2");
   
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
   0.005392216,
   0.03046107,
   0.0731412,
   0.1121317,
   0.155088,
   0.1989513,
   0.2408358,
   0.2788452,
   0.3063834,
   0.3244399,
   0.3256766,
   0.3133916,
   0.2901408,
   0.2543576,
   0.2123082,
   0.1639926,
   0.09415765,
   0.02299112};
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
   0.0007952259,
   0.002170566,
   0.003145666,
   0.004308427,
   0.005131123,
   0.004453598,
   0.005802515,
   0.009120603,
   0.0052295,
   0.00593279,
   0.004964375,
   0.00288054,
   0.005238454,
   0.005898807,
   0.009911067,
   0.006647205,
   0.004818896,
   0.001734542};
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
   0.0003751082,
   0.002017612,
   0.003733866,
   0.002880282,
   0.003069925,
   0.00673299,
   0.008179046,
   0.005647349,
   0.00995511,
   0.006972034,
   0.004615993,
   0.005264101,
   0.003533083,
   0.007255933,
   0.005665784,
   0.00736288,
   0.005174568,
   0.001308415};
   grae = new TGraphAsymmErrors(18,g_fx3014,g_fy3014,g_felx3014,g_fehx3014,g_fely3014,g_fehy3014);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1207;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3014 = new TH1F("Graph_g3014","",100,-3.5065,3.5915);
   Graph_g3014->SetMinimum(0);
   Graph_g3014->SetMaximum(0.3640934);
   Graph_g3014->SetDirectory(0);
   Graph_g3014->SetStats(0);
   Graph_g3014->SetLineStyle(0);
   Graph_g3014->SetMarkerStyle(20);
   Graph_g3014->GetXaxis()->SetLabelFont(42);
   Graph_g3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3014->GetXaxis()->SetLabelSize(0.045);
   Graph_g3014->GetXaxis()->SetTitleSize(0.055);
   Graph_g3014->GetXaxis()->SetTitleFont(42);
   Graph_g3014->GetYaxis()->SetLabelFont(42);
   Graph_g3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3014->GetYaxis()->SetLabelSize(0.045);
   Graph_g3014->GetYaxis()->SetTitleSize(0.055);
   Graph_g3014->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3014->GetYaxis()->SetTitleFont(42);
   Graph_g3014->GetZaxis()->SetLabelFont(42);
   Graph_g3014->GetZaxis()->SetLabelSize(0.045);
   Graph_g3014->GetZaxis()->SetTitleSize(0.035);
   Graph_g3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3014);
   
   grae->Draw(" 2");
   
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
   0.005243484,
   0.03117792,
   0.07718796,
   0.1182951,
   0.1651854,
   0.2116643,
   0.2540301,
   0.2910487,
   0.3162214,
   0.3293013,
   0.325764,
   0.3084063,
   0.2798609,
   0.241526,
   0.1985844,
   0.1519409,
   0.08613002,
   0.02070987};
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
   0.000224363,
   0.001048904,
   0.003468387,
   0.001683556,
   0.003729328,
   0.001231549,
   0.00171557,
   0.004720372,
   0.001778514,
   0.001269977,
   0.003623239,
   0.002886636,
   0.002444345,
   0.00122249,
   0.002420407,
   0.001355353,
   0.0005591412,
   0.0005168265};
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
   0.0005831879,
   0.001176182,
   0.001332637,
   0.002920873,
   0.001701293,
   0.002187294,
   0.002934133,
   0.0002417127,
   0.00297248,
   0.004373581,
   0.002770405,
   0.002731525,
   0.003028139,
   0.003416694,
   0.001038665,
   0.001415903,
   0.00110231,
   0.0006642094};
   grae = new TGraphAsymmErrors(18,g_fx3015,g_fy3015,g_felx3015,g_fehx3015,g_fely3015,g_fehy3015);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1208;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3015 = new TH1F("Graph_g3015","",100,-3.5065,3.5915);
   Graph_g3015->SetMinimum(0);
   Graph_g3015->SetMaximum(0.3665405);
   Graph_g3015->SetDirectory(0);
   Graph_g3015->SetStats(0);
   Graph_g3015->SetLineStyle(0);
   Graph_g3015->SetMarkerStyle(20);
   Graph_g3015->GetXaxis()->SetLabelFont(42);
   Graph_g3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3015->GetXaxis()->SetLabelSize(0.045);
   Graph_g3015->GetXaxis()->SetTitleSize(0.055);
   Graph_g3015->GetXaxis()->SetTitleFont(42);
   Graph_g3015->GetYaxis()->SetLabelFont(42);
   Graph_g3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3015->GetYaxis()->SetLabelSize(0.045);
   Graph_g3015->GetYaxis()->SetTitleSize(0.055);
   Graph_g3015->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3015->GetYaxis()->SetTitleFont(42);
   Graph_g3015->GetZaxis()->SetLabelFont(42);
   Graph_g3015->GetZaxis()->SetLabelSize(0.045);
   Graph_g3015->GetZaxis()->SetTitleSize(0.035);
   Graph_g3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3015);
   
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
   cpPb->cd();
  
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
   
   TH1D *emptyDist__39 = new TH1D("emptyDist__39","",10,-2.999,2.999);
   emptyDist__39->SetBinContent(7,1000);
   emptyDist__39->SetBinError(7,1000);
   emptyDist__39->SetMinimum(0.0001);
   emptyDist__39->SetMaximum(0.4999);
   emptyDist__39->SetEntries(1);
   emptyDist__39->SetLineStyle(0);
   emptyDist__39->SetMarkerStyle(20);
   emptyDist__39->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__39->GetXaxis()->CenterTitle(true);
   emptyDist__39->GetXaxis()->SetLabelFont(43);
   emptyDist__39->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__39->GetXaxis()->SetLabelSize(33);
   emptyDist__39->GetXaxis()->SetTitleSize(33);
   emptyDist__39->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__39->GetXaxis()->SetTitleFont(43);
   emptyDist__39->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__39->GetYaxis()->CenterTitle(true);
   emptyDist__39->GetYaxis()->SetNdivisions(505);
   emptyDist__39->GetYaxis()->SetLabelFont(43);
   emptyDist__39->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__39->GetYaxis()->SetLabelSize(33);
   emptyDist__39->GetYaxis()->SetTitleSize(33);
   emptyDist__39->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__39->GetYaxis()->SetTitleFont(43);
   emptyDist__39->GetZaxis()->SetLabelFont(42);
   emptyDist__39->GetZaxis()->SetLabelSize(0.045);
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

   ci = 1217;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","Graph",100,-3.46425,3.51675);
   Graph_Graph1014->SetMinimum(0);
   Graph_Graph1014->SetMaximum(0.4202606);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);
   Graph_Graph1014->SetLineStyle(0);
   Graph_Graph1014->SetMarkerStyle(20);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1014->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1014->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1014->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
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
   grae = new TGraphAsymmErrors(18,g_fx3016,g_fy3016,g_felx3016,g_fehx3016,g_fely3016,g_fehy3016);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1218;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3016 = new TH1F("Graph_g3016","",100,-3.5065,3.5915);
   Graph_g3016->SetMinimum(-0.03617432);
   Graph_g3016->SetMaximum(0.3979105);
   Graph_g3016->SetDirectory(0);
   Graph_g3016->SetStats(0);
   Graph_g3016->SetLineStyle(0);
   Graph_g3016->SetMarkerStyle(20);
   Graph_g3016->GetXaxis()->SetLabelFont(42);
   Graph_g3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3016->GetXaxis()->SetLabelSize(0.045);
   Graph_g3016->GetXaxis()->SetTitleSize(0.055);
   Graph_g3016->GetXaxis()->SetTitleFont(42);
   Graph_g3016->GetYaxis()->SetLabelFont(42);
   Graph_g3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3016->GetYaxis()->SetLabelSize(0.045);
   Graph_g3016->GetYaxis()->SetTitleSize(0.055);
   Graph_g3016->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3016->GetYaxis()->SetTitleFont(42);
   Graph_g3016->GetZaxis()->SetLabelFont(42);
   Graph_g3016->GetZaxis()->SetLabelSize(0.045);
   Graph_g3016->GetZaxis()->SetTitleSize(0.035);
   Graph_g3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3016);
   
   grae->Draw(" 2");
   
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
   5.254131e-06,
   0.001975513,
   0.01778856,
   0.04793773,
   0.0939089,
   0.1503734,
   0.2079305,
   0.2640474,
   0.3076001,
   0.3450941,
   0.3652068,
   0.36913,
   0.3506065,
   0.3144533,
   0.2662325,
   0.2018718,
   0.1047846,
   0.01729443};
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
   1.95204e-06,
   0.0002353038,
   0.001835344,
   0.003859388,
   0.005694384,
   0.01042837,
   0.008862504,
   0.01385451,
   0.003551149,
   0.004266155,
   0.0040232,
   0.01036246,
   0.007757232,
   0.006296177,
   0.0120232,
   0.005360413,
   0.003652406,
   0.0009817436};
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
   2.574093e-06,
   0.0001493873,
   0.0009818803,
   0.004357246,
   0.006190093,
   0.006837713,
   0.0100576,
   0.005081964,
   0.00814814,
   0.003524104,
   0.009112924,
   0.007519235,
   0.01184883,
   0.01335001,
   0.003569791,
   0.006729006,
   0.004748087,
   0.001116056};
   grae = new TGraphAsymmErrors(18,g_fx3017,g_fy3017,g_felx3017,g_fehx3017,g_fely3017,g_fehy3017);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1219;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3017 = new TH1F("Graph_g3017","",100,-3.5065,3.5915);
   Graph_g3017->SetMinimum(0);
   Graph_g3017->SetMaximum(0.4143138);
   Graph_g3017->SetDirectory(0);
   Graph_g3017->SetStats(0);
   Graph_g3017->SetLineStyle(0);
   Graph_g3017->SetMarkerStyle(20);
   Graph_g3017->GetXaxis()->SetLabelFont(42);
   Graph_g3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3017->GetXaxis()->SetLabelSize(0.045);
   Graph_g3017->GetXaxis()->SetTitleSize(0.055);
   Graph_g3017->GetXaxis()->SetTitleFont(42);
   Graph_g3017->GetYaxis()->SetLabelFont(42);
   Graph_g3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3017->GetYaxis()->SetLabelSize(0.045);
   Graph_g3017->GetYaxis()->SetTitleSize(0.055);
   Graph_g3017->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3017->GetYaxis()->SetTitleFont(42);
   Graph_g3017->GetZaxis()->SetLabelFont(42);
   Graph_g3017->GetZaxis()->SetLabelSize(0.045);
   Graph_g3017->GetZaxis()->SetTitleSize(0.035);
   Graph_g3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3017);
   
   grae->Draw(" 2");
   
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
   -3.137979e-07,
   0.001614622,
   0.01658313,
   0.04605023,
   0.09184803,
   0.1475297,
   0.2081144,
   0.2677768,
   0.319235,
   0.3559839,
   0.3764701,
   0.3752079,
   0.3522459,
   0.3138465,
   0.2566599,
   0.1925313,
   0.09764921,
   0.01584281};
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
   8.659228e-05,
   0.001693637,
   0.0008813901,
   0.00309041,
   0.00146813,
   0.002183097,
   0.003543954,
   0.007750725,
   0.001294245,
   0.003665608,
   0.001794888,
   0.002369387,
   0.01177628,
   0.001141529,
   0.002934586,
   0.001111494,
   0.0006614717};
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
   2.224144e-06,
   0.0002169557,
   0.0002174317,
   0.001907323,
   0.001368297,
   0.003715802,
   0.003308445,
   0.001867974,
   0.0004245322,
   0.006022282,
   0.004557046,
   0.005641164,
   0.007386115,
   0,
   0.006027866,
   0.001871198,
   0.002195383,
   0.0004248077};
   grae = new TGraphAsymmErrors(18,g_fx3018,g_fy3018,g_felx3018,g_fehx3018,g_fely3018,g_fehy3018);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1220;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3018 = new TH1F("Graph_g3018","",100,-3.5065,3.5915);
   Graph_g3018->SetMinimum(-0.03810306);
   Graph_g3018->SetMaximum(0.4191299);
   Graph_g3018->SetDirectory(0);
   Graph_g3018->SetStats(0);
   Graph_g3018->SetLineStyle(0);
   Graph_g3018->SetMarkerStyle(20);
   Graph_g3018->GetXaxis()->SetLabelFont(42);
   Graph_g3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3018->GetXaxis()->SetLabelSize(0.045);
   Graph_g3018->GetXaxis()->SetTitleSize(0.055);
   Graph_g3018->GetXaxis()->SetTitleFont(42);
   Graph_g3018->GetYaxis()->SetLabelFont(42);
   Graph_g3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3018->GetYaxis()->SetLabelSize(0.045);
   Graph_g3018->GetYaxis()->SetTitleSize(0.055);
   Graph_g3018->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3018->GetYaxis()->SetTitleFont(42);
   Graph_g3018->GetZaxis()->SetLabelFont(42);
   Graph_g3018->GetZaxis()->SetLabelSize(0.045);
   Graph_g3018->GetZaxis()->SetTitleSize(0.035);
   Graph_g3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3018);
   
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
   
   TH1D *emptyDist__41 = new TH1D("emptyDist__41","",10,-2.999,2.999);
   emptyDist__41->SetBinContent(7,1000);
   emptyDist__41->SetBinError(7,1000);
   emptyDist__41->SetMinimum(0.0001);
   emptyDist__41->SetMaximum(0.4999);
   emptyDist__41->SetEntries(1);
   emptyDist__41->SetLineStyle(0);
   emptyDist__41->SetMarkerStyle(20);
   emptyDist__41->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__41->GetXaxis()->CenterTitle(true);
   emptyDist__41->GetXaxis()->SetLabelFont(43);
   emptyDist__41->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__41->GetXaxis()->SetLabelSize(33);
   emptyDist__41->GetXaxis()->SetTitleSize(33);
   emptyDist__41->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__41->GetXaxis()->SetTitleFont(43);
   emptyDist__41->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__41->GetYaxis()->CenterTitle(true);
   emptyDist__41->GetYaxis()->SetNdivisions(505);
   emptyDist__41->GetYaxis()->SetLabelFont(43);
   emptyDist__41->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__41->GetYaxis()->SetLabelSize(33);
   emptyDist__41->GetYaxis()->SetTitleSize(33);
   emptyDist__41->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__41->GetYaxis()->SetTitleFont(43);
   emptyDist__41->GetZaxis()->SetLabelFont(42);
   emptyDist__41->GetZaxis()->SetLabelSize(0.045);
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

   ci = 1209;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","Graph",100,-3.46425,3.51675);
   Graph_Graph1015->SetMinimum(0);
   Graph_Graph1015->SetMaximum(0.3786405);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);
   Graph_Graph1015->SetLineStyle(0);
   Graph_Graph1015->SetMarkerStyle(20);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
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
   grae = new TGraphAsymmErrors(18,g_fx3019,g_fy3019,g_felx3019,g_fehx3019,g_fely3019,g_fehy3019);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1210;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3019 = new TH1F("Graph_g3019","",100,-3.5065,3.5915);
   Graph_g3019->SetMinimum(0);
   Graph_g3019->SetMaximum(0.3573677);
   Graph_g3019->SetDirectory(0);
   Graph_g3019->SetStats(0);
   Graph_g3019->SetLineStyle(0);
   Graph_g3019->SetMarkerStyle(20);
   Graph_g3019->GetXaxis()->SetLabelFont(42);
   Graph_g3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3019->GetXaxis()->SetLabelSize(0.045);
   Graph_g3019->GetXaxis()->SetTitleSize(0.055);
   Graph_g3019->GetXaxis()->SetTitleFont(42);
   Graph_g3019->GetYaxis()->SetLabelFont(42);
   Graph_g3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3019->GetYaxis()->SetLabelSize(0.045);
   Graph_g3019->GetYaxis()->SetTitleSize(0.055);
   Graph_g3019->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3019->GetYaxis()->SetTitleFont(42);
   Graph_g3019->GetZaxis()->SetLabelFont(42);
   Graph_g3019->GetZaxis()->SetLabelSize(0.045);
   Graph_g3019->GetZaxis()->SetTitleSize(0.035);
   Graph_g3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3019);
   
   grae->Draw(" 2");
   
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
   0.0007594734,
   0.01464475,
   0.05091791,
   0.08859872,
   0.1322538,
   0.1781736,
   0.2228049,
   0.2633752,
   0.2994941,
   0.3233131,
   0.3344026,
   0.3310835,
   0.3126922,
   0.2827037,
   0.2402982,
   0.1907079,
   0.1099382,
   0.02477562};
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
   6.22264e-05,
   0.001450999,
   0.003471738,
   0.00675641,
   0.005822038,
   0.006687828,
   0.006903342,
   0.004834088,
   0.0088224,
   0.01085027,
   0.009111438,
   0.008007414,
   0.006384278,
   0.003448197,
   0.003925202,
   0.006044531,
   0.006219723,
   0.001847582};
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
   0.000222688,
   0.001018215,
   0.0043744,
   0.004950441,
   0.007346427,
   0.0063543,
   0.006492925,
   0.007576822,
   0.003923471,
   0.005592482,
   0.008880748,
   0.008758471,
   0.00915947,
   0.007993623,
   0.007264644,
   0.005975965,
   0.003860603,
   0.001347413};
   grae = new TGraphAsymmErrors(18,g_fx3020,g_fy3020,g_felx3020,g_fehx3020,g_fely3020,g_fehy3020);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1211;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3020 = new TH1F("Graph_g3020","",100,-3.5065,3.5915);
   Graph_g3020->SetMinimum(0);
   Graph_g3020->SetMaximum(0.3775419);
   Graph_g3020->SetDirectory(0);
   Graph_g3020->SetStats(0);
   Graph_g3020->SetLineStyle(0);
   Graph_g3020->SetMarkerStyle(20);
   Graph_g3020->GetXaxis()->SetLabelFont(42);
   Graph_g3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3020->GetXaxis()->SetLabelSize(0.045);
   Graph_g3020->GetXaxis()->SetTitleSize(0.055);
   Graph_g3020->GetXaxis()->SetTitleFont(42);
   Graph_g3020->GetYaxis()->SetLabelFont(42);
   Graph_g3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3020->GetYaxis()->SetLabelSize(0.045);
   Graph_g3020->GetYaxis()->SetTitleSize(0.055);
   Graph_g3020->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3020->GetYaxis()->SetTitleFont(42);
   Graph_g3020->GetZaxis()->SetLabelFont(42);
   Graph_g3020->GetZaxis()->SetLabelSize(0.045);
   Graph_g3020->GetZaxis()->SetTitleSize(0.035);
   Graph_g3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3020);
   
   grae->Draw(" 2");
   
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
   0.0006548683,
   0.01412832,
   0.0499646,
   0.08838405,
   0.1347577,
   0.1827917,
   0.2327563,
   0.2755389,
   0.3098268,
   0.3335349,
   0.3408713,
   0.3334191,
   0.3096724,
   0.2752686,
   0.2293584,
   0.1791621,
   0.100798,
   0.02224081};
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
   4.219587e-05,
   0.0006964378,
   0.0005787307,
   0.00302629,
   0.006302162,
   0.0005303938,
   0.005250606,
   0.003464627,
   0.0007576103,
   0.007543786,
   0.005431182,
   0.007010522,
   0.004250927,
   0.002489755,
   0.001533811,
   0.003101525,
   0.001156773,
   0.0006169722};
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
   0.0002597878,
   0.0005389114,
   0.003100736,
   0.001988001,
   0.001363872,
   0.005416337,
   0.001660387,
   0.004260855,
   0.007280195,
   0.001651654,
   0.00398761,
   0.003081658,
   0.004424637,
   0.002756319,
   0.004873383,
   0.002035091,
   0.001653434,
   0.000818715};
   grae = new TGraphAsymmErrors(18,g_fx3021,g_fy3021,g_felx3021,g_fehx3021,g_fely3021,g_fehy3021);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1212;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3021 = new TH1F("Graph_g3021","",100,-3.5065,3.5915);
   Graph_g3021->SetMinimum(0);
   Graph_g3021->SetMaximum(0.3792835);
   Graph_g3021->SetDirectory(0);
   Graph_g3021->SetStats(0);
   Graph_g3021->SetLineStyle(0);
   Graph_g3021->SetMarkerStyle(20);
   Graph_g3021->GetXaxis()->SetLabelFont(42);
   Graph_g3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3021->GetXaxis()->SetLabelSize(0.045);
   Graph_g3021->GetXaxis()->SetTitleSize(0.055);
   Graph_g3021->GetXaxis()->SetTitleFont(42);
   Graph_g3021->GetYaxis()->SetLabelFont(42);
   Graph_g3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3021->GetYaxis()->SetLabelSize(0.045);
   Graph_g3021->GetYaxis()->SetTitleSize(0.055);
   Graph_g3021->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3021->GetYaxis()->SetTitleFont(42);
   Graph_g3021->GetZaxis()->SetLabelFont(42);
   Graph_g3021->GetZaxis()->SetLabelSize(0.045);
   Graph_g3021->GetZaxis()->SetTitleSize(0.035);
   Graph_g3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3021);
   
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
   
   TH1D *emptyDist__43 = new TH1D("emptyDist__43","",10,-2.999,2.999);
   emptyDist__43->SetBinContent(7,1000);
   emptyDist__43->SetBinError(7,1000);
   emptyDist__43->SetMinimum(0.0001);
   emptyDist__43->SetMaximum(0.4999);
   emptyDist__43->SetEntries(1);
   emptyDist__43->SetLineStyle(0);
   emptyDist__43->SetMarkerStyle(20);
   emptyDist__43->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__43->GetXaxis()->CenterTitle(true);
   emptyDist__43->GetXaxis()->SetLabelFont(43);
   emptyDist__43->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__43->GetXaxis()->SetLabelSize(33);
   emptyDist__43->GetXaxis()->SetTitleSize(33);
   emptyDist__43->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__43->GetXaxis()->SetTitleFont(43);
   emptyDist__43->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__43->GetYaxis()->CenterTitle(true);
   emptyDist__43->GetYaxis()->SetNdivisions(505);
   emptyDist__43->GetYaxis()->SetLabelFont(43);
   emptyDist__43->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__43->GetYaxis()->SetLabelSize(33);
   emptyDist__43->GetYaxis()->SetTitleSize(33);
   emptyDist__43->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__43->GetYaxis()->SetTitleFont(43);
   emptyDist__43->GetZaxis()->SetLabelFont(42);
   emptyDist__43->GetZaxis()->SetLabelSize(0.045);
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

   ci = 1221;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","Graph",100,-3.46425,3.51675);
   Graph_Graph1016->SetMinimum(0);
   Graph_Graph1016->SetMaximum(0.4428621);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);
   Graph_Graph1016->SetLineStyle(0);
   Graph_Graph1016->SetMarkerStyle(20);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1016->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1016->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1016->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
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
   grae = new TGraphAsymmErrors(18,g_fx3022,g_fy3022,g_felx3022,g_fehx3022,g_fely3022,g_fehy3022);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1222;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3022 = new TH1F("Graph_g3022","",100,-3.5065,3.5915);
   Graph_g3022->SetMinimum(-0.03806515);
   Graph_g3022->SetMaximum(0.4187166);
   Graph_g3022->SetDirectory(0);
   Graph_g3022->SetStats(0);
   Graph_g3022->SetLineStyle(0);
   Graph_g3022->SetMarkerStyle(20);
   Graph_g3022->GetXaxis()->SetLabelFont(42);
   Graph_g3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3022->GetXaxis()->SetLabelSize(0.045);
   Graph_g3022->GetXaxis()->SetTitleSize(0.055);
   Graph_g3022->GetXaxis()->SetTitleFont(42);
   Graph_g3022->GetYaxis()->SetLabelFont(42);
   Graph_g3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3022->GetYaxis()->SetLabelSize(0.045);
   Graph_g3022->GetYaxis()->SetTitleSize(0.055);
   Graph_g3022->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3022->GetYaxis()->SetTitleFont(42);
   Graph_g3022->GetZaxis()->SetLabelFont(42);
   Graph_g3022->GetZaxis()->SetLabelSize(0.045);
   Graph_g3022->GetZaxis()->SetTitleSize(0.035);
   Graph_g3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3022);
   
   grae->Draw(" 2");
   
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
   2.751927e-10,
   0.0004758601,
   0.007477664,
   0.02989712,
   0.07236979,
   0.1307818,
   0.196801,
   0.2607903,
   0.3159835,
   0.3598674,
   0.3850958,
   0.3907988,
   0.3720466,
   0.3323191,
   0.2744194,
   0.2033739,
   0.09637061,
   0.01229039};
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
   4.930424e-10,
   9.13387e-05,
   0.0004405586,
   0.00260204,
   0.005884786,
   0.008323049,
   0.009919345,
   0.008997873,
   0.008596299,
   0.008570111,
   0.006762911,
   0.01000854,
   0.007296455,
   0.007209872,
   0.006769604,
   0.006070262,
   0.002495986,
   0.0009128531};
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
   3.373554e-09,
   3.214432e-05,
   0.0008957591,
   0.001816907,
   0.004718231,
   0.008275693,
   0.009618486,
   0.00926751,
   0.006741688,
   0.0020774,
   0.001927682,
   0.005772503,
   0.01401234,
   0.01284147,
   0.009726894,
   0.006651538,
   0.004692018,
   0.0004919379};
   grae = new TGraphAsymmErrors(18,g_fx3023,g_fy3023,g_felx3023,g_fehx3023,g_fely3023,g_fehy3023);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1223;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3023 = new TH1F("Graph_g3023","",100,-3.5065,3.5915);
   Graph_g3023->SetMinimum(-0.03965713);
   Graph_g3023->SetMaximum(0.4362284);
   Graph_g3023->SetDirectory(0);
   Graph_g3023->SetStats(0);
   Graph_g3023->SetLineStyle(0);
   Graph_g3023->SetMarkerStyle(20);
   Graph_g3023->GetXaxis()->SetLabelFont(42);
   Graph_g3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3023->GetXaxis()->SetLabelSize(0.045);
   Graph_g3023->GetXaxis()->SetTitleSize(0.055);
   Graph_g3023->GetXaxis()->SetTitleFont(42);
   Graph_g3023->GetYaxis()->SetLabelFont(42);
   Graph_g3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3023->GetYaxis()->SetLabelSize(0.045);
   Graph_g3023->GetYaxis()->SetTitleSize(0.055);
   Graph_g3023->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3023->GetYaxis()->SetTitleFont(42);
   Graph_g3023->GetZaxis()->SetLabelFont(42);
   Graph_g3023->GetZaxis()->SetLabelSize(0.045);
   Graph_g3023->GetZaxis()->SetTitleSize(0.035);
   Graph_g3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3023);
   
   grae->Draw(" 2");
   
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
   1.575209e-10,
   0.000302134,
   0.006513929,
   0.02773043,
   0.06926976,
   0.126824,
   0.1947889,
   0.2610641,
   0.3218946,
   0.3683623,
   0.3960552,
   0.3985898,
   0.3773742,
   0.332784,
   0.2689495,
   0.1960093,
   0.09068246,
   0.01105838};
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
   7.297777e-10,
   7.529223e-05,
   0.0002727549,
   0.0005407166,
   0.001791855,
   0.0007542272,
   0.005092994,
   0.000761924,
   0.00251801,
   0.003352819,
   0.005030554,
   0.002294214,
   0.003961684,
   0.004418749,
   0.001151926,
   0.003697814,
   0.0009622398,
   0.0001100501};
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
   1.385029e-10,
   6.551063e-05,
   0.0005624289,
   0.001387317,
   0.001500655,
   0.003566936,
   0.0005870356,
   0.005163367,
   0.001872033,
   0.003132058,
   0.002405401,
   0.00462869,
   0.00275885,
   0.001047898,
   0.005049234,
   0.00068023,
   0.001935537,
   0.0007666036};
   grae = new TGraphAsymmErrors(18,g_fx3024,g_fy3024,g_felx3024,g_fehx3024,g_fely3024,g_fehy3024);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1224;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3024 = new TH1F("Graph_g3024","",100,-3.5065,3.5915);
   Graph_g3024->SetMinimum(-0.04032185);
   Graph_g3024->SetMaximum(0.4435403);
   Graph_g3024->SetDirectory(0);
   Graph_g3024->SetStats(0);
   Graph_g3024->SetLineStyle(0);
   Graph_g3024->SetMarkerStyle(20);
   Graph_g3024->GetXaxis()->SetLabelFont(42);
   Graph_g3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3024->GetXaxis()->SetLabelSize(0.045);
   Graph_g3024->GetXaxis()->SetTitleSize(0.055);
   Graph_g3024->GetXaxis()->SetTitleFont(42);
   Graph_g3024->GetYaxis()->SetLabelFont(42);
   Graph_g3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3024->GetYaxis()->SetLabelSize(0.045);
   Graph_g3024->GetYaxis()->SetTitleSize(0.055);
   Graph_g3024->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3024->GetYaxis()->SetTitleFont(42);
   Graph_g3024->GetZaxis()->SetLabelFont(42);
   Graph_g3024->GetZaxis()->SetLabelSize(0.045);
   Graph_g3024->GetZaxis()->SetTitleSize(0.035);
   Graph_g3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3024);
   
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
   p_2_0->SetBorderSize(0);
   p_2_0->SetTickx(1);
   p_2_0->SetTicky(1);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetBottomMargin(0);
   p_2_0->SetFrameLineColor(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->SetFrameLineColor(0);
   p_2_0->SetFrameBorderMode(0);
   
   TH1D *emptyDist__45 = new TH1D("emptyDist__45","",10,-2.999,2.999);
   emptyDist__45->SetBinContent(7,1000);
   emptyDist__45->SetBinError(7,1000);
   emptyDist__45->SetMinimum(0.0001);
   emptyDist__45->SetMaximum(0.4999);
   emptyDist__45->SetEntries(1);
   emptyDist__45->SetLineStyle(0);
   emptyDist__45->SetMarkerStyle(20);
   emptyDist__45->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__45->GetXaxis()->CenterTitle(true);
   emptyDist__45->GetXaxis()->SetLabelFont(43);
   emptyDist__45->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__45->GetXaxis()->SetLabelSize(33);
   emptyDist__45->GetXaxis()->SetTitleSize(33);
   emptyDist__45->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__45->GetXaxis()->SetTitleFont(43);
   emptyDist__45->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__45->GetYaxis()->CenterTitle(true);
   emptyDist__45->GetYaxis()->SetNdivisions(505);
   emptyDist__45->GetYaxis()->SetLabelFont(43);
   emptyDist__45->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__45->GetYaxis()->SetLabelSize(33);
   emptyDist__45->GetYaxis()->SetTitleSize(33);
   emptyDist__45->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__45->GetYaxis()->SetTitleFont(43);
   emptyDist__45->GetZaxis()->SetLabelFont(42);
   emptyDist__45->GetZaxis()->SetLabelSize(0.045);
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

   ci = 1213;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","Graph",100,-3.46425,3.51675);
   Graph_Graph1017->SetMinimum(0);
   Graph_Graph1017->SetMaximum(0.3999191);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);
   Graph_Graph1017->SetLineStyle(0);
   Graph_Graph1017->SetMarkerStyle(20);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1017->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   gre->Draw(" 2");
   
   Double_t g_fx3025[18] = {
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
   Double_t g_fy3025[18] = {
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
   Double_t g_felx3025[18] = {
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
   Double_t g_fely3025[18] = {
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
   Double_t g_fehx3025[18] = {
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
   Double_t g_fehy3025[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3025,g_fy3025,g_felx3025,g_fehx3025,g_fely3025,g_fehy3025);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1214;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3025 = new TH1F("Graph_g3025","",100,-3.5065,3.5915);
   Graph_g3025->SetMinimum(0);
   Graph_g3025->SetMaximum(0.3763418);
   Graph_g3025->SetDirectory(0);
   Graph_g3025->SetStats(0);
   Graph_g3025->SetLineStyle(0);
   Graph_g3025->SetMarkerStyle(20);
   Graph_g3025->GetXaxis()->SetLabelFont(42);
   Graph_g3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3025->GetXaxis()->SetLabelSize(0.045);
   Graph_g3025->GetXaxis()->SetTitleSize(0.055);
   Graph_g3025->GetXaxis()->SetTitleFont(42);
   Graph_g3025->GetYaxis()->SetLabelFont(42);
   Graph_g3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3025->GetYaxis()->SetLabelSize(0.045);
   Graph_g3025->GetYaxis()->SetTitleSize(0.055);
   Graph_g3025->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3025->GetYaxis()->SetTitleFont(42);
   Graph_g3025->GetZaxis()->SetLabelFont(42);
   Graph_g3025->GetZaxis()->SetLabelSize(0.045);
   Graph_g3025->GetZaxis()->SetTitleSize(0.035);
   Graph_g3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3025);
   
   grae->Draw(" 2");
   
   Double_t g_fx3026[18] = {
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
   Double_t g_fy3026[18] = {
   6.748967e-05,
   0.005875337,
   0.03163827,
   0.06761686,
   0.1137706,
   0.1634379,
   0.2157444,
   0.2637582,
   0.3022329,
   0.3345071,
   0.3513596,
   0.3508827,
   0.3322813,
   0.2984172,
   0.25406,
   0.1985738,
   0.1086671,
   0.02143135};
   Double_t g_felx3026[18] = {
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
   Double_t g_fely3026[18] = {
   7.086274e-06,
   0.0006462623,
   0.002442768,
   0.005881567,
   0.008521204,
   0.00670673,
   0.008083313,
   0.007085588,
   0.001727374,
   0.005190815,
   0.009402767,
   0.009759461,
   0.006110716,
   0.004113304,
   0.007238523,
   0.008671421,
   0.005065227,
   0.001404181};
   Double_t g_fehx3026[18] = {
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
   Double_t g_fehy3026[18] = {
   4.165456e-05,
   0.0003998257,
   0.003099116,
   0.004242945,
   0.006695316,
   0.008548141,
   0.006678144,
   0.004626806,
   0.007860795,
   0.005310818,
   0.00605705,
   0.008097587,
   0.01083733,
   0.01180874,
   0.005337334,
   0.003544231,
   0.003290079,
   0.001086941};
   grae = new TGraphAsymmErrors(18,g_fx3026,g_fy3026,g_felx3026,g_fehx3026,g_fely3026,g_fehy3026);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1215;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3026 = new TH1F("Graph_g3026","",100,-3.5065,3.5915);
   Graph_g3026->SetMinimum(0);
   Graph_g3026->SetMaximum(0.3948722);
   Graph_g3026->SetDirectory(0);
   Graph_g3026->SetStats(0);
   Graph_g3026->SetLineStyle(0);
   Graph_g3026->SetMarkerStyle(20);
   Graph_g3026->GetXaxis()->SetLabelFont(42);
   Graph_g3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3026->GetXaxis()->SetLabelSize(0.045);
   Graph_g3026->GetXaxis()->SetTitleSize(0.055);
   Graph_g3026->GetXaxis()->SetTitleFont(42);
   Graph_g3026->GetYaxis()->SetLabelFont(42);
   Graph_g3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3026->GetYaxis()->SetLabelSize(0.045);
   Graph_g3026->GetYaxis()->SetTitleSize(0.055);
   Graph_g3026->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3026->GetYaxis()->SetTitleFont(42);
   Graph_g3026->GetZaxis()->SetLabelFont(42);
   Graph_g3026->GetZaxis()->SetLabelSize(0.045);
   Graph_g3026->GetZaxis()->SetTitleSize(0.035);
   Graph_g3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3026);
   
   grae->Draw(" 2");
   
   Double_t g_fx3027[18] = {
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
   Double_t g_fy3027[18] = {
   4.617576e-05,
   0.005400719,
   0.03063794,
   0.06559021,
   0.1122505,
   0.1641318,
   0.2202493,
   0.2718336,
   0.3156021,
   0.346709,
   0.3593706,
   0.35515,
   0.3329531,
   0.2944994,
   0.2444783,
   0.1872666,
   0.1001204,
   0.0192425};
   Double_t g_felx3027[18] = {
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
   Double_t g_fely3027[18] = {
   3.482485e-05,
   0.0006258369,
   0.001478674,
   0.001200367,
   0.001949104,
   0.001942805,
   0.004446484,
   0.0001946797,
   0.007040214,
   0.006432342,
   0.003597811,
   0.004077434,
   0.005006829,
   0.005671388,
   0.001702732,
   0.004098604,
   0.0006594063,
   0.0001854323};
   Double_t g_fehx3027[18] = {
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
   Double_t g_fehy3027[18] = {
   1.463973e-05,
   0.0002108691,
   0.0009242513,
   0.002456494,
   0.001978712,
   0.003491728,
   0.001835563,
   0.006511942,
   0.001138511,
   0.002185325,
   0.006735028,
   0.004386204,
   0.002820685,
   0.001274012,
   0.004074946,
   0.001463451,
   0.002577625,
   0.001372398};
   grae = new TGraphAsymmErrors(18,g_fx3027,g_fy3027,g_felx3027,g_fehx3027,g_fely3027,g_fehy3027);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1216;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3027 = new TH1F("Graph_g3027","",100,-3.5065,3.5915);
   Graph_g3027->SetMinimum(0);
   Graph_g3027->SetMaximum(0.402715);
   Graph_g3027->SetDirectory(0);
   Graph_g3027->SetStats(0);
   Graph_g3027->SetLineStyle(0);
   Graph_g3027->SetMarkerStyle(20);
   Graph_g3027->GetXaxis()->SetLabelFont(42);
   Graph_g3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3027->GetXaxis()->SetLabelSize(0.045);
   Graph_g3027->GetXaxis()->SetTitleSize(0.055);
   Graph_g3027->GetXaxis()->SetTitleFont(42);
   Graph_g3027->GetYaxis()->SetLabelFont(42);
   Graph_g3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3027->GetYaxis()->SetLabelSize(0.045);
   Graph_g3027->GetYaxis()->SetTitleSize(0.055);
   Graph_g3027->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3027->GetYaxis()->SetTitleFont(42);
   Graph_g3027->GetZaxis()->SetLabelFont(42);
   Graph_g3027->GetZaxis()->SetLabelSize(0.045);
   Graph_g3027->GetZaxis()->SetTitleSize(0.035);
   Graph_g3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3027);
   
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
   
   TLegend *leg = new TLegend(0.05,0.55,0.4,0.85,NULL,"brNDC");
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

   ci = 1205;
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
   entry=leg->AddEntry("g","DSSz","f");

   ci = 1206;
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

   ci = 1207;
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

   ci = 1208;
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
   
   TH1D *emptyDist__47 = new TH1D("emptyDist__47","",10,-2.999,2.999);
   emptyDist__47->SetBinContent(7,1000);
   emptyDist__47->SetBinError(7,1000);
   emptyDist__47->SetMinimum(0.0001);
   emptyDist__47->SetMaximum(0.4999);
   emptyDist__47->SetEntries(1);
   emptyDist__47->SetLineStyle(0);
   emptyDist__47->SetMarkerStyle(20);
   emptyDist__47->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDist__47->GetXaxis()->CenterTitle(true);
   emptyDist__47->GetXaxis()->SetLabelFont(43);
   emptyDist__47->GetXaxis()->SetLabelOffset(0.01);
   emptyDist__47->GetXaxis()->SetLabelSize(33);
   emptyDist__47->GetXaxis()->SetTitleSize(33);
   emptyDist__47->GetXaxis()->SetTitleOffset(2.5);
   emptyDist__47->GetXaxis()->SetTitleFont(43);
   emptyDist__47->GetYaxis()->SetTitle("#frac{1}{N_{dijet}} #frac{N_{dijet}}{#eta_{dijet}} ");
   emptyDist__47->GetYaxis()->CenterTitle(true);
   emptyDist__47->GetYaxis()->SetNdivisions(505);
   emptyDist__47->GetYaxis()->SetLabelFont(43);
   emptyDist__47->GetYaxis()->SetLabelOffset(0.01);
   emptyDist__47->GetYaxis()->SetLabelSize(33);
   emptyDist__47->GetYaxis()->SetTitleSize(33);
   emptyDist__47->GetYaxis()->SetTitleOffset(2.5);
   emptyDist__47->GetYaxis()->SetTitleFont(43);
   emptyDist__47->GetZaxis()->SetLabelFont(42);
   emptyDist__47->GetZaxis()->SetLabelSize(0.045);
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

   ci = 1225;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","Graph",100,-3.46425,3.51675);
   Graph_Graph1018->SetMinimum(0);
   Graph_Graph1018->SetMaximum(0.5028958);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);
   Graph_Graph1018->SetLineStyle(0);
   Graph_Graph1018->SetMarkerStyle(20);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1018->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1018->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
   gre->Draw(" 2");
   
   Double_t g_fx3028[18] = {
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
   Double_t g_fy3028[18] = {
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
   Double_t g_felx3028[18] = {
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
   Double_t g_fely3028[18] = {
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
   Double_t g_fehx3028[18] = {
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
   Double_t g_fehy3028[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3028,g_fy3028,g_felx3028,g_fehx3028,g_fely3028,g_fehy3028);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1226;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3028 = new TH1F("Graph_g3028","",100,-3.5065,3.5915);
   Graph_g3028->SetMinimum(-0.04348478);
   Graph_g3028->SetMaximum(0.4782917);
   Graph_g3028->SetDirectory(0);
   Graph_g3028->SetStats(0);
   Graph_g3028->SetLineStyle(0);
   Graph_g3028->SetMarkerStyle(20);
   Graph_g3028->GetXaxis()->SetLabelFont(42);
   Graph_g3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3028->GetXaxis()->SetLabelSize(0.045);
   Graph_g3028->GetXaxis()->SetTitleSize(0.055);
   Graph_g3028->GetXaxis()->SetTitleFont(42);
   Graph_g3028->GetYaxis()->SetLabelFont(42);
   Graph_g3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3028->GetYaxis()->SetLabelSize(0.045);
   Graph_g3028->GetYaxis()->SetTitleSize(0.055);
   Graph_g3028->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3028->GetYaxis()->SetTitleFont(42);
   Graph_g3028->GetZaxis()->SetLabelFont(42);
   Graph_g3028->GetZaxis()->SetLabelSize(0.045);
   Graph_g3028->GetZaxis()->SetTitleSize(0.035);
   Graph_g3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3028);
   
   grae->Draw(" 2");
   
   Double_t g_fx3029[18] = {
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
   Double_t g_fy3029[18] = {
   0,
   5.138503e-05,
   0.001258959,
   0.009405341,
   0.03679798,
   0.09067348,
   0.1668362,
   0.2518934,
   0.3298604,
   0.3921221,
   0.428971,
   0.4393903,
   0.4190599,
   0.3636596,
   0.2831005,
   0.1886405,
   0.06991108,
   0.004350701};
   Double_t g_felx3029[18] = {
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
   Double_t g_fely3029[18] = {
   0,
   1.543546e-05,
   0.0001711384,
   0.0006013269,
   0.003036241,
   0.005556397,
   0.009955926,
   0.01078367,
   0.009291831,
   0.008102418,
   0.0009276387,
   0.004468739,
   0.01263902,
   0.0114047,
   0.009718455,
   0.007309478,
   0.002280933,
   0.0001604844};
   Double_t g_fehx3029[18] = {
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
   Double_t g_fehy3029[18] = {
   0,
   1.112355e-05,
   0.0001474565,
   0.0007198454,
   0.002103965,
   0.006006591,
   0.007757765,
   0.01128447,
   0.01083912,
   0.005735247,
   0.004942209,
   0.006497783,
   0.008365061,
   0.01189704,
   0.01039107,
   0.006128788,
   0.00293727,
   0.0003014456};
   grae = new TGraphAsymmErrors(18,g_fx3029,g_fy3029,g_felx3029,g_fehx3029,g_fely3029,g_fehy3029);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1227;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3029 = new TH1F("Graph_g3029","",100,-3.5065,3.5915);
   Graph_g3029->SetMinimum(0);
   Graph_g3029->SetMaximum(0.4904769);
   Graph_g3029->SetDirectory(0);
   Graph_g3029->SetStats(0);
   Graph_g3029->SetLineStyle(0);
   Graph_g3029->SetMarkerStyle(20);
   Graph_g3029->GetXaxis()->SetLabelFont(42);
   Graph_g3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3029->GetXaxis()->SetLabelSize(0.045);
   Graph_g3029->GetXaxis()->SetTitleSize(0.055);
   Graph_g3029->GetXaxis()->SetTitleFont(42);
   Graph_g3029->GetYaxis()->SetLabelFont(42);
   Graph_g3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3029->GetYaxis()->SetLabelSize(0.045);
   Graph_g3029->GetYaxis()->SetTitleSize(0.055);
   Graph_g3029->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3029->GetYaxis()->SetTitleFont(42);
   Graph_g3029->GetZaxis()->SetLabelFont(42);
   Graph_g3029->GetZaxis()->SetLabelSize(0.045);
   Graph_g3029->GetZaxis()->SetTitleSize(0.035);
   Graph_g3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3029);
   
   grae->Draw(" 2");
   
   Double_t g_fx3030[18] = {
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
   Double_t g_fy3030[18] = {
   0,
   6.442889e-06,
   0.0007990512,
   0.008086546,
   0.0338581,
   0.08640588,
   0.1604505,
   0.2472257,
   0.3282389,
   0.3954626,
   0.4395397,
   0.4506206,
   0.4267352,
   0.3666525,
   0.2819456,
   0.1831785,
   0.06654656,
   0.003995256};
   Double_t g_felx3030[18] = {
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
   Double_t g_fely3030[18] = {
   0,
   3.624433e-06,
   0.0001654347,
   0.0005406291,
   0.0006236167,
   0.001518397,
   0.000731725,
   0.00377764,
   0.001785789,
   0.001051532,
   0.004855178,
   0.002767822,
   0.003871623,
   0.001087057,
   0.003587533,
   0.0004661114,
   0.001141287,
   7.741603e-05};
   Double_t g_fehx3030[18] = {
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
   Double_t g_fehy3030[18] = {
   0,
   6.176858e-06,
   0.0001082493,
   0.0004504891,
   0.001524854,
   0.001547394,
   0.00311835,
   0.0007235225,
   0.001738478,
   0.003533181,
   0.00146541,
   0.003579995,
   0.001364986,
   0.002728015,
   0.0008630393,
   0.003651383,
   0.001030539,
   0.0003264875};
   grae = new TGraphAsymmErrors(18,g_fx3030,g_fy3030,g_felx3030,g_fehx3030,g_fely3030,g_fehy3030);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1228;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3030 = new TH1F("Graph_g3030","",100,-3.5065,3.5915);
   Graph_g3030->SetMinimum(0);
   Graph_g3030->SetMaximum(0.4996206);
   Graph_g3030->SetDirectory(0);
   Graph_g3030->SetStats(0);
   Graph_g3030->SetLineStyle(0);
   Graph_g3030->SetMarkerStyle(20);
   Graph_g3030->GetXaxis()->SetLabelFont(42);
   Graph_g3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3030->GetXaxis()->SetLabelSize(0.045);
   Graph_g3030->GetXaxis()->SetTitleSize(0.055);
   Graph_g3030->GetXaxis()->SetTitleFont(42);
   Graph_g3030->GetYaxis()->SetLabelFont(42);
   Graph_g3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3030->GetYaxis()->SetLabelSize(0.045);
   Graph_g3030->GetYaxis()->SetTitleSize(0.055);
   Graph_g3030->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3030->GetYaxis()->SetTitleFont(42);
   Graph_g3030->GetZaxis()->SetLabelFont(42);
   Graph_g3030->GetZaxis()->SetLabelSize(0.045);
   Graph_g3030->GetZaxis()->SetTitleSize(0.035);
   Graph_g3030->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3030);
   
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
