#include <stdio.h>

int main(void) {
    // Q1:
    int result = -5;
    if (result < 0) result = result * (-1);
    printf("Q1 : result = %d\n", result);
    


    // Q2
    result = -5;  
    result = (result < 0) ? -result : result;
    printf("Q2 : result = %d\n", result);

    // Q3
    result = 5;
    switch (result) {
    case 6:
        result = 0;
        break;
    case 5:
        result = 1;
    case 4:
        result = result * 10;
        break;
    }
    printf("Q3 : result = %d\n", result);

    return 0;
}
