#include<stdio.h>
#include<stdlib.h>

typedef struct _IntLinked
{
	int num;
	struct _IntLinked* next;
}IntLinked;
IntLinked* head, *tail;

int addNode(int data);
void PrintNode();
void deleteNode();




int main(void)
{
	head = (IntLinked *)malloc(sizeof(IntLinked));
	tail = (IntLinked*)malloc(sizeof(IntLinked));
	head = tail=NULL;
	
	int listnum, data;
	int i = 0;
	printf("생성할 리스트의 개수 입력 = ");
	scanf_s("%d", &listnum);
	
	//연결리스트 멤버 저장
	while (i<listnum) 
	{
		printf("정수를 입력하세요 : ");				
		scanf_s("%d", &data);	
		addNode(data);
		i++;
	}
	
	PrintNode();
	deleteNode();

	return 0;
}



//노드추가
int addNode(int data)
{
	IntLinked* il = (IntLinked*)malloc(sizeof(IntLinked));
	il->num = data;
	il->next = NULL;
	if (head == NULL && tail == NULL)
	{
		head = tail = il;
	}
	else
	{
		tail->next = il;
		tail = il;
	}
}


//연결리스트 출력
void PrintNode()
{
	if (head == NULL)
	{
		return 0;
	}
	IntLinked* p = head;
	while (p != NULL)
	{
		printf("저장된 정수 : %d\n", p->num);
		p = p->next;
	}
}

//메모리해제
void deleteNode()
{
	if (head == NULL)
	{
		return 0;
	}
	else
	{
		IntLinked* delNode = head;
		IntLinked* delnextNode = head->next;

		free(delNode);

		while (delnextNode != NULL)
		{
			delNode = delnextNode;
			delnextNode = delnextNode->next;
			free(delNode);
		}
	}
}

