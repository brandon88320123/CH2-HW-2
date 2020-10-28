#include <stdio.h>
#include <stdlib.h>

int main() {

	float sales;
	printf("Enter Sales In Dollars (-1 to end) ");
	scanf_s("%f", &sales);
	while (sales >= 0) {
		float salary = 200 + (sales*0.09);
		printf("Salary is : $%.2f\n\n", salary);
		printf("Enter Sales In Dollars (-1 to end) ");
		scanf_s("%f", &sales);
	}

	return 0;
}




