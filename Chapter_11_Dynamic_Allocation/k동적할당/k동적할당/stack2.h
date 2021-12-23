#ifndef _STACK2__H_
#define _STACK2__H_

//stack Ÿ�� ����
typedef struct _stack
{
	//data�� �������� �Ҵ��ϱ� ���� ������
	int* data;
	int top;
	int size;
}Stack;

//���� �������̽�(������ ����ϱ� ���� �Լ�)
Stack* mkStack(int size);
void push(Stack* s, int item);
int pop(Stack* s);
int isEmpty(const Stack* s);
int isFull(const Stack* s);

void error(const char* msg);


#endif