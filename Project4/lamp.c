#include <stdio.h>

unsigned char ResetBit(unsigned char, unsigned char);
unsigned char SetBit(unsigned char, unsigned char);
unsigned char GetBit(unsigned char, unsigned char);

int main() {
    unsigned char lamp_state;
    unsigned char bit_state;

    // ResetBit 테스트
    lamp_state = 0x7F;
    printf("ResetBit: %X -> ", lamp_state);
    lamp_state = ResetBit(lamp_state, 3);
    printf("%X\n", lamp_state);

    // SetBit 테스트
    lamp_state = 0x77;
    printf("SetBit: %X -> ", lamp_state);
    lamp_state = SetBit(lamp_state, 3);
    printf("%X\n", lamp_state);

    // GetBit 테스트
    lamp_state = 0x75;
    printf("GetBit: %X -> ", lamp_state);
    for (int i = 0; i < 8; i++) {
        bit_state = GetBit(lamp_state, 7 - i);
        printf("%d", bit_state);
    }

    printf("\n");
    return 0;
}

unsigned char ResetBit(unsigned char dest_data, unsigned char bit_num) {
    if (bit_num < 8)
        dest_data = dest_data & ~(0x01 << bit_num);
    return dest_data;
}

unsigned char SetBit(unsigned char dest_data, unsigned char bit_num) {
    if (bit_num < 8)
        dest_data = dest_data | (0x01 << bit_num);
    return dest_data;
}

unsigned char GetBit(unsigned char dest_data, unsigned char bit_num) {
    unsigned char bit_state = 0;
    if (bit_num < 8) {
        bit_state = dest_data & (0x01 << bit_num);
        bit_state = bit_state >> bit_num;
    }
    return bit_state;
}
