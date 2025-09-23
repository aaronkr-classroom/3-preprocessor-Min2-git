#include <stdio.h>

int main(void) {
	int x = 5;
	int y;
	int post, pre;

	printf("x: %d\n", x);
	y = x;
	printf("y: %d\n", y);

	post = x++;
	printf("x++: %d, x: %d\n", post, x);
	printf("x: %d\n", x);

	pre = ++y;
	printf("y++: %d, y: %d\n", pre, y);
	printf("y: %d\n", y);

	return 0;
}