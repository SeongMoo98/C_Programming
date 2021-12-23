#include <stdio.h>
#include <stdlib.h> // 이게 뭐고
#include <time.h> //srand함수 사용을 위해 include


#define NUM 10 //발생시킬 난수 개수
#define LB 0 //난수 발생범위 ( LB하한, UB 상항)
#define UB 20

void star(int n);
void histogram(int a[], int n);
void set_seed();
int range_rand(int lower, int upper);
void init(int a[], int n);

int main(void)
{
	//초기 발생난수를 변경하고 NUM개의 난수를 발생시켜 a에 저장한수 a에 대한 히스토그램을 출력
	int a[NUM];
	set_seed();
	init(a, NUM);
	histogram(a, NUM);


	return 0;
}



// n개의 *를 출력 
void star(int n)  //-->는 뭐야
{
	while (n-- > 0)
	{
		putchar('*');
	}
}

//각 배열원소에 대해 첨자값과 원소값을 출력하고 원소 개수만큼 별표를 출력
void histogram(int a[], int n) 
{
	for (int i = 0; i < n; i++)
	{
		printf("%2d [%3d]", i, a[i]);
		star(a[i]);
		printf("\n");
	}
}

//초기 발생 난수 변경
void set_seed()
{
	//rand 가 생성하는 초기난수 변경
	srand((unsigned int)time(NULL)); //unsigned는 왜 하는거고
}

//lower 이상 upper이하 범위의 난수를 발생시켜 되돌려줌
int range_rand(int lower, int upper)
{

	int width = upper - lower - 1;
	int value = rand() % width + lower;
	return value;
}

//LB~UP 사이의 n개의 난수를 발생시켜 배열 a의 각 원소에 저장
void init(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = range_rand(LB, UB);
	}
}