#include<stdio.h>


int sum(int a[10]); //�迭 �μ�����
int sum1(int a[], int length); //�迭 ũ������

//�Ű������� ���� �迭���� ����
#define NON 5 //NON=number of number
int sum2(int a[], int length);
void read(int a[], int length);
int main_array(void)
{
	//�迭
	//int x[5],i;

	//printf("�ټ� ���� ������ �Է����ּ���.\n");
	//for (i = 0; i < 5; i++) //�迭�� 0���� ����, �迭�� ����ϱ⿡�� for���� ����
	//{
	//	scanf_s("%d", &x[i]);
	//}
	//printf("�Էµ� ������ �������� ����ϸ� ������ �����ϴ�.\n");
	//for (int j = 4; j >= 0; j--)
	//{
	//	printf("%d ", x[j]);
	//}
	//printf("\n");

	////�迭 ����� �ʱ�ȭ
	//int x[] = { 1,2,3,4,5 };

	//printf("�迭 �̸� ��		x = %8u\n", x); //�迭�̸��� �迭�� �Ҵ�� �޸� ������ �����ּ�(base address��
	//printf("�迭 ��ü ũ��		sizeof(x)=%8d\n", sizeof(x));
	//printf("�迭 ���� ũ��		sizeof(x[0])=%8d\n", sizeof(x[0])); //int�� �޸� 4����Ʈ


	////�迭�μ�����
	//int x[] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("1 + 2 + ... + 10 = %d\n", sum(x)); //sum(x) �迭�̸��� ����


	////�迭ũ������
	//int x[] = { 1,2,3,4,5,6,7,8,9,10 };
	//const int xLen = sizeof(x) / sizeof(x[0]); //sizeof(x)->�迭�� ũ��=40byte,sizeof(x[0])->�迭 ������ ũ�� = 4byte -->�迭�� ����->�迭�� ũ�⸦ ���� 
	//int y[] = { 2,4,6,8,10};
	//const int yLen = sizeof(y) / sizeof(y[0]);

	//printf("1 + 2 + ... + 10 = %d\n", sum1(x, xLen));
	//printf("2 + 4 + ... + 10 = %d\n", sum1(y, yLen));


	//�Ű������� ���� �迭 ���� ����
	int x[NON];
	read(x, NON); // read �Լ��� x���� ���� ä���߰� sum�� x�� �������� ����
	printf("�Է��� ������ ���� %d�Դϴ�.\n", sum2(x, NON));
	return 0;




	return 0;
}
//�迭 �μ�����
int sum(int a[10])//�Ű����� ����� �迭�� ũ��� ���õ� <-> int sum(int a[])
{
	int sum = 0, i;
	for (i = 0; i < 10; i++)
	{
		sum += a[i];
	}
	return sum;
}
//�迭 ũ������
int sum1(int a[], int length)
{
	int sum1 = 0, i;
	for (i = 0; i < length; i++)
	{
		sum1 += a[i];
	}
	return sum1;
}

//�Ű������� ���� �迭 ���� ����
int sum2(int a[], int length)
{
	int sum2 = 0, i;
	for (i = 0; i < length; i++)
	{
		sum2 += a[i];
	}
	return sum2;
}

void read(int a[], int length)
{
	int i;
	printf("%d ���� ������ �Է��ϼ��� :", length);
	for (i = 0; i < length; i++)
	{
		scanf_s("%d", &a[i]);
	}
}