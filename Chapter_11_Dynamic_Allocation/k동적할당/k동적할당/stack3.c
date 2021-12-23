#include<stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack3.h"

void error(const char* msg)
{
	printf("���� : %s ", msg);
	printf("���α׷��� �����մϴ�.\n");
	exit(-1);
}

Stack* mkStack(int size)
{
	Stack* s = (Stack*)malloc(sizeof(Stack));
	assert(s);
	*s = mkList();
	return s;
}

//���� s�� ���� item�� ����, �ֱ� ���� ������ �� á�°� �˻���
void push(Stack* s, int item)
{
	addFront(s, item);
}

//���� s�� �ֻ��� �׸��� ������ ������
int pop(Stack* s)
{
	int data;
	if (isEmpty(s))
	{
		error("������ �����");
	}
	data = delFront(s);
	return data;
}

//���� s�� ������� �˻�
int isEmpty(const Stack* s)
{
	return isEmptyList(*s);
}

//���� s�� �� á�°� �˻�
int isFull(const Stack* s)
{
	return 0;
}