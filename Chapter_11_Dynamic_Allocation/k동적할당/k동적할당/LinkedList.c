#include<stdio.h>
#include<stdlib.h>
#include"LinkedLIst.h"


//typedef Node* List;


List mkList()
{
	List I = (List)NULL; //NULL�����͸� LIST(NODE *)�� ����ȯ
	return I;
}
//�̹� ������ ��� �տ� ���� ��� �߰� -> ����
//List* lp- Node** lp ��  Node *�� ����Ű�� ������
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
		error("����Ʈ�� �����");
	}
	*lp = head->next; //����Ʈ ���Ҹ� �ϳ� ����
	data = head->data;
	free(head);
	return data;
}
int isEmptyList(const List I)
{
	return (I == NULL);
}
