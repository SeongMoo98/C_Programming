#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>
//����ü ������
typedef struct
{
	float re; //�Ǽ���
	float im; //�����
}COMPLEX;


//����ü �Ű�����
COMPLEX add_complex1(COMPLEX x, COMPLEX y);

int main(void)
{
	////����ü
	//struct student
	//{
	//	char name[20];
	//	int stud_id;
	//	char year;
	//	char major[20];
	//} s;

	//printf("struct student ũ�� : %d\n", sizeof(struct student));
	//printf("���� s�� ũ��       : %d\n", sizeof(s));
	
	

	////����ü �������
	//struct student
	//{
	//	char name[20];
	//	int stud_id;
	//	char year;
	//	char major[20];
	//} st;

	//printf("�̸� :");  scanf_s("%s", st.name,sizeof(st.name));
	//printf("�й� :");  scanf_s("%d", &st.stud_id);
	//printf("�г� :");  scanf_s("%d", &st.year);
	//printf("���� :");  scanf_s("%s", st.major,sizeof(st.major));

	//printf("\n%s �л��� ����\n", st.name);
	//printf("�й� : %d\n", st.stud_id);
	//printf("�г� : %d\n", st.year);
	//printf("���� : %s\n", st.major);


	////����ü �迭
	//struct student
	//{
	//	char name[20];
	//	int stud_id;
	//	char year;
	//	char major[20];
	//} st[100];
	//int num, cs_num = 0;

	//printf("�Է��� �л� �� :");
	//scanf_s("%d", &num);

	//for (int i = 0; i < num; i++)
	//{
	//	printf("�̸� :");  scanf_s("%s", st[i].name, sizeof(st[i].name));
	//	printf("�й� :");  scanf_s("%d", &st[i].stud_id);
	//	printf("�г� :");  scanf_s("%d", &st[i].year);
	//	printf("���� :");  scanf_s("%s", st[i].major, sizeof(st[i].major));
	//}
	//printf("\n��ǻ�Ͱ��� ���� �л�\n");
	//for (int i = 0; i < num; i++)
	//{
	//	if (!strcmp(st[i].major, "��ǻ�Ͱ���"))
	//	{
	//		cs_num++;
	//		printf("\n�̸� : %s\n", st[i].name);
	//		printf("�й�   : %d\n", st[i].stud_id);
	//		printf("�г�   : %d\n", st[i].year);
	//	}
	//}
	//printf("\n �� %d�� �Դϴ�.", cs_num);
	

	////����ü ������
	//COMPLEX x, y, z, * p;
	//x.re = 1.0;
	//x.im = 2.0;

	//y.re = 5.0;
	//y.im = 10.0;

	//p = &z;  //����ü ������ 
	//p->re = x.re + y.re;   //p->re == *(p.re)
	//p->im = x.im + y.im;

	//printf("x    =%3.1f + %3.1fi \n", x.re, x.im);
	//printf("y    =%3.1f + %3.1fi \n", y.re, y.im);
	//printf("x+y  =%3.1f + %3.1fi \n", p->re, p->im);
	

	////����ü �Ű�����
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

//����ü �Ű�����
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