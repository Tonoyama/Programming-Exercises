#include <stdio.h>

int main(void)
{
	printf("%d：標準\n", 123);
	printf("%5d：全5桁\n", 123);
	printf("%05d：さらに0で埋める\n", 123);
	printf("%-5d：あるいは左詰め\n", 123);
	printf("%f：標準\n", 10.5);
	printf("%.2f：小数点以下2桁\n", 10.5);
	printf("%7.2f：さらに全7桁\n", 10.5);
	printf("%-7.2f：さらに左詰め\n", 10.5);
	printf("%e：標準（指数）\n", 10.5);
	printf("%7.2e：全・小数桁数指定\n", 10.5);

	return 0;
}