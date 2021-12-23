#ifndef _LINKEDLIST__H_
#define _LINKEDLIST__H_

//���� ����Ʈ ���
//data : ������ ������ �׸�
//next : ������带 ����Ű�� ������
typedef struct _node
{
	int data;
	struct _node* next;
}Node;
//���� ����Ʈ Ÿ�� List ����,List�� Node * �� ���ǵ�
typedef Node* List;

List mkList();

void addFront(List* lp, int data);
int delFront(List* lp);
int isEmptyList(const List I);

#endif