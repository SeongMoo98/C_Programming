#include <stdio.h>
#include <stdlib.h> // �̰� ����
#include <time.h> //srand�Լ� ����� ���� include


#define NUM 10 //�߻���ų ���� ����
#define LB 0 //���� �߻����� ( LB����, UB ����)
#define UB 20

void star(int n);
void histogram(int a[], int n);
void set_seed();
int range_rand(int lower, int upper);
void init(int a[], int n);

int main(void)
{
	//�ʱ� �߻������� �����ϰ� NUM���� ������ �߻����� a�� �����Ѽ� a�� ���� ������׷��� ���
	int a[NUM];
	set_seed();
	init(a, NUM);
	histogram(a, NUM);


	return 0;
}



// n���� *�� ��� 
void star(int n)  //-->�� ����
{
	while (n-- > 0)
	{
		putchar('*');
	}
}

//�� �迭���ҿ� ���� ÷�ڰ��� ���Ұ��� ����ϰ� ���� ������ŭ ��ǥ�� ���
void histogram(int a[], int n) 
{
	for (int i = 0; i < n; i++)
	{
		printf("%2d [%3d]", i, a[i]);
		star(a[i]);
		printf("\n");
	}
}

//�ʱ� �߻� ���� ����
void set_seed()
{
	//rand �� �����ϴ� �ʱⳭ�� ����
	srand((unsigned int)time(NULL)); //unsigned�� �� �ϴ°Ű�
}

//lower �̻� upper���� ������ ������ �߻����� �ǵ�����
int range_rand(int lower, int upper)
{

	int width = upper - lower - 1;
	int value = rand() % width + lower;
	return value;
}

//LB~UP ������ n���� ������ �߻����� �迭 a�� �� ���ҿ� ����
void init(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = range_rand(LB, UB);
	}
}