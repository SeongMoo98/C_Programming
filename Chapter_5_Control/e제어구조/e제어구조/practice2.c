#include<stdio.h>

int main(void)
{
	////프로젝트 1에서 각 점수에 대해 학점 결정
	//int score = 0, sum = 0, count = 0;
	//int ACount = 0, BCount = 0, CCount = 0, DCount = 0, FCount = 0;  //학점개수
	//float average;
	//char grade;


	//printf("점수 입력 (0은 끝) : \n");
	//scanf_s("%d", &score);

	//
	//while (score != 0) //0을 입력하면 while문 탈출하고 if의 조건을 확인해서 실행
	//{
	//	if (score >= 90)
	//		grade = 'A';
	//	else if (score >= 80)
	//		grade = 'B';
	//	else if (score > 70)
	//		grade = 'C';
	//	else if (score >= 60)
	//		grade = 'D';
	//	else 
	//		grade = 'F';

	//	switch (grade)
	//	{
	//	case 'A':
	//	{
	//		printf("점수는 %d 이고 학점은 %c 입니다.\n", score, grade);
	//		ACount += 1;
	//	} break;
	//	case 'B':
	//	{
	//		printf("점수는 %d 이고 학점은 %c 입니다.\n", score, grade);
	//		BCount += 1;
	//	} break;
	//	case 'C':
	//	{
	//		printf("점수는 %d 이고 학점은 %c 입니다.\n", score, grade);
	//		CCount += 1;
	//	} break;
	//	case 'D':
	//	{
	//		printf("점수는 %d 이고 학점은 %c 입니다.\n", score, grade);
	//		DCount += 1;
	//	} break;
	//	case 'F':
	//	{
	//		printf("점수는 %d 이고 학점은 %c 입니다.\n", score, grade);
	//		FCount += 1;
	//	} break;
	//	default:printf("오류 : %c학점은 없습니다.\n", grade);
	//	}


	//	if (score < 0 || score>100)
	//	{
	//		printf("잘못된 점수입니다. 점수를 다시 입력해주세요.\n");
	//		printf("점수 입력 (0은 끝) : \n");
	//		scanf_s("%d", &score);
	//	}
	//	else
	//	{
	//		sum += score;
	//		count++;
	//		scanf_s("%d", &score);
	//	}

	//}
	//	
	//if (count == 0)
	//{
	//	printf("입력 없음\n");
	//}
	//else
	//{
	//	average = (float)sum / count; //형변환을 위한 (float)
	//	printf("총점 : %d\n", sum);
	//	printf("평균 : %.2f\n", average);
	//}

	return 0;
}