#ifndef _STACK__H_
#define _STACK__H_
#define MAX_SIZE 10 // 스택 최대 크기 : 스택에 저장 가능한 원소개수
//배열을 통한 스택의 구현
//stack 타입 정의
typedef struct _stack
{
	int data[MAX_SIZE];
	int top;
}Stack;

//스택 인터페이스(스택을 사용하기 위한 함수)
Stack *mkStack();
void push(Stack* s, int item);
int pop(Stack* s);
int isEmpty(const Stack* s);
int isFull(const Stack* s);

void error(const char* msg);

#endif