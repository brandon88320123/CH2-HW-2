#include <stdio.h>
#include <stdlib.h>


int main() {

	float p, r;
	int d;
	printf("Enter Loan Principal (-1 to end) ");
	scanf_s("%f", &p);
	while (p >= 0) {
		printf("Enter interest rate :");
		scanf_s("%f", &r);
		printf("Enter term of loan in days :");
		scanf_s("%d", &d);

		float salary = (p*r*d) / 365;
		printf("The interest charge is : $%.2f\n\n", salary);
		printf("Enter Loan Principal (-1 to end) ");
		scanf_s("%f", &p);
	}

	return 0;
}