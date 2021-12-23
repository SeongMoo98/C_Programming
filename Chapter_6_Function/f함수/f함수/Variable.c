#include<stdio.h>

int GX = 12345;
void f(), g();

int count()
{
	static n = 0; //지역 정적변수 자료형 타입이 생략되었으므로 자동으로 int형
	//정적변수 초기화 : 모든 정적변수는 초기화해야한다 안하면 0으로 초기화
	return ++n;
}
int main()
{
	////지역, 비지역 변수
	//printf("[main 에서]\n");
	//printf("\tGX= %d\n\n", GX);
	//f();
	////비지역 변수 GX는 세함수에서 모두볼수있다 , GX는 전역변수
	////다른 파일에서 GX를 볼려면 extern int GX;선언을 해주어야한다

	int i;
	for (i = 0; i < 5; ++i)
	{
		printf("count = %d\n", count());
	}
	f();




	return 0;
}

void f()
{
	printf("[f 에서]\n");
	printf("\tGX = %d\n\n", GX);
	g();
}
void g()
{
	printf("[g 에서]\n");
	printf("\tGX = %d\n\n", GX);
}

