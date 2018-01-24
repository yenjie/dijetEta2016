void pPbppDiffMM()
{
//=========Macro generated from canvas: cDiff0/
//=========  (Tue Aug  2 10:06:24 2016) by ROOT version6.06/01

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cDiff0 = new TCanvas("cDiff0", "",0,0,1300,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   cDiff0->Range(0,0,1,1);
   cDiff0->SetFillColor(0);
   cDiff0->SetBorderMode(0);
   cDiff0->SetBorderSize(0);
   cDiff0->SetTickx(1);
   cDiff0->SetTicky(1);
   cDiff0->SetLeftMargin(0.17);
   cDiff0->SetRightMargin(0.01);
   cDiff0->SetTopMargin(0.01);
   cDiff0->SetBottomMargin(0.15);
   cDiff0->SetFrameLineColor(0);
   cDiff0->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.5393939,0.3825653,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-4.893105,-0.04,2.999,0.04988764);
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
   
   TH1D *emptyDiff__85 = new TH1D("emptyDiff__85","",10,-2.999,2.999);
   emptyDiff__85->SetBinContent(7,1000);
   emptyDiff__85->SetBinError(7,1000);
   emptyDiff__85->SetMinimum(-0.04);
   emptyDiff__85->SetMaximum(0.04);
   emptyDiff__85->SetEntries(1);
   emptyDiff__85->SetLineStyle(0);
   emptyDiff__85->SetMarkerStyle(20);
   emptyDiff__85->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__85->GetXaxis()->CenterTitle(true);
   emptyDiff__85->GetXaxis()->SetLabelFont(43);
   emptyDiff__85->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__85->GetXaxis()->SetLabelSize(33);
   emptyDiff__85->GetXaxis()->SetTitleSize(33);
   emptyDiff__85->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__85->GetXaxis()->SetTitleFont(43);
   emptyDiff__85->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__85->GetYaxis()->CenterTitle(true);
   emptyDiff__85->GetYaxis()->SetNdivisions(505);
   emptyDiff__85->GetYaxis()->SetLabelFont(43);
   emptyDiff__85->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__85->GetYaxis()->SetLabelSize(33);
   emptyDiff__85->GetYaxis()->SetTitleSize(33);
   emptyDiff__85->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__85->GetYaxis()->SetTitleFont(43);
   emptyDiff__85->GetZaxis()->SetLabelFont(42);
   emptyDiff__85->GetZaxis()->SetLabelSize(0.045);
   emptyDiff__85->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__85->GetZaxis()->SetTitleFont(42);
   emptyDiff__85->Draw("");
   
   Double_t syst0_fx1037[18] = {
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
   Double_t syst0_fy1037[18] = {
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
   Double_t syst0_fex1037[18] = {
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
   Double_t syst0_fey1037[18] = {
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
   TGraphErrors *gre = new TGraphErrors(18,syst0_fx1037,syst0_fy1037,syst0_fex1037,syst0_fey1037);
   gre->SetName("syst0");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1314;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_syst01037 = new TH1F("Graph_syst01037","Graph",100,-3.46425,3.51675);
   Graph_syst01037->SetMinimum(-0.01078592);
   Graph_syst01037->SetMaximum(0.01330784);
   Graph_syst01037->SetDirectory(0);
   Graph_syst01037->SetStats(0);
   Graph_syst01037->SetLineStyle(0);
   Graph_syst01037->SetMarkerStyle(20);
   Graph_syst01037->GetXaxis()->SetLabelFont(42);
   Graph_syst01037->GetXaxis()->SetLabelOffset(0.01);
   Graph_syst01037->GetXaxis()->SetLabelSize(0.045);
   Graph_syst01037->GetXaxis()->SetTitleSize(0.055);
   Graph_syst01037->GetXaxis()->SetTitleFont(42);
   Graph_syst01037->GetYaxis()->SetLabelFont(42);
   Graph_syst01037->GetYaxis()->SetLabelOffset(0.01);
   Graph_syst01037->GetYaxis()->SetLabelSize(0.045);
   Graph_syst01037->GetYaxis()->SetTitleSize(0.055);
   Graph_syst01037->GetYaxis()->SetTitleOffset(1.3);
   Graph_syst01037->GetYaxis()->SetTitleFont(42);
   Graph_syst01037->GetZaxis()->SetLabelFont(42);
   Graph_syst01037->GetZaxis()->SetLabelSize(0.045);
   Graph_syst01037->GetZaxis()->SetTitleSize(0.035);
   Graph_syst01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst01037);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff00_fx3085[18] = {
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
   Double_t NLOdiff00_fy3085[18] = {
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
   Double_t NLOdiff00_felx3085[18] = {
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
   Double_t NLOdiff00_fely3085[18] = {
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
   Double_t NLOdiff00_fehx3085[18] = {
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
   Double_t NLOdiff00_fehy3085[18] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,NLOdiff00_fx3085,NLOdiff00_fy3085,NLOdiff00_felx3085,NLOdiff00_fehx3085,NLOdiff00_fely3085,NLOdiff00_fehy3085);
   grae->SetName("NLOdiff00");
   grae->SetTitle("");

   ci = 1315;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff003085 = new TH1F("Graph_NLOdiff003085","",100,-3.5065,3.5915);
   Graph_NLOdiff003085->SetMinimum(-0.01252371);
   Graph_NLOdiff003085->SetMaximum(0.009854066);
   Graph_NLOdiff003085->SetDirectory(0);
   Graph_NLOdiff003085->SetStats(0);
   Graph_NLOdiff003085->SetLineStyle(0);
   Graph_NLOdiff003085->SetMarkerStyle(20);
   Graph_NLOdiff003085->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff003085->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff003085->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff003085->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff003085->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff003085->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff003085->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff003085->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff003085->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff003085->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff003085->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff003085->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff003085->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff003085->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff003085->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff003085);
   
   grae->Draw(" 2");
   
   Double_t g_fx3086[18] = {
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
   Double_t g_fy3086[18] = {
   -0.0008049191,
   -0.002929636,
   -0.003513033,
   -0.002660134,
   -0.0002238727,
   0.004563259,
   0.008003312,
   0.01144877,
   0.01146222,
   0.01174043,
   0.009277124,
   0.004031228,
   -0.0008095985,
   -0.007263128,
   -0.009333913,
   -0.01000004,
   -0.00772913,
   -0.002300083};
   Double_t g_felx3086[18] = {
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
   Double_t g_fely3086[18] = {
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
   Double_t g_fehx3086[18] = {
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
   Double_t g_fehy3086[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3086,g_fy3086,g_felx3086,g_fehx3086,g_fely3086,g_fehy3086);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1316;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3086 = new TH1F("Graph_g3086","",100,-3.5065,3.5915);
   Graph_g3086->SetMinimum(-0.02331121);
   Graph_g3086->SetMaximum(0.02548356);
   Graph_g3086->SetDirectory(0);
   Graph_g3086->SetStats(0);
   Graph_g3086->SetLineStyle(0);
   Graph_g3086->SetMarkerStyle(20);
   Graph_g3086->GetXaxis()->SetLabelFont(42);
   Graph_g3086->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3086->GetXaxis()->SetLabelSize(0.045);
   Graph_g3086->GetXaxis()->SetTitleSize(0.055);
   Graph_g3086->GetXaxis()->SetTitleFont(42);
   Graph_g3086->GetYaxis()->SetLabelFont(42);
   Graph_g3086->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3086->GetYaxis()->SetLabelSize(0.045);
   Graph_g3086->GetYaxis()->SetTitleSize(0.055);
   Graph_g3086->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3086->GetYaxis()->SetTitleFont(42);
   Graph_g3086->GetZaxis()->SetLabelFont(42);
   Graph_g3086->GetZaxis()->SetLabelSize(0.045);
   Graph_g3086->GetZaxis()->SetTitleSize(0.035);
   Graph_g3086->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3086);
   
   grae->Draw(" 2");
   
   Double_t g_fx3087[18] = {
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
   Double_t g_fy3087[18] = {
   -0.0009536511,
   -0.002212792,
   0.000533728,
   0.003503261,
   0.009873454,
   0.01727625,
   0.02119759,
   0.02365232,
   0.02130022,
   0.01660184,
   0.009364455,
   -0.0009540481,
   -0.01108952,
   -0.02009469,
   -0.0230577,
   -0.02205174,
   -0.01575676,
   -0.004581336};
   Double_t g_felx3087[18] = {
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
   Double_t g_fely3087[18] = {
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
   Double_t g_fehx3087[18] = {
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
   Double_t g_fehy3087[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3087,g_fy3087,g_felx3087,g_fehx3087,g_fely3087,g_fehy3087);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1317;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3087 = new TH1F("Graph_g3087","",100,-3.5065,3.5915);
   Graph_g3087->SetMinimum(-0.03045319);
   Graph_g3087->SetMaximum(0.02924778);
   Graph_g3087->SetDirectory(0);
   Graph_g3087->SetStats(0);
   Graph_g3087->SetLineStyle(0);
   Graph_g3087->SetMarkerStyle(20);
   Graph_g3087->GetXaxis()->SetLabelFont(42);
   Graph_g3087->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3087->GetXaxis()->SetLabelSize(0.045);
   Graph_g3087->GetXaxis()->SetTitleSize(0.055);
   Graph_g3087->GetXaxis()->SetTitleFont(42);
   Graph_g3087->GetYaxis()->SetLabelFont(42);
   Graph_g3087->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3087->GetYaxis()->SetLabelSize(0.045);
   Graph_g3087->GetYaxis()->SetTitleSize(0.055);
   Graph_g3087->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3087->GetYaxis()->SetTitleFont(42);
   Graph_g3087->GetZaxis()->SetLabelFont(42);
   Graph_g3087->GetZaxis()->SetLabelSize(0.045);
   Graph_g3087->GetZaxis()->SetTitleSize(0.035);
   Graph_g3087->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3087);
   
   grae->Draw(" 2");
   Double_t xAxis49[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_0__86 = new TH1D("hist_eta_diff_0__86","",18, xAxis49);
   hist_eta_diff_0__86->SetBinContent(0,-1.406952e-05);
   hist_eta_diff_0__86->SetBinContent(1,-7.867816e-05);
   hist_eta_diff_0__86->SetBinContent(2,-0.006040556);
   hist_eta_diff_0__86->SetBinContent(3,0.0001819847);
   hist_eta_diff_0__86->SetBinContent(4,-0.006536377);
   hist_eta_diff_0__86->SetBinContent(5,0.003402429);
   hist_eta_diff_0__86->SetBinContent(6,-0.006435732);
   hist_eta_diff_0__86->SetBinContent(7,0.01130003);
   hist_eta_diff_0__86->SetBinContent(8,0.006604966);
   hist_eta_diff_0__86->SetBinContent(9,0.009938616);
   hist_eta_diff_0__86->SetBinContent(10,0.009274247);
   hist_eta_diff_0__86->SetBinContent(11,-0.006981939);
   hist_eta_diff_0__86->SetBinContent(12,0.007833979);
   hist_eta_diff_0__86->SetBinContent(13,0.009811034);
   hist_eta_diff_0__86->SetBinContent(14,0.007450904);
   hist_eta_diff_0__86->SetBinContent(15,-0.000942083);
   hist_eta_diff_0__86->SetBinContent(16,-0.008778106);
   hist_eta_diff_0__86->SetBinContent(17,-0.006260033);
   hist_eta_diff_0__86->SetBinContent(18,-0.005722047);
   hist_eta_diff_0__86->SetBinError(0,4.684612e-05);
   hist_eta_diff_0__86->SetBinError(1,0.000843362);
   hist_eta_diff_0__86->SetBinError(2,0.001592677);
   hist_eta_diff_0__86->SetBinError(3,0.003783313);
   hist_eta_diff_0__86->SetBinError(4,0.004656884);
   hist_eta_diff_0__86->SetBinError(5,0.0055279);
   hist_eta_diff_0__86->SetBinError(6,0.00622536);
   hist_eta_diff_0__86->SetBinError(7,0.006812581);
   hist_eta_diff_0__86->SetBinError(8,0.007343075);
   hist_eta_diff_0__86->SetBinError(9,0.007738899);
   hist_eta_diff_0__86->SetBinError(10,0.007932794);
   hist_eta_diff_0__86->SetBinError(11,0.007990034);
   hist_eta_diff_0__86->SetBinError(12,0.007906279);
   hist_eta_diff_0__86->SetBinError(13,0.007638776);
   hist_eta_diff_0__86->SetBinError(14,0.007278803);
   hist_eta_diff_0__86->SetBinError(15,0.006730243);
   hist_eta_diff_0__86->SetBinError(16,0.005997296);
   hist_eta_diff_0__86->SetBinError(17,0.003299181);
   hist_eta_diff_0__86->SetBinError(18,0.001614166);
   hist_eta_diff_0__86->SetEntries(0.4890708);

   ci = TColor::GetColor("#33cc99");
   hist_eta_diff_0__86->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_0__86->SetLineColor(ci);
   hist_eta_diff_0__86->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_0__86->SetMarkerColor(ci);
   hist_eta_diff_0__86->SetMarkerStyle(20);
   hist_eta_diff_0__86->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_0__86->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_0__86->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_0__86->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_0__86->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_0__86->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_0__86->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_0__86->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_0__86->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_0__86->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_0__86->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_0__86->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_0__86->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_0__86->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_0__86->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_0__86->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_0__86->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_0__86->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_0__86->Draw("same");
   TLine *line = new TLine(-2.999,0,2.999,0);
   line->Draw();
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
   cDiff0->cd();
  
// ------------>Primitives in pad: p_0_1
   TPad *p_0_1 = new TPad("p_0_1", "p_0_1",0,0,0.3825653,0.539394);
   p_0_1->Draw();
   p_0_1->cd();
   p_0_1->Range(-4.893105,-0.06526316,2.999,0.04);
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
   
   TH1D *emptyDiff__87 = new TH1D("emptyDiff__87","",10,-2.999,2.999);
   emptyDiff__87->SetBinContent(7,1000);
   emptyDiff__87->SetBinError(7,1000);
   emptyDiff__87->SetMinimum(-0.04);
   emptyDiff__87->SetMaximum(0.04);
   emptyDiff__87->SetEntries(1);
   emptyDiff__87->SetLineStyle(0);
   emptyDiff__87->SetMarkerStyle(20);
   emptyDiff__87->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__87->GetXaxis()->CenterTitle(true);
   emptyDiff__87->GetXaxis()->SetLabelFont(43);
   emptyDiff__87->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__87->GetXaxis()->SetLabelSize(33);
   emptyDiff__87->GetXaxis()->SetTitleSize(33);
   emptyDiff__87->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__87->GetXaxis()->SetTitleFont(43);
   emptyDiff__87->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__87->GetYaxis()->CenterTitle(true);
   emptyDiff__87->GetYaxis()->SetNdivisions(505);
   emptyDiff__87->GetYaxis()->SetLabelFont(43);
   emptyDiff__87->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__87->GetYaxis()->SetLabelSize(33);
   emptyDiff__87->GetYaxis()->SetTitleSize(33);
   emptyDiff__87->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__87->GetYaxis()->SetTitleFont(43);
   emptyDiff__87->GetZaxis()->SetLabelFont(42);
   emptyDiff__87->GetZaxis()->SetLabelSize(0.045);
   emptyDiff__87->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__87->GetZaxis()->SetTitleFont(42);
   emptyDiff__87->Draw("");
   
   Double_t syst3_fx1038[18] = {
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
   Double_t syst3_fy1038[18] = {
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
   Double_t syst3_fex1038[18] = {
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
   Double_t syst3_fey1038[18] = {
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
   gre = new TGraphErrors(18,syst3_fx1038,syst3_fy1038,syst3_fex1038,syst3_fey1038);
   gre->SetName("syst3");
   gre->SetTitle("Graph");

   ci = 1329;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_syst31038 = new TH1F("Graph_syst31038","Graph",100,-3.46425,3.51675);
   Graph_syst31038->SetMinimum(-0.009137674);
   Graph_syst31038->SetMaximum(0.01297093);
   Graph_syst31038->SetDirectory(0);
   Graph_syst31038->SetStats(0);
   Graph_syst31038->SetLineStyle(0);
   Graph_syst31038->SetMarkerStyle(20);
   Graph_syst31038->GetXaxis()->SetLabelFont(42);
   Graph_syst31038->GetXaxis()->SetLabelOffset(0.01);
   Graph_syst31038->GetXaxis()->SetLabelSize(0.045);
   Graph_syst31038->GetXaxis()->SetTitleSize(0.055);
   Graph_syst31038->GetXaxis()->SetTitleFont(42);
   Graph_syst31038->GetYaxis()->SetLabelFont(42);
   Graph_syst31038->GetYaxis()->SetLabelOffset(0.01);
   Graph_syst31038->GetYaxis()->SetLabelSize(0.045);
   Graph_syst31038->GetYaxis()->SetTitleSize(0.055);
   Graph_syst31038->GetYaxis()->SetTitleOffset(1.3);
   Graph_syst31038->GetYaxis()->SetTitleFont(42);
   Graph_syst31038->GetZaxis()->SetLabelFont(42);
   Graph_syst31038->GetZaxis()->SetLabelSize(0.045);
   Graph_syst31038->GetZaxis()->SetTitleSize(0.035);
   Graph_syst31038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst31038);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff03_fx3088[18] = {
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
   Double_t NLOdiff03_fy3088[18] = {
   1000,
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
   Double_t NLOdiff03_felx3088[18] = {
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
   Double_t NLOdiff03_fely3088[18] = {
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
   Double_t NLOdiff03_fehx3088[18] = {
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
   Double_t NLOdiff03_fehy3088[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff03_fx3088,NLOdiff03_fy3088,NLOdiff03_felx3088,NLOdiff03_fehx3088,NLOdiff03_fely3088,NLOdiff03_fehy3088);
   grae->SetName("NLOdiff03");
   grae->SetTitle("");

   ci = 1330;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff033088 = new TH1F("Graph_NLOdiff033088","",100,-3.5065,3.5915);
   Graph_NLOdiff033088->SetMinimum(-100.0107);
   Graph_NLOdiff033088->SetMaximum(1100.001);
   Graph_NLOdiff033088->SetDirectory(0);
   Graph_NLOdiff033088->SetStats(0);
   Graph_NLOdiff033088->SetLineStyle(0);
   Graph_NLOdiff033088->SetMarkerStyle(20);
   Graph_NLOdiff033088->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff033088->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff033088->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff033088->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff033088->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff033088->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff033088->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff033088->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff033088->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff033088->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff033088->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff033088->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff033088->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff033088->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff033088->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff033088);
   
   grae->Draw(" 2");
   
   Double_t g_fx3089[18] = {
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
   Double_t g_fy3089[18] = {
   1000,
   -0.0004276284,
   -0.004658688,
   -0.0101573,
   -0.01416263,
   -0.01458064,
   -0.01385338,
   -0.006289598,
   -0.002117138,
   0.009176139,
   0.01494959,
   0.01903096,
   0.01753527,
   0.01064047,
   0.00738797,
   -0.001249913,
   -0.003840419,
   -0.001560095};
   Double_t g_felx3089[18] = {
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
   Double_t g_fely3089[18] = {
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
   Double_t g_fehx3089[18] = {
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
   Double_t g_fehy3089[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3089,g_fy3089,g_felx3089,g_fehx3089,g_fely3089,g_fehy3089);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1331;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3089 = new TH1F("Graph_g3089","",100,-3.5065,3.5915);
   Graph_g3089->SetMinimum(-100.0275);
   Graph_g3089->SetMaximum(1100.003);
   Graph_g3089->SetDirectory(0);
   Graph_g3089->SetStats(0);
   Graph_g3089->SetLineStyle(0);
   Graph_g3089->SetMarkerStyle(20);
   Graph_g3089->GetXaxis()->SetLabelFont(42);
   Graph_g3089->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3089->GetXaxis()->SetLabelSize(0.045);
   Graph_g3089->GetXaxis()->SetTitleSize(0.055);
   Graph_g3089->GetXaxis()->SetTitleFont(42);
   Graph_g3089->GetYaxis()->SetLabelFont(42);
   Graph_g3089->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3089->GetYaxis()->SetLabelSize(0.045);
   Graph_g3089->GetYaxis()->SetTitleSize(0.055);
   Graph_g3089->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3089->GetYaxis()->SetTitleFont(42);
   Graph_g3089->GetZaxis()->SetLabelFont(42);
   Graph_g3089->GetZaxis()->SetLabelSize(0.045);
   Graph_g3089->GetZaxis()->SetTitleSize(0.035);
   Graph_g3089->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3089);
   
   grae->Draw(" 2");
   
   Double_t g_fx3090[18] = {
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
   Double_t g_fy3090[18] = {
   1000,
   -0.0007885195,
   -0.005864115,
   -0.01204481,
   -0.0162235,
   -0.01742438,
   -0.01366944,
   -0.002560172,
   0.009517814,
   0.02006598,
   0.02621292,
   0.02510889,
   0.01917474,
   0.01003366,
   -0.0021846,
   -0.01059043,
   -0.01097586,
   -0.003011714};
   Double_t g_felx3090[18] = {
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
   Double_t g_fely3090[18] = {
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
   Double_t g_fehx3090[18] = {
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
   Double_t g_fehy3090[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3090,g_fy3090,g_felx3090,g_fehx3090,g_fely3090,g_fehy3090);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1332;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3090 = new TH1F("Graph_g3090","",100,-3.5065,3.5915);
   Graph_g3090->SetMinimum(-100.0212);
   Graph_g3090->SetMaximum(1100.002);
   Graph_g3090->SetDirectory(0);
   Graph_g3090->SetStats(0);
   Graph_g3090->SetLineStyle(0);
   Graph_g3090->SetMarkerStyle(20);
   Graph_g3090->GetXaxis()->SetLabelFont(42);
   Graph_g3090->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3090->GetXaxis()->SetLabelSize(0.045);
   Graph_g3090->GetXaxis()->SetTitleSize(0.055);
   Graph_g3090->GetXaxis()->SetTitleFont(42);
   Graph_g3090->GetYaxis()->SetLabelFont(42);
   Graph_g3090->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3090->GetYaxis()->SetLabelSize(0.045);
   Graph_g3090->GetYaxis()->SetTitleSize(0.055);
   Graph_g3090->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3090->GetYaxis()->SetTitleFont(42);
   Graph_g3090->GetZaxis()->SetLabelFont(42);
   Graph_g3090->GetZaxis()->SetLabelSize(0.045);
   Graph_g3090->GetZaxis()->SetTitleSize(0.035);
   Graph_g3090->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3090);
   
   grae->Draw(" 2");
   Double_t xAxis50[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_3__88 = new TH1D("hist_eta_diff_3__88","",18, xAxis50);
   hist_eta_diff_3__88->SetBinContent(1,1000);
   hist_eta_diff_3__88->SetBinContent(2,0.0002533288);
   hist_eta_diff_3__88->SetBinContent(3,-0.0004682001);
   hist_eta_diff_3__88->SetBinContent(4,-0.001474718);
   hist_eta_diff_3__88->SetBinContent(5,-0.004848146);
   hist_eta_diff_3__88->SetBinContent(6,-0.005618441);
   hist_eta_diff_3__88->SetBinContent(7,-0.006011639);
   hist_eta_diff_3__88->SetBinContent(8,-0.00105104);
   hist_eta_diff_3__88->SetBinContent(9,0.003374013);
   hist_eta_diff_3__88->SetBinContent(10,0.004087568);
   hist_eta_diff_3__88->SetBinContent(11,0.01112855);
   hist_eta_diff_3__88->SetBinContent(12,0.005620214);
   hist_eta_diff_3__88->SetBinContent(13,0.0101241);
   hist_eta_diff_3__88->SetBinContent(14,0.002199555);
   hist_eta_diff_3__88->SetBinContent(15,0.001125199);
   hist_eta_diff_3__88->SetBinContent(16,0.0001407211);
   hist_eta_diff_3__88->SetBinContent(17,-0.007295291);
   hist_eta_diff_3__88->SetBinContent(18,-0.002130288);
   hist_eta_diff_3__88->SetBinError(1,1.676376e-05);
   hist_eta_diff_3__88->SetBinError(2,0.0001122616);
   hist_eta_diff_3__88->SetBinError(3,0.0005111119);
   hist_eta_diff_3__88->SetBinError(4,0.0009013821);
   hist_eta_diff_3__88->SetBinError(5,0.001297525);
   hist_eta_diff_3__88->SetBinError(6,0.001668332);
   hist_eta_diff_3__88->SetBinError(7,0.001995131);
   hist_eta_diff_3__88->SetBinError(8,0.002266491);
   hist_eta_diff_3__88->SetBinError(9,0.002470511);
   hist_eta_diff_3__88->SetBinError(10,0.002593627);
   hist_eta_diff_3__88->SetBinError(11,0.002689247);
   hist_eta_diff_3__88->SetBinError(12,0.002668425);
   hist_eta_diff_3__88->SetBinError(13,0.002603055);
   hist_eta_diff_3__88->SetBinError(14,0.002432504);
   hist_eta_diff_3__88->SetBinError(15,0.002220043);
   hist_eta_diff_3__88->SetBinError(16,0.00194207);
   hist_eta_diff_3__88->SetBinError(17,0.0009448609);
   hist_eta_diff_3__88->SetBinError(18,0.0003574402);
   hist_eta_diff_3__88->SetEntries(2.30906);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_3__88->SetLineColor(ci);
   hist_eta_diff_3__88->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_3__88->SetMarkerColor(ci);
   hist_eta_diff_3__88->SetMarkerStyle(20);
   hist_eta_diff_3__88->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_3__88->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_3__88->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_3__88->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_3__88->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_3__88->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_3__88->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_3__88->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_3__88->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_3__88->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_3__88->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_3__88->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_3__88->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_3__88->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_3__88->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_3__88->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_3__88->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_3__88->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_3__88->Draw("same");
   line = new TLine(-2.999,0,2.999,0);
   line->Draw();
      tex = new TLatex(0.45,0.29,"95 < p_{T}^{ave} < 115 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_0_1->Modified();
   cDiff0->cd();
  
// ------------>Primitives in pad: p_1_0
   TPad *p_1_0 = new TPad("p_1_0", "p_1_0",0.3825653,0.5393939,0.673315,1);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(-2.999,-0.04,2.999,0.04988764);
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
   
   TH1D *emptyDiff__89 = new TH1D("emptyDiff__89","",10,-2.999,2.999);
   emptyDiff__89->SetBinContent(7,1000);
   emptyDiff__89->SetBinError(7,1000);
   emptyDiff__89->SetMinimum(-0.04);
   emptyDiff__89->SetMaximum(0.04);
   emptyDiff__89->SetEntries(1);
   emptyDiff__89->SetLineStyle(0);
   emptyDiff__89->SetMarkerStyle(20);
   emptyDiff__89->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__89->GetXaxis()->CenterTitle(true);
   emptyDiff__89->GetXaxis()->SetLabelFont(43);
   emptyDiff__89->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__89->GetXaxis()->SetLabelSize(33);
   emptyDiff__89->GetXaxis()->SetTitleSize(33);
   emptyDiff__89->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__89->GetXaxis()->SetTitleFont(43);
   emptyDiff__89->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__89->GetYaxis()->CenterTitle(true);
   emptyDiff__89->GetYaxis()->SetNdivisions(505);
   emptyDiff__89->GetYaxis()->SetLabelFont(43);
   emptyDiff__89->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__89->GetYaxis()->SetLabelSize(33);
   emptyDiff__89->GetYaxis()->SetTitleSize(33);
   emptyDiff__89->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__89->GetYaxis()->SetTitleFont(43);
   emptyDiff__89->GetZaxis()->SetLabelFont(42);
   emptyDiff__89->GetZaxis()->SetLabelSize(0.045);
   emptyDiff__89->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__89->GetZaxis()->SetTitleFont(42);
   emptyDiff__89->Draw("");
   
   Double_t syst1_fx1039[18] = {
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
   Double_t syst1_fy1039[18] = {
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
   Double_t syst1_fex1039[18] = {
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
   Double_t syst1_fey1039[18] = {
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
   gre = new TGraphErrors(18,syst1_fx1039,syst1_fy1039,syst1_fex1039,syst1_fey1039);
   gre->SetName("syst1");
   gre->SetTitle("Graph");

   ci = 1319;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_syst11039 = new TH1F("Graph_syst11039","Graph",100,-3.46425,3.51675);
   Graph_syst11039->SetMinimum(-0.01049022);
   Graph_syst11039->SetMaximum(0.01188262);
   Graph_syst11039->SetDirectory(0);
   Graph_syst11039->SetStats(0);
   Graph_syst11039->SetLineStyle(0);
   Graph_syst11039->SetMarkerStyle(20);
   Graph_syst11039->GetXaxis()->SetLabelFont(42);
   Graph_syst11039->GetXaxis()->SetLabelOffset(0.01);
   Graph_syst11039->GetXaxis()->SetLabelSize(0.045);
   Graph_syst11039->GetXaxis()->SetTitleSize(0.055);
   Graph_syst11039->GetXaxis()->SetTitleFont(42);
   Graph_syst11039->GetYaxis()->SetLabelFont(42);
   Graph_syst11039->GetYaxis()->SetLabelOffset(0.01);
   Graph_syst11039->GetYaxis()->SetLabelSize(0.045);
   Graph_syst11039->GetYaxis()->SetTitleSize(0.055);
   Graph_syst11039->GetYaxis()->SetTitleOffset(1.3);
   Graph_syst11039->GetYaxis()->SetTitleFont(42);
   Graph_syst11039->GetZaxis()->SetLabelFont(42);
   Graph_syst11039->GetZaxis()->SetLabelSize(0.045);
   Graph_syst11039->GetZaxis()->SetTitleSize(0.035);
   Graph_syst11039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst11039);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff01_fx3091[18] = {
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
   Double_t NLOdiff01_fy3091[18] = {
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
   Double_t NLOdiff01_felx3091[18] = {
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
   Double_t NLOdiff01_fely3091[18] = {
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
   Double_t NLOdiff01_fehx3091[18] = {
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
   Double_t NLOdiff01_fehy3091[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff01_fx3091,NLOdiff01_fy3091,NLOdiff01_felx3091,NLOdiff01_fehx3091,NLOdiff01_fely3091,NLOdiff01_fehy3091);
   grae->SetName("NLOdiff01");
   grae->SetTitle("");

   ci = 1320;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff013091 = new TH1F("Graph_NLOdiff013091","",100,-3.5065,3.5915);
   Graph_NLOdiff013091->SetMinimum(-0.01247722);
   Graph_NLOdiff013091->SetMaximum(0.01519027);
   Graph_NLOdiff013091->SetDirectory(0);
   Graph_NLOdiff013091->SetStats(0);
   Graph_NLOdiff013091->SetLineStyle(0);
   Graph_NLOdiff013091->SetMarkerStyle(20);
   Graph_NLOdiff013091->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff013091->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff013091->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff013091->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff013091->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff013091->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff013091->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff013091->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff013091->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff013091->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff013091->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff013091->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff013091->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff013091->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff013091->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff013091);
   
   grae->Draw(" 2");
   
   Double_t g_fx3092[18] = {
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
   Double_t g_fy3092[18] = {
   -0.0002496958,
   -0.003038471,
   -0.008812654,
   -0.01053828,
   -0.01013922,
   -0.008013527,
   -0.003616571,
   0.003300986,
   0.01197613,
   0.01671277,
   0.0157154,
   0.01355538,
   0.009320533,
   0.003050445,
   -0.002722024,
   -0.005951798,
   -0.006459851,
   -0.002295609};
   Double_t g_felx3092[18] = {
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
   Double_t g_fely3092[18] = {
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
   Double_t g_fehx3092[18] = {
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
   Double_t g_fehy3092[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3092,g_fy3092,g_felx3092,g_fehx3092,g_fely3092,g_fehy3092);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1321;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3092 = new TH1F("Graph_g3092","",100,-3.5065,3.5915);
   Graph_g3092->SetMinimum(-0.02148378);
   Graph_g3092->SetMaximum(0.02878523);
   Graph_g3092->SetDirectory(0);
   Graph_g3092->SetStats(0);
   Graph_g3092->SetLineStyle(0);
   Graph_g3092->SetMarkerStyle(20);
   Graph_g3092->GetXaxis()->SetLabelFont(42);
   Graph_g3092->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3092->GetXaxis()->SetLabelSize(0.045);
   Graph_g3092->GetXaxis()->SetTitleSize(0.055);
   Graph_g3092->GetXaxis()->SetTitleFont(42);
   Graph_g3092->GetYaxis()->SetLabelFont(42);
   Graph_g3092->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3092->GetYaxis()->SetLabelSize(0.045);
   Graph_g3092->GetYaxis()->SetTitleSize(0.055);
   Graph_g3092->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3092->GetYaxis()->SetTitleFont(42);
   Graph_g3092->GetZaxis()->SetLabelFont(42);
   Graph_g3092->GetZaxis()->SetLabelSize(0.045);
   Graph_g3092->GetZaxis()->SetTitleSize(0.035);
   Graph_g3092->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3092);
   
   grae->Draw(" 2");
   
   Double_t g_fx3093[18] = {
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
   Double_t g_fy3093[18] = {
   -0.0003543008,
   -0.003554906,
   -0.009765962,
   -0.01075295,
   -0.007635332,
   -0.003395492,
   0.0063348,
   0.0154647,
   0.02230885,
   0.02693461,
   0.02218414,
   0.01589094,
   0.006300754,
   -0.004384627,
   -0.01366182,
   -0.01749758,
   -0.01560004,
   -0.004830421};
   Double_t g_felx3093[18] = {
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
   Double_t g_fely3093[18] = {
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
   Double_t g_fehx3093[18] = {
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
   Double_t g_fehy3093[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3093,g_fy3093,g_felx3093,g_fehx3093,g_fely3093,g_fehy3093);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1322;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3093 = new TH1F("Graph_g3093","",100,-3.5065,3.5915);
   Graph_g3093->SetMinimum(-0.02561792);
   Graph_g3093->SetMaximum(0.03460785);
   Graph_g3093->SetDirectory(0);
   Graph_g3093->SetStats(0);
   Graph_g3093->SetLineStyle(0);
   Graph_g3093->SetMarkerStyle(20);
   Graph_g3093->GetXaxis()->SetLabelFont(42);
   Graph_g3093->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3093->GetXaxis()->SetLabelSize(0.045);
   Graph_g3093->GetXaxis()->SetTitleSize(0.055);
   Graph_g3093->GetXaxis()->SetTitleFont(42);
   Graph_g3093->GetYaxis()->SetLabelFont(42);
   Graph_g3093->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3093->GetYaxis()->SetLabelSize(0.045);
   Graph_g3093->GetYaxis()->SetTitleSize(0.055);
   Graph_g3093->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3093->GetYaxis()->SetTitleFont(42);
   Graph_g3093->GetZaxis()->SetLabelFont(42);
   Graph_g3093->GetZaxis()->SetLabelSize(0.045);
   Graph_g3093->GetZaxis()->SetTitleSize(0.035);
   Graph_g3093->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3093);
   
   grae->Draw(" 2");
   Double_t xAxis51[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_1__90 = new TH1D("hist_eta_diff_1__90","",18, xAxis51);
   hist_eta_diff_1__90->SetBinContent(0,-1.398952e-06);
   hist_eta_diff_1__90->SetBinContent(1,-4.906779e-05);
   hist_eta_diff_1__90->SetBinContent(2,0.0002258451);
   hist_eta_diff_1__90->SetBinContent(3,-0.0002191903);
   hist_eta_diff_1__90->SetBinContent(4,-0.001597103);
   hist_eta_diff_1__90->SetBinContent(5,0.002880423);
   hist_eta_diff_1__90->SetBinContent(6,-0.0008855846);
   hist_eta_diff_1__90->SetBinContent(7,-0.001171814);
   hist_eta_diff_1__90->SetBinContent(8,0.006504828);
   hist_eta_diff_1__90->SetBinContent(9,0.005045488);
   hist_eta_diff_1__90->SetBinContent(10,0.01001822);
   hist_eta_diff_1__90->SetBinContent(11,0.008164893);
   hist_eta_diff_1__90->SetBinContent(12,0.005774759);
   hist_eta_diff_1__90->SetBinContent(13,0.004344218);
   hist_eta_diff_1__90->SetBinContent(14,-9.156792e-05);
   hist_eta_diff_1__90->SetBinContent(15,-0.006305573);
   hist_eta_diff_1__90->SetBinContent(16,-0.005839335);
   hist_eta_diff_1__90->SetBinContent(17,-0.008625812);
   hist_eta_diff_1__90->SetBinContent(18,-0.004886829);
   hist_eta_diff_1__90->SetBinError(0,1.398952e-06);
   hist_eta_diff_1__90->SetBinError(1,0.0001309669);
   hist_eta_diff_1__90->SetBinError(2,0.0004703216);
   hist_eta_diff_1__90->SetBinError(3,0.00131912);
   hist_eta_diff_1__90->SetBinError(4,0.001775651);
   hist_eta_diff_1__90->SetBinError(5,0.002241532);
   hist_eta_diff_1__90->SetBinError(6,0.002601009);
   hist_eta_diff_1__90->SetBinError(7,0.00293401);
   hist_eta_diff_1__90->SetBinError(8,0.003235623);
   hist_eta_diff_1__90->SetBinError(9,0.003431219);
   hist_eta_diff_1__90->SetBinError(10,0.003594686);
   hist_eta_diff_1__90->SetBinError(11,0.003640719);
   hist_eta_diff_1__90->SetBinError(12,0.003612589);
   hist_eta_diff_1__90->SetBinError(13,0.003523915);
   hist_eta_diff_1__90->SetBinError(14,0.003326636);
   hist_eta_diff_1__90->SetBinError(15,0.003045938);
   hist_eta_diff_1__90->SetBinError(16,0.00269698);
   hist_eta_diff_1__90->SetBinError(17,0.001409397);
   hist_eta_diff_1__90->SetBinError(18,0.0006155672);
   hist_eta_diff_1__90->SetEntries(1.364282);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_1__90->SetLineColor(ci);
   hist_eta_diff_1__90->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_1__90->SetMarkerColor(ci);
   hist_eta_diff_1__90->SetMarkerStyle(20);
   hist_eta_diff_1__90->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_1__90->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_1__90->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_1__90->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_1__90->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_1__90->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_1__90->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_1__90->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_1__90->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_1__90->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_1__90->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_1__90->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_1__90->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_1__90->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_1__90->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_1__90->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_1__90->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_1__90->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_1__90->Draw("same");
   line = new TLine(-2.999,0,2.999,0);
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
   cDiff0->cd();
  
// ------------>Primitives in pad: p_1_1
   TPad *p_1_1 = new TPad("p_1_1", "p_1_1",0.3825653,0,0.673315,0.539394);
   p_1_1->Draw();
   p_1_1->cd();
   p_1_1->Range(-2.999,-0.06526316,2.999,0.04);
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
   
   TH1D *emptyDiff__91 = new TH1D("emptyDiff__91","",10,-2.999,2.999);
   emptyDiff__91->SetBinContent(7,1000);
   emptyDiff__91->SetBinError(7,1000);
   emptyDiff__91->SetMinimum(-0.04);
   emptyDiff__91->SetMaximum(0.04);
   emptyDiff__91->SetEntries(1);
   emptyDiff__91->SetLineStyle(0);
   emptyDiff__91->SetMarkerStyle(20);
   emptyDiff__91->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__91->GetXaxis()->CenterTitle(true);
   emptyDiff__91->GetXaxis()->SetLabelFont(43);
   emptyDiff__91->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__91->GetXaxis()->SetLabelSize(33);
   emptyDiff__91->GetXaxis()->SetTitleSize(33);
   emptyDiff__91->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__91->GetXaxis()->SetTitleFont(43);
   emptyDiff__91->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__91->GetYaxis()->CenterTitle(true);
   emptyDiff__91->GetYaxis()->SetNdivisions(505);
   emptyDiff__91->GetYaxis()->SetLabelFont(43);
   emptyDiff__91->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__91->GetYaxis()->SetLabelSize(33);
   emptyDiff__91->GetYaxis()->SetTitleSize(33);
   emptyDiff__91->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__91->GetYaxis()->SetTitleFont(43);
   emptyDiff__91->GetZaxis()->SetLabelFont(42);
   emptyDiff__91->GetZaxis()->SetLabelSize(0.045);
   emptyDiff__91->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__91->GetZaxis()->SetTitleFont(42);
   emptyDiff__91->Draw("");
   
   Double_t syst4_fx1040[18] = {
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
   Double_t syst4_fy1040[18] = {
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
   Double_t syst4_fex1040[18] = {
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
   Double_t syst4_fey1040[18] = {
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
   gre = new TGraphErrors(18,syst4_fx1040,syst4_fy1040,syst4_fex1040,syst4_fey1040);
   gre->SetName("syst4");
   gre->SetTitle("Graph");

   ci = 1334;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_syst41040 = new TH1F("Graph_syst41040","Graph",100,-3.46425,3.51675);
   Graph_syst41040->SetMinimum(-0.01179538);
   Graph_syst41040->SetMaximum(0.01398228);
   Graph_syst41040->SetDirectory(0);
   Graph_syst41040->SetStats(0);
   Graph_syst41040->SetLineStyle(0);
   Graph_syst41040->SetMarkerStyle(20);
   Graph_syst41040->GetXaxis()->SetLabelFont(42);
   Graph_syst41040->GetXaxis()->SetLabelOffset(0.01);
   Graph_syst41040->GetXaxis()->SetLabelSize(0.045);
   Graph_syst41040->GetXaxis()->SetTitleSize(0.055);
   Graph_syst41040->GetXaxis()->SetTitleFont(42);
   Graph_syst41040->GetYaxis()->SetLabelFont(42);
   Graph_syst41040->GetYaxis()->SetLabelOffset(0.01);
   Graph_syst41040->GetYaxis()->SetLabelSize(0.045);
   Graph_syst41040->GetYaxis()->SetTitleSize(0.055);
   Graph_syst41040->GetYaxis()->SetTitleOffset(1.3);
   Graph_syst41040->GetYaxis()->SetTitleFont(42);
   Graph_syst41040->GetZaxis()->SetLabelFont(42);
   Graph_syst41040->GetZaxis()->SetLabelSize(0.045);
   Graph_syst41040->GetZaxis()->SetTitleSize(0.035);
   Graph_syst41040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst41040);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff04_fx3094[18] = {
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
   Double_t NLOdiff04_fy3094[18] = {
   1000,
   1000,
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
   Double_t NLOdiff04_felx3094[18] = {
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
   Double_t NLOdiff04_fely3094[18] = {
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
   Double_t NLOdiff04_fehx3094[18] = {
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
   Double_t NLOdiff04_fehy3094[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff04_fx3094,NLOdiff04_fy3094,NLOdiff04_felx3094,NLOdiff04_fehx3094,NLOdiff04_fely3094,NLOdiff04_fehy3094);
   grae->SetName("NLOdiff04");
   grae->SetTitle("");

   ci = 1335;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff043094 = new TH1F("Graph_NLOdiff043094","",100,-3.5065,3.5915);
   Graph_NLOdiff043094->SetMinimum(-100.0124);
   Graph_NLOdiff043094->SetMaximum(1100.001);
   Graph_NLOdiff043094->SetDirectory(0);
   Graph_NLOdiff043094->SetStats(0);
   Graph_NLOdiff043094->SetLineStyle(0);
   Graph_NLOdiff043094->SetMarkerStyle(20);
   Graph_NLOdiff043094->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff043094->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff043094->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff043094->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff043094->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff043094->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff043094->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff043094->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff043094->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff043094->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff043094->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff043094->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff043094->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff043094->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff043094->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff043094);
   
   grae->Draw(" 2");
   
   Double_t g_fx3095[18] = {
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
   Double_t g_fy3095[18] = {
   1000,
   1000,
   -0.001994639,
   -0.006558408,
   -0.01306807,
   -0.01698327,
   -0.01794409,
   -0.01346983,
   -0.006031844,
   0.00492449,
   0.01368912,
   0.01969887,
   0.01873988,
   0.01470096,
   0.008237815,
   0.001718055,
   -0.002258725,
   -0.000568744};
   Double_t g_felx3095[18] = {
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
   Double_t g_fely3095[18] = {
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
   Double_t g_fehx3095[18] = {
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
   Double_t g_fehy3095[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3095,g_fy3095,g_felx3095,g_fehx3095,g_fely3095,g_fehy3095);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1336;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3095 = new TH1F("Graph_g3095","",100,-3.5065,3.5915);
   Graph_g3095->SetMinimum(-100.0307);
   Graph_g3095->SetMaximum(1100.003);
   Graph_g3095->SetDirectory(0);
   Graph_g3095->SetStats(0);
   Graph_g3095->SetLineStyle(0);
   Graph_g3095->SetMarkerStyle(20);
   Graph_g3095->GetXaxis()->SetLabelFont(42);
   Graph_g3095->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3095->GetXaxis()->SetLabelSize(0.045);
   Graph_g3095->GetXaxis()->SetTitleSize(0.055);
   Graph_g3095->GetXaxis()->SetTitleFont(42);
   Graph_g3095->GetYaxis()->SetLabelFont(42);
   Graph_g3095->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3095->GetYaxis()->SetLabelSize(0.045);
   Graph_g3095->GetYaxis()->SetTitleSize(0.055);
   Graph_g3095->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3095->GetYaxis()->SetTitleFont(42);
   Graph_g3095->GetZaxis()->SetLabelFont(42);
   Graph_g3095->GetZaxis()->SetLabelSize(0.045);
   Graph_g3095->GetZaxis()->SetTitleSize(0.035);
   Graph_g3095->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3095);
   
   grae->Draw(" 2");
   
   Double_t g_fx3096[18] = {
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
   Double_t g_fy3096[18] = {
   1000,
   1000,
   -0.002958373,
   -0.008725097,
   -0.0161681,
   -0.02094103,
   -0.01995613,
   -0.01319602,
   -0.000120762,
   0.01341938,
   0.02464848,
   0.02748986,
   0.02406746,
   0.0151658,
   0.002767915,
   -0.005646546,
   -0.007946879,
   -0.00180076};
   Double_t g_felx3096[18] = {
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
   Double_t g_fely3096[18] = {
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
   Double_t g_fehx3096[18] = {
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
   Double_t g_fehy3096[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3096,g_fy3096,g_felx3096,g_fehx3096,g_fely3096,g_fehy3096);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1337;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3096 = new TH1F("Graph_g3096","",100,-3.5065,3.5915);
   Graph_g3096->SetMinimum(-100.0276);
   Graph_g3096->SetMaximum(1100.003);
   Graph_g3096->SetDirectory(0);
   Graph_g3096->SetStats(0);
   Graph_g3096->SetLineStyle(0);
   Graph_g3096->SetMarkerStyle(20);
   Graph_g3096->GetXaxis()->SetLabelFont(42);
   Graph_g3096->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3096->GetXaxis()->SetLabelSize(0.045);
   Graph_g3096->GetXaxis()->SetTitleSize(0.055);
   Graph_g3096->GetXaxis()->SetTitleFont(42);
   Graph_g3096->GetYaxis()->SetLabelFont(42);
   Graph_g3096->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3096->GetYaxis()->SetLabelSize(0.045);
   Graph_g3096->GetYaxis()->SetTitleSize(0.055);
   Graph_g3096->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3096->GetYaxis()->SetTitleFont(42);
   Graph_g3096->GetZaxis()->SetLabelFont(42);
   Graph_g3096->GetZaxis()->SetLabelSize(0.045);
   Graph_g3096->GetZaxis()->SetTitleSize(0.035);
   Graph_g3096->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3096);
   
   grae->Draw(" 2");
   Double_t xAxis52[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_4__92 = new TH1D("hist_eta_diff_4__92","",18, xAxis52);
   hist_eta_diff_4__92->SetBinContent(1,1000);
   hist_eta_diff_4__92->SetBinContent(2,1000);
   hist_eta_diff_4__92->SetBinContent(3,-4.964999e-05);
   hist_eta_diff_4__92->SetBinContent(4,-0.001123675);
   hist_eta_diff_4__92->SetBinContent(5,-0.00413743);
   hist_eta_diff_4__92->SetBinContent(6,-0.007076319);
   hist_eta_diff_4__92->SetBinContent(7,-0.00823143);
   hist_eta_diff_4__92->SetBinContent(8,-0.009647242);
   hist_eta_diff_4__92->SetBinContent(9,-0.000587429);
   hist_eta_diff_4__92->SetBinContent(10,0.003849701);
   hist_eta_diff_4__92->SetBinContent(11,0.01183415);
   hist_eta_diff_4__92->SetBinContent(12,0.006279578);
   hist_eta_diff_4__92->SetBinContent(13,0.008719767);
   hist_eta_diff_4__92->SetBinContent(14,0.004006872);
   hist_eta_diff_4__92->SetBinContent(15,0.004458224);
   hist_eta_diff_4__92->SetBinContent(16,0.001263949);
   hist_eta_diff_4__92->SetBinContent(17,-0.003741598);
   hist_eta_diff_4__92->SetBinContent(18,-0.001189222);
   hist_eta_diff_4__92->SetBinError(1,4.285359e-06);
   hist_eta_diff_4__92->SetBinError(2,6.462798e-05);
   hist_eta_diff_4__92->SetBinError(3,0.0003776847);
   hist_eta_diff_4__92->SetBinError(4,0.000829755);
   hist_eta_diff_4__92->SetBinError(5,0.001345817);
   hist_eta_diff_4__92->SetBinError(6,0.001847341);
   hist_eta_diff_4__92->SetBinError(7,0.002284441);
   hist_eta_diff_4__92->SetBinError(8,0.002637428);
   hist_eta_diff_4__92->SetBinError(9,0.002932516);
   hist_eta_diff_4__92->SetBinError(10,0.003137782);
   hist_eta_diff_4__92->SetBinError(11,0.003245895);
   hist_eta_diff_4__92->SetBinError(12,0.003237999);
   hist_eta_diff_4__92->SetBinError(13,0.003148427);
   hist_eta_diff_4__92->SetBinError(14,0.002940548);
   hist_eta_diff_4__92->SetBinError(15,0.002658179);
   hist_eta_diff_4__92->SetBinError(16,0.00226412);
   hist_eta_diff_4__92->SetBinError(17,0.001072358);
   hist_eta_diff_4__92->SetBinError(18,0.0003476416);
   hist_eta_diff_4__92->SetEntries(2.254379);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_4__92->SetLineColor(ci);
   hist_eta_diff_4__92->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_4__92->SetMarkerColor(ci);
   hist_eta_diff_4__92->SetMarkerStyle(20);
   hist_eta_diff_4__92->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_4__92->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_4__92->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_4__92->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_4__92->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_4__92->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_4__92->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_4__92->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_4__92->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_4__92->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_4__92->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_4__92->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_4__92->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_4__92->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_4__92->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_4__92->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_4__92->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_4__92->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_4__92->Draw("same");
   line = new TLine(-2.999,0,2.999,0);
   line->Draw();
      tex = new TLatex(0.28,0.29,"115 < p_{T}^{ave} < 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   p_1_1->Modified();
   cDiff0->cd();
  
// ------------>Primitives in pad: p_2_0
   TPad *p_2_0 = new TPad("p_2_0", "p_2_0",0.673315,0.5393939,1,1);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(-2.999,-0.04,3.740326,0.04988764);
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
   
   TH1D *emptyDiff__93 = new TH1D("emptyDiff__93","",10,-2.999,2.999);
   emptyDiff__93->SetBinContent(7,1000);
   emptyDiff__93->SetBinError(7,1000);
   emptyDiff__93->SetMinimum(-0.04);
   emptyDiff__93->SetMaximum(0.04);
   emptyDiff__93->SetEntries(1);
   emptyDiff__93->SetLineStyle(0);
   emptyDiff__93->SetMarkerStyle(20);
   emptyDiff__93->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__93->GetXaxis()->CenterTitle(true);
   emptyDiff__93->GetXaxis()->SetLabelFont(43);
   emptyDiff__93->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__93->GetXaxis()->SetLabelSize(33);
   emptyDiff__93->GetXaxis()->SetTitleSize(33);
   emptyDiff__93->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__93->GetXaxis()->SetTitleFont(43);
   emptyDiff__93->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__93->GetYaxis()->CenterTitle(true);
   emptyDiff__93->GetYaxis()->SetNdivisions(505);
   emptyDiff__93->GetYaxis()->SetLabelFont(43);
   emptyDiff__93->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__93->GetYaxis()->SetLabelSize(33);
   emptyDiff__93->GetYaxis()->SetTitleSize(33);
   emptyDiff__93->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__93->GetYaxis()->SetTitleFont(43);
   emptyDiff__93->GetZaxis()->SetLabelFont(42);
   emptyDiff__93->GetZaxis()->SetLabelSize(0.045);
   emptyDiff__93->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__93->GetZaxis()->SetTitleFont(42);
   emptyDiff__93->Draw("");
   
   Double_t syst2_fx1041[18] = {
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
   Double_t syst2_fy1041[18] = {
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
   Double_t syst2_fex1041[18] = {
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
   Double_t syst2_fey1041[18] = {
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
   gre = new TGraphErrors(18,syst2_fx1041,syst2_fy1041,syst2_fex1041,syst2_fey1041);
   gre->SetName("syst2");
   gre->SetTitle("Graph");

   ci = 1324;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_syst21041 = new TH1F("Graph_syst21041","Graph",100,-3.46425,3.51675);
   Graph_syst21041->SetMinimum(-0.009224179);
   Graph_syst21041->SetMaximum(0.01120426);
   Graph_syst21041->SetDirectory(0);
   Graph_syst21041->SetStats(0);
   Graph_syst21041->SetLineStyle(0);
   Graph_syst21041->SetMarkerStyle(20);
   Graph_syst21041->GetXaxis()->SetLabelFont(42);
   Graph_syst21041->GetXaxis()->SetLabelOffset(0.01);
   Graph_syst21041->GetXaxis()->SetLabelSize(0.045);
   Graph_syst21041->GetXaxis()->SetTitleSize(0.055);
   Graph_syst21041->GetXaxis()->SetTitleFont(42);
   Graph_syst21041->GetYaxis()->SetLabelFont(42);
   Graph_syst21041->GetYaxis()->SetLabelOffset(0.01);
   Graph_syst21041->GetYaxis()->SetLabelSize(0.045);
   Graph_syst21041->GetYaxis()->SetTitleSize(0.055);
   Graph_syst21041->GetYaxis()->SetTitleOffset(1.3);
   Graph_syst21041->GetYaxis()->SetTitleFont(42);
   Graph_syst21041->GetZaxis()->SetLabelFont(42);
   Graph_syst21041->GetZaxis()->SetLabelSize(0.045);
   Graph_syst21041->GetZaxis()->SetTitleSize(0.035);
   Graph_syst21041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst21041);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff02_fx3097[18] = {
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
   Double_t NLOdiff02_fy3097[18] = {
   1000,
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
   Double_t NLOdiff02_felx3097[18] = {
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
   Double_t NLOdiff02_fely3097[18] = {
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
   Double_t NLOdiff02_fehx3097[18] = {
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
   Double_t NLOdiff02_fehy3097[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff02_fx3097,NLOdiff02_fy3097,NLOdiff02_felx3097,NLOdiff02_fehx3097,NLOdiff02_fely3097,NLOdiff02_fehy3097);
   grae->SetName("NLOdiff02");
   grae->SetTitle("");

   ci = 1325;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff023097 = new TH1F("Graph_NLOdiff023097","",100,-3.5065,3.5915);
   Graph_NLOdiff023097->SetMinimum(-100.0106);
   Graph_NLOdiff023097->SetMaximum(1100.001);
   Graph_NLOdiff023097->SetDirectory(0);
   Graph_NLOdiff023097->SetStats(0);
   Graph_NLOdiff023097->SetLineStyle(0);
   Graph_NLOdiff023097->SetMarkerStyle(20);
   Graph_NLOdiff023097->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff023097->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff023097->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff023097->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff023097->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff023097->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff023097->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff023097->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff023097->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff023097->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff023097->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff023097->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff023097->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff023097->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff023097->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff023097);
   
   grae->Draw(" 2");
   
   Double_t g_fx3098[18] = {
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
   Double_t g_fy3098[18] = {
   1000,
   -0.001532447,
   -0.006607986,
   -0.01056422,
   -0.01288954,
   -0.0131872,
   -0.009849432,
   -0.002192554,
   0.003523742,
   0.01232674,
   0.01803468,
   0.01857087,
   0.01280266,
   0.007137807,
   0.002124467,
   -0.003042165,
   -0.004805215,
   -0.001761247};
   Double_t g_felx3098[18] = {
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
   Double_t g_fely3098[18] = {
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
   Double_t g_fehx3098[18] = {
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
   Double_t g_fehy3098[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3098,g_fy3098,g_felx3098,g_fehx3098,g_fely3098,g_fehy3098);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1326;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3098 = new TH1F("Graph_g3098","",100,-3.5065,3.5915);
   Graph_g3098->SetMinimum(-100.0236);
   Graph_g3098->SetMaximum(1100.002);
   Graph_g3098->SetDirectory(0);
   Graph_g3098->SetStats(0);
   Graph_g3098->SetLineStyle(0);
   Graph_g3098->SetMarkerStyle(20);
   Graph_g3098->GetXaxis()->SetLabelFont(42);
   Graph_g3098->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3098->GetXaxis()->SetLabelSize(0.045);
   Graph_g3098->GetXaxis()->SetTitleSize(0.055);
   Graph_g3098->GetXaxis()->SetTitleFont(42);
   Graph_g3098->GetYaxis()->SetLabelFont(42);
   Graph_g3098->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3098->GetYaxis()->SetLabelSize(0.045);
   Graph_g3098->GetYaxis()->SetTitleSize(0.055);
   Graph_g3098->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3098->GetYaxis()->SetTitleFont(42);
   Graph_g3098->GetZaxis()->SetLabelFont(42);
   Graph_g3098->GetZaxis()->SetLabelSize(0.045);
   Graph_g3098->GetZaxis()->SetTitleSize(0.035);
   Graph_g3098->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3098);
   
   grae->Draw(" 2");
   
   Double_t g_fx3099[18] = {
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
   Double_t g_fy3099[18] = {
   1000,
   -0.002007065,
   -0.00760831,
   -0.01259087,
   -0.01440956,
   -0.01249324,
   -0.0053445,
   0.005882818,
   0.01689293,
   0.02452861,
   0.0260456,
   0.02283822,
   0.01347452,
   0.003219999,
   -0.007457304,
   -0.0143494,
   -0.01335191,
   -0.003950091};
   Double_t g_felx3099[18] = {
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
   Double_t g_fely3099[18] = {
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
   Double_t g_fehx3099[18] = {
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
   Double_t g_fehy3099[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3099,g_fy3099,g_felx3099,g_fehx3099,g_fely3099,g_fehy3099);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1327;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3099 = new TH1F("Graph_g3099","",100,-3.5065,3.5915);
   Graph_g3099->SetMinimum(-100.0203);
   Graph_g3099->SetMaximum(1100.002);
   Graph_g3099->SetDirectory(0);
   Graph_g3099->SetStats(0);
   Graph_g3099->SetLineStyle(0);
   Graph_g3099->SetMarkerStyle(20);
   Graph_g3099->GetXaxis()->SetLabelFont(42);
   Graph_g3099->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3099->GetXaxis()->SetLabelSize(0.045);
   Graph_g3099->GetXaxis()->SetTitleSize(0.055);
   Graph_g3099->GetXaxis()->SetTitleFont(42);
   Graph_g3099->GetYaxis()->SetLabelFont(42);
   Graph_g3099->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3099->GetYaxis()->SetLabelSize(0.045);
   Graph_g3099->GetYaxis()->SetTitleSize(0.055);
   Graph_g3099->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3099->GetYaxis()->SetTitleFont(42);
   Graph_g3099->GetZaxis()->SetLabelFont(42);
   Graph_g3099->GetZaxis()->SetLabelSize(0.045);
   Graph_g3099->GetZaxis()->SetTitleSize(0.035);
   Graph_g3099->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3099);
   
   grae->Draw(" 2");
   Double_t xAxis53[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_2__94 = new TH1D("hist_eta_diff_2__94","",18, xAxis53);
   hist_eta_diff_2__94->SetBinContent(1,1000);
   hist_eta_diff_2__94->SetBinContent(2,0.0001942199);
   hist_eta_diff_2__94->SetBinContent(3,0.0003378031);
   hist_eta_diff_2__94->SetBinContent(4,-0.002040716);
   hist_eta_diff_2__94->SetBinContent(5,-0.003287542);
   hist_eta_diff_2__94->SetBinContent(6,-0.004385141);
   hist_eta_diff_2__94->SetBinContent(7,1.120079e-05);
   hist_eta_diff_2__94->SetBinContent(8,-0.0003642199);
   hist_eta_diff_2__94->SetBinContent(9,0.004114227);
   hist_eta_diff_2__94->SetBinContent(10,0.00820986);
   hist_eta_diff_2__94->SetBinContent(11,0.009501886);
   hist_eta_diff_2__94->SetBinContent(12,0.005577257);
   hist_eta_diff_2__94->SetBinContent(13,0.006284582);
   hist_eta_diff_2__94->SetBinContent(14,0.003551407);
   hist_eta_diff_2__94->SetBinContent(15,0.001092257);
   hist_eta_diff_2__94->SetBinContent(16,-0.007230637);
   hist_eta_diff_2__94->SetBinContent(17,-0.00752181);
   hist_eta_diff_2__94->SetBinContent(18,-0.003379396);
   hist_eta_diff_2__94->SetBinError(1,3.449509e-05);
   hist_eta_diff_2__94->SetBinError(2,0.0001945111);
   hist_eta_diff_2__94->SetBinError(3,0.0007096119);
   hist_eta_diff_2__94->SetBinError(4,0.001064601);
   hist_eta_diff_2__94->SetBinError(5,0.001434667);
   hist_eta_diff_2__94->SetBinError(6,0.001748419);
   hist_eta_diff_2__94->SetBinError(7,0.00203706);
   hist_eta_diff_2__94->SetBinError(8,0.002255898);
   hist_eta_diff_2__94->SetBinError(9,0.002439599);
   hist_eta_diff_2__94->SetBinError(10,0.00254712);
   hist_eta_diff_2__94->SetBinError(11,0.002612374);
   hist_eta_diff_2__94->SetBinError(12,0.002603784);
   hist_eta_diff_2__94->SetBinError(13,0.002536519);
   hist_eta_diff_2__94->SetBinError(14,0.002381178);
   hist_eta_diff_2__94->SetBinError(15,0.002190181);
   hist_eta_diff_2__94->SetBinError(16,0.001902599);
   hist_eta_diff_2__94->SetBinError(17,0.0009790673);
   hist_eta_diff_2__94->SetBinError(18,0.0004028425);
   hist_eta_diff_2__94->SetEntries(2.799253);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_2__94->SetLineColor(ci);
   hist_eta_diff_2__94->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_2__94->SetMarkerColor(ci);
   hist_eta_diff_2__94->SetMarkerStyle(20);
   hist_eta_diff_2__94->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_2__94->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_2__94->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_2__94->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_2__94->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_2__94->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_2__94->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_2__94->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_2__94->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_2__94->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_2__94->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_2__94->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_2__94->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_2__94->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_2__94->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_2__94->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_2__94->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_2__94->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_2__94->Draw("same");
   line = new TLine(-2.999,0,2.999,0);
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
   cDiff0->cd();
  
// ------------>Primitives in pad: p_2_1
   TPad *p_2_1 = new TPad("p_2_1", "p_2_1",0.673315,0,1,0.539394);
   p_2_1->Draw();
   p_2_1->cd();
   p_2_1->Range(-2.999,-0.06526316,3.740326,0.04);
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
   
   TH1D *emptyDiff__95 = new TH1D("emptyDiff__95","",10,-2.999,2.999);
   emptyDiff__95->SetBinContent(7,1000);
   emptyDiff__95->SetBinError(7,1000);
   emptyDiff__95->SetMinimum(-0.04);
   emptyDiff__95->SetMaximum(0.04);
   emptyDiff__95->SetEntries(1);
   emptyDiff__95->SetLineStyle(0);
   emptyDiff__95->SetMarkerStyle(20);
   emptyDiff__95->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__95->GetXaxis()->CenterTitle(true);
   emptyDiff__95->GetXaxis()->SetLabelFont(43);
   emptyDiff__95->GetXaxis()->SetLabelOffset(0.01);
   emptyDiff__95->GetXaxis()->SetLabelSize(33);
   emptyDiff__95->GetXaxis()->SetTitleSize(33);
   emptyDiff__95->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__95->GetXaxis()->SetTitleFont(43);
   emptyDiff__95->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__95->GetYaxis()->CenterTitle(true);
   emptyDiff__95->GetYaxis()->SetNdivisions(505);
   emptyDiff__95->GetYaxis()->SetLabelFont(43);
   emptyDiff__95->GetYaxis()->SetLabelOffset(0.01);
   emptyDiff__95->GetYaxis()->SetLabelSize(33);
   emptyDiff__95->GetYaxis()->SetTitleSize(33);
   emptyDiff__95->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__95->GetYaxis()->SetTitleFont(43);
   emptyDiff__95->GetZaxis()->SetLabelFont(42);
   emptyDiff__95->GetZaxis()->SetLabelSize(0.045);
   emptyDiff__95->GetZaxis()->SetTitleSize(0.035);
   emptyDiff__95->GetZaxis()->SetTitleFont(42);
   emptyDiff__95->Draw("");
   
   Double_t syst5_fx1042[18] = {
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
   Double_t syst5_fy1042[18] = {
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
   Double_t syst5_fex1042[18] = {
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
   Double_t syst5_fey1042[18] = {
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
   gre = new TGraphErrors(18,syst5_fx1042,syst5_fy1042,syst5_fex1042,syst5_fey1042);
   gre->SetName("syst5");
   gre->SetTitle("Graph");

   ci = 1339;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_syst51042 = new TH1F("Graph_syst51042","Graph",100,-3.46425,3.51675);
   Graph_syst51042->SetMinimum(-0.01801454);
   Graph_syst51042->SetMaximum(0.01812764);
   Graph_syst51042->SetDirectory(0);
   Graph_syst51042->SetStats(0);
   Graph_syst51042->SetLineStyle(0);
   Graph_syst51042->SetMarkerStyle(20);
   Graph_syst51042->GetXaxis()->SetLabelFont(42);
   Graph_syst51042->GetXaxis()->SetLabelOffset(0.01);
   Graph_syst51042->GetXaxis()->SetLabelSize(0.045);
   Graph_syst51042->GetXaxis()->SetTitleSize(0.055);
   Graph_syst51042->GetXaxis()->SetTitleFont(42);
   Graph_syst51042->GetYaxis()->SetLabelFont(42);
   Graph_syst51042->GetYaxis()->SetLabelOffset(0.01);
   Graph_syst51042->GetYaxis()->SetLabelSize(0.045);
   Graph_syst51042->GetYaxis()->SetTitleSize(0.055);
   Graph_syst51042->GetYaxis()->SetTitleOffset(1.3);
   Graph_syst51042->GetYaxis()->SetTitleFont(42);
   Graph_syst51042->GetZaxis()->SetLabelFont(42);
   Graph_syst51042->GetZaxis()->SetLabelSize(0.045);
   Graph_syst51042->GetZaxis()->SetTitleSize(0.035);
   Graph_syst51042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst51042);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff05_fx3100[18] = {
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
   Double_t NLOdiff05_fy3100[18] = {
   1000,
   1000,
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
   Double_t NLOdiff05_felx3100[18] = {
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
   Double_t NLOdiff05_fely3100[18] = {
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
   Double_t NLOdiff05_fehx3100[18] = {
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
   Double_t NLOdiff05_fehy3100[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff05_fx3100,NLOdiff05_fy3100,NLOdiff05_felx3100,NLOdiff05_fehx3100,NLOdiff05_fely3100,NLOdiff05_fehy3100);
   grae->SetName("NLOdiff05");
   grae->SetTitle("");

   ci = 1340;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_NLOdiff053100 = new TH1F("Graph_NLOdiff053100","",100,-3.5065,3.5915);
   Graph_NLOdiff053100->SetMinimum(-100.0077);
   Graph_NLOdiff053100->SetMaximum(1100.001);
   Graph_NLOdiff053100->SetDirectory(0);
   Graph_NLOdiff053100->SetStats(0);
   Graph_NLOdiff053100->SetLineStyle(0);
   Graph_NLOdiff053100->SetMarkerStyle(20);
   Graph_NLOdiff053100->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff053100->GetXaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff053100->GetXaxis()->SetLabelSize(0.045);
   Graph_NLOdiff053100->GetXaxis()->SetTitleSize(0.055);
   Graph_NLOdiff053100->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff053100->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff053100->GetYaxis()->SetLabelOffset(0.01);
   Graph_NLOdiff053100->GetYaxis()->SetLabelSize(0.045);
   Graph_NLOdiff053100->GetYaxis()->SetTitleSize(0.055);
   Graph_NLOdiff053100->GetYaxis()->SetTitleOffset(1.3);
   Graph_NLOdiff053100->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff053100->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff053100->GetZaxis()->SetLabelSize(0.045);
   Graph_NLOdiff053100->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff053100->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff053100);
   
   grae->Draw(" 2");
   
   Double_t g_fx3101[18] = {
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
   Double_t g_fy3101[18] = {
   1000,
   1000,
   8.297367e-05,
   -0.002288009,
   -0.007623977,
   -0.01458262,
   -0.01925727,
   -0.01969238,
   -0.01487532,
   -0.005813492,
   0.004169341,
   0.01432266,
   0.02218826,
   0.02025393,
   0.01470674,
   0.007255251,
   0.0008309468,
   -0.0002976451};
   Double_t g_felx3101[18] = {
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
   Double_t g_fely3101[18] = {
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
   Double_t g_fehx3101[18] = {
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
   Double_t g_fehy3101[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3101,g_fy3101,g_felx3101,g_fehx3101,g_fely3101,g_fehy3101);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1341;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3101 = new TH1F("Graph_g3101","",100,-3.5065,3.5915);
   Graph_g3101->SetMinimum(-100.0335);
   Graph_g3101->SetMaximum(1100.003);
   Graph_g3101->SetDirectory(0);
   Graph_g3101->SetStats(0);
   Graph_g3101->SetLineStyle(0);
   Graph_g3101->SetMarkerStyle(20);
   Graph_g3101->GetXaxis()->SetLabelFont(42);
   Graph_g3101->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3101->GetXaxis()->SetLabelSize(0.045);
   Graph_g3101->GetXaxis()->SetTitleSize(0.055);
   Graph_g3101->GetXaxis()->SetTitleFont(42);
   Graph_g3101->GetYaxis()->SetLabelFont(42);
   Graph_g3101->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3101->GetYaxis()->SetLabelSize(0.045);
   Graph_g3101->GetYaxis()->SetTitleSize(0.055);
   Graph_g3101->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3101->GetYaxis()->SetTitleFont(42);
   Graph_g3101->GetZaxis()->SetLabelFont(42);
   Graph_g3101->GetZaxis()->SetLabelSize(0.045);
   Graph_g3101->GetZaxis()->SetTitleSize(0.035);
   Graph_g3101->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3101);
   
   grae->Draw(" 2");
   
   Double_t g_fx3102[18] = {
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
   Double_t g_fy3102[18] = {
   1000,
   1000,
   -0.0003769337,
   -0.003606803,
   -0.01056386,
   -0.01885023,
   -0.02564296,
   -0.02436005,
   -0.01649678,
   -0.002473009,
   0.01473811,
   0.02555294,
   0.02986356,
   0.02324677,
   0.01355189,
   0.001793252,
   -0.002533577,
   -0.0006530898};
   Double_t g_felx3102[18] = {
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
   Double_t g_fely3102[18] = {
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
   Double_t g_fehx3102[18] = {
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
   Double_t g_fehy3102[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3102,g_fy3102,g_felx3102,g_fehx3102,g_fely3102,g_fehy3102);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1342;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_g3102 = new TH1F("Graph_g3102","",100,-3.5065,3.5915);
   Graph_g3102->SetMinimum(-100.031);
   Graph_g3102->SetMaximum(1100.003);
   Graph_g3102->SetDirectory(0);
   Graph_g3102->SetStats(0);
   Graph_g3102->SetLineStyle(0);
   Graph_g3102->SetMarkerStyle(20);
   Graph_g3102->GetXaxis()->SetLabelFont(42);
   Graph_g3102->GetXaxis()->SetLabelOffset(0.01);
   Graph_g3102->GetXaxis()->SetLabelSize(0.045);
   Graph_g3102->GetXaxis()->SetTitleSize(0.055);
   Graph_g3102->GetXaxis()->SetTitleFont(42);
   Graph_g3102->GetYaxis()->SetLabelFont(42);
   Graph_g3102->GetYaxis()->SetLabelOffset(0.01);
   Graph_g3102->GetYaxis()->SetLabelSize(0.045);
   Graph_g3102->GetYaxis()->SetTitleSize(0.055);
   Graph_g3102->GetYaxis()->SetTitleOffset(1.3);
   Graph_g3102->GetYaxis()->SetTitleFont(42);
   Graph_g3102->GetZaxis()->SetLabelFont(42);
   Graph_g3102->GetZaxis()->SetLabelSize(0.045);
   Graph_g3102->GetZaxis()->SetTitleSize(0.035);
   Graph_g3102->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3102);
   
   grae->Draw(" 2");
   Double_t xAxis54[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_5__96 = new TH1D("hist_eta_diff_5__96","",18, xAxis54);
   hist_eta_diff_5__96->SetBinContent(1,1000);
   hist_eta_diff_5__96->SetBinContent(2,1000);
   hist_eta_diff_5__96->SetBinContent(3,-0.0001104924);
   hist_eta_diff_5__96->SetBinContent(4,-5.126334e-05);
   hist_eta_diff_5__96->SetBinContent(5,-0.005729915);
   hist_eta_diff_5__96->SetBinContent(6,-0.008644333);
   hist_eta_diff_5__96->SetBinContent(7,-0.01500269);
   hist_eta_diff_5__96->SetBinContent(8,-0.008375957);
   hist_eta_diff_5__96->SetBinContent(9,-0.005278323);
   hist_eta_diff_5__96->SetBinContent(10,0.004663799);
   hist_eta_diff_5__96->SetBinContent(11,0.001479755);
   hist_eta_diff_5__96->SetBinContent(12,0.01511579);
   hist_eta_diff_5__96->SetBinContent(13,0.002158664);
   hist_eta_diff_5__96->SetBinContent(14,0.007733662);
   hist_eta_diff_5__96->SetBinContent(15,0.01174887);
   hist_eta_diff_5__96->SetBinContent(16,0.001056807);
   hist_eta_diff_5__96->SetBinContent(17,-0.0006386284);
   hist_eta_diff_5__96->SetBinContent(18,0.0002041284);
   hist_eta_diff_5__96->SetBinError(2,4.129727e-05);
   hist_eta_diff_5__96->SetBinError(3,0.0002472209);
   hist_eta_diff_5__96->SetBinError(4,0.0007453497);
   hist_eta_diff_5__96->SetBinError(5,0.001499229);
   hist_eta_diff_5__96->SetBinError(6,0.002479709);
   hist_eta_diff_5__96->SetBinError(7,0.003362481);
   hist_eta_diff_5__96->SetBinError(8,0.004235118);
   hist_eta_diff_5__96->SetBinError(9,0.00486817);
   hist_eta_diff_5__96->SetBinError(10,0.005325385);
   hist_eta_diff_5__96->SetBinError(11,0.005542098);
   hist_eta_diff_5__96->SetBinError(12,0.005600868);
   hist_eta_diff_5__96->SetBinError(13,0.00533848);
   hist_eta_diff_5__96->SetBinError(14,0.004943355);
   hist_eta_diff_5__96->SetBinError(15,0.004338477);
   hist_eta_diff_5__96->SetBinError(16,0.003445913);
   hist_eta_diff_5__96->SetBinError(17,0.001451094);
   hist_eta_diff_5__96->SetBinError(18,0.0003458934);
   hist_eta_diff_5__96->SetEntries(2.000613);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_5__96->SetLineColor(ci);
   hist_eta_diff_5__96->SetLineStyle(0);

   ci = TColor::GetColor("#cc0000");
   hist_eta_diff_5__96->SetMarkerColor(ci);
   hist_eta_diff_5__96->SetMarkerStyle(20);
   hist_eta_diff_5__96->GetXaxis()->SetTitle("#eta_{dijet}");
   hist_eta_diff_5__96->GetXaxis()->SetLabelFont(42);
   hist_eta_diff_5__96->GetXaxis()->SetLabelOffset(0.01);
   hist_eta_diff_5__96->GetXaxis()->SetLabelSize(0.045);
   hist_eta_diff_5__96->GetXaxis()->SetTitleSize(0.055);
   hist_eta_diff_5__96->GetXaxis()->SetTitleFont(42);
   hist_eta_diff_5__96->GetYaxis()->SetTitle("Event fraction");
   hist_eta_diff_5__96->GetYaxis()->SetLabelFont(42);
   hist_eta_diff_5__96->GetYaxis()->SetLabelOffset(0.01);
   hist_eta_diff_5__96->GetYaxis()->SetLabelSize(0.045);
   hist_eta_diff_5__96->GetYaxis()->SetTitleSize(0.055);
   hist_eta_diff_5__96->GetYaxis()->SetTitleOffset(1.5);
   hist_eta_diff_5__96->GetYaxis()->SetTitleFont(42);
   hist_eta_diff_5__96->GetZaxis()->SetLabelFont(42);
   hist_eta_diff_5__96->GetZaxis()->SetLabelOffset(0.01);
   hist_eta_diff_5__96->GetZaxis()->SetLabelSize(0.045);
   hist_eta_diff_5__96->GetZaxis()->SetTitleSize(0.035);
   hist_eta_diff_5__96->GetZaxis()->SetTitleFont(42);
   hist_eta_diff_5__96->Draw("same");
   line = new TLine(-2.999,0,2.999,0);
   line->Draw();
      tex = new TLatex(0.35,0.29,"p_{T}^{ave} > 150 GeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(26);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.05,0.65,0.5,0.9,NULL,"brNDC");
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
   entry=leg->AddEntry("Graph0","Exp. Uncer.","f");

   ci = 1284;
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

   ci = 1255;
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

   ci = 1256;
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

   ci = 1257;
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
   
   leg = new TLegend(0.05,0.65,0.5,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   leg->Draw();
   p_2_1->Modified();
   cDiff0->cd();
   cDiff0->Modified();
   cDiff0->cd();
   cDiff0->SetSelected(cDiff0);
}
