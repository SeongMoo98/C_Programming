#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>
//구조체 포인터
typedef struct
{
	float re; //실수부
	float im; //허수부
}COMPLEX;


//구조체 매개변수
COMPLEX add_complex1(COMPLEX x, COMPLEX y);

int main(void)
{
	////구조체
	//struct student
	//{
	//	char name[20];
	//	int stud_id;
	//	char year;
	//	char major[20];
	//} s;

	//printf("struct student 크기 : %d\n", sizeof(struct student));
	//printf("변수 s의 크기       : %d\n", sizeof(s));
	
	

	////구조체 변수사용
	//struct student
	//{
	//	char name[20];
	//	int stud_id;
	//	char year;
	//	char major[20];
	//} st;

	//printf("이름 :");  scanf_s("%s", st.name,sizeof(st.name));
	//printf("학번 :");  scanf_s("%d", &st.stud_id);
	//printf("학년 :");  scanf_s("%d", &st.year);
	//printf("전공 :");  scanf_s("%s", st.major,sizeof(st.major));

	//printf("\n%s 학생의 정보\n", st.name);
	//printf("학번 : %d\n", st.stud_id);
	//printf("학년 : %d\n", st.year);
	//printf("전공 : %s\n", st.major);


	////구조체 배열
	//struct student
	//{
	//	char name[20];
	//	int stud_id;
	//	char year;
	//	char major[20];
	//} st[100];
	//int num, cs_num = 0;

	//printf("입력할 학생 수 :");
	//scanf_s("%d", &num);

	//for (int i = 0; i < num; i++)
	//{
	//	printf("이름 :");  scanf_s("%s", st[i].name, sizeof(st[i].name));
	//	printf("학번 :");  scanf_s("%d", &st[i].stud_id);
	//	printf("학년 :");  scanf_s("%d", &st[i].year);
	//	printf("전공 :");  scanf_s("%s", st[i].major, sizeof(st[i].major));
	//}
	//printf("\n컴퓨터과학 전공 학생\n");
	//for (int i = 0; i < num; i++)
	//{
	//	if (!strcmp(st[i].major, "컴퓨터과학"))
	//	{
	//		cs_num++;
	//		printf("\n이름 : %s\n", st[i].name);
	//		printf("학번   : %d\n", st[i].stud_id);
	//		printf("학년   : %d\n", st[i].year);
	//	}
	//}
	//printf("\n 총 %d명 입니다.", cs_num);
	

	////구조체 포인터
	//COMPLEX x, y, z, * p;
	//x.re = 1.0;
	//x.im = 2.0;

	//y.re = 5.0;
	//y.im = 10.0;

	//p = &z;  //구조체 포인터 
	//p->re = x.re + y.re;   //p->re == *(p.re)
	//p->im = x.im + y.im;

	//printf("x    =%3.1f + %3.1fi \n", x.re, x.im);
	//printf("y    =%3.1f + %3.1fi \n", y.re, y.im);
	//printf("x+y  =%3.1f + %3.1fi \n", p->re, p->im);
	

	////구조체 매개변수
	//COMPLEX a, b, c;
	//COMPLEX* ptr = &a;
	//a.re = 3.0;
	//a.im = 4.0;
	//b.re = 2.0;
	//b.im = 5.0;
	///*c = add_complex1(a, b);
	//printf("%f", c);*/

	//printf("%f %f", (*ptr).re, *(ptr.re));

	char str[] = "C language Programming", *token;
	token = strtok(str," ");
	while (token != NULL)
	{
		printf("%s\n", token);
		printf("%d\n", strlen(token));

		token = strtok(NULL," ");
	//	printf("%d\n", strlen(token));

	}
	return 0;
}

//구조체 매개변수
COMPLEX add_complex1(COMPLEX x, COMPLEX y)
{
	COMPLEX result;
	result.re = x.re + y.re;
	result.im = x.im + y.im;
	return result;
}
COMPLEX add_complex2(COMPLEX x, COMPLEX y)
{
	COMPLEX result;
	result.re = x.re + y.re;
	result.im = x.im + y.im;
	return result;
}