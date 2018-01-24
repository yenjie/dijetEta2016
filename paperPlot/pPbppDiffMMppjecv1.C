void pPbppDiffMMppjecv1()
{
//=========Macro generated from canvas: cDiff0/
//=========  (Wed Nov 15 22:07:05 2017) by ROOT version6.10/08

   gStyle->SetCanvasPreferGL(kTRUE);

   TCanvas *cDiff0 = new TCanvas("cDiff0", "",-72,369,1300,800);
   cDiff0->Range(0,0,1,1);
   cDiff0->SetFillColor(0);
   cDiff0->SetBorderMode(0);
   cDiff0->SetBorderSize(2);
   cDiff0->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.5393939,0.3825653,1);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-4.893105,-0.04,2.999,0.04988764);
   p_0_0->SetFillColor(0);
   p_0_0->SetBorderMode(0);
   p_0_0->SetBorderSize(2);
   p_0_0->SetLeftMargin(0.24);
   p_0_0->SetRightMargin(0);
   p_0_0->SetBottomMargin(0);
   p_0_0->SetFrameBorderMode(0);
   p_0_0->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__85 = new TH1D("emptyDiff__85","",10,-2.999,2.999);
   emptyDiff__85->SetBinContent(7,1000);
   emptyDiff__85->SetBinError(7,1000);
   emptyDiff__85->SetMinimum(-0.04);
   emptyDiff__85->SetMaximum(0.04);
   emptyDiff__85->SetEntries(1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__85->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__85);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   emptyDiff__85->SetLineColor(ci);
   emptyDiff__85->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__85->GetXaxis()->CenterTitle(true);
   emptyDiff__85->GetXaxis()->SetLabelFont(43);
   emptyDiff__85->GetXaxis()->SetLabelSize(33);
   emptyDiff__85->GetXaxis()->SetTitleSize(33);
   emptyDiff__85->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__85->GetXaxis()->SetTitleFont(43);
   emptyDiff__85->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__85->GetYaxis()->CenterTitle(true);
   emptyDiff__85->GetYaxis()->SetNdivisions(505);
   emptyDiff__85->GetYaxis()->SetLabelFont(43);
   emptyDiff__85->GetYaxis()->SetLabelSize(33);
   emptyDiff__85->GetYaxis()->SetTitleSize(33);
   emptyDiff__85->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__85->GetYaxis()->SetTitleFont(43);
   emptyDiff__85->GetZaxis()->SetLabelFont(42);
   emptyDiff__85->GetZaxis()->SetLabelSize(0.035);
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
   -0.001363706,
   -0.008843129,
   -0.006173519,
   -0.01822525,
   -0.004743918,
   -0.01340243,
   -0.002148217,
   0.004707711,
   0.009881523,
   0.02188975,
   -0.0009007202,
   0.02046878,
   0.01052828,
   0.008273043,
   0.005536127,
   -0.007866161,
   -0.0003923656,
   -0.003995152};
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

   ci = 1313;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_syst01037 = new TH1F("Graph_syst01037","Graph",100,-3.46425,3.51675);
   Graph_syst01037->SetMinimum(-0.02223675);
   Graph_syst01037->SetMaximum(0.02590125);
   Graph_syst01037->SetDirectory(0);
   Graph_syst01037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_syst01037->SetLineColor(ci);
   Graph_syst01037->GetXaxis()->SetLabelFont(42);
   Graph_syst01037->GetXaxis()->SetLabelSize(0.035);
   Graph_syst01037->GetXaxis()->SetTitleSize(0.035);
   Graph_syst01037->GetXaxis()->SetTitleFont(42);
   Graph_syst01037->GetYaxis()->SetLabelFont(42);
   Graph_syst01037->GetYaxis()->SetLabelSize(0.035);
   Graph_syst01037->GetYaxis()->SetTitleSize(0.035);
   Graph_syst01037->GetYaxis()->SetTitleOffset(0);
   Graph_syst01037->GetYaxis()->SetTitleFont(42);
   Graph_syst01037->GetZaxis()->SetLabelFont(42);
   Graph_syst01037->GetZaxis()->SetLabelSize(0.035);
   Graph_syst01037->GetZaxis()->SetTitleSize(0.035);
   Graph_syst01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst01037);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff00_fx3061[18] = {
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
   Double_t NLOdiff00_fy3061[18] = {
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
   Double_t NLOdiff00_felx3061[18] = {
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
   Double_t NLOdiff00_fely3061[18] = {
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
   Double_t NLOdiff00_fehx3061[18] = {
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
   Double_t NLOdiff00_fehy3061[18] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,NLOdiff00_fx3061,NLOdiff00_fy3061,NLOdiff00_felx3061,NLOdiff00_fehx3061,NLOdiff00_fely3061,NLOdiff00_fehy3061);
   grae->SetName("NLOdiff00");
   grae->SetTitle("");

   ci = 1314;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff003061 = new TH1F("Graph_NLOdiff003061","",100,-3.5065,3.5915);
   Graph_NLOdiff003061->SetMinimum(-0.01252371);
   Graph_NLOdiff003061->SetMaximum(0.009854066);
   Graph_NLOdiff003061->SetDirectory(0);
   Graph_NLOdiff003061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff003061->SetLineColor(ci);
   Graph_NLOdiff003061->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff003061->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff003061->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff003061->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff003061->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff003061->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff003061->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff003061->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff003061->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff003061->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff003061->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff003061->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff003061->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff003061);
   
   grae->Draw(" 2");
   
   Double_t g_fx3062[18] = {
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
   Double_t g_fy3062[18] = {
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
   Double_t g_felx3062[18] = {
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
   Double_t g_fely3062[18] = {
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
   Double_t g_fehx3062[18] = {
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
   Double_t g_fehy3062[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3062,g_fy3062,g_felx3062,g_fehx3062,g_fely3062,g_fehy3062);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1315;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3062 = new TH1F("Graph_g3062","",100,-3.5065,3.5915);
   Graph_g3062->SetMinimum(-0.02331121);
   Graph_g3062->SetMaximum(0.02548356);
   Graph_g3062->SetDirectory(0);
   Graph_g3062->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3062->SetLineColor(ci);
   Graph_g3062->GetXaxis()->SetLabelFont(42);
   Graph_g3062->GetXaxis()->SetLabelSize(0.035);
   Graph_g3062->GetXaxis()->SetTitleSize(0.035);
   Graph_g3062->GetXaxis()->SetTitleFont(42);
   Graph_g3062->GetYaxis()->SetLabelFont(42);
   Graph_g3062->GetYaxis()->SetLabelSize(0.035);
   Graph_g3062->GetYaxis()->SetTitleSize(0.035);
   Graph_g3062->GetYaxis()->SetTitleOffset(0);
   Graph_g3062->GetYaxis()->SetTitleFont(42);
   Graph_g3062->GetZaxis()->SetLabelFont(42);
   Graph_g3062->GetZaxis()->SetLabelSize(0.035);
   Graph_g3062->GetZaxis()->SetTitleSize(0.035);
   Graph_g3062->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3062);
   
   grae->Draw(" 2");
   
   Double_t g_fx3063[18] = {
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
   Double_t g_fy3063[18] = {
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
   Double_t g_felx3063[18] = {
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
   Double_t g_fely3063[18] = {
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
   Double_t g_fehx3063[18] = {
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
   Double_t g_fehy3063[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3063,g_fy3063,g_felx3063,g_fehx3063,g_fely3063,g_fehy3063);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1316;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3063 = new TH1F("Graph_g3063","",100,-3.5065,3.5915);
   Graph_g3063->SetMinimum(-0.03045319);
   Graph_g3063->SetMaximum(0.02924778);
   Graph_g3063->SetDirectory(0);
   Graph_g3063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3063->SetLineColor(ci);
   Graph_g3063->GetXaxis()->SetLabelFont(42);
   Graph_g3063->GetXaxis()->SetLabelSize(0.035);
   Graph_g3063->GetXaxis()->SetTitleSize(0.035);
   Graph_g3063->GetXaxis()->SetTitleFont(42);
   Graph_g3063->GetYaxis()->SetLabelFont(42);
   Graph_g3063->GetYaxis()->SetLabelSize(0.035);
   Graph_g3063->GetYaxis()->SetTitleSize(0.035);
   Graph_g3063->GetYaxis()->SetTitleOffset(0);
   Graph_g3063->GetYaxis()->SetTitleFont(42);
   Graph_g3063->GetZaxis()->SetLabelFont(42);
   Graph_g3063->GetZaxis()->SetLabelSize(0.035);
   Graph_g3063->GetZaxis()->SetTitleSize(0.035);
   Graph_g3063->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3063);
   
   grae->Draw(" 2");
   Double_t xAxis49[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_0__86 = new TH1D("hist_eta_diff_0__86","",18, xAxis49);
   hist_eta_diff_0__86->SetBinContent(0,-5.65972e-05);
   hist_eta_diff_0__86->SetBinContent(1,-0.001363706);
   hist_eta_diff_0__86->SetBinContent(2,-0.008843128);
   hist_eta_diff_0__86->SetBinContent(3,-0.006173519);
   hist_eta_diff_0__86->SetBinContent(4,-0.01822525);
   hist_eta_diff_0__86->SetBinContent(5,-0.004743918);
   hist_eta_diff_0__86->SetBinContent(6,-0.01340243);
   hist_eta_diff_0__86->SetBinContent(7,-0.002148217);
   hist_eta_diff_0__86->SetBinContent(8,0.004707711);
   hist_eta_diff_0__86->SetBinContent(9,0.009881523);
   hist_eta_diff_0__86->SetBinContent(10,0.02188975);
   hist_eta_diff_0__86->SetBinContent(11,-0.0009007203);
   hist_eta_diff_0__86->SetBinContent(12,0.02046878);
   hist_eta_diff_0__86->SetBinContent(13,0.01052828);
   hist_eta_diff_0__86->SetBinContent(14,0.008273042);
   hist_eta_diff_0__86->SetBinContent(15,0.005536127);
   hist_eta_diff_0__86->SetBinContent(16,-0.00786616);
   hist_eta_diff_0__86->SetBinContent(17,-0.0003923656);
   hist_eta_diff_0__86->SetBinContent(18,-0.003995152);
   hist_eta_diff_0__86->SetBinError(0,4.924499e-05);
   hist_eta_diff_0__86->SetBinError(1,0.0008183987);
   hist_eta_diff_0__86->SetBinError(2,0.001473512);
   hist_eta_diff_0__86->SetBinError(3,0.003532176);
   hist_eta_diff_0__86->SetBinError(4,0.004346359);
   hist_eta_diff_0__86->SetBinError(5,0.005138265);
   hist_eta_diff_0__86->SetBinError(6,0.005754518);
   hist_eta_diff_0__86->SetBinError(7,0.006345506);
   hist_eta_diff_0__86->SetBinError(8,0.006777665);
   hist_eta_diff_0__86->SetBinError(9,0.007138648);
   hist_eta_diff_0__86->SetBinError(10,0.00727002);
   hist_eta_diff_0__86->SetBinError(11,0.007326853);
   hist_eta_diff_0__86->SetBinError(12,0.007243647);
   hist_eta_diff_0__86->SetBinError(13,0.007043545);
   hist_eta_diff_0__86->SetBinError(14,0.006709013);
   hist_eta_diff_0__86->SetBinError(15,0.006168124);
   hist_eta_diff_0__86->SetBinError(16,0.005503784);
   hist_eta_diff_0__86->SetBinError(17,0.003002935);
   hist_eta_diff_0__86->SetBinError(18,0.001453432);
   hist_eta_diff_0__86->SetEntries(0.3103816);

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
   p_0_1->SetBorderSize(2);
   p_0_1->SetLeftMargin(0.24);
   p_0_1->SetRightMargin(0);
   p_0_1->SetTopMargin(0);
   p_0_1->SetBottomMargin(0.24);
   p_0_1->SetFrameBorderMode(0);
   p_0_1->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__87 = new TH1D("emptyDiff__87","",10,-2.999,2.999);
   emptyDiff__87->SetBinContent(7,1000);
   emptyDiff__87->SetBinError(7,1000);
   emptyDiff__87->SetMinimum(-0.04);
   emptyDiff__87->SetMaximum(0.04);
   emptyDiff__87->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__87->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__87);

   ci = TColor::GetColor("#000099");
   emptyDiff__87->SetLineColor(ci);
   emptyDiff__87->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__87->GetXaxis()->CenterTitle(true);
   emptyDiff__87->GetXaxis()->SetLabelFont(43);
   emptyDiff__87->GetXaxis()->SetLabelSize(33);
   emptyDiff__87->GetXaxis()->SetTitleSize(33);
   emptyDiff__87->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__87->GetXaxis()->SetTitleFont(43);
   emptyDiff__87->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__87->GetYaxis()->CenterTitle(true);
   emptyDiff__87->GetYaxis()->SetNdivisions(505);
   emptyDiff__87->GetYaxis()->SetLabelFont(43);
   emptyDiff__87->GetYaxis()->SetLabelSize(33);
   emptyDiff__87->GetYaxis()->SetTitleSize(33);
   emptyDiff__87->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__87->GetYaxis()->SetTitleFont(43);
   emptyDiff__87->GetZaxis()->SetLabelFont(42);
   emptyDiff__87->GetZaxis()->SetLabelSize(0.035);
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
   7.505436e-06,
   -0.0001315682,
   -0.002373581,
   -0.004792642,
   -0.008595807,
   -0.00937647,
   -0.008182826,
   -0.002644908,
   0.003629397,
   0.006068639,
   0.0158877,
   0.01117428,
   0.01450428,
   0.005265459,
   0.002934821,
   0.0006750659,
   -0.008848901,
   -0.003109985};
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

   ci = 1328;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_syst31038 = new TH1F("Graph_syst31038","Graph",100,-3.46425,3.51675);
   Graph_syst31038->SetMinimum(-0.01190289);
   Graph_syst31038->SetMaximum(0.01841411);
   Graph_syst31038->SetDirectory(0);
   Graph_syst31038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_syst31038->SetLineColor(ci);
   Graph_syst31038->GetXaxis()->SetLabelFont(42);
   Graph_syst31038->GetXaxis()->SetLabelSize(0.035);
   Graph_syst31038->GetXaxis()->SetTitleSize(0.035);
   Graph_syst31038->GetXaxis()->SetTitleFont(42);
   Graph_syst31038->GetYaxis()->SetLabelFont(42);
   Graph_syst31038->GetYaxis()->SetLabelSize(0.035);
   Graph_syst31038->GetYaxis()->SetTitleSize(0.035);
   Graph_syst31038->GetYaxis()->SetTitleOffset(0);
   Graph_syst31038->GetYaxis()->SetTitleFont(42);
   Graph_syst31038->GetZaxis()->SetLabelFont(42);
   Graph_syst31038->GetZaxis()->SetLabelSize(0.035);
   Graph_syst31038->GetZaxis()->SetTitleSize(0.035);
   Graph_syst31038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst31038);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff03_fx3064[18] = {
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
   Double_t NLOdiff03_fy3064[18] = {
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
   Double_t NLOdiff03_felx3064[18] = {
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
   Double_t NLOdiff03_fely3064[18] = {
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
   Double_t NLOdiff03_fehx3064[18] = {
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
   Double_t NLOdiff03_fehy3064[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff03_fx3064,NLOdiff03_fy3064,NLOdiff03_felx3064,NLOdiff03_fehx3064,NLOdiff03_fely3064,NLOdiff03_fehy3064);
   grae->SetName("NLOdiff03");
   grae->SetTitle("");

   ci = 1329;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff033064 = new TH1F("Graph_NLOdiff033064","",100,-3.5065,3.5915);
   Graph_NLOdiff033064->SetMinimum(-100.0107);
   Graph_NLOdiff033064->SetMaximum(1100.001);
   Graph_NLOdiff033064->SetDirectory(0);
   Graph_NLOdiff033064->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff033064->SetLineColor(ci);
   Graph_NLOdiff033064->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff033064->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff033064->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff033064->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff033064->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff033064->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff033064->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff033064->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff033064->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff033064->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff033064->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff033064->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff033064->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff033064);
   
   grae->Draw(" 2");
   
   Double_t g_fx3065[18] = {
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
   Double_t g_fy3065[18] = {
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
   Double_t g_felx3065[18] = {
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
   Double_t g_fely3065[18] = {
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
   Double_t g_fehx3065[18] = {
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
   Double_t g_fehy3065[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3065,g_fy3065,g_felx3065,g_fehx3065,g_fely3065,g_fehy3065);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1330;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3065 = new TH1F("Graph_g3065","",100,-3.5065,3.5915);
   Graph_g3065->SetMinimum(-100.0275);
   Graph_g3065->SetMaximum(1100.003);
   Graph_g3065->SetDirectory(0);
   Graph_g3065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3065->SetLineColor(ci);
   Graph_g3065->GetXaxis()->SetLabelFont(42);
   Graph_g3065->GetXaxis()->SetLabelSize(0.035);
   Graph_g3065->GetXaxis()->SetTitleSize(0.035);
   Graph_g3065->GetXaxis()->SetTitleFont(42);
   Graph_g3065->GetYaxis()->SetLabelFont(42);
   Graph_g3065->GetYaxis()->SetLabelSize(0.035);
   Graph_g3065->GetYaxis()->SetTitleSize(0.035);
   Graph_g3065->GetYaxis()->SetTitleOffset(0);
   Graph_g3065->GetYaxis()->SetTitleFont(42);
   Graph_g3065->GetZaxis()->SetLabelFont(42);
   Graph_g3065->GetZaxis()->SetLabelSize(0.035);
   Graph_g3065->GetZaxis()->SetTitleSize(0.035);
   Graph_g3065->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3065);
   
   grae->Draw(" 2");
   
   Double_t g_fx3066[18] = {
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
   Double_t g_fy3066[18] = {
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
   Double_t g_felx3066[18] = {
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
   Double_t g_fely3066[18] = {
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
   Double_t g_fehx3066[18] = {
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
   Double_t g_fehy3066[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3066,g_fy3066,g_felx3066,g_fehx3066,g_fely3066,g_fehy3066);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1331;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3066 = new TH1F("Graph_g3066","",100,-3.5065,3.5915);
   Graph_g3066->SetMinimum(-100.0212);
   Graph_g3066->SetMaximum(1100.002);
   Graph_g3066->SetDirectory(0);
   Graph_g3066->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3066->SetLineColor(ci);
   Graph_g3066->GetXaxis()->SetLabelFont(42);
   Graph_g3066->GetXaxis()->SetLabelSize(0.035);
   Graph_g3066->GetXaxis()->SetTitleSize(0.035);
   Graph_g3066->GetXaxis()->SetTitleFont(42);
   Graph_g3066->GetYaxis()->SetLabelFont(42);
   Graph_g3066->GetYaxis()->SetLabelSize(0.035);
   Graph_g3066->GetYaxis()->SetTitleSize(0.035);
   Graph_g3066->GetYaxis()->SetTitleOffset(0);
   Graph_g3066->GetYaxis()->SetTitleFont(42);
   Graph_g3066->GetZaxis()->SetLabelFont(42);
   Graph_g3066->GetZaxis()->SetLabelSize(0.035);
   Graph_g3066->GetZaxis()->SetTitleSize(0.035);
   Graph_g3066->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3066);
   
   grae->Draw(" 2");
   Double_t xAxis50[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_3__88 = new TH1D("hist_eta_diff_3__88","",18, xAxis50);
   hist_eta_diff_3__88->SetBinContent(1,1000);
   hist_eta_diff_3__88->SetBinContent(2,-0.0001315682);
   hist_eta_diff_3__88->SetBinContent(3,-0.002373581);
   hist_eta_diff_3__88->SetBinContent(4,-0.004792642);
   hist_eta_diff_3__88->SetBinContent(5,-0.008595807);
   hist_eta_diff_3__88->SetBinContent(6,-0.00937647);
   hist_eta_diff_3__88->SetBinContent(7,-0.008182826);
   hist_eta_diff_3__88->SetBinContent(8,-0.002644908);
   hist_eta_diff_3__88->SetBinContent(9,0.003629397);
   hist_eta_diff_3__88->SetBinContent(10,0.00606864);
   hist_eta_diff_3__88->SetBinContent(11,0.0158877);
   hist_eta_diff_3__88->SetBinContent(12,0.01117428);
   hist_eta_diff_3__88->SetBinContent(13,0.01450428);
   hist_eta_diff_3__88->SetBinContent(14,0.005265459);
   hist_eta_diff_3__88->SetBinContent(15,0.002934821);
   hist_eta_diff_3__88->SetBinContent(16,0.0006750658);
   hist_eta_diff_3__88->SetBinContent(17,-0.008848901);
   hist_eta_diff_3__88->SetBinContent(18,-0.003109985);
   hist_eta_diff_3__88->SetBinError(1,1.739117e-05);
   hist_eta_diff_3__88->SetBinError(2,0.0001144778);
   hist_eta_diff_3__88->SetBinError(3,0.0005168273);
   hist_eta_diff_3__88->SetBinError(4,0.0009081448);
   hist_eta_diff_3__88->SetBinError(5,0.001304551);
   hist_eta_diff_3__88->SetBinError(6,0.001675618);
   hist_eta_diff_3__88->SetBinError(7,0.002001947);
   hist_eta_diff_3__88->SetBinError(8,0.002273484);
   hist_eta_diff_3__88->SetBinError(9,0.002477045);
   hist_eta_diff_3__88->SetBinError(10,0.002599723);
   hist_eta_diff_3__88->SetBinError(11,0.002694325);
   hist_eta_diff_3__88->SetBinError(12,0.002673179);
   hist_eta_diff_3__88->SetBinError(13,0.002608011);
   hist_eta_diff_3__88->SetBinError(14,0.002437619);
   hist_eta_diff_3__88->SetBinError(15,0.002225113);
   hist_eta_diff_3__88->SetBinError(16,0.001947028);
   hist_eta_diff_3__88->SetBinError(17,0.0009485532);
   hist_eta_diff_3__88->SetBinError(18,0.000360125);
   hist_eta_diff_3__88->SetEntries(3.26262);

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
   p_1_0->SetBorderSize(2);
   p_1_0->SetLeftMargin(0);
   p_1_0->SetRightMargin(0);
   p_1_0->SetBottomMargin(0);
   p_1_0->SetFrameBorderMode(0);
   p_1_0->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__89 = new TH1D("emptyDiff__89","",10,-2.999,2.999);
   emptyDiff__89->SetBinContent(7,1000);
   emptyDiff__89->SetBinError(7,1000);
   emptyDiff__89->SetMinimum(-0.04);
   emptyDiff__89->SetMaximum(0.04);
   emptyDiff__89->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__89->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__89);

   ci = TColor::GetColor("#000099");
   emptyDiff__89->SetLineColor(ci);
   emptyDiff__89->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__89->GetXaxis()->CenterTitle(true);
   emptyDiff__89->GetXaxis()->SetLabelFont(43);
   emptyDiff__89->GetXaxis()->SetLabelSize(33);
   emptyDiff__89->GetXaxis()->SetTitleSize(33);
   emptyDiff__89->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__89->GetXaxis()->SetTitleFont(43);
   emptyDiff__89->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__89->GetYaxis()->CenterTitle(true);
   emptyDiff__89->GetYaxis()->SetNdivisions(505);
   emptyDiff__89->GetYaxis()->SetLabelFont(43);
   emptyDiff__89->GetYaxis()->SetLabelSize(33);
   emptyDiff__89->GetYaxis()->SetTitleSize(33);
   emptyDiff__89->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__89->GetYaxis()->SetTitleFont(43);
   emptyDiff__89->GetZaxis()->SetLabelFont(42);
   emptyDiff__89->GetZaxis()->SetLabelSize(0.035);
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
   -0.0002017623,
   -0.001920572,
   -0.00564341,
   -0.00887805,
   -0.00462477,
   -0.006777145,
   -0.005463691,
   0.004624941,
   0.006641873,
   0.01479723,
   0.0150519,
   0.01482793,
   0.01229341,
   0.00597627,
   -0.002324215,
   -0.004353936,
   -0.009636968,
   -0.006415748};
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

   ci = 1318;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_syst11039 = new TH1F("Graph_syst11039","Graph",100,-3.46425,3.51675);
   Graph_syst11039->SetMinimum(-0.01210586);
   Graph_syst11039->SetMaximum(0.01752079);
   Graph_syst11039->SetDirectory(0);
   Graph_syst11039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_syst11039->SetLineColor(ci);
   Graph_syst11039->GetXaxis()->SetLabelFont(42);
   Graph_syst11039->GetXaxis()->SetLabelSize(0.035);
   Graph_syst11039->GetXaxis()->SetTitleSize(0.035);
   Graph_syst11039->GetXaxis()->SetTitleFont(42);
   Graph_syst11039->GetYaxis()->SetLabelFont(42);
   Graph_syst11039->GetYaxis()->SetLabelSize(0.035);
   Graph_syst11039->GetYaxis()->SetTitleSize(0.035);
   Graph_syst11039->GetYaxis()->SetTitleOffset(0);
   Graph_syst11039->GetYaxis()->SetTitleFont(42);
   Graph_syst11039->GetZaxis()->SetLabelFont(42);
   Graph_syst11039->GetZaxis()->SetLabelSize(0.035);
   Graph_syst11039->GetZaxis()->SetTitleSize(0.035);
   Graph_syst11039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst11039);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff01_fx3067[18] = {
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
   Double_t NLOdiff01_fy3067[18] = {
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
   Double_t NLOdiff01_felx3067[18] = {
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
   Double_t NLOdiff01_fely3067[18] = {
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
   Double_t NLOdiff01_fehx3067[18] = {
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
   Double_t NLOdiff01_fehy3067[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff01_fx3067,NLOdiff01_fy3067,NLOdiff01_felx3067,NLOdiff01_fehx3067,NLOdiff01_fely3067,NLOdiff01_fehy3067);
   grae->SetName("NLOdiff01");
   grae->SetTitle("");

   ci = 1319;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff013067 = new TH1F("Graph_NLOdiff013067","",100,-3.5065,3.5915);
   Graph_NLOdiff013067->SetMinimum(-0.01247722);
   Graph_NLOdiff013067->SetMaximum(0.01519027);
   Graph_NLOdiff013067->SetDirectory(0);
   Graph_NLOdiff013067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff013067->SetLineColor(ci);
   Graph_NLOdiff013067->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff013067->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff013067->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff013067->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff013067->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff013067->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff013067->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff013067->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff013067->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff013067->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff013067->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff013067->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff013067->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff013067);
   
   grae->Draw(" 2");
   
   Double_t g_fx3068[18] = {
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
   Double_t g_fy3068[18] = {
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
   Double_t g_felx3068[18] = {
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
   Double_t g_fely3068[18] = {
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
   Double_t g_fehx3068[18] = {
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
   Double_t g_fehy3068[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3068,g_fy3068,g_felx3068,g_fehx3068,g_fely3068,g_fehy3068);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1320;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3068 = new TH1F("Graph_g3068","",100,-3.5065,3.5915);
   Graph_g3068->SetMinimum(-0.02148378);
   Graph_g3068->SetMaximum(0.02878523);
   Graph_g3068->SetDirectory(0);
   Graph_g3068->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3068->SetLineColor(ci);
   Graph_g3068->GetXaxis()->SetLabelFont(42);
   Graph_g3068->GetXaxis()->SetLabelSize(0.035);
   Graph_g3068->GetXaxis()->SetTitleSize(0.035);
   Graph_g3068->GetXaxis()->SetTitleFont(42);
   Graph_g3068->GetYaxis()->SetLabelFont(42);
   Graph_g3068->GetYaxis()->SetLabelSize(0.035);
   Graph_g3068->GetYaxis()->SetTitleSize(0.035);
   Graph_g3068->GetYaxis()->SetTitleOffset(0);
   Graph_g3068->GetYaxis()->SetTitleFont(42);
   Graph_g3068->GetZaxis()->SetLabelFont(42);
   Graph_g3068->GetZaxis()->SetLabelSize(0.035);
   Graph_g3068->GetZaxis()->SetTitleSize(0.035);
   Graph_g3068->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3068);
   
   grae->Draw(" 2");
   
   Double_t g_fx3069[18] = {
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
   Double_t g_fy3069[18] = {
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
   Double_t g_felx3069[18] = {
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
   Double_t g_fely3069[18] = {
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
   Double_t g_fehx3069[18] = {
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
   Double_t g_fehy3069[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3069,g_fy3069,g_felx3069,g_fehx3069,g_fely3069,g_fehy3069);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1321;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3069 = new TH1F("Graph_g3069","",100,-3.5065,3.5915);
   Graph_g3069->SetMinimum(-0.02561792);
   Graph_g3069->SetMaximum(0.03460785);
   Graph_g3069->SetDirectory(0);
   Graph_g3069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3069->SetLineColor(ci);
   Graph_g3069->GetXaxis()->SetLabelFont(42);
   Graph_g3069->GetXaxis()->SetLabelSize(0.035);
   Graph_g3069->GetXaxis()->SetTitleSize(0.035);
   Graph_g3069->GetXaxis()->SetTitleFont(42);
   Graph_g3069->GetYaxis()->SetLabelFont(42);
   Graph_g3069->GetYaxis()->SetLabelSize(0.035);
   Graph_g3069->GetYaxis()->SetTitleSize(0.035);
   Graph_g3069->GetYaxis()->SetTitleOffset(0);
   Graph_g3069->GetYaxis()->SetTitleFont(42);
   Graph_g3069->GetZaxis()->SetLabelFont(42);
   Graph_g3069->GetZaxis()->SetLabelSize(0.035);
   Graph_g3069->GetZaxis()->SetTitleSize(0.035);
   Graph_g3069->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3069);
   
   grae->Draw(" 2");
   Double_t xAxis51[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_1__90 = new TH1D("hist_eta_diff_1__90","",18, xAxis51);
   hist_eta_diff_1__90->SetBinContent(0,-3.052647e-06);
   hist_eta_diff_1__90->SetBinContent(1,-0.0002017623);
   hist_eta_diff_1__90->SetBinContent(2,-0.001920572);
   hist_eta_diff_1__90->SetBinContent(3,-0.00564341);
   hist_eta_diff_1__90->SetBinContent(4,-0.008878051);
   hist_eta_diff_1__90->SetBinContent(5,-0.004624769);
   hist_eta_diff_1__90->SetBinContent(6,-0.006777144);
   hist_eta_diff_1__90->SetBinContent(7,-0.005463691);
   hist_eta_diff_1__90->SetBinContent(8,0.004624941);
   hist_eta_diff_1__90->SetBinContent(9,0.006641873);
   hist_eta_diff_1__90->SetBinContent(10,0.01479723);
   hist_eta_diff_1__90->SetBinContent(11,0.0150519);
   hist_eta_diff_1__90->SetBinContent(12,0.01482793);
   hist_eta_diff_1__90->SetBinContent(13,0.01229341);
   hist_eta_diff_1__90->SetBinContent(14,0.00597627);
   hist_eta_diff_1__90->SetBinContent(15,-0.002324215);
   hist_eta_diff_1__90->SetBinContent(16,-0.004353936);
   hist_eta_diff_1__90->SetBinContent(17,-0.009636968);
   hist_eta_diff_1__90->SetBinContent(18,-0.006415747);
   hist_eta_diff_1__90->SetBinError(0,2.158548e-06);
   hist_eta_diff_1__90->SetBinError(1,0.0001349069);
   hist_eta_diff_1__90->SetBinError(2,0.000479127);
   hist_eta_diff_1__90->SetBinError(3,0.00133788);
   hist_eta_diff_1__90->SetBinError(4,0.0017972);
   hist_eta_diff_1__90->SetBinError(5,0.002263363);
   hist_eta_diff_1__90->SetBinError(6,0.002622349);
   hist_eta_diff_1__90->SetBinError(7,0.002955147);
   hist_eta_diff_1__90->SetBinError(8,0.003255675);
   hist_eta_diff_1__90->SetBinError(9,0.0034497);
   hist_eta_diff_1__90->SetBinError(10,0.003611533);
   hist_eta_diff_1__90->SetBinError(11,0.003656425);
   hist_eta_diff_1__90->SetBinError(12,0.003626599);
   hist_eta_diff_1__90->SetBinError(13,0.003538155);
   hist_eta_diff_1__90->SetBinError(14,0.003341137);
   hist_eta_diff_1__90->SetBinError(15,0.003060596);
   hist_eta_diff_1__90->SetBinError(16,0.002711659);
   hist_eta_diff_1__90->SetBinError(17,0.001419186);
   hist_eta_diff_1__90->SetBinError(18,0.0006232686);
   hist_eta_diff_1__90->SetEntries(2.468409);

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
   p_1_1->SetBorderSize(2);
   p_1_1->SetLeftMargin(0);
   p_1_1->SetRightMargin(0);
   p_1_1->SetTopMargin(0);
   p_1_1->SetBottomMargin(0.24);
   p_1_1->SetFrameBorderMode(0);
   p_1_1->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__91 = new TH1D("emptyDiff__91","",10,-2.999,2.999);
   emptyDiff__91->SetBinContent(7,1000);
   emptyDiff__91->SetBinError(7,1000);
   emptyDiff__91->SetMinimum(-0.04);
   emptyDiff__91->SetMaximum(0.04);
   emptyDiff__91->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__91->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__91);

   ci = TColor::GetColor("#000099");
   emptyDiff__91->SetLineColor(ci);
   emptyDiff__91->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__91->GetXaxis()->CenterTitle(true);
   emptyDiff__91->GetXaxis()->SetLabelFont(43);
   emptyDiff__91->GetXaxis()->SetLabelSize(33);
   emptyDiff__91->GetXaxis()->SetTitleSize(33);
   emptyDiff__91->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__91->GetXaxis()->SetTitleFont(43);
   emptyDiff__91->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__91->GetYaxis()->CenterTitle(true);
   emptyDiff__91->GetYaxis()->SetNdivisions(505);
   emptyDiff__91->GetYaxis()->SetLabelFont(43);
   emptyDiff__91->GetYaxis()->SetLabelSize(33);
   emptyDiff__91->GetYaxis()->SetTitleSize(33);
   emptyDiff__91->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__91->GetYaxis()->SetTitleFont(43);
   emptyDiff__91->GetZaxis()->SetLabelFont(42);
   emptyDiff__91->GetZaxis()->SetLabelSize(0.035);
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
   0,
   3.724844e-05,
   -0.0008251001,
   -0.002922174,
   -0.006846657,
   -0.009121092,
   -0.00984045,
   -0.01067308,
   0.000417791,
   0.006085041,
   0.01454668,
   0.01009126,
   0.01180635,
   0.006519911,
   0.004999544,
   0.0005301459,
   -0.005450386,
   -0.001970947};
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

   ci = 1333;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_syst41040 = new TH1F("Graph_syst41040","Graph",100,-3.46425,3.51675);
   Graph_syst41040->SetMinimum(-0.01319505);
   Graph_syst41040->SetMaximum(0.01706865);
   Graph_syst41040->SetDirectory(0);
   Graph_syst41040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_syst41040->SetLineColor(ci);
   Graph_syst41040->GetXaxis()->SetLabelFont(42);
   Graph_syst41040->GetXaxis()->SetLabelSize(0.035);
   Graph_syst41040->GetXaxis()->SetTitleSize(0.035);
   Graph_syst41040->GetXaxis()->SetTitleFont(42);
   Graph_syst41040->GetYaxis()->SetLabelFont(42);
   Graph_syst41040->GetYaxis()->SetLabelSize(0.035);
   Graph_syst41040->GetYaxis()->SetTitleSize(0.035);
   Graph_syst41040->GetYaxis()->SetTitleOffset(0);
   Graph_syst41040->GetYaxis()->SetTitleFont(42);
   Graph_syst41040->GetZaxis()->SetLabelFont(42);
   Graph_syst41040->GetZaxis()->SetLabelSize(0.035);
   Graph_syst41040->GetZaxis()->SetTitleSize(0.035);
   Graph_syst41040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst41040);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff04_fx3070[18] = {
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
   Double_t NLOdiff04_fy3070[18] = {
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
   Double_t NLOdiff04_felx3070[18] = {
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
   Double_t NLOdiff04_fely3070[18] = {
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
   Double_t NLOdiff04_fehx3070[18] = {
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
   Double_t NLOdiff04_fehy3070[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff04_fx3070,NLOdiff04_fy3070,NLOdiff04_felx3070,NLOdiff04_fehx3070,NLOdiff04_fely3070,NLOdiff04_fehy3070);
   grae->SetName("NLOdiff04");
   grae->SetTitle("");

   ci = 1334;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff043070 = new TH1F("Graph_NLOdiff043070","",100,-3.5065,3.5915);
   Graph_NLOdiff043070->SetMinimum(-100.0124);
   Graph_NLOdiff043070->SetMaximum(1100.001);
   Graph_NLOdiff043070->SetDirectory(0);
   Graph_NLOdiff043070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff043070->SetLineColor(ci);
   Graph_NLOdiff043070->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff043070->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff043070->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff043070->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff043070->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff043070->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff043070->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff043070->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff043070->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff043070->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff043070->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff043070->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff043070->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff043070);
   
   grae->Draw(" 2");
   
   Double_t g_fx3071[18] = {
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
   Double_t g_fy3071[18] = {
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
   Double_t g_felx3071[18] = {
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
   Double_t g_fely3071[18] = {
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
   Double_t g_fehx3071[18] = {
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
   Double_t g_fehy3071[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3071,g_fy3071,g_felx3071,g_fehx3071,g_fely3071,g_fehy3071);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1335;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3071 = new TH1F("Graph_g3071","",100,-3.5065,3.5915);
   Graph_g3071->SetMinimum(-100.0307);
   Graph_g3071->SetMaximum(1100.003);
   Graph_g3071->SetDirectory(0);
   Graph_g3071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3071->SetLineColor(ci);
   Graph_g3071->GetXaxis()->SetLabelFont(42);
   Graph_g3071->GetXaxis()->SetLabelSize(0.035);
   Graph_g3071->GetXaxis()->SetTitleSize(0.035);
   Graph_g3071->GetXaxis()->SetTitleFont(42);
   Graph_g3071->GetYaxis()->SetLabelFont(42);
   Graph_g3071->GetYaxis()->SetLabelSize(0.035);
   Graph_g3071->GetYaxis()->SetTitleSize(0.035);
   Graph_g3071->GetYaxis()->SetTitleOffset(0);
   Graph_g3071->GetYaxis()->SetTitleFont(42);
   Graph_g3071->GetZaxis()->SetLabelFont(42);
   Graph_g3071->GetZaxis()->SetLabelSize(0.035);
   Graph_g3071->GetZaxis()->SetTitleSize(0.035);
   Graph_g3071->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3071);
   
   grae->Draw(" 2");
   
   Double_t g_fx3072[18] = {
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
   Double_t g_fy3072[18] = {
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
   Double_t g_felx3072[18] = {
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
   Double_t g_fely3072[18] = {
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
   Double_t g_fehx3072[18] = {
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
   Double_t g_fehy3072[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3072,g_fy3072,g_felx3072,g_fehx3072,g_fely3072,g_fehy3072);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1336;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3072 = new TH1F("Graph_g3072","",100,-3.5065,3.5915);
   Graph_g3072->SetMinimum(-100.0276);
   Graph_g3072->SetMaximum(1100.003);
   Graph_g3072->SetDirectory(0);
   Graph_g3072->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3072->SetLineColor(ci);
   Graph_g3072->GetXaxis()->SetLabelFont(42);
   Graph_g3072->GetXaxis()->SetLabelSize(0.035);
   Graph_g3072->GetXaxis()->SetTitleSize(0.035);
   Graph_g3072->GetXaxis()->SetTitleFont(42);
   Graph_g3072->GetYaxis()->SetLabelFont(42);
   Graph_g3072->GetYaxis()->SetLabelSize(0.035);
   Graph_g3072->GetYaxis()->SetTitleSize(0.035);
   Graph_g3072->GetYaxis()->SetTitleOffset(0);
   Graph_g3072->GetYaxis()->SetTitleFont(42);
   Graph_g3072->GetZaxis()->SetLabelFont(42);
   Graph_g3072->GetZaxis()->SetLabelSize(0.035);
   Graph_g3072->GetZaxis()->SetTitleSize(0.035);
   Graph_g3072->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3072);
   
   grae->Draw(" 2");
   Double_t xAxis52[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_4__92 = new TH1D("hist_eta_diff_4__92","",18, xAxis52);
   hist_eta_diff_4__92->SetBinContent(1,1000);
   hist_eta_diff_4__92->SetBinContent(2,1000);
   hist_eta_diff_4__92->SetBinContent(3,-0.0008251);
   hist_eta_diff_4__92->SetBinContent(4,-0.002922174);
   hist_eta_diff_4__92->SetBinContent(5,-0.006846657);
   hist_eta_diff_4__92->SetBinContent(6,-0.009121092);
   hist_eta_diff_4__92->SetBinContent(7,-0.00984045);
   hist_eta_diff_4__92->SetBinContent(8,-0.01067308);
   hist_eta_diff_4__92->SetBinContent(9,0.000417791);
   hist_eta_diff_4__92->SetBinContent(10,0.006085041);
   hist_eta_diff_4__92->SetBinContent(11,0.01454668);
   hist_eta_diff_4__92->SetBinContent(12,0.01009126);
   hist_eta_diff_4__92->SetBinContent(13,0.01180635);
   hist_eta_diff_4__92->SetBinContent(14,0.006519911);
   hist_eta_diff_4__92->SetBinContent(15,0.004999544);
   hist_eta_diff_4__92->SetBinContent(16,0.0005301459);
   hist_eta_diff_4__92->SetBinContent(17,-0.005450386);
   hist_eta_diff_4__92->SetBinContent(18,-0.001970947);
   hist_eta_diff_4__92->SetBinError(2,6.663979e-05);
   hist_eta_diff_4__92->SetBinError(3,0.0003828681);
   hist_eta_diff_4__92->SetBinError(4,0.0008361038);
   hist_eta_diff_4__92->SetBinError(5,0.001352877);
   hist_eta_diff_4__92->SetBinError(6,0.001853401);
   hist_eta_diff_4__92->SetBinError(7,0.002290435);
   hist_eta_diff_4__92->SetBinError(8,0.002643399);
   hist_eta_diff_4__92->SetBinError(9,0.0029373);
   hist_eta_diff_4__92->SetBinError(10,0.003142083);
   hist_eta_diff_4__92->SetBinError(11,0.003250029);
   hist_eta_diff_4__92->SetBinError(12,0.003241442);
   hist_eta_diff_4__92->SetBinError(13,0.003152097);
   hist_eta_diff_4__92->SetBinError(14,0.00294416);
   hist_eta_diff_4__92->SetBinError(15,0.002662672);
   hist_eta_diff_4__92->SetBinError(16,0.002269071);
   hist_eta_diff_4__92->SetBinError(17,0.001076193);
   hist_eta_diff_4__92->SetBinError(18,0.0003508187);
   hist_eta_diff_4__92->SetEntries(2.605542);

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
   p_2_0->SetBorderSize(2);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetBottomMargin(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__93 = new TH1D("emptyDiff__93","",10,-2.999,2.999);
   emptyDiff__93->SetBinContent(7,1000);
   emptyDiff__93->SetBinError(7,1000);
   emptyDiff__93->SetMinimum(-0.04);
   emptyDiff__93->SetMaximum(0.04);
   emptyDiff__93->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__93->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__93);

   ci = TColor::GetColor("#000099");
   emptyDiff__93->SetLineColor(ci);
   emptyDiff__93->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__93->GetXaxis()->CenterTitle(true);
   emptyDiff__93->GetXaxis()->SetLabelFont(43);
   emptyDiff__93->GetXaxis()->SetLabelSize(33);
   emptyDiff__93->GetXaxis()->SetTitleSize(33);
   emptyDiff__93->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__93->GetXaxis()->SetTitleFont(43);
   emptyDiff__93->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__93->GetYaxis()->CenterTitle(true);
   emptyDiff__93->GetYaxis()->SetNdivisions(505);
   emptyDiff__93->GetYaxis()->SetLabelFont(43);
   emptyDiff__93->GetYaxis()->SetLabelSize(33);
   emptyDiff__93->GetYaxis()->SetTitleSize(33);
   emptyDiff__93->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__93->GetYaxis()->SetTitleFont(43);
   emptyDiff__93->GetZaxis()->SetLabelFont(42);
   emptyDiff__93->GetZaxis()->SetLabelSize(0.035);
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
   1.535077e-05,
   -0.0007434791,
   -0.00264683,
   -0.006747932,
   -0.008360799,
   -0.008791517,
   -0.002983922,
   -0.001095788,
   0.005616006,
   0.01185525,
   0.01431828,
   0.01110858,
   0.01203701,
   0.007814697,
   0.002880965,
   -0.006743476,
   -0.008899145,
   -0.004495313};
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

   ci = 1323;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_syst21041 = new TH1F("Graph_syst21041","Graph",100,-3.46425,3.51675);
   Graph_syst21041->SetMinimum(-0.01122089);
   Graph_syst21041->SetMaximum(0.01664002);
   Graph_syst21041->SetDirectory(0);
   Graph_syst21041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_syst21041->SetLineColor(ci);
   Graph_syst21041->GetXaxis()->SetLabelFont(42);
   Graph_syst21041->GetXaxis()->SetLabelSize(0.035);
   Graph_syst21041->GetXaxis()->SetTitleSize(0.035);
   Graph_syst21041->GetXaxis()->SetTitleFont(42);
   Graph_syst21041->GetYaxis()->SetLabelFont(42);
   Graph_syst21041->GetYaxis()->SetLabelSize(0.035);
   Graph_syst21041->GetYaxis()->SetTitleSize(0.035);
   Graph_syst21041->GetYaxis()->SetTitleOffset(0);
   Graph_syst21041->GetYaxis()->SetTitleFont(42);
   Graph_syst21041->GetZaxis()->SetLabelFont(42);
   Graph_syst21041->GetZaxis()->SetLabelSize(0.035);
   Graph_syst21041->GetZaxis()->SetTitleSize(0.035);
   Graph_syst21041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst21041);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff02_fx3073[18] = {
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
   Double_t NLOdiff02_fy3073[18] = {
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
   Double_t NLOdiff02_felx3073[18] = {
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
   Double_t NLOdiff02_fely3073[18] = {
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
   Double_t NLOdiff02_fehx3073[18] = {
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
   Double_t NLOdiff02_fehy3073[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff02_fx3073,NLOdiff02_fy3073,NLOdiff02_felx3073,NLOdiff02_fehx3073,NLOdiff02_fely3073,NLOdiff02_fehy3073);
   grae->SetName("NLOdiff02");
   grae->SetTitle("");

   ci = 1324;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff023073 = new TH1F("Graph_NLOdiff023073","",100,-3.5065,3.5915);
   Graph_NLOdiff023073->SetMinimum(-100.0106);
   Graph_NLOdiff023073->SetMaximum(1100.001);
   Graph_NLOdiff023073->SetDirectory(0);
   Graph_NLOdiff023073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff023073->SetLineColor(ci);
   Graph_NLOdiff023073->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff023073->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff023073->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff023073->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff023073->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff023073->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff023073->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff023073->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff023073->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff023073->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff023073->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff023073->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff023073->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff023073);
   
   grae->Draw(" 2");
   
   Double_t g_fx3074[18] = {
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
   Double_t g_fy3074[18] = {
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
   Double_t g_felx3074[18] = {
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
   Double_t g_fely3074[18] = {
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
   Double_t g_fehx3074[18] = {
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
   Double_t g_fehy3074[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3074,g_fy3074,g_felx3074,g_fehx3074,g_fely3074,g_fehy3074);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1325;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3074 = new TH1F("Graph_g3074","",100,-3.5065,3.5915);
   Graph_g3074->SetMinimum(-100.0236);
   Graph_g3074->SetMaximum(1100.002);
   Graph_g3074->SetDirectory(0);
   Graph_g3074->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3074->SetLineColor(ci);
   Graph_g3074->GetXaxis()->SetLabelFont(42);
   Graph_g3074->GetXaxis()->SetLabelSize(0.035);
   Graph_g3074->GetXaxis()->SetTitleSize(0.035);
   Graph_g3074->GetXaxis()->SetTitleFont(42);
   Graph_g3074->GetYaxis()->SetLabelFont(42);
   Graph_g3074->GetYaxis()->SetLabelSize(0.035);
   Graph_g3074->GetYaxis()->SetTitleSize(0.035);
   Graph_g3074->GetYaxis()->SetTitleOffset(0);
   Graph_g3074->GetYaxis()->SetTitleFont(42);
   Graph_g3074->GetZaxis()->SetLabelFont(42);
   Graph_g3074->GetZaxis()->SetLabelSize(0.035);
   Graph_g3074->GetZaxis()->SetTitleSize(0.035);
   Graph_g3074->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3074);
   
   grae->Draw(" 2");
   
   Double_t g_fx3075[18] = {
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
   Double_t g_fy3075[18] = {
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
   Double_t g_felx3075[18] = {
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
   Double_t g_fely3075[18] = {
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
   Double_t g_fehx3075[18] = {
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
   Double_t g_fehy3075[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3075,g_fy3075,g_felx3075,g_fehx3075,g_fely3075,g_fehy3075);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1326;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3075 = new TH1F("Graph_g3075","",100,-3.5065,3.5915);
   Graph_g3075->SetMinimum(-100.0203);
   Graph_g3075->SetMaximum(1100.002);
   Graph_g3075->SetDirectory(0);
   Graph_g3075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3075->SetLineColor(ci);
   Graph_g3075->GetXaxis()->SetLabelFont(42);
   Graph_g3075->GetXaxis()->SetLabelSize(0.035);
   Graph_g3075->GetXaxis()->SetTitleSize(0.035);
   Graph_g3075->GetXaxis()->SetTitleFont(42);
   Graph_g3075->GetYaxis()->SetLabelFont(42);
   Graph_g3075->GetYaxis()->SetLabelSize(0.035);
   Graph_g3075->GetYaxis()->SetTitleSize(0.035);
   Graph_g3075->GetYaxis()->SetTitleOffset(0);
   Graph_g3075->GetYaxis()->SetTitleFont(42);
   Graph_g3075->GetZaxis()->SetLabelFont(42);
   Graph_g3075->GetZaxis()->SetLabelSize(0.035);
   Graph_g3075->GetZaxis()->SetTitleSize(0.035);
   Graph_g3075->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3075);
   
   grae->Draw(" 2");
   Double_t xAxis53[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_2__94 = new TH1D("hist_eta_diff_2__94","",18, xAxis53);
   hist_eta_diff_2__94->SetBinContent(1,1000);
   hist_eta_diff_2__94->SetBinContent(2,-0.0007434791);
   hist_eta_diff_2__94->SetBinContent(3,-0.00264683);
   hist_eta_diff_2__94->SetBinContent(4,-0.006747932);
   hist_eta_diff_2__94->SetBinContent(5,-0.008360799);
   hist_eta_diff_2__94->SetBinContent(6,-0.008791517);
   hist_eta_diff_2__94->SetBinContent(7,-0.002983922);
   hist_eta_diff_2__94->SetBinContent(8,-0.001095788);
   hist_eta_diff_2__94->SetBinContent(9,0.005616005);
   hist_eta_diff_2__94->SetBinContent(10,0.01185525);
   hist_eta_diff_2__94->SetBinContent(11,0.01431828);
   hist_eta_diff_2__94->SetBinContent(12,0.01110858);
   hist_eta_diff_2__94->SetBinContent(13,0.01203701);
   hist_eta_diff_2__94->SetBinContent(14,0.007814697);
   hist_eta_diff_2__94->SetBinContent(15,0.002880965);
   hist_eta_diff_2__94->SetBinContent(16,-0.006743476);
   hist_eta_diff_2__94->SetBinContent(17,-0.008899145);
   hist_eta_diff_2__94->SetBinContent(18,-0.004495313);
   hist_eta_diff_2__94->SetBinError(1,3.64286e-05);
   hist_eta_diff_2__94->SetBinError(2,0.0002019178);
   hist_eta_diff_2__94->SetBinError(3,0.0007261993);
   hist_eta_diff_2__94->SetBinError(4,0.001085436);
   hist_eta_diff_2__94->SetBinError(5,0.001457026);
   hist_eta_diff_2__94->SetBinError(6,0.001771422);
   hist_eta_diff_2__94->SetBinError(7,0.002060002);
   hist_eta_diff_2__94->SetBinError(8,0.002278251);
   hist_eta_diff_2__94->SetBinError(9,0.002461232);
   hist_eta_diff_2__94->SetBinError(10,0.002567639);
   hist_eta_diff_2__94->SetBinError(11,0.002632483);
   hist_eta_diff_2__94->SetBinError(12,0.002623354);
   hist_eta_diff_2__94->SetBinError(13,0.00255506);
   hist_eta_diff_2__94->SetBinError(14,0.0023995);
   hist_eta_diff_2__94->SetBinError(15,0.002209118);
   hist_eta_diff_2__94->SetBinError(16,0.001920706);
   hist_eta_diff_2__94->SetBinError(17,0.0009906164);
   hist_eta_diff_2__94->SetBinError(18,0.0004105269);
   hist_eta_diff_2__94->SetEntries(4.07936);

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
   p_2_1->SetBorderSize(2);
   p_2_1->SetLeftMargin(0);
   p_2_1->SetTopMargin(0);
   p_2_1->SetBottomMargin(0.24);
   p_2_1->SetFrameBorderMode(0);
   p_2_1->SetFrameBorderMode(0);
   
   TH1D *emptyDiff__95 = new TH1D("emptyDiff__95","",10,-2.999,2.999);
   emptyDiff__95->SetBinContent(7,1000);
   emptyDiff__95->SetBinError(7,1000);
   emptyDiff__95->SetMinimum(-0.04);
   emptyDiff__95->SetMaximum(0.04);
   emptyDiff__95->SetEntries(1);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("emptyDiff");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   emptyDiff__95->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(emptyDiff__95);

   ci = TColor::GetColor("#000099");
   emptyDiff__95->SetLineColor(ci);
   emptyDiff__95->GetXaxis()->SetTitle("#eta_{dijet}");
   emptyDiff__95->GetXaxis()->CenterTitle(true);
   emptyDiff__95->GetXaxis()->SetLabelFont(43);
   emptyDiff__95->GetXaxis()->SetLabelSize(33);
   emptyDiff__95->GetXaxis()->SetTitleSize(33);
   emptyDiff__95->GetXaxis()->SetTitleOffset(2.5);
   emptyDiff__95->GetXaxis()->SetTitleFont(43);
   emptyDiff__95->GetYaxis()->SetTitle("pPb-pp ");
   emptyDiff__95->GetYaxis()->CenterTitle(true);
   emptyDiff__95->GetYaxis()->SetNdivisions(505);
   emptyDiff__95->GetYaxis()->SetLabelFont(43);
   emptyDiff__95->GetYaxis()->SetLabelSize(33);
   emptyDiff__95->GetYaxis()->SetTitleSize(33);
   emptyDiff__95->GetYaxis()->SetTitleOffset(2.5);
   emptyDiff__95->GetYaxis()->SetTitleFont(43);
   emptyDiff__95->GetZaxis()->SetLabelFont(42);
   emptyDiff__95->GetZaxis()->SetLabelSize(0.035);
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
   4.068863e-05,
   -0.000231627,
   -0.0004441691,
   -0.006146464,
   -0.008650904,
   -0.01420409,
   -0.007385068,
   -0.004160683,
   0.005806692,
   0.002991025,
   0.01594112,
   0.001562034,
   0.007139726,
   0.01059329,
   5.442149e-05,
   -0.001297447,
   -0.0001758954};
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

   ci = 1338;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.35);
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   
   TH1F *Graph_syst51042 = new TH1F("Graph_syst51042","Graph",100,-3.46425,3.51675);
   Graph_syst51042->SetMinimum(-0.01721861);
   Graph_syst51042->SetMaximum(0.01895564);
   Graph_syst51042->SetDirectory(0);
   Graph_syst51042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_syst51042->SetLineColor(ci);
   Graph_syst51042->GetXaxis()->SetLabelFont(42);
   Graph_syst51042->GetXaxis()->SetLabelSize(0.035);
   Graph_syst51042->GetXaxis()->SetTitleSize(0.035);
   Graph_syst51042->GetXaxis()->SetTitleFont(42);
   Graph_syst51042->GetYaxis()->SetLabelFont(42);
   Graph_syst51042->GetYaxis()->SetLabelSize(0.035);
   Graph_syst51042->GetYaxis()->SetTitleSize(0.035);
   Graph_syst51042->GetYaxis()->SetTitleOffset(0);
   Graph_syst51042->GetYaxis()->SetTitleFont(42);
   Graph_syst51042->GetZaxis()->SetLabelFont(42);
   Graph_syst51042->GetZaxis()->SetLabelSize(0.035);
   Graph_syst51042->GetZaxis()->SetTitleSize(0.035);
   Graph_syst51042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_syst51042);
   
   gre->Draw(" 2");
   
   Double_t NLOdiff05_fx3076[18] = {
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
   Double_t NLOdiff05_fy3076[18] = {
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
   Double_t NLOdiff05_felx3076[18] = {
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
   Double_t NLOdiff05_fely3076[18] = {
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
   Double_t NLOdiff05_fehx3076[18] = {
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
   Double_t NLOdiff05_fehy3076[18] = {
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
   grae = new TGraphAsymmErrors(18,NLOdiff05_fx3076,NLOdiff05_fy3076,NLOdiff05_felx3076,NLOdiff05_fehx3076,NLOdiff05_fely3076,NLOdiff05_fehy3076);
   grae->SetName("NLOdiff05");
   grae->SetTitle("");

   ci = 1339;
   color = new TColor(ci, 0.2196078, 0.5568628, 0.5568628, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_NLOdiff053076 = new TH1F("Graph_NLOdiff053076","",100,-3.5065,3.5915);
   Graph_NLOdiff053076->SetMinimum(-100.0077);
   Graph_NLOdiff053076->SetMaximum(1100.001);
   Graph_NLOdiff053076->SetDirectory(0);
   Graph_NLOdiff053076->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_NLOdiff053076->SetLineColor(ci);
   Graph_NLOdiff053076->GetXaxis()->SetLabelFont(42);
   Graph_NLOdiff053076->GetXaxis()->SetLabelSize(0.035);
   Graph_NLOdiff053076->GetXaxis()->SetTitleSize(0.035);
   Graph_NLOdiff053076->GetXaxis()->SetTitleFont(42);
   Graph_NLOdiff053076->GetYaxis()->SetLabelFont(42);
   Graph_NLOdiff053076->GetYaxis()->SetLabelSize(0.035);
   Graph_NLOdiff053076->GetYaxis()->SetTitleSize(0.035);
   Graph_NLOdiff053076->GetYaxis()->SetTitleOffset(0);
   Graph_NLOdiff053076->GetYaxis()->SetTitleFont(42);
   Graph_NLOdiff053076->GetZaxis()->SetLabelFont(42);
   Graph_NLOdiff053076->GetZaxis()->SetLabelSize(0.035);
   Graph_NLOdiff053076->GetZaxis()->SetTitleSize(0.035);
   Graph_NLOdiff053076->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_NLOdiff053076);
   
   grae->Draw(" 2");
   
   Double_t g_fx3077[18] = {
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
   Double_t g_fy3077[18] = {
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
   Double_t g_felx3077[18] = {
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
   Double_t g_fely3077[18] = {
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
   Double_t g_fehx3077[18] = {
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
   Double_t g_fehy3077[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3077,g_fy3077,g_felx3077,g_fehx3077,g_fely3077,g_fehy3077);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1340;
   color = new TColor(ci, 0, 0, 0, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3077 = new TH1F("Graph_g3077","",100,-3.5065,3.5915);
   Graph_g3077->SetMinimum(-100.0335);
   Graph_g3077->SetMaximum(1100.003);
   Graph_g3077->SetDirectory(0);
   Graph_g3077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3077->SetLineColor(ci);
   Graph_g3077->GetXaxis()->SetLabelFont(42);
   Graph_g3077->GetXaxis()->SetLabelSize(0.035);
   Graph_g3077->GetXaxis()->SetTitleSize(0.035);
   Graph_g3077->GetXaxis()->SetTitleFont(42);
   Graph_g3077->GetYaxis()->SetLabelFont(42);
   Graph_g3077->GetYaxis()->SetLabelSize(0.035);
   Graph_g3077->GetYaxis()->SetTitleSize(0.035);
   Graph_g3077->GetYaxis()->SetTitleOffset(0);
   Graph_g3077->GetYaxis()->SetTitleFont(42);
   Graph_g3077->GetZaxis()->SetLabelFont(42);
   Graph_g3077->GetZaxis()->SetLabelSize(0.035);
   Graph_g3077->GetZaxis()->SetTitleSize(0.035);
   Graph_g3077->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3077);
   
   grae->Draw(" 2");
   
   Double_t g_fx3078[18] = {
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
   Double_t g_fy3078[18] = {
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
   Double_t g_felx3078[18] = {
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
   Double_t g_fely3078[18] = {
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
   Double_t g_fehx3078[18] = {
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
   Double_t g_fehy3078[18] = {
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
   grae = new TGraphAsymmErrors(18,g_fx3078,g_fy3078,g_felx3078,g_fehx3078,g_fely3078,g_fehy3078);
   grae->SetName("g");
   grae->SetTitle("");

   ci = 1341;
   color = new TColor(ci, 0, 0.4533333, 1, " ", 0.35);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   
   TH1F *Graph_g3078 = new TH1F("Graph_g3078","",100,-3.5065,3.5915);
   Graph_g3078->SetMinimum(-100.031);
   Graph_g3078->SetMaximum(1100.003);
   Graph_g3078->SetDirectory(0);
   Graph_g3078->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_g3078->SetLineColor(ci);
   Graph_g3078->GetXaxis()->SetLabelFont(42);
   Graph_g3078->GetXaxis()->SetLabelSize(0.035);
   Graph_g3078->GetXaxis()->SetTitleSize(0.035);
   Graph_g3078->GetXaxis()->SetTitleFont(42);
   Graph_g3078->GetYaxis()->SetLabelFont(42);
   Graph_g3078->GetYaxis()->SetLabelSize(0.035);
   Graph_g3078->GetYaxis()->SetTitleSize(0.035);
   Graph_g3078->GetYaxis()->SetTitleOffset(0);
   Graph_g3078->GetYaxis()->SetTitleFont(42);
   Graph_g3078->GetZaxis()->SetLabelFont(42);
   Graph_g3078->GetZaxis()->SetLabelSize(0.035);
   Graph_g3078->GetZaxis()->SetTitleSize(0.035);
   Graph_g3078->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g3078);
   
   grae->Draw(" 2");
   Double_t xAxis54[19] = {-2.915, -2.633333, -2.07, -1.788333, -1.506667, -1.225, -0.9433333, -0.6616667, -0.38, -0.09833333, 0.1833333, 0.465, 0.7466667, 1.028333, 1.31, 1.591667, 1.873333, 2.436667, 3}; 
   
   TH1D *hist_eta_diff_5__96 = new TH1D("hist_eta_diff_5__96","",18, xAxis54);
   hist_eta_diff_5__96->SetBinContent(1,1000);
   hist_eta_diff_5__96->SetBinContent(2,1000);
   hist_eta_diff_5__96->SetBinContent(3,-0.000231627);
   hist_eta_diff_5__96->SetBinContent(4,-0.0004441691);
   hist_eta_diff_5__96->SetBinContent(5,-0.006146463);
   hist_eta_diff_5__96->SetBinContent(6,-0.008650904);
   hist_eta_diff_5__96->SetBinContent(7,-0.01420409);
   hist_eta_diff_5__96->SetBinContent(8,-0.007385068);
   hist_eta_diff_5__96->SetBinContent(9,-0.004160683);
   hist_eta_diff_5__96->SetBinContent(10,0.005806692);
   hist_eta_diff_5__96->SetBinContent(11,0.002991025);
   hist_eta_diff_5__96->SetBinContent(12,0.01594112);
   hist_eta_diff_5__96->SetBinContent(13,0.001562034);
   hist_eta_diff_5__96->SetBinContent(14,0.007139726);
   hist_eta_diff_5__96->SetBinContent(15,0.01059329);
   hist_eta_diff_5__96->SetBinContent(16,5.442149e-05);
   hist_eta_diff_5__96->SetBinContent(17,-0.001297447);
   hist_eta_diff_5__96->SetBinContent(18,-0.0001758954);
   hist_eta_diff_5__96->SetBinError(2,4.210661e-05);
   hist_eta_diff_5__96->SetBinError(3,0.0002506667);
   hist_eta_diff_5__96->SetBinError(4,0.0007501734);
   hist_eta_diff_5__96->SetBinError(5,0.001504988);
   hist_eta_diff_5__96->SetBinError(6,0.002486229);
   hist_eta_diff_5__96->SetBinError(7,0.003369907);
   hist_eta_diff_5__96->SetBinError(8,0.004244332);
   hist_eta_diff_5__96->SetBinError(9,0.00487882);
   hist_eta_diff_5__96->SetBinError(10,0.005336955);
   hist_eta_diff_5__96->SetBinError(11,0.005553947);
   hist_eta_diff_5__96->SetBinError(12,0.005613235);
   hist_eta_diff_5__96->SetBinError(13,0.005352013);
   hist_eta_diff_5__96->SetBinError(14,0.004955815);
   hist_eta_diff_5__96->SetBinError(15,0.004350144);
   hist_eta_diff_5__96->SetBinError(16,0.003455892);
   hist_eta_diff_5__96->SetBinError(17,0.001455941);
   hist_eta_diff_5__96->SetBinError(18,0.0003498162);
   hist_eta_diff_5__96->SetEntries(2.008574);

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

   ci = 1283;
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
   entry=leg->AddEntry("g","DSSZ`","f");

   ci = 1254;
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

   ci = 1255;
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

   ci = 1256;
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
