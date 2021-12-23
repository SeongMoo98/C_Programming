#include<stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack3.h"

void error(const char* msg)
{
	printf("오류 : %s ", msg);
	printf("프로그램을 종료합니다.\n");
	exit(-1);
}

Stack* mkStack(int size)
{
	Stack* s = (Stack*)malloc(sizeof(Stack));
	assert(s);
	*s = mkList();
	return s;
}

//스택 s에 정수 item을 넣음, 넣기 전에 스택이 꽉 찼는가 검사함
void push(Stack* s, int item)
{
	addFront(s, item);
}

//스택 s의 최상위 항목을 빼내어 리턴함
int pop(Stack* s)
{
	int data;
	if (isEmpty(s))
	{
		error("스택이 비었음");
	}
	data = delFront(s);
	return data;
}

//스택 s가 비었는지 검사
int isEmpty(const Stack* s)
{
	return isEmptyList(*s);
}

//스택 s가 꽉 찼는가 검사
int isFull(const Stack* s)
{
	return 0;
}