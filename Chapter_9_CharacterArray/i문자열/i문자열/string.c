#include <stdio.h>

//���ڿ�
#define MAX 81

//������ �迭
#define MAX_LINE 80
#define MAX_STR 3

int main(void)
{
	////���ڿ�
	//char str[MAX] = "C ���α׷��� !";

	//printf("%s\n", str); //���ڿ��� ����Ҷ� %s

	//for (int i = 0; str[i] != '\0'; i++) //���� �迭 ���Ҹ� �ϳ��� ���,  str[i] != '\0' :���ڿ� ���������� \0�� �����
	//{
	//	printf("%c", str[i]);
	//}
	//printf("\n");


	////�����Ϳ� ���ڿ�
	//char* p;
	//char m[] = "World";
	//p = m;
	//for (int i = 0; i < strlen(m); i++) //�迭 ÷�ڸ� �̿��� ���ڿ�
	//{
	//	printf("%c", m[i]);
	//}
	//printf("\n");

	//for (int i = 0; i < strlen(p); i++) //�����͸� �̿��� ���� �迭�� �� ���Ҹ� ���
	//{
	//	printf("%c", *(p+i));
	//}
	//printf("\n");

	//printf("%s\n", m);//�迭�̸�(���ڿ��� ���� �ּ�)�� �̿��Ͽ� ���ڿ� ���
	//printf("%s\n", p);//�����͸� �̿��� ���ڿ��� ���



	//������ �迭
	char colors[MAX_STR][MAX_LINE] = { "red", "blue","white" };
	char* ptr[MAX_STR];

	for (int i = 0; i < MAX_STR; i++)
	{
		ptr[i] = colors[i]; //���ڿ��� �ּҸ� ������ �迭�� �� ���ҿ� ����
	}

	//�迭�� �̿��� ��������1
	for(int i = 0; i < MAX_STR; i++)
	{
		printf("%s ", &colors[i][0]);
	}
	printf("\n");

	//�迭�� �̿��� ��������2
	for(int i = 0; i < MAX_STR; i++)
	{
		printf("%s ", colors[i]);
	}
	printf("\n");

	//������ �迭�� �̿��� ��������
	for(int i = 0; i < MAX_STR; i++)
	{
		printf("%s ", ptr[i]);
	}

	return 0;
}