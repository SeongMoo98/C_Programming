#include <stdio.h>
int leftBitCount(int x);
int main(void)
{
	printf("%d", leftBitCount(30));




	return 0;
}
int leftBitCount(int x) {
    x = ~x;
    int zero = 0x00;

    int Num_zero = !(x >> 16);
    int n = Num_zero << 4;
    zero = n;
    x = x << n;

    Num_zero = !(x >> 24);
    n = Num_zero << 3;
    zero = zero + n;
    x = x << n;

    Num_zero = !(x >> 28);
    n = Num_zero << 2;
    zero = zero + n;
    x = x << n;

    Num_zero = !(x >> 30);
    n = Num_zero << 1;
    zero = zero + n;
    x = x << n;

    zero = zero + !(x >> 31) + !(x >> 30);
    return zero;
}
