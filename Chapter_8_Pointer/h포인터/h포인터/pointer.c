#include <stdio.h>


//������
void printIntVar(char* name, int value);

//������ �μ�����
void printAB(int a, int b);
void swap(int a, int b);
void swap1(int* p, int* q);

int main(void)
{
	
	////������
	//int one = 1;
	//int* to_one;
	//to_one = &one;

	//printIntVar("one", one);
	//*to_one = one + 1;
	//printIntVar("one", one);
	//*to_one = one + 1;
	//printIntVar("one", one);
	//(*to_one)++;
	//printIntVar("one", one);

	/*int n;

	printf("���� n�� �Է��� �ּ��� :");
	scanf_s("%d", &n);

	printIntVar("n", n);
	printIntVar("*&n", *&n);*/


	//������ �μ� ���޷� ������ ��ȯ
	//int a = 2, b = 3;
	//int temp;
	//printAB(a, b);
	//temp = a; //temp���� a�� ����
	//a = b; //a���� b���� ����
	//b = temp; //temp���� a�� �����ϱ� b�� temp�� ����
	//printAB(a, b);


	//int a = 2 , b = 3;
	//printAB(a, b);
	//swap(a, b);
	//printAB(a, b);
	////�̷��� ��ȯ�� �����ʴ´�
	////��? swap�Լ��� a,b�� main�� a,b�� �ƴ϶� main�� ����� ���� ���̴�.


	//int a = 2 , b = 3;
	//printAB(a, b);
	//swap1(&a, &b);
	//printAB(a, b);
	////swap1���� main�� a,b�� �ּҸ� �˰������Ƿ� �̵� �������� �����Ҽ� �ִ�.


	return 0;
}
void printIntVar(char* name, int value)
{
	printf("%s\t=%d\n", name, value);
}

void printAB(int a, int b)
{
	printf("�� ���� ���� ������� ����ϸ� %d, %d�Դϴ�.\n",a, b);
}

void swap(int a, int b)
{
	int temp;

	temp = a; 
	a = b; 
	b = temp; 
}
void swap1(int *p, int *q)
{
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}