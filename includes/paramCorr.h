#ifndef _PARAMCORR_H_
#define _PARAMCORR_H_

#include <vector>

Float_t param0fResoPt_pp_param = 0.0757855;
Float_t param0fResoPt_pp_err = 0.000351793;
Float_t param0fResoPtCorr_pp_param = 0.0720245;
Float_t param0fResoPtCorr_pp_err = 0.000453406;
Float_t param0fResoPtFfJecCorr_pp_param = 0.0720245;
Float_t param0fResoPtFfJecCorr_pp_err = 0.000453406;

Float_t param1fResoPt_peri_param = 1.24604;
Float_t param1fResoPt_peri_err = 0.00527129;
Float_t param1fResoPtCorr_peri_param = 1.06791;
Float_t param1fResoPtCorr_peri_err = 0.0139354;
Float_t param1fResoPtFfJecCorr_peri_param = 1.06791;
Float_t param1fResoPtFfJecCorr_peri_err = 0.0139354;

// Float_t param1fResoPt_peri_param = 1.20136;
// Float_t param1fResoPt_peri_err = 0.00375337;
// Float_t param1fResoPtCorr_peri_param = 1.22911;
// Float_t param1fResoPtCorr_peri_err = 0.00394684;

// fScalePt
// [0]+[1]/TMath::Sqrt(x)+[2]/x+[3]/(x*x)
// fReso
// sqrt([0]*[0]+[1]*[1]/x+[2]*[2]/(x*x))

// pp
std::vector<std::vector<Float_t>> paramfScalePt_pp = {{1.00033, -0.229415, 1.90715, 0}};
std::vector<std::vector<Float_t>> paramfResoPt_pp = {{0.0757855, 0.826599, 0}};
std::vector<std::vector<Float_t>> paramfResoPtCorr_pp = {{0.0721575, 0.886562, 0}};
std::vector<std::vector<Float_t>> paramfResoPhi_pp = {{0.00357654, 0.0517934, 0}};
std::vector<std::vector<Float_t>> paramfResoEta_pp = {{-0.00269668, -0.0379895, -1.60484e-05}};
std::vector<std::vector<Float_t>> paramfScalePtFfCorr_pp = {{0.96538, 0.311907, -6.13166, 90.6198}}; // fit from 20 GeV
// std::vector<std::vector<Float_t>> paramfScalePtFfCorr_pp = {{1.00908, -0.819103, 1.47093, 11.607}}; // fit from 10 GeV
std::vector<std::vector<Float_t>> paramfResoPtFfJecCorr_pp = {{0.0724676, 0.865216, 0}};

std::vector<std::vector<Float_t>> paramfScaleRecoPt_pp = {{0.983116, 0.80274, -0.782905, 0}};

std::vector<std::vector<Float_t>> paramfResoDrPhi_pp = {{0.00347823, 0.0759187, -0.227131, 0.181183}};
std::vector<std::vector<Float_t>> paramfResoDrEta_pp = {{0.00296272, 0.0524287, -0.190836, 0.188901}};
std::vector<std::vector<Float_t>> paramfResoDeltaPhi_pp = {{0.00828208, 0.079912, 0.351136, -0.00724589, 0.0439167, -0.456592}};
std::vector<std::vector<Float_t>> paramfResoDeltaEta_pp = {{-0.0071909, 0.0751352, -0.385934, -0.00619982, 0.0691821, 0.3783}};

// PbPb
std::vector<std::vector<Float_t>> paramfScalePt_PbPb = {{0.967656, 0.843614, -12.7, 270.152},
                                                        {0.977684, 0.552352, -7.7374, 159.635}};
std::vector<std::vector<Float_t>> paramfResoPt_PbPb = {{0.0761373, 1.25131, 4.26688},
                                                       {0.0754337, 1.22438, 0}};
std::vector<std::vector<Float_t>> paramfResoPtCorr_PbPb = {{0.0724779, 1.08185, 9.59997},
                                                           {0.0715711, 1.14754, 5.56808}};
std::vector<std::vector<Float_t>> paramfResoPhi_PbPb = {{0.0166083, 2.27444e-05, 1.24067},
                                                        {0.0161091, -2.22311e-06, 0.945415}};
std::vector<std::vector<Float_t>> paramfResoEta_PbPb = {{0.0161334, 3.14141e-08, 1.07716},
                                                        {0.0155212, -4.50768e-07, 0.77673}};
std::vector<std::vector<Float_t>> paramfScalePtFfCorr_PbPb = {{0.874952, 3.19483, -34.0169, 406.051}, // fit from 20 GeV
                                                              {0.940946, 1.16662, -15.451, 167.565}};
// std::vector<std::vector<Float_t>> paramfScalePtFfCorr_PbPb = {{0.988998, 0.171765, -13.1673, 181.918}, // fit from 10 GeV
//                                                               {0.959678, 0.667128, -11.9704, 128.259}};
std::vector<std::vector<Float_t>> paramfResoPtFfJecCorr_PbPb = {{0.0715711, 1.05397, 10.6391},
                                                                {0.0715711, 0.968735, 6.76762}};
std::vector<std::vector<Float_t>> paramfScaleRecoPt_PbPb = {{1.02, -0.342918, 9.33303, -55.0354},
                                                            {1.01748, 0.0345667, 3.90492, 22.6295}};

std::vector<std::vector<Float_t>> paramfResoDrPhi_PbPb = {{0.0225406, 0.0343543, -0.0424054, -0.0158113},
                                                          {0.0182925, 0.0808535, -0.234046, 0.171429}};
std::vector<std::vector<Float_t>> paramfResoDrEta_PbPb = {{0.0201063, 0.111602, -0.436552, 0.448453},
                                                          {0.0192079, 0.0272202, -0.0344609, -0.0228629}};
std::vector<std::vector<Float_t>> paramfResoDeltaPhi_PbPb = {{0.0206906, -4.16832e-08, 0.739495, -0.00718892, 0.0428393, 0.464948},
                                                             {0.0210238, -3.10108e-08, 0.587965, -0.00617247, 0.0710691, 0.337603}};
std::vector<std::vector<Float_t>> paramfResoDeltaEta_PbPb = {{0.0213889, 5.609e-06, 0.705594, 0.00636593, 0.0830991, 0},
                                                             {0.0207022, 1.45321e-05, 0.630861, -0.00656963, 0.0726378, 0.361297}};

// fP0: [0]-exp([1]+[2]*x)
// fP1: [0]+[3]*x-exp([1]+[2]*x)
// pp
std::vector<std::vector<Float_t>> paramfP0_pp = {{284.292, 6.24451, -0.0208096, 3.25401e-12}};
std::vector<std::vector<Float_t>> paramfP1_pp = {{-0.00401379, -2.76225, -0.0423297, 4.14402e-07}};
// PbPb
std::vector<std::vector<Float_t>> paramfP0_PbPb = {{74.7742, 7.06194, -0.0753196, 0.40824},
                                                   {257.139, 5.60937, -0.00512358, 8.76003e-11}};
std::vector<std::vector<Float_t>> paramfP1_PbPb = {{-0.0104941, -2.69602, -0.0404066, 1.63857e-05},
                                                   {-0.0107106, -2.07119, -0.0361938, 1.7809e-05}};


// 10-300 GeV

std::vector<std::vector<Float_t>> paramRealfP0_pp = {{98.6751, 108.998, 90.5642, 86.6141, 111.011, 152.648, 167.368, 199.715, 215.724, 239.721, 240.621, 236.863, 253.421, 270.582, 264.629, 266.466, 275.36, 296.57, 281.735, 275.677, 285.389, 282.213, 286.643, 287.513, 298.756, 251.985, 254.503, 286.414, 275.203, 275.203}};
std::vector<std::vector<Float_t>> paramRealfP1_pp = {{-0.0115014, -0.0105634, -0.0129491, -0.013636, -0.0104285, -0.00740854, -0.00672141, -0.00556621, -0.00513244, -0.00459263, -0.00457967, -0.00465694, -0.00433162, -0.00404367, -0.0041433, -0.00411656, -0.00397553, -0.00367438, -0.00388082, -0.00397447, -0.00382195, -0.00387364, -0.003808, -0.00380021, -0.00364362, -0.00436654, -0.00432931, -0.00380513, -0.00397303, -0.00397303}};

std::vector<std::vector<Float_t>> paramRealfP0_PbPb = {{366.575, 368.737, 58.3546, 59.998, 60.5737, 82.5014, 96.2538, 109.735, 101.002, 103.422, 119.267, 110.221, 128.642, 139.948, 138.515, 139.897, 159.078, 144.706, 153.744, 165.373, 158.861, 179.232, 157.87, 163.508, 171.409, 179.471, 171.727, 183.438, 181.773, 181.773},
                                                       {533.123, 31.2857, 29.1465, 38.7858, 51.6527, 57.8768, 65.9635, 75.0982, 80.5377, 92.8377, 103.756, 106.031, 121.745, 126.73, 123.921, 129.016, 141.135, 141.114, 160.016, 156.644, 166.431, 163.786, 178.575, 168.555, 179.018, 182.945, 163.281, 194.911, 184.14, 184.14}};
std::vector<std::vector<Float_t>> paramRealfP1_PbPb = {{-0.0035512, -0.00351751, -0.0235049, -0.0212918, -0.0204994, -0.0145492, -0.0121762, -0.0105641, -0.0116251, -0.0113003, -0.00969159, -0.0105995, -0.00892597, -0.00813708, -0.00828883, -0.00818553, -0.00708237, -0.00783298, -0.00738715, -0.00680066, -0.00709899, -0.00621974, -0.00715037, -0.00686431, -0.00652739, -0.00621023, -0.00654996, -0.00605068, -0.00611389, -0.00611389},
                                                       {-0.00244133, -0.0429448, -0.0486409, -0.0338344, -0.0241146, -0.0212299, -0.0183951, -0.0160627, -0.0149268, -0.0127436, -0.0112945, -0.0110623, -0.00950654, -0.00912412, -0.00936151, -0.00894817, -0.00810453, -0.00811312, -0.0070547, -0.00722516, -0.00679045, -0.00690645, -0.00627483, -0.00667718, -0.00624448, -0.00610154, -0.00691941, -0.00572038, -0.00606969, -0.00606969}};


// 30-300 GeV

// std::vector<std::vector<Float_t>> paramRealfP0_pp = {{90.5642, 86.6141, 111.011, 152.648, 167.368, 199.715, 215.724, 239.721, 240.621, 236.863, 253.421, 270.582, 264.629, 266.466, 275.36, 296.57, 281.735, 275.677, 285.389, 282.213, 286.643, 287.513, 298.756, 251.985, 254.503, 286.414, 275.203}};
// std::vector<std::vector<Float_t>> paramRealfP1_pp = {{-0.0129491, -0.013636, -0.0104285, -0.00740854, -0.00672141, -0.00556621, -0.00513244, -0.00459263, -0.00457967, -0.00465694, -0.00433162, -0.00404367, -0.0041433, -0.00411656, -0.00397553, -0.00367438, -0.00388082, -0.00397447, -0.00382195, -0.00387364, -0.003808, -0.00380021, -0.00364362, -0.00436654, -0.00432931, -0.00380513, -0.00397303}};


// std::vector<std::vector<Float_t>> paramRealfP0_PbPb = {{981.381, 58.3938, 109.072, 117.479, 115.973, 129.854, 112.198, 113.365, 153.465, 126.047, 154.315, 148.968, 151.661, 150.941, 154.029, 169.735, 158.277, 170.664, 162.599, 173.652, 180.206, 167.998, 178.75, 172.29, 181.381, 185.176, 247.307},
//                                                        {28.2557, 37.8192, 52.6669, 59.451, 65.2447, 75.2273, 79.8917, 90.4631, 98.9076, 102.164, 123.463, 125.715, 124.735, 123.377, 143.085, 144.954, 152.21, 176.272, 166.896, 170.924, 214.829, 167.857, 170.802, 175.591, 184.039, 206.909, 184.831}};
// std::vector<std::vector<Float_t>> paramRealfP1_PbPb = {{-0.00132992, -0.0226029, -0.0110611, -0.0101126, -0.0101403, -0.00891306, -0.0104765, -0.0103475, -0.0074425, -0.00919098, -0.00737569, -0.00764909, -0.00753556, -0.00757406, -0.00738892, -0.00663745, -0.00719137, -0.0066104, -0.00694027, -0.00646843, -0.00620563, -0.00670491, -0.00624399, -0.00652239, -0.0061566, -0.00600899, -0.00441861},
//                                                        {-0.0506322, -0.0347996, -0.0234973, -0.0205092, -0.0185639, -0.0159811, -0.0150442, -0.0131223, -0.0118871, -0.0114859, -0.00933206, -0.0091965, -0.00927904, -0.00938719, -0.00797562, -0.00786725, -0.00743242, -0.00634965, -0.00674661, -0.00659676, -0.00515129, -0.00668731, -0.0065526, -0.00635893, -0.00606735, -0.00537673, -0.00601528}};

#endif
