#include <stdio.h>
#include<math.h>
//void ������
void print_addr(const char* name, void* p) //const char *name ??
{
	printf("%s�� �ּ� = %p\n", name, p);
}

//void�����Ϳ� ���� ��������
#define INT 0
#define DOUBLE 1
void generic_print(int type, char* name, void* p)
{
	printf("%s =", name);
	switch (type)
	{
	case INT:
		printf("%d\n", *(int*)p);
		break;
	case DOUBLE:
		printf("%f\n", *(double*)p);
		break;
	default:
		printf("...\n");
		break;
	}
}



//�Լ� ������
void printDec(int i);
void printOct(int i);

//�Լ������ͷ� ��ձ��ϱ�
double a_mean(double a, double b);
double h_mean(double a, double b);
double g_mean(double a, double b);

int main(void)
{
	////void ������
	//int i = 19100829;
	//double f = 3.141592;

	//printf("I�� �ּ� = %p\n", &i);
	//printf("f�� �ּ� = %p\n", &f);
	////-> �Լ���

	/*int i = 19100829;
	double f = 3.141592;
	print_addr("i", &i);
	print_addr("f", &f);*/



	////void �����Ϳ� ���� ��������
	int i = 19100829;
	double f = 3.141592;
	generic_print(INT, "i", &i);
	generic_print(DOUBLE, "f", &f);



	////�Լ� ������
	//void(*fp)(int); //�Լ� ������
	//int i;
	//printf("�ڿ��� �ϳ��� �Է��ϼ���.");
	//scanf_s("%d", &i);

	//fp = printOct;
	//fp(i);

	//fp = printDec;
	//fp(i);

	
	
	////�Լ������ͷ� ��ձ��ϱ�
	//double x, y;
	//int sel;
	//char* name[] = { "������", "��ȭ���", "�������" };
	//double(*fun[])(double , double ) = { a_mean,h_mean,g_mean }; //�Լ� ������ �迭 fun
	//int size = sizeof name / sizeof name[0];
	//
	//printf("����� ���� �� ���� �Է��ϼ��� :");
	//scanf_s("%lf %lf", &x, &y);

	//printf("\n� ����� ���ϰ� �����Ű���?\n");
	//for (int i=0; i < size; ++i)
	//{
	//	printf("   %d. %s\n", i + 1, name[i]);
	//}
	//printf("��ȣ�� �Է��� �ּ���.");
	//scanf_s("%d", &sel);
	//while (sel < 1 || sel>3)
	//{
	//	printf("�ٽ� ��ȣ�� �Է��� �ּ���.");
	//	scanf_s("%d", &sel);
	//}
	//printf("\n�����Ͻ� %s�� %lf", name[sel - 1], fun[sel - 1](x, y));


	return 0;
}




//�Լ� ������
void printDec(int i)
{
	printf("���� ǥ�� : %5d\n",i);
}

void printOct(int i)
{
	printf("���� ǥ�� : %5o\n",i);
}

//�Լ� �����ͷ� ��� ���ϱ�
double a_mean(double a, double b) //������
{
	return (a + b) / 2;
}
double h_mean(double a, double b) //��ȭ���
{
	return (2 * a * b) / (a + b);
}
double g_mean(double a, double b) //�������
{
	return sqrt(a * b);
}