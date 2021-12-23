#include<stdio.h>
//구조체 안에 구조체
typedef struct
{
	int x, y;
}point;

typedef struct
{
	point p1, p2;
}rect;


//구조체 포인터
typedef struct
{
	int num;
	char name[20];
	int age;
}student;

int main(void)
{
	////구조체 안에 구조체
	//rect r;
	//printf("왼쪽 위의 점의 좌표 :");
	//scanf_s("%d %d", &r.p1.x, &r.p1.y);
	//printf("오른쪽  위의 점의 좌표 :");
	//scanf_s("%d %d", &r.p2.x, &r.p2.y);

	//int height = r.p1.y - r.p2.y;
	//int width = r.p2.x - r.p1.x;
	//int len = (height + width) * 2;
	//int area = height * width;
	//printf("둘레 : %d,  넓이 : %d", len, area);


	//구조체 포인터
	student s;
	printf("학번 입력 : ");
	scanf_s("%d", &s.num);
	printf("이름 입력 : ");
	scanf_s("%s", s.name, sizeof(s.name));
	printf("나이 입력 : ");
	scanf_s("%d", &s.age);


	student* s_p = &s;
	printf("학번 : %d, 이름 : %s, 나이 : %d\n", s_p->num, s_p->name, s_p->age);






	return 0;
}