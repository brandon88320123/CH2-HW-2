#include <stdio.h>
#include <math.h>

int main()
{
	float principle, rate, time, CI;

	
	printf("Enter principle (amount): ");
	scanf_s("%f", &principle);

	printf("Enter time: ");
	scanf_s("%f", &time);

	printf("Enter rate: ");
	scanf_s("%f", &rate);

	
	CI = principle * (pow((1 + rate / 100), time));

	
	printf("Compound Interest = %f", CI);

	return 0;
}