#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	for (int i = 0; i <= num2; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < num1 - 2; i++) {
		for (int i = 0; i < num2; i++) {
			if (i == 0 || i==num2-1) {
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i <= num2; i++) {
		printf("*");
	}

	system("pause");
	return 0;
}
