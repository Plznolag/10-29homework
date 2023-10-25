#include <stdio.h>
#include <stdlib.h>

int main() {
	float num1, num2 , num3;

	printf("Enter # of hours worked (-1 to end):");
	scanf("%f", &num1);
	printf("Enter hourly rate of the worker ($00.00):");
	scanf("%f", &num2);
	

	if (num1 != -1) {
		
		num3 = num1 * num2;
		if (num1 > 40) {
			num3 = num1 * num2 + num2 / 2;
		}
		printf("Salary is $ %f", num3);
	}

	system("pause");
	return 0;
}
