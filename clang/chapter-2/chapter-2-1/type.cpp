#include <stdio.h>

int main(void) {
    int num1, num2;
    int goukei = 0;
    float sr_num = 3.14;
    double dr_num = 3.141592653589;

    num1 = 1;
    num2 = -2;
    goukei = num1 + num2;
    printf("num1とnum2の合計は%dです\n", goukei);
    printf("float型変数sr_numの値は%fです\n", sr_num);
    printf("double型変数dr_numの値は%fです\n", dr_num);

    return 0;
}