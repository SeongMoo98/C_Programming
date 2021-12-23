#include <stdio.h>

int main(void)
{
	////변수에 기억공간 할당
	//short no_univ = 276; //대학수
	//int population = 4829500; //인구수
	//long budget = 237000000000000L;//년 예산

	//printf("대한민국에 대한 데이터입니다.\n");
	//printf("대학수 : %d 개\n",no_univ);
	//printf("인구 : %d 명\n",population);
	//printf("예산 : %d 원\n", budget);
	////long 데이터의 Max값 초과 -> 음수로 표기 : 정수형 오버플로우


	////unsigned-> signed int는 Max값이 (2의31제곱)-1=약 21억 -> 25억은 오버플로우가 일어남
	//int a = 50000;
	//unsigned int b = a * a;
	//printf("%u", b); //%u로 받는다 %o는 8진수 %x는 16진수
	//


	return 0;
}