#include <stdio.h>
#define PRINT(x) printIntVar(#x,x) 


void printIntVar(const char* name, int value);

int main(void)
{
	////�������� ������
	//int i = 5;
	//int *pi = &i;
	//int **ppi = &pi; // ppi�� ������ ������ ����ų�� �ִ� ������

	//PRINT(i);
	//PRINT(*pi);
	//PRINT(**ppi);

	//**ppi += 12340;
	//PRINT(**ppi);
	//PRINT(*pi);
	//PRINT(i);


	//char aa[4][5] = { "This","That","Here","Hour" }; //�迭�� �迭
	//// [4][5]���� [5] �迭 �������� \0 �� �� ���ڿ��� �����ٰ� ǥ�� �׷��� [5]
	//// T h i s \0
	//// T h a t \0
	//// H e r e \0
	//// H o u r \0
	//char(*ap)[5]; //�迭 ������

	//char** pp;//�������� ������

	//char* pa[4] = { "This", "is","pointer","array" }; //������ �迭

	//const int n1 = sizeof aa / sizeof * aa;
	//const int n2 = sizeof pa / sizeof * pa;

	//ap = aa; //�迭 ������=�迭�� �迭
	//pp = pa;//�������� ������ = ������ �迭

	//printf("[Array Pointer]\n");
	//for (int i = 0; i < n1; ++i)
	//{
	//	printf("%p : %s\n", ap + i, ap[i]); //%p ������ ���·� ��� , char* �� %s�� ��� -���ڿ� �� �� \0�� �����ҋ� ���� ��� or .n���� ��õ� ���е� n���ڸ�ŭ ���
	//}

	//printf("\n");

	//printf("[Pointer Pointer}\n");
	//for (int i = 0; i < n2; ++i)
	//{
	//	printf("%p : %s\n", pp + i, pp[i]);
	//}




	return 0;
}

void printIntVar(const char* name, int value)
{
	printf("%s\t=%d\n", name, value);
}