#include <stdio.h>
double centi_to_meter(int cm);

int main(void)
{
	double res;

	res = centi_to_meter(187);
	printf("%.21lfm\n", res);
	return 0;
}

double centi_to_meter(int cm)
{
	double meter;
	meter = (double)cm / 100.0;
	return meter;
}
