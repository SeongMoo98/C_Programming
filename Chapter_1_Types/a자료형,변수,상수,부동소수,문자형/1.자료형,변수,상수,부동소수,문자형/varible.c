#include <stdio.h>

int main(void) //이 소스파일을 실행시키위해 나중에 int main으로 해줘야함
{
	int score = 7; // 변수 초기화

	printf("첫 번째 정수는 %d\n", score);

	score = 10; //대입문 
	printf("두 번째 정수는 %d\n", score);

	score = 8; //대입문 
	printf("세 번째 정수는 %d\n", score);

	//변수의 증가

	int sum = 0, score;
	score = 7;
	sum = sum + score;
	printf("첫 번째 점수 : %d 현재합 : %d\n", score, sum);

	score = 10;
	sum = sum + score; 
	printf("두 번째 점수 : %d 현재합 : %d\n", score, sum);
	
	score = 8;
	sum = sum + score;
	printf("세 번째 점수 : %d 현재합 : %d\n", score, sum);

	

	return 0;
}