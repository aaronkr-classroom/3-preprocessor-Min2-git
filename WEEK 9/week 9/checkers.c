#include <stdio.h>

#define ROWS 8
#define COLS 8

void init_board(int board[ROWS][COLS]) {
    // 모든 위치를 0으로 초기화
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = 0;
        }
    }
}

void setup_board(int board[ROWS][COLS]) {
    // 1 = 빨간 피스, 2 = 검정 피스
    // 빨간색은 위쪽(0~2행), 검정색은 아래쪽(5~7행)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < COLS; j++) {
            if ((i + j) % 2 == 1) {
                board[i][j] = 1; // 빨강
            }
        }
    }

    for (int i = ROWS - 3; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if ((i + j) % 2 == 1) {
                board[i][j] = 2; // 검정
            }
        }
    }
}

void print_board(int board[ROWS][COLS]) {
    // 열 인덱스 출력
    printf("\n  ");
    for (int j = 0; j < COLS; j++) {
        printf("%d ", j);
    }
    printf("\n");

    // 윗 테두리
    printf("  ");
    for (int j = 0; j < COLS; j++) {
        printf("--");
    }
    printf("\n");

    // 보드 출력
    for (int i = 0; i < ROWS; i++) {
        printf("%d|", i);
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == 0) printf(". ");
            else if (board[i][j] == 1) printf("o ");
            else if (board[i][j] == 2) printf("x ");
        }
        printf("|\n");
    }

    // 아랫 테두리
    printf("  ");
    for (int j = 0; j < COLS; j++) {
        printf("--");
    }
    printf("\n");
}

int main() {
    int board[ROWS][COLS];

    init_board(board);
    setup_board(board);
    print_board(board);

    return 0;
}
