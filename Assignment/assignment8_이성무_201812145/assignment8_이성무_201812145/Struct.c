#include<stdio.h>
//����ü �ȿ� ����ü
typedef struct
{
	int x, y;
}point;

typedef struct
{
	point p1, p2;
}rect;


//����ü ������
typedef struct
{
	int num;
	char name[20];
	int age;
}student;

int main(void)
{
	////����ü �ȿ� ����ü
	//rect r;
	//printf("���� ���� ���� ��ǥ :");
	//scanf_s("%d %d", &r.p1.x, &r.p1.y);
	//printf("������  ���� ���� ��ǥ :");
	//scanf_s("%d %d", &r.p2.x, &r.p2.y);

	//int height = r.p1.y - r.p2.y;
	//int width = r.p2.x - r.p1.x;
	//int len = (height + width) * 2;
	//int area = height * width;
	//printf("�ѷ� : %d,  ���� : %d", len, area);


	//����ü ������
	student s;
	printf("�й� �Է� : ");
	scanf_s("%d", &s.num);
	printf("�̸� �Է� : ");
	scanf_s("%s", s.name, sizeof(s.name));
	printf("���� �Է� : ");
	scanf_s("%d", &s.age);


	student* s_p = &s;
	printf("�й� : %d, �̸� : %s, ���� : %d\n", s_p->num, s_p->name, s_p->age);






	return 0;
}