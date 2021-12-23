#include <stdio.h>

long fact(int n);
#define MAX(x,y)(x>y)? x:y

int main_recursive_macro(void)
{
	int n;
	printf("자연수를 하나 입력하세요 :");
	scanf_s("%d", &n);
	printf("fact(%d) = %ld입니다.\n", n, fact(n));

	//int i, j;
	//int max;

	//printf("두 수를 입력하세요 :");
	//scanf_s("%d %d", &i, &j);
	//max = MAX(i, j); //MAX(i,j)는 전처리기를 거치면 (i>j)?i:j로 확장된다
	//printf("MAX(%d %d)= %d\n", i, j, max);

	return 0;
}

long fact(int n)
{
	if (n == 0)
	{
		return 1L; //변수형을 long으로 설정해서 L 
	}
	else
	{
		return n * fact(n - 1); //재귀호출 -> n팩토리얼
	}
}

