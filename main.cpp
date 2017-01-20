#include "main.h"

int main(int argc, char** argv) {
	double *pi;
	pi = (double*)malloc(sizeof(double)*2);
	printf("Calculate \"PI\" ...\n\r");
	get_approxi_pi(10000,pi);
	printf("PI : %.8f\n\r", *(pi+1));
	system("pause");
	return RESULT_SUCCESS;
}