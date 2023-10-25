#include <stdio.h>

int main() {
	int a;
	printf("choose 1~4\n");
	scanf("%d", &a);
	switch (a) {
	case 1:
		for (int i=1; i < 11; i++) {
			for (int j = 1; j <=i; j++) {
				printf("*");
			}
			printf("\n");
		}
		break;
	case 2: 
		for (int i = 1; i < 11; i++) {
			for (int j = 11; j-i > 0; j--) {
				printf("*");
			}
			printf("\n");
		}
		break;

	case 3: 
		for (int i = 1; i <11; i++) {
			for (int j = 1; i-j > 0; j++) {
				printf(" ");
			}
			for (int k = 1; i+k <=11; k++) {
				printf("*");
			}
			printf("\n");
				
			
		}
		break;

	case 4: 
		for (int i = 1; i <= 11; i++) {
			
			for (int k = 1; i + k <= 11; k++) {
				printf(" ");
			}
			
			for (int j = 1; i - j > 0; j++) {
				printf("*");
			}
			printf("\n");


		}
		break;

	}

	return 0;
}