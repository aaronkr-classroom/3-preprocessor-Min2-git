//shift.c
#include <stdio.h>

int main(void)
{
	int num = 8;
	//왼쪽 쉬프트 연산자를 사용하면 곱하기
	int mulBy2 = num << 1; // num * 2
	int mulBy4 = num << 2; // num * 4 (num * 2^2)
	int mulBy8 = num << 8; // num * 8 (num * 2^3)

	//오른쪽 쉬프트 연산자를 사용하면 나누기
	int divBy2 = num >> 1; // num / 2
	int divBy4 = num >> 2; // num / 4 (num / 2 ^ 2)
	int divBy8 = num >> 3; // num / 8 (num / 2 ^ 3)

	//결과 출력하기
	printf("Original: %d", num);
	printf("num << 1: %d", mulBy2);
	printf("num << 2: %d", mulBy4);
	printf("num << 3: %d", mulBy8);
	printf("num << 1: %d", divBy2);
	printf("num << 2: %d", divBy4);
	printf("num << 3: %d", divBy8);
	return 0;
}