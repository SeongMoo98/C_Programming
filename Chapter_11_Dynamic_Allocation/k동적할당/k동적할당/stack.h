#ifndef _STACK__H_
#define _STACK__H_
#define MAX_SIZE 10 // ���� �ִ� ũ�� : ���ÿ� ���� ������ ���Ұ���
//�迭�� ���� ������ ����
//stack Ÿ�� ����
typedef struct _stack
{
	int data[MAX_SIZE];
	int top;
}Stack;

//���� �������̽�(������ ����ϱ� ���� �Լ�)
Stack *mkStack();
void push(Stack* s, int item);
int pop(Stack* s);
int isEmpty(const Stack* s);
int isFull(const Stack* s);

void error(const char* msg);

#endif