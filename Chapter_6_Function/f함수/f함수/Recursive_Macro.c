#include <stdio.h>

long fact(int n);
#define MAX(x,y)(x>y)? x:y

int main_recursive_macro(void)
{
	int n;
	printf("�ڿ����� �ϳ� �Է��ϼ��� :");
	scanf_s("%d", &n);
	printf("fact(%d) = %ld�Դϴ�.\n", n, fact(n));

	//int i, j;
	//int max;

	//printf("�� ���� �Է��ϼ��� :");
	//scanf_s("%d %d", &i, &j);
	//max = MAX(i, j); //MAX(i,j)�� ��ó���⸦ ��ġ�� (i>j)?i:j�� Ȯ��ȴ�
	//printf("MAX(%d %d)= %d\n", i, j, max);

	return 0;
}

long fact(int n)
{
	if (n == 0)
	{
		return 1L; //�������� long���� �����ؼ� L 
	}
	else
	{
		return n * fact(n - 1); //���ȣ�� -> n���丮��
	}
}

