#include<stdio.h>

//기호상수 정의
#define hourpay1 9200
#define hourpay2 6200
#define tax1 0.12
#define tax2 0.09

int main()
{
	//부장과 사원의 이름과 근무시간 변수
	char name1[256]; //부장이름과 근무시간
	int time1;
	char name2[256]; //사원이름과 근무시간
	int time2;
	//월급 계산을 위한 변수
	int salary1 = 0, salary2 = 0;


	printf("부장의 이름을 입력하세요 :");
	scanf_s("%s", name1, sizeof(name1));
	printf("부장의 근무시간을 입력하세요 :");
	scanf_s("%d", &time1);

	printf("\n");
	printf("사원의 이름을 입력하세요 :");
	scanf_s("%s", name2, sizeof(name2));
	printf("사원의 근무시간을 입력하세요 :");
	scanf_s("%d", &time2);

	salary1 = (((hourpay1) * (time1)) * (1 - tax1));
	salary2 = (((hourpay2) * (time2)) * (1 - tax2));

	printf("\n");
	printf("======================================================\n");
	printf("%s 부장님의 월급은 %d원 입니다.\n", name1, salary1);
	printf("%s 사원님의 월급은 %d원 입니다.\n", name2, salary2);
	printf("======================================================\n");
	printf("회사가 지불할 총 월급은 %d원 입니다.", salary1 + salary2);

	return 0;
}
