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
	printf("������ ����Ʈ�� ���� �Է� = ");
	scanf_s("%d", &listnum);
	
	//���Ḯ��Ʈ ��� ����
	while (i<listnum) 
	{
		printf("������ �Է��ϼ��� : ");				
		scanf_s("%d", &data);	
		addNode(data);
		i++;
	}
	
	PrintNode();
	deleteNode();

	return 0;
}



//����߰�
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


//���Ḯ��Ʈ ���
void PrintNode()
{
	if (head == NULL)
	{
		return 0;
	}
	IntLinked* p = head;
	while (p != NULL)
	{
		printf("����� ���� : %d\n", p->num);
		p = p->next;
	}
}

//�޸�����
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

