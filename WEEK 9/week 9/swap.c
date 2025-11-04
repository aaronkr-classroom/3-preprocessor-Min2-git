#include <stdio.h>

void swap_val(int a, int b) {
	int temp = a; // a= 96, b= 5, temp = 96
	a = b;        // 5 5 96
	b = temp;     // 5 96 96

}

void swap_ptr(int* pa, int* pb) {
	int temp = *pa;           //*pa(start) = 96, *pb(end) = 5, temp = 96
	*pa = *pb;                //5 5 96
	*pb = temp;               //5 96 96

}

int main() {
	int start = 96,
	end = 5;

	printf("Swap Value:\n");
	printf("before: start = %d, end = %d\n", start, end);
	if (start > end) swap_val(start, end);
	printf("after: start = %d, end = %d\n", start, end);

	printf("\nSwap Pointer:\n");
	printf("before: start = %d, end = %d\n", start, end);
	if (start > end) swap_ptr(&start, &end);
	printf("after: start = %d, end = %d\n", start, end);



	return 0;
}