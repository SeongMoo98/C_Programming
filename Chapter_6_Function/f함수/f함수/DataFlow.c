#include<stdio.h>

int read_int();
void print_sign(int n);

int main_dataflow(void)
{
	int num;
	num = read_int();
	print_sign(num);//�����帧 : read_int�Լ��� �а�ͼ� print_sign�Լ��� ����

	return 0;
}

int read_int()
{
	int num;
	printf("������ �ϳ� �Է��ϼ���.");
	scanf_s("%d", &num);

	return num; //�ڷ��帧 : num�� read_int�� ��
}

void print_sign(int n) //�ڷ��帧 : n�� num���� ��
{
	if (n > 0)
	{
		printf("����Դϴ�.\n");
	}
	else if (n < 0)
	{
		printf("�����Դϴ�.\n");
	}
	else
		printf("����� ������ �ƴմϴ�.\n");
}

