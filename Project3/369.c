//369.c 조건문,반복문,369있으면 '짝' 아니면 숫자 출력

#include <stdio.h>


void check369(int);
int main() {
	int num = 0;
	printf("369게임 환영합니다!\n");
	printf("언제까지 합니까? >>> ");
	scanf_s("%d", &num);

	check369(num);

	return 0;
}
void check369(int num) {
    for (int i = 1; i <= num; i++) {
        int n = i;
        int clap = 0;

        while (n > 0) {
            int digit = n % 10;
            if (digit == 3 || digit == 6 || digit == 9) {
                clap++;
            }
            n /= 10;
        }

        if (clap == 0) {
            printf("%d ", i);
        }
        else {
            for (int j = 0; j < clap; j++) {
                printf("짝");
            }
            printf(" ");
        }
    }
    printf("\n");
}


