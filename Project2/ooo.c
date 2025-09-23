//order of operation
#include <stdio.h>

int main(void) {
	int a = 3 + 5 * 2 - 5;
	int b = 4 * 2 / 3 + 1;
	double c = 4 * 2. / 3 + 1;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%.5f\n",c);

	return 0;
}