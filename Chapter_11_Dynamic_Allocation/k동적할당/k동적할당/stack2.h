#ifndef _STACK2__H_
#define _STACK2__H_

//stack 타입 정의
typedef struct _stack
{
	//data를 동적으로 할당하기 위한 포인터
	int* data;
	int top;
	int size;
}Stack;

//스택 인터페이스(스택을 사용하기 위한 함수)
Stack* mkStack(int size);
void push(Stack* s, int item);
int pop(Stack* s);
int isEmpty(const Stack* s);
int isFull(const Stack* s);

void error(const char* msg);


#endif