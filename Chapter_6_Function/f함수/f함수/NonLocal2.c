#include <stdio.h>


extern int GX; //�ܺ� �������� - �ٸ������� ���������� �������� extern������ �ؾ���
int LY = 32109; // ��������

void h()
{
	printf("[h����]\n");
	printf("\tGx=%d\n", GX);
	printf("\tLY=%d\n\n", LY);

}