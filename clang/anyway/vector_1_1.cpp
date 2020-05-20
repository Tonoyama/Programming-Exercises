#include <stdio.h>
#define N (2)

double inner_product(double x[], double y[], int n) {
    int i;
    double s;
    s = 0.0;
    for (i = 0; i < n; i++)
        s += x[i] * y[i];
    return s;
}

int main(void) {

int i;

double a[N], b[N];

printf("二つの %d 次元ベクトルの内積を計算します。\n", N);
printf("一つ目のベクトル a の入力\n");
for (i = 0; i < N; i++) {
    printf(" %d 番目の成分=", i + 1); scanf("%lf", &a[i]);
}
printf("二つ目のベクトル b の入力\n");
for (i = 0; i < N; i++) {
    printf(" %d 番目の成分=", i + 1); scanf("%lf", &b[i]);
}
printf("内積=%g\n", inner_product(a, b, N));
    return 0;
}