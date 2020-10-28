#include <stdio.h>
#include <stdlib.h>
int main() {
	int accNum = 0;
	float initBalance = 0, totalCharge = 0, totalCredit = 0, creditLimit = 0, newBalance = 0;
	while (accNum != -1) {
		printf("Enter account number(-1 to end): ");
		scanf_s("%d", &accNum);
		if (accNum == -1)
			break;
		printf("Enter beginning balance: ");
		scanf_s("%f", &initBalance);
		printf("Enter total charges: ");
		scanf_s("%f", &totalCharge);
		printf("Enter total credits: ");
		scanf_s("%f", &totalCredit);
		printf("Enter credit limits: ");
		scanf_s("%f", &creditLimit);
		newBalance = initBalance + totalCharge - totalCredit;
		if (newBalance > creditLimit) {
			printf("Account: %d\nCredit limit: %.2f\nBalance: %.2f\nCredit limit exceeded!\n\n", accNum, creditLimit, newBalance);
		}
		else {
			printf("\n");
			continue;
		}
	}
	system("pause");
	return 0;
}









