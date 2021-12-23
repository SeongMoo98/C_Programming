#include<stdio.h>
#include <stdlib.h>  //exit함수 사용
#include "stack.h"


//오류메시지 msg를 출력하고 프로그램을 종료함
void error(const char* msg)
{
	printf("오류 : %s ",msg);
	printf("프로그램을 종료합니다.\n");
	exit(-1); //프로그램 종료
}

//스택하나를 할당하여 top을 초기화한 후 스택에 대한 포인터를 리턴함
Stack* mkStack()
{
	Stack* s = (Stack*)malloc(sizeof(Stack));
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
int isEmpty(const Stack *s)
{
	if (s->top == 0)
		return 1;
	else
		return 0;
}

//스택 s가 꽉 찼는가 검사
int isFull(const Stack* s)
{
	if (s->top == MAX_SIZE)
		return 1;
	else
		return 0;
}

