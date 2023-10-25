#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a = 5000;
	float b, c, d, e, f;
	for (int p = 0; p < 15; p++) {
		b = a*1.1;
		c = a*1.105;
		d = a*1.11;
		e = a*1.115;
		f = a*1.2;
	}
	printf("10 is %f\n", b);
	printf("10.5 is %f\n", c);
	printf("11 is %f\n", d);
	printf("11.5 is %f\n", e);
	printf("12 is %f\n", f);
	return 0;
}