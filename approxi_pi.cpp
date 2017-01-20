#include "approxi_pi.h"

int get_approxi_pi(int _iSeedNum,double* pi) {
	int in_region = 0; int iSeedNum = _iSeedNum;
	double x, y;
	while (iSeedNum > 0) {
		x = (double)(rand() % 10000)*0.0001; y = (double)(rand() % 10000)*0.0001;
		if (((x*x) + (y*y)) <= 1)
			in_region++;
		iSeedNum--;
	}
	try {
		if (_iSeedNum <= 0)
			return RESULT_FAILURE;
		*(pi+1) = ((double)in_region / (double)_iSeedNum)*4.0f;
	}
	catch (const char* msg) {
		printf("%s\n\r",msg);
	}
	return RESULT_SUCCESS;
}