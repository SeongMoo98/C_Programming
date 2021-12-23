#include<stdio.h>

int read_int();
void print_sign(int n);

int main_dataflow(void)
{
	int num;
	num = read_int();
	print_sign(num);//제어흐름 : read_int함수를 읽고와서 print_sign함수를 읽음

	return 0;
}

int read_int()
{
	int num;
	printf("정수를 하나 입력하세요.");
	scanf_s("%d", &num);

	return num; //자료흐름 : num이 read_int로 감
}

void print_sign(int n) //자료흐름 : n이 num으로 감
{
	if (n > 0)
	{
		printf("양수입니다.\n");
	}
	else if (n < 0)
	{
		printf("음수입니다.\n");
	}
	else
		printf("양수도 음수도 아닙니다.\n");
}

