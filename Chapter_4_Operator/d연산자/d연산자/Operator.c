#include <stdio.h>
#include <math.h> //sqrt를 쓰기위한 헤더파일 include

int main()
{
	//대입문
	int a = 0, b = 0;

	printf("초기의 a와 b의 값입니다.\n");
	printf("	a=  %d, b = %d\n", a, b);

	a = a + 1; //대입연산자
	printf("a = a + 1; 을 수행했습니다\n");
	printf("	a = %d, b = %d\n", a, b);

	b = a = 2; //연속대입
	printf("b = a = 2; 를 수행했습니다.\n");
	printf("	a = %d, b = %d\n", a, b);

	//누적대입 연산자
	int a = 0;
	printf("초기의 a값입니다.\n");
	printf("\t a = %d\n\n", a);

	a += 1;
	printf("a += 1; 을 수행했습니다.\n");
	printf("\t a = %d\n\n", a);

	a += a + 1;
	printf("a += a + 1; 을 수행했습니다.\n");
	printf("\t a = %d\n\n", a);

	a *= a * a;
	printf("a *= a*a 를 수행했습니다.\n");
	printf("\t a = %d\n\n", a);


	//증감연산자
	//증가연산자
	//후치
	int a, b;
	a = b = 5;

	printf("초기의 a 와 b의 값입니다.\n");
	printf("a = %d, b = %d\n\n", a, b);

	b = 2 * a++; //b = 2*5를 수행하고 a = a+1
	printf("b = 2 * a++; 를 수행합니다.\n");
	printf("a = %d, b = %d\n", a, b);


	//후치
	int x, y;
	x = y = 5;

	printf("\n\n초기의 x 와 y의 값입니다.\n");
	printf("x = %d, y = %d\n\n", x, y);

	y = 2 * ++x; // y = 2*(1+x)
	printf("y = 2 * ++x; 를 수행합니다.\n");
	printf("x = %d, y = %d\n", x, y);

	//조건연산자
	//단락회로
	int sum, n;
	sum = 100;
	printf("숫자를 입력하세요.(0~100)\n");
	scanf_s("%d", &n);
	int result = (n != 0) ? sum / n : 1; //새로운 변수를 선언해줘야 하는구나
	printf("%d", result);


	return 0;
}