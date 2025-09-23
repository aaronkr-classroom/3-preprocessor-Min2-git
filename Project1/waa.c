#include <stdio.h>
#define NAME "Aaron"

int main(void) {
    for (int i = 1; i <= 100; i++) {
        printf("(%d)\tMy name is %s!\n", i, NAME);
    }

    return 0;
}