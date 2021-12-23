#include<stdio.h>

int main(void)
{
	//산술 연산자
	int x = 145;
	int y = 20;

	printf("%d + %d =%d\n", x, y, x + y);
	printf("%d - %d =%d\n", x, y, x - y);
	printf("%d * %d =%d\n", x, y, x * y);
	printf("%d / %d =%d\n", x, y, x / y); //몫
	printf("%d % %d =%d\n", x, y, x % y); //나머지

	const int base = 32;
	float celsius, fahrenheit;

	printf("화씨온도를 입력하세요 : \n");
	scanf_s("%f", &fahrenheit);
	celsius = (fahrenheit - base) * 5.0 / 9.0;
	printf("화씨온도 %f도는 섭씨온도 %f도입니다.\n", fahrenheit, celsius);

	//관계연산자 (1은 참 0은 거짓)
	int x = 10;
	int y = 11;
	printf("(%d > %d)  = %d\n", x, y, x > y);
	printf("(%d >= %d) = %d\n", x, y, x >= y);
	printf("(%d == %d) = %d\n", x, y, x == y);
	printf("(%d != %d) = %d\n", x, y, x != y);
	printf("(%d < %d)  = %d\n", x, y, x < y);
	printf("(%d <= %d) = %d\n", x, y, x <= y);

	//논리연산자
	int score;
	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);
	if (score >=0 && score <= 100)
	{
		printf("\n%d은 범위 내의 점수입니다.\n",score);
	}
	else
	{
		printf("\n%d은 범위 밖의 잘못된 점수입니다.\n",score);
	}

	//비트연산자
	int a = 11;
	int b = 17;
	printf("%d<<2=%d\n", a, a << 2);
	printf("%d>>3=%d\n", b, b >> 3);

	short x = 0x1f05; //16진수 4바이트 = 0001 1111 0000 0101
	short y = 0x31a1; 

	printf("%x & %x =%x\n", x, y, x & y);
	printf("%x | %x =%x\n", x, y, x | y);
	printf("%x ^ %x =%x\n", x, y, x ^ y);
	printf("~%x = %x\n", x,~x);


	return 0;
}