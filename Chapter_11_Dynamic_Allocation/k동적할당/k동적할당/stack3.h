#ifndef _STACK3__H_
#define _STACK3__H_
#include"LinkedLIst.h"

//Node * = List 
typedef List Stack; //스택은 연결리스트와 동일 


Stack* mkStack();
void push(Stack* s, int item);
int pop(Stack* s);
int isEmpty(const Stack* s);
int isFull(const Stack* s);

void error(const char* msg);


#endif