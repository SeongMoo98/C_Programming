#include<stdio.h>

int GX = 12345;
void f(), g();

int count()
{
	static n = 0; //���� �������� �ڷ��� Ÿ���� �����Ǿ����Ƿ� �ڵ����� int��
	//�������� �ʱ�ȭ : ��� ���������� �ʱ�ȭ�ؾ��Ѵ� ���ϸ� 0���� �ʱ�ȭ
	return ++n;
}
int main()
{
	////����, ������ ����
	//printf("[main ����]\n");
	//printf("\tGX= %d\n\n", GX);
	//f();
	////������ ���� GX�� ���Լ����� ��κ����ִ� , GX�� ��������
	////�ٸ� ���Ͽ��� GX�� ������ extern int GX;������ ���־���Ѵ�

	int i;
	for (i = 0; i < 5; ++i)
	{
		printf("count = %d\n", count());
	}
	f();




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

