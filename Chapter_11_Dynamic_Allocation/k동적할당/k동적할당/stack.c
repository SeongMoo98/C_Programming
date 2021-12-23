#include<stdio.h>
#include <stdlib.h>  //exit�Լ� ���
#include "stack.h"


//�����޽��� msg�� ����ϰ� ���α׷��� ������
void error(const char* msg)
{
	printf("���� : %s ",msg);
	printf("���α׷��� �����մϴ�.\n");
	exit(-1); //���α׷� ����
}

//�����ϳ��� �Ҵ��Ͽ� top�� �ʱ�ȭ�� �� ���ÿ� ���� �����͸� ������
Stack* mkStack()
{
	Stack* s = (Stack*)malloc(sizeof(Stack));
	s->top = 0;
	return s;
}

//���� s�� ���� item�� ����, �ֱ� ���� ������ �� á�°� �˻���
void push(Stack* s, int item)
{
	if (isFull(s))
		error("���� ������ ���ڶ�");
	s->data[s->top++] = item;
}

//���� s�� �ֻ��� �׸��� ������ ������
int pop(Stack* s)
{
	if (isEmpty(s))
		error("������ �����");
	return s->data[--s->top];
}

//���� s�� ������� �˻�
int isEmpty(const Stack *s)
{
	if (s->top == 0)
		return 1;
	else
		return 0;
}

//���� s�� �� á�°� �˻�
int isFull(const Stack* s)
{
	if (s->top == MAX_SIZE)
		return 1;
	else
		return 0;
}

