#include <stdio.h>
int GX = 12345; //전역변수
static int LX = 67890;//파일범위변수
void f();
void g();
extern void h();

int main(void)
{
	printf("[main 에서]\n");
	printf("\tGX=%d\n\n", GX);
	f();
	h();


	return 0;
}


void f()
{
	printf("[f 에서]\n");
	printf("\tGX = %d\n\n", GX);
	g();
}
void g()
{
	printf("[g 에서]\n");
	printf("\tGX = %d\n\n", GX);
}