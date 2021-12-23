#include <stdio.h>

int add1(int x)
{
	return (x + 1);
}
double half(int x)
{
	return(x / 2.0);
}

int add1(int x); // add1의 선언 : 프로토 타입
double half(int x);

void print_add1_half(int x);//void 함수(프로시져)

//top_down
int read_int();  //3개의 함수는 '전체문제'를 기술하는데 필요한 한수들 
void print_next(int num);
void print_half(int num);

int main_funcion(void)
{
	//int num;
	//printf("정수를 하나 입력하세요.");
	//scanf_s("%d", &num);

	//printf("\n");
	//printf("%d의 바로 다음 정수는 %d이고\n", num, add1(num));
	//printf("%d의 반은 %.1f입니다.\n", num, half(num));
	//printf("제가 맞게 계산 했나요?");

	//int num;
	//printf("정수를 하나 입력하세요.");
	//scanf_s("%d", &num);

	//printf("\n");
	//printf("%d의 바로 다음 정수는 %d이고\n", num, add1(num));
	//printf("%d의 반은 %.1f입니다.\n", num, half(num));
	//printf("제가 맞게 계산 했나요?");

	////프로시져
	//int num ;
	//printf("점수를 하나 입력하세요.");
	//scanf_s("%d", &num);
	//print_add1_half(num);


	//top-down
	//함수 main에는 전체문제를 기술한다
	//'전체함수를 기술하는데 필요한 '명사'는 변수나 상수로 선언
	//'전체문제'를 기술하는데 필요한 '동사'는 함수를 이용한다
	int num;
	num = read_int();
	print_nuxt(num);
	print_half(num);



	return 0;
}

void print_add1_half(int num)
{
	printf("\n");
	printf("%d의 바로 다음 정수는 %d이고\n", num, add1(num));
	printf("%d의 반은 %.1f입니다.\n", num, half(num));
	printf("제가 맞게 계산 했나요?");
}



int read_int()
{
	int num;
	printf("점수를 하나 입력하세요.");
	scanf_s("%d", &num);
	return num;
}
void print_next(int num)
{
	printf("%d의 바로 다음 정수는 %d이고\n", num, num + 1);
}
void print_half(int num)
{
	printf("%d의 반은 %.1f입니다.\n", num, num / 2.0);
}


