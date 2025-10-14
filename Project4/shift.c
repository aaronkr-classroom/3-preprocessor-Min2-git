#include <stdio.h>

int main() {
	int num = 8;

	int mulBy2 = num << 1;
	int mulBy4 = num << 2;
	int mulBy8 = num << 3;


	int divBy2 = num << 1;
	int divBy4 = num << 2;
	int divBy8 = num << 3;


	printf("Original: %d\n", num);
	printf("num << 1: %d\n", mulBy2);
	printf("num << 2: %d\n", mulBy4);
	printf("num << 3: %d\n", mulBy8);
	printf("num >> 1: %d\n", divBy2);
	printf("num >> 2: %d\n", divBy4);
	printf("num >> 3: %d\n", divBy8);

	return 0;
}