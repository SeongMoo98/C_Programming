#include <stdio.h>


extern int GX; //외부 전역변수 - 다른파일의 전역변수를 쓰기위해 extern선언을 해야함
int LY = 32109; // 전역변수

void h()
{
	printf("[h에서]\n");
	printf("\tGx=%d\n", GX);
	printf("\tLY=%d\n\n", LY);

}