#include <stdio.h>
#include<stdlib.h>



int main(void)
{
	//struct student
	//{
	//	char name[20];
	//	int stud_id;
	//	char year;  //char 4byte 할당
	//	char major[20];
	//} s;
	//printf("struct student 크기 : %d\n", sizeof(struct student));
	//printf("변수 s의 크기       : %d\n", sizeof(s));

	////중첩 구조체(nested structure)
	//struct date
	//{
	//	short year;
	//	char month;
	//	char data;
	//};
	//
	//struct book
	//{
	//	char title[50]; //책 제목
	//	char author[20]; //저자
	//	char publisher[20]; //출판사
	//	struct date pub_day; //출판일
	//}b1;
	////접근
	//b1.pub_day.year = 2006;



	////다른 구조체에 대한 포인터를 구조체의 멤버로 사용
	//struct book2
	//{
	//	char title[50]; 
	//	char author[20];
	//	char publisher[20];
	//	struct date *pub_day;
	//}b2;
	//b2.pub_day = (struct date*) malloc(sizeof(struct date));


	//자기참조 구조체
	typedef struct _date
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

	BOOK* ptr;
	ptr = (BOOK *)malloc(sizeof(BOOK));

	ptr->next= (BOOK*)malloc(sizeof(BOOK));
	ptr = ptr->next;

	ptr->next = (BOOK*)malloc(sizeof(BOOK));
	ptr = ptr->next;


	//열거형
	enum day
	{
		sun=1, mon, tue, wed, thu, fri, sat
	};

	enum day d1, d2;
	d1 = fri;

	printf("%d", fri);



		



	return 0; 
}