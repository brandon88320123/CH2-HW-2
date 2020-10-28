#include <stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, rows, columns;

	printf("Please Enter the Number of rows:\n");
	scanf_s("%d", &rows);

	printf("Please Enter the Number of Columns:\n");
	scanf_s("%d", &columns);

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}