#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {


	double hours;
	double pay1; 
	double pay2; 
	double overtime; 
	double overtimepay;

	printf("Enter the amount of hours you've worked this week");
	scanf_s("%lf", &hours);

	pay1 = (hours * 9);
	pay2 = (9 + (9 / 2));

	overtimepay = (hours - 40) * pay2;

	overtime = pay1 + overtimepay;

	if (hours <= 40)
	{
		printf("Your weekly pay is %f\n", pay1);
	}
	else
	{
		printf("Your weekly pay is %f\n", overtime);
	}
	return 0;
}