#include <stdio.h>

typedef struct date
{
	short year;
	char month;
	char data;
}DATE;

typedef struct book
{
	char title[50];
	char author[20];
	char publisher[20];
	DATE pub_day;
	struct book* next;
}BOOK;

//void Input(BOOK* ptr)
//{
//	printf("책의 제목을 입력해주세요 : ");
//	scanf_s("%s", ptr->title, 50);
//	printf("")
//}

int main()
{


	/*ptr = (BOOK*)malloc(sizeof(BOOK));

	ptr->next = (BOOK*)malloc(sizeof(BOOK));
	ptr = ptr->next;

	ptr->next = (BOOK*)malloc(sizeof(BOOK));
	ptr = ptr->next;*/




	return 0;
}

