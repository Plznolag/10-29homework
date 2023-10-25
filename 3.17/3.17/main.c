#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1,num2,num3,num4,num5,num6;

	
	do {
		printf("Enter account number (-1 to end):");
		scanf("%d", &num1);
		printf("Enter beginning balance:");
		scanf("%d", &num2);
		printf("Enter total charges:");
		scanf("%d", &num3);
		printf("Enter total credits:");
		scanf("%d", &num4);
		printf("Enter credit limit:");
		scanf("%d", &num5);
		printf("Account:%d\n", num1);
		printf("Credit 1imit: $ %d\n", num5);
		num6 = num2 + num3 - num4;
		printf("Balance:%d\n", num6);
		if (num6 > num5) {
			printf("Credit Limit Exceeded\n");
		}
	} while (num1 != -1);
		

	return 0;
}
