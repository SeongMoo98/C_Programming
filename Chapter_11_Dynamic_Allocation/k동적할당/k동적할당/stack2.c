#include<stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack2.h"


//오류메시지 msg를 출력하고 프로그램을 종료함
void error(const char* msg)
{
	printf("오류 : %s ",msg);
	printf("프로그램을 종료합니다.\n");
	exit(-1);
}

//스택하나를 할당하여 스택에 대한 포인터를 리턴함
//assert(조건식)- 조건식이 거짓이면 오류메세지 출력
Stack* mkStack(int size)
{
	Stack* s = (Stack*)malloc(sizeof(Stack));
	assert(size > 0);
	//s가 거짓 -> NULL이면 ->동적할당이 되지않으면
	assert(s);
	s->size = size;
	//데이터를 저장할 공간을 새로 동적할당하여 주소를 data에 저장(size개의 정수배열)
	s->data = (int*)malloc(size * sizeof(int));
	assert(s->data);
	s->top = 0;
	return s;
}

//스택 s에 정수 item을 넣음, 넣기 전에 스택이 꽉 찼는가 검사함
void push(Stack* s, int item)
{
	if (isFull(s))
		error("스택 공간이 모자람");
	s->data[s->top++] = item;
}

//스택 s의 최상위 항목을 빼내어 리턴함
int pop(Stack* s)
{
	if (isEmpty(s))
		error("스택이 비었음");
	return s->data[--s->top];
}

//스택 s가 비었는지 검사
int isEmpty(const Stack* s)
{
	if (s->top == 0)
		return 1;
	else
		return 0;
}

//스택 s가 꽉 찼는가 검사
int isFull(const Stack* s)
{
	if (s->top == s->size)
		return 1;
	else
		return 0;
}





