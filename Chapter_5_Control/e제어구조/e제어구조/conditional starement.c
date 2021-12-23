#include <stdio.h>

int main_condition()
{
	//조건문 
	//if, if-else

	//복합문 {}
	int a, b, min, max;
	printf("입력1 : ");
	scanf_s("%d", &a);
	printf("입력2 : ");
	scanf_s("%d", &b);

	if (a < b)
	{
		min = a;
		max = b;
	}
	else
	{
		min = b;
		max = a;
	}
	printf("큰 값 : %d ", max);
	printf("작은 값 : %d", min);



	//중첩된 if(nested if)
	int score;
	char grade;

	printf("점수 입력 : ");
	scanf_s("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score > 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("점수 : %d\t 학점 %c\t", score, grade);



	//switch문
	//switch문을 이용한 학점 수 계산 예시
	int ACount = 0, BCount = 0, CCount = 0, DCount = 0, FCount = 0;
	switch (grade)
	{
	case 'A': //case 상수 : (문자열도 상수로 보는건가??)
		ACount = ACount + 1;
		printf("점수 : %d\t 학점 : %c\t", score, grade);
		break;
	case 'B':
		BCount = BCount + 1;
		printf("점수 : %d\t 학점 : %c\t", score, grade);
		break;
	case 'C':
		CCount = CCount + 1;
		printf("점수 : %d\t 학점 : %c\t", score, grade);
		break;
	case 'D':
		DCount = DCount + 1;
		printf("점수 : %d\t 학점 : %c\t", score, grade);
		break;
	case 'F':
		FCount = FCount + 1;
		printf("점수 : %d\t 학점 : %c\t", score, grade);
		break;
	default:
		printf("오류 : %c학점은 없습니다.", grade);
	}
	int score, category;
	char grade;

	printf("점수 입력(0~100) : ");
	scanf_s("%d", &score);
	if (score < 0 || score>100)
	{
		printf("잘못된 점수입니다.\n");
		printf("점수 입력(0~100) : ");
		scanf_s("%d", &score);
	}

	category = score / 10; //int 형이여서 -> 몫을 구함

	switch (category) 
	{
	case 10 :
		grade = 'A';
		break;
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
	}
	printf("점수 : %d\t 학점 : %c\n", score, grade);


	return 0;
}