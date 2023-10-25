#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1,num3;
	float num2,a;
	printf("Enter loan principal (-1 to end):");
	scanf("%d", &num1);
	printf("Enter interest rate:");
	scanf("%f", &num2);
	printf("Enter term of the loan in days:");
	scanf("%d", &num3);
	if (num1 != -1) {
		a = num1*num2*num3/365;
		printf("Salary is: $%f\n",a);
	}

	system("pause");
	return 0;
}
