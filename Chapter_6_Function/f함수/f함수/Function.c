#include <stdio.h>

int add1(int x)
{
	return (x + 1);
}
double half(int x)
{
	return(x / 2.0);
}

int add1(int x); // add1�� ���� : ������ Ÿ��
double half(int x);

void print_add1_half(int x);//void �Լ�(���ν���)

//top_down
int read_int();  //3���� �Լ��� '��ü����'�� ����ϴµ� �ʿ��� �Ѽ��� 
void print_next(int num);
void print_half(int num);

int main_funcion(void)
{
	//int num;
	//printf("������ �ϳ� �Է��ϼ���.");
	//scanf_s("%d", &num);

	//printf("\n");
	//printf("%d�� �ٷ� ���� ������ %d�̰�\n", num, add1(num));
	//printf("%d�� ���� %.1f�Դϴ�.\n", num, half(num));
	//printf("���� �°� ��� �߳���?");

	//int num;
	//printf("������ �ϳ� �Է��ϼ���.");
	//scanf_s("%d", &num);

	//printf("\n");
	//printf("%d�� �ٷ� ���� ������ %d�̰�\n", num, add1(num));
	//printf("%d�� ���� %.1f�Դϴ�.\n", num, half(num));
	//printf("���� �°� ��� �߳���?");

	////���ν���
	//int num ;
	//printf("������ �ϳ� �Է��ϼ���.");
	//scanf_s("%d", &num);
	//print_add1_half(num);


	//top-down
	//�Լ� main���� ��ü������ ����Ѵ�
	//'��ü�Լ��� ����ϴµ� �ʿ��� '���'�� ������ ����� ����
	//'��ü����'�� ����ϴµ� �ʿ��� '����'�� �Լ��� �̿��Ѵ�
	int num;
	num = read_int();
	print_nuxt(num);
	print_half(num);



	return 0;
}

void print_add1_half(int num)
{
	printf("\n");
	printf("%d�� �ٷ� ���� ������ %d�̰�\n", num, add1(num));
	printf("%d�� ���� %.1f�Դϴ�.\n", num, half(num));
	printf("���� �°� ��� �߳���?");
}



int read_int()
{
	int num;
	printf("������ �ϳ� �Է��ϼ���.");
	scanf_s("%d", &num);
	return num;
}
void print_next(int num)
{
	printf("%d�� �ٷ� ���� ������ %d�̰�\n", num, num + 1);
}
void print_half(int num)
{
	printf("%d�� ���� %.1f�Դϴ�.\n", num, num / 2.0);
}


