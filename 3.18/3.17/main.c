#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2;

	printf("Enter sales in dollars (-1 to end): ");
	scanf("%d", &num1);

	if (num1 != -1) {
		num2 = (num1/100)*9 + 200;
		printf("Salary is: $%d\n", num2);
	}

	system("pause");
	return 0;
}
