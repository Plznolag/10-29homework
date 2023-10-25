#include <stdio.h>

int main()
{
	for (int i = 0; i <= 5; i++) {
		for (int j = 5; j - i > 0; j--) {
			printf(" ");
		}
		for (int k = 0; k < i*2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j - i <= 0; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 9 - 2*i; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}