#include <stdio.h>

int main(void)
{

	int ago = 24;
	unsigned int count = 3000000000;
	float score = 93.5f;
	const char* title = "Basic Constants";
	const char* name = "seong heon";
	char intial = name[0];
	printf("===%s===\n name \t : %s\n\n intial : %c\n age : %d\n score \t : %.6f\n count \t : %u\n", title, name, intial, ago, score, count);
	return 0;
}