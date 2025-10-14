#include <stdio.h>


void PrintMenu ()
int main() {
	int audience;
	int choice;


	printf("=== K-pop Concert Gane ===\n");
	printf("기본 관객 수를 입력하세요:");
	scanf_s("%d", &audience);

	while (1) {
		printf("\n현재 관객 수: %d\n");
		printf("");

		switch(choice) {
		case 1: audience = audience << 1;
			printf("(!) 홍보 대성공! 관객이 2배로 증가!\n");
			break;
		case 2: audience = audience << 2;
			printf("(!!) 바이럴 영상 효과! 관객이 4배로 증가!\n");
			break;
		case 3: audience = audience << 3;
			printf("(!!!) 슈퍼스타 등장! 관객이 8배로 증가!\n");
			break;
		case 4: audience = audience >> 1;
			printf("(ㅠ) 일부 티켓 매진! 관객이 2배로 감소!!\n");
			break; 
		case 5: audience = audience >> 2;
			printf("(ㅠㅠ) 제한 조치로 관객이 4배로 감소!!\n");
			break;
		case 6: audience = audience >> 3;
			printf("(ㅠㅠㅠ) 조기 종료! 관객이 8배로 감소!!\n");
			break;
		case 7: audience = audience << 1;
			printf("(GAMEOVER) 콘서트 종료!\n최종관객수:%d\n",audience);
			break;
		default:
			printf("(X) 잘못된 입력입니다!\n");
		}
	}

	return 0;
}
void printMenu() {
	pritnf("1. 관객 2 배(<<1)\n");
	pritnf("2. 관객 4 배(<<1)\n");
	pritnf("3. 관객 6 배(<<1)\n");

	pritnf("4. 관객 1/2 배(>>1)\n");
	pritnf("5. 관객 1/4 배(>>2)\n");
	pritnf("6. 관객 1/8 배(>>3)\n");

	pritnf("7. 콘서트 종료\n");
	printf("선택 (1-7): ");

}