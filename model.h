#pragma once
namespace Eloquent
{
namespace ML
{
namespace Port
{
class GaussianNB
{
  public:
	/**
                    * Predict class for features vector
                    */
	int predict(float *x)
	{
		float votes[22] = {0.0f};
		float theta[5] = {0};
		float sigma[5] = {0};
		theta[0] = 20.112903225806;
		theta[1] = 133.5;
		theta[2] = 199.612903225806;
		theta[3] = 22.665521505968;
		theta[4] = 92.390802020484;
		sigma[0] = 149.648545789446;
		sigma[1] = 65.02419615365;
		sigma[2] = 10.495319982995;
		sigma[3] = 0.594723761078;
		sigma[4] = 2.14993807055;
		votes[0] = 0.045454545455 - gauss(x, theta, sigma);
		theta[0] = 100.338709677419;
		theta[1] = 81.983870967742;
		theta[2] = 50.58064516129;
		theta[3] = 27.439353171774;
		theta[4] = 80.10240212629;
		sigma[0] = 121.869149327428;
		sigma[1] = 59.273936007969;
		sigma[2] = 9.953176382578;
		sigma[3] = 1.806575078834;
		sigma[4] = 8.2353420163;
		votes[1] = 0.045454545455 - gauss(x, theta, sigma);
		theta[0] = 40.491803278689;
		theta[1] = 68.114754098361;
		theta[2] = 19.114754098361;
		theta[3] = 29.672458893607;
		theta[4] = 64.73072206082;
		sigma[0] = 134.67616492722;
		sigma[1] = 54.790112790697;
		sigma[2] = 9.97044065955;
		sigma[3] = 7.733732034295;
		sigma[4] = 7.35256272066;
		votes[2] = 0.044721407625 - gauss(x, theta, sigma);
		theta[0] = 41.483333333333;
		theta[1] = 67.583333333333;
		theta[2] = 79.5;
		theta[3] = 18.978502688833;
		theta[4] = 17.126718061333;
		sigma[0] = 150.683058160819;
		sigma[1] = 57.976391494152;
		sigma[2] = 9.51666927193;
		sigma[3] = 1.399911761942;
		sigma[4] = 2.774124704883;
		votes[3] = 0.043988269795 - gauss(x, theta, sigma);
		theta[0] = 23.171875;
		theta[1] = 17.75;
		theta[2] = 30.1875;
		theta[3] = 27.320981373125;
		theta[4] = 94.673398321406;
		sigma[0] = 126.579836589638;
		sigma[1] = 79.187502605263;
		sigma[2] = 8.808596355263;
		sigma[3] = 1.943400081919;
		sigma[4] = 7.811996415396;
		votes[4] = 0.046920821114 - gauss(x, theta, sigma);
		theta[0] = 99.903225806452;
		theta[1] = 28.516129032258;
		theta[2] = 30.177419354839;
		theta[3] = 25.509381264032;
		theta[4] = 58.995634830161;
		sigma[0] = 148.184185747823;
		sigma[1] = 56.798129556356;
		sigma[2] = 10.56529917134;
		sigma[3] = 2.095169704487;
		sigma[4] = 31.398030308788;
		votes[5] = 0.045454545455 - gauss(x, theta, sigma);
		theta[0] = 117.446153846154;
		theta[1] = 46.446153846154;
		theta[2] = 19.723076923077;
		theta[3] = 24.028131484769;
		theta[4] = 79.819592183692;
		sigma[0] = 122.677872427748;
		sigma[1] = 50.954795504671;
		sigma[2] = 9.031008522423;
		sigma[3] = 1.246212537873;
		sigma[4] = 8.306032101471;
		votes[6] = 0.047653958944 - gauss(x, theta, sigma);
		theta[0] = 22.65625;
		theta[1] = 133.53125;
		theta[2] = 200.46875;
		theta[3] = 23.007737568734;
		theta[4] = 81.761913248437;
		sigma[0] = 166.913088542763;
		sigma[1] = 57.249026042763;
		sigma[2] = 10.280276042763;
		sigma[3] = 92.387685993139;
		sigma[4] = 1.4708213228;
		votes[7] = 0.046920821114 - gauss(x, theta, sigma);
		theta[0] = 77.723076923077;
		theta[1] = 47.523076923077;
		theta[2] = 39.692307692308;
		theta[3] = 24.855170772;
		theta[4] = 79.351818910923;
		sigma[0] = 124.938700830115;
		sigma[1] = 49.511008522423;
		sigma[2] = 9.936097279819;
		sigma[3] = 1.321225170566;
		sigma[4] = 28.765715096853;
		votes[8] = 0.047653958944 - gauss(x, theta, sigma);
		theta[0] = 21.015625;
		theta[1] = 67.53125;
		theta[2] = 19.859375;
		theta[3] = 20.097506172188;
		theta[4] = 21.579047503594;
		sigma[0] = 123.734133464638;
		sigma[1] = 53.936526042763;
		sigma[2] = 8.933352214638;
		sigma[3] = 6.408915470873;
		sigma[4] = 4.75788995242;
		votes[9] = 0.046920821114 - gauss(x, theta, sigma);
		theta[0] = 21.014925373134;
		theta[1] = 68.238805970149;
		theta[2] = 19.10447761194;
		theta[3] = 24.13108747;
		theta[4] = 65.215730902537;
		sigma[0] = 139.477391778798;
		sigma[1] = 55.435511627317;
		sigma[2] = 8.69057957118;
		sigma[3] = 10.814740965427;
		sigma[4] = 7.831340230757;
		votes[10] = 0.049120234604 - gauss(x, theta, sigma);
		theta[0] = 76.91935483871;
		theta[1] = 47.887096774194;
		theta[2] = 19.725806451613;
		theta[3] = 22.587162752097;
		theta[4] = 64.558782705484;
		sigma[0] = 127.68704735032;
		sigma[1] = 64.325965144285;
		sigma[2] = 7.779659212963;
		sigma[3] = 6.740490944082;
		sigma[4] = 34.068706136974;
		votes[11] = 0.045454545455 - gauss(x, theta, sigma);
		theta[0] = 18.544117647059;
		theta[1] = 27.676470588235;
		theta[2] = 30.102941176471;
		theta[3] = 30.980537848088;
		theta[4] = 49.759204548824;
		sigma[0] = 158.659820944363;
		sigma[1] = 56.542390148516;
		sigma[2] = 9.798229248862;
		sigma[3] = 7.274535811847;
		sigma[4] = 7.823609818009;
		votes[12] = 0.049853372434 - gauss(x, theta, sigma);
		theta[0] = 21.719298245614;
		theta[1] = 48.19298245614;
		theta[2] = 20.228070175439;
		theta[3] = 28.279477691053;
		theta[4] = 52.957258198947;
		sigma[0] = 119.710682814558;
		sigma[1] = 56.296093710218;
		sigma[2] = 9.614653267005;
		sigma[3] = 4.523312905038;
		sigma[4] = 48.838759535189;
		votes[13] = 0.041788856305 - gauss(x, theta, sigma);
		theta[0] = 20.492537313433;
		theta[1] = 47.537313432836;
		theta[2] = 19.611940298507;
		theta[3] = 28.499217394179;
		theta[4] = 85.55638950597;
		sigma[0] = 139.563379749393;
		sigma[1] = 55.382938671202;
		sigma[2] = 10.028516750953;
		sigma[3] = 0.740067854015;
		sigma[4] = 8.342786095443;
		votes[14] = 0.049120234604 - gauss(x, theta, sigma);
		theta[0] = 100.258064516129;
		theta[1] = 17.822580645161;
		theta[2] = 50.532258064516;
		theta[3] = 28.585336263065;
		theta[4] = 92.299293453871;
		sigma[0] = 152.868889181746;
		sigma[1] = 45.823363687469;
		sigma[2] = 10.829607183827;
		sigma[3] = 0.810129260707;
		sigma[4] = 2.440035458828;
		votes[15] = 0.045454545455 - gauss(x, theta, sigma);
		theta[0] = 19.0;
		theta[1] = 17.423728813559;
		theta[2] = 9.694915254237;
		theta[3] = 21.737312291695;
		theta[4] = 92.191892153559;
		sigma[0] = 143.288138198484;
		sigma[1] = 63.701812430026;
		sigma[2] = 8.65268861503;
		sigma[3] = 58.290716893528;
		sigma[4] = 1.854755210752;
		votes[16] = 0.043255131965 - gauss(x, theta, sigma);
		theta[0] = 50.557692307692;
		theta[1] = 59.153846153846;
		theta[2] = 50.480769230769;
		theta[3] = 33.865691172115;
		theta[4] = 92.577029573462;
		sigma[0] = 149.823597279819;
		sigma[1] = 52.437872427748;
		sigma[2] = 9.05732509047;
		sigma[3] = 30.933442347081;
		sigma[4] = 1.702458359295;
		votes[17] = 0.038123167155 - gauss(x, theta, sigma);
		theta[0] = 21.203125;
		theta[1] = 67.34375;
		theta[2] = 20.359375;
		theta[3] = 27.590735937031;
		theta[4] = 48.866634736562;
		sigma[0] = 150.630617839638;
		sigma[1] = 56.756838542763;
		sigma[2] = 7.886477214638;
		sigma[3] = 33.393424386675;
		sigma[4] = 126.057588299427;
		votes[18] = 0.046920821114 - gauss(x, theta, sigma);
		theta[0] = 17.6;
		theta[1] = 19.072727272727;
		theta[2] = 39.6;
		theta[3] = 21.821605638909;
		theta[4] = 89.919895012364;
		sigma[0] = 156.567275332536;
		sigma[1] = 53.376531530883;
		sigma[2] = 9.51272987799;
		sigma[3] = 4.474947570321;
		sigma[4] = 7.244459405796;
		votes[19] = 0.040322580645 - gauss(x, theta, sigma);
		theta[0] = 80.767857142857;
		theta[1] = 48.017857142857;
		theta[2] = 39.517857142857;
		theta[3] = 23.704243169464;
		theta[4] = 82.307998693036;
		sigma[0] = 142.392540870569;
		sigma[1] = 57.481826584855;
		sigma[2] = 9.428255156284;
		sigma[3] = 4.301617572495;
		sigma[4] = 1.829219377607;
		votes[20] = 0.041055718475 - gauss(x, theta, sigma);
		theta[0] = 99.727272727273;
		theta[1] = 17.181818181818;
		theta[2] = 50.333333333333;
		theta[3] = 25.662905828182;
		theta[4] = 85.080553448333;
		sigma[0] = 169.622592136944;
		sigma[1] = 60.118459905539;
		sigma[2] = 10.101012706273;
		sigma[3] = 0.647977186456;
		sigma[4] = 9.074595614713;
		votes[21] = 0.048387096774 - gauss(x, theta, sigma);
		// return argmax of votes
		uint8_t classIdx = 0;
		float maxVotes = votes[0];

		for (uint8_t i = 1; i < 22; i++)
		{
			if (votes[i] > maxVotes)
			{
				classIdx = i;
				maxVotes = votes[i];
			}
		}

		return classIdx;
	}

	/**
                    * Predict readable class name
                    */
	const char *predictLabel(float *x)
	{
		return idxToLabel(predict(x));
	}

	/**
                    * Convert class idx to readable name
                    */
	const char *idxToLabel(uint8_t classIdx)
	{
		switch (classIdx)
		{
		case 0:
			return "Apple";
		case 1:
			return "Banana";
		case 2:
			return "Blackgram";
		case 3:
			return "Chickpea";
		case 4:
			return "Coconut";
		case 5:
			return "Coffee";
		case 6:
			return "Cotton";
		case 7:
			return "Grapes";
		case 8:
			return "Jute";
		case 9:
			return "Kidneybean";
		case 10:
			return "Lentil";
		case 11:
			return "Maize";
		case 12:
			return "Mango";
		case 13:
			return "Mothbean";
		case 14:
			return "Mungbean";
		case 15:
			return "Muskmelon";
		case 16:
			return "Orange";
		case 17:
			return "Papaya";
		case 18:
			return "Pigeonpeas";
		case 19:
			return "Pomegranate";
		case 20:
			return "Rice";
		case 21:
			return "Watermelon";
		default:
			return "Houston we have a problem";
		}
	}

  protected:
	/**
                    * Compute gaussian value
                    */
	float gauss(float *x, float *theta, float *sigma)
	{
		float gauss = 0.0f;

		for (uint16_t i = 0; i < 5; i++)
		{
			gauss += log(sigma[i]);
			gauss += abs(x[i] - theta[i]) / sigma[i];
		}

		return gauss;
	}
};
} // namespace Port
} // namespace ML
} // namespace Eloquent