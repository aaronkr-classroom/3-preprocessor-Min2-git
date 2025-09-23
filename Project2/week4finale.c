#include <stdio.h>

int main() {
    int data = 5, result = 0;


    result = data % 2;
    printf("Q1: data %% 2 => result: %d\n", result);

  
    data = 5; result = 0;
    // Q2
    result = data < 5;
    printf("Q2: data < 5 => result: %d\n", result);


    data = 5; result = 0;
    // Q3
    result = data < 4 + 3;
    printf("Q3: data < 4 + 3 => result: %d\n", result);


    data = 5; result = 0;
    // Q4
    result = data++ + 2;
    printf("Q4: data++ + 2 => result: %d, data: %d\n", result, data);

   
    data = 5; result = 0;
    // Q5
    result = data == 5;
    printf("Q5: data == 5 => result: %d, data: %d\n", result, data);


    data = 5; result = 0;
    // Q6
    result = data != 5 && (data = 0);
    printf("Q6: data != 5 && (data = 0) => result: %d, data: %d\n", result, data);


    data = 5; result = 0;
    // Q7
    result = --result && (data = 0);
    printf("Q7: --result && (data = 0) => result: %d, data: %d\n", result, data);

    
    data = 5; result = 0;
    // Q8
    result = result-- && (data = 0);
    printf("Q8: result-- && (data = 0) => result: %d, data: %d\n", result, data);

    
    data = 5; result = 0;
    // Q9
    result = result-- || (data = 0);
    printf("Q9: result-- || (data = 0) => result: %d, data: %d\n", result, data);

    return 0;
}
