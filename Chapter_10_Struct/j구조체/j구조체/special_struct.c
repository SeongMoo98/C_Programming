#include <stdio.h>
#include<stdlib.h>



int main(void)
{
	//struct student
	//{
	//	char name[20];
	//	int stud_id;
	//	char year;  //char 4byte �Ҵ�
	//	char major[20];
	//} s;
	//printf("struct student ũ�� : %d\n", sizeof(struct student));
	//printf("���� s�� ũ��       : %d\n", sizeof(s));

	////��ø ����ü(nested structure)
	//struct date
	//{
	//	short year;
	//	char month;
	//	char data;
	//};
	//
	//struct book
	//{
	//	char title[50]; //å ����
	//	char author[20]; //����
	//	char publisher[20]; //���ǻ�
	//	struct date pub_day; //������
	//}b1;
	////����
	//b1.pub_day.year = 2006;



	////�ٸ� ����ü�� ���� �����͸� ����ü�� ����� ���
	//struct book2
	//{
	//	char title[50]; 
	//	char author[20];
	//	char publisher[20];
	//	struct date *pub_day;
	//}b2;
	//b2.pub_day = (struct date*) malloc(sizeof(struct date));


	//�ڱ����� ����ü
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


	//������
	enum day
	{
		sun=1, mon, tue, wed, thu, fri, sat
	};

	enum day d1, d2;
	d1 = fri;

	printf("%d", fri);



		



	return 0; 
}