#include <stdio.h>
int GX = 12345; //��������
static int LX = 67890;//���Ϲ�������
void f();
void g();
extern void h();

int main(void)
{
	printf("[main ����]\n");
	printf("\tGX=%d\n\n", GX);
	f();
	h();


	return 0;
}


void f()
{
	printf("[f ����]\n");
	printf("\tGX = %d\n\n", GX);
	g();
}
void g()
{
	printf("[g ����]\n");
	printf("\tGX = %d\n\n", GX);
}