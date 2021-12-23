#include<stdio.h>
#include<stdlib.h>
#include"LinkedLIst.h"


//typedef Node* List;


List mkList()
{
	List I = (List)NULL; //NULL포인터를 LIST(NODE *)로 형변환
	return I;
}
//이미 생성된 노드 앞에 새로 노드 추가 -> 연결
//List* lp- Node** lp 즉  Node *를 가리키는 포인터
void addFront(List* lp, int data)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;

	n->next = *lp;
	*lp = n;
}

int delFront(List* lp)
{
	Node* head = *lp;
	int data;
	if (isEmptyList(*lp))
	{
		error("리스트가 비었음");
	}
	*lp = head->next; //리스트 원소를 하나 줄임
	data = head->data;
	free(head);
	return data;
}
int isEmptyList(const List I)
{
	return (I == NULL);
}
