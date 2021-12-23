#include<stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack2.h"


//�����޽��� msg�� ����ϰ� ���α׷��� ������
void error(const char* msg)
{
	printf("���� : %s ",msg);
	printf("���α׷��� �����մϴ�.\n");
	exit(-1);
}

//�����ϳ��� �Ҵ��Ͽ� ���ÿ� ���� �����͸� ������
//assert(���ǽ�)- ���ǽ��� �����̸� �����޼��� ���
Stack* mkStack(int size)
{
	Stack* s = (Stack*)malloc(sizeof(Stack));
	assert(size > 0);
	//s�� ���� -> NULL�̸� ->�����Ҵ��� ����������
	assert(s);
	s->size = size;
	//�����͸� ������ ������ ���� �����Ҵ��Ͽ� �ּҸ� data�� ����(size���� �����迭)
	s->data = (int*)malloc(size * sizeof(int));
	assert(s->data);
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
int isEmpty(const Stack* s)
{
	if (s->top == 0)
		return 1;
	else
		return 0;
}

//���� s�� �� á�°� �˻�
int isFull(const Stack* s)
{
	if (s->top == s->size)
		return 1;
	else
		return 0;
}





