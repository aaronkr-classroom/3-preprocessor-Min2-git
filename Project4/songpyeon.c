#include <stdio.h>

int main() {
    int riceCakes = 0;
    int total_rice_cakes = 0;
    int userInput;

    while (total_rice_cakes < 10) {
        printf("지금: %d 송편\n", total_rice_cakes);
        printf("몇 개 더 먹을래? (1-5): ");
        scanf_s("%d", &riceCakes);

        if (riceCakes > 5 || riceCakes < 1) {
            printf("1-5개만 한꺼번에 먹을 수 있어서 다시 시도해 보세요\n");
            continue;
        }

        total_rice_cakes += riceCakes;

        do {
            printf("지금: %d 송편, 계속합니까?\n", total_rice_cakes);
            printf("0: 종료, 1: 계속 >>> ");
            scanf_s("%d", &userInput);
            if (userInput != 1 && userInput != 0) {
                printf("잘못 입력해서 다시 시도해주세요.\n");
            }
        } while (userInput != 1 && userInput != 0);

        if (userInput == 0) {
            printf("종료하겠습니다....\n");
            break;
        }
    }

    printf("게임오버: 지금: %d 송편\n", total_rice_cakes);

    if (total_rice_cakes >= 10) {
        printf("맛있게 드십시오~~~ 추석 잘 보내세요~~~\n");
    }
    else {
        printf("충분하지 않을텐데...\n");
    }

    return 0;
}
