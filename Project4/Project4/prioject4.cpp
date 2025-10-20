#include<stdio.h>

#define PI_VALUE 3.14592

int main(void)
{
	int version = 1;
	const int year = 2025;
	const char* title = "C \"prinff\" demo:";
	int widt_demo_num = 123;
	char sample_Char = 'A';
	printf("=== Constants & Formats ===\n");
	printf("Course: C Programming (v%d, %u))\n", version, year);
	printf("title: %s\n", title);
	printf("PI default \t : %f\n,", PI_VALUE);
	printf("PI2 digits \t : %.2f\n", PI_VALUE);
	printf("Width demo \t : [%8d]\n", widt_demo_num);
	printf("Char sample \t : %c\n", sample_Char);
	printf("Backslash \t: \\\n");
	return 0;

}