#include <stdio.h>

void Test1(short data) {
	short soft = 0;
	soft = data;
	printf("soft = %d\n", soft);

}


void Test2(short* ptr) {
	short soft = 0;
	soft = *ptr;
	printf("soft = %d\n", soft);

	*ptr = 3; //tips 변수


}

int main() {
	short tips = 5;
	printf("tips = %d\n", tips);

	Test1(tips); // tips 변수의 갑 주기
	printf("Test1 후, tips = %d\n", tips);

	Test2(&tips); // tips 변수 의 주소 주기
	printf("Test2 후, tips = %d\n", tips);
		
	return 0;
}