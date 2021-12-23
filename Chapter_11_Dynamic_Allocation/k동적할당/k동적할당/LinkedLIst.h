#ifndef _LINKEDLIST__H_
#define _LINKEDLIST__H_

//연결 리스트 노드
//data : 저장할 데이터 항목
//next : 다음노드를 가리키는 포인터
typedef struct _node
{
	int data;
	struct _node* next;
}Node;
//연결 리스트 타입 List 정의,List는 Node * 로 정의됨
typedef Node* List;

List mkList();

void addFront(List* lp, int data);
int delFront(List* lp);
int isEmptyList(const List I);

#endif