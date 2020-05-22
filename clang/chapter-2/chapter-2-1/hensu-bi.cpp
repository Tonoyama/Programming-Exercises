#include <stdio.h>

int main (void) {
    int num1 = 12;
    int num2 = 34;
    int s1 = 0;

    int qi_num_1 = 2.0;
    int qi_num_2 = 3.0;

    int qi = 0;
    float qf = 0;
    
    s1 = num1 + num2;

    qi = qi_num_1 / qi_num_2;
    qf = qi_num_1 / qi_num_2;

    printf("合計値s1は%d\n", s1);
    printf("割り算qiは%d\n", qi);
    printf("割り算qfは%f\n", qf);
}