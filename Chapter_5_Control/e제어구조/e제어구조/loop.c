#include <stdio.h>

int main_loop()
{
	//while 문

	//1부터 100까지 홀수들의 합을 계산한다.
	int odd = 1 , sum = 0;

	while (odd <= 100)
	{
		sum = sum + odd;
		odd += 2;
	}
	printf("1부터 100까지 홀수의 합은 %d 입니다.", sum);

	//while 루프를 사용하여 사용자가 입력한 점수의 합과 평균을 계산한다.

	int score = 0 , sum = 0, count = 0;
	float average;
	printf("점수 입력 (0은 끝) : \n");
	scanf_s("%d", &score);

	while (score != 0)	//0을 입력하면 while문 탈출하고 if의 조건을 확인해서 실행
	{
		sum += score;
		count++;
		scanf_s("%d", &score);
	}
	if (count == 0) 
	{
		printf("입력 없음\n");
	}
	else
	{
		average = (float) sum / count; //형변환을 위한 (float)
		printf("총점 : %d\n", sum);
		printf("평균 : %.2f\n", average);
	}


	//do - while 문
	//do - while 루프를 사용하여 가장 큰 수를 찾는다.

	int x = 0, max = 0;

	printf("수를 입력하세요 (0은 끝)  : \n");
	do
	{
		scanf_s("%d", &x);
		if (x > max)
		{
			max = x;
		}
	} while (x != 0);
	printf("가장 큰 수는 %d 입니다.", max);


	//for 문
	//for 루프를 사용하여 3의 배수를 프린트한다.
	
	//내가 한거 
	int x = 1 , count = 0;
	printf("3배수를 몇개 프린트 할까요?");
	scanf_s("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		x = 3 * i;
		printf("%d ", x);
	}
	//예제
	int count, num; //count 는 3의 배수 num은 출력할 3의 배수 갯수
	printf("3배수를 몇개 프린트 할까요?");
	scanf_s("%d", &num);

	for (count = 3; count <= 3 * num; count += 3)
	{
		printf("%d", count);
		if (count % 15 == 0) //1마다 줄을 띄우겠다
		{
			printf("\n");
		}
	}


	//for 루프를 사용하여 화씨온도를 섭씨온도로 변환하는 표를 작성한다

	float celcius, fahrenheit;

	for (fahrenheit = 0; fahrenheit <= 100; fahrenheit += 10)
	{
		celcius = (fahrenheit - 32) * (5.0 / 9.0);
		printf("%.2f 도 F = %.2f 도 C\n", fahrenheit, celcius);
	}


	//for loop를 사용하여 점수의 합과 평균 계산.
	int score, count, sum;
	float average;
	sum = 0;// sum+=score; 초기화되지 않은 변수사용?? 

	printf("점수 입력 (0은 끝) : ");
	scanf_s("%d", &score);

	for (count = 0; score != 0; count++);
	{
		sum += score;
		scanf_s("%d", &score);
	}
	if (count == 0)
	{
		printf("입력 없음\n");
	}
	else
	{
		average = (float) sum / count; //형변환을 위한 (float)
		printf("총점 : %d\n", sum);
		printf("평균 : %.2f\n", average);
	}


	//중첩루프(nested loop)
	//for 루프의 중첩을 사용하여 구구단을 프린트하는 프로그램.
	int x , y;
	printf("구구단을 외자!!\n");

	for (x = 1; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			printf("%d단 : %d X  %d = %d\n", x, x, y, x * y);
		}
		printf("\n");
	}


	//무한루프(infinite loop)
	while (1) //무한루프
	{
		printf("무한루프");
	}

	int count = 1;
	while (count != 100)
	{
		count += 2;
	}

	int x = 1;
	while (count <= 100)
	{
		printf("%d\n", count);
		count--;
	}

	for (int i = 0; ; i++)
	{
		printf("루프 반복 : %d\n", i);
	}


	//기타
	
	//break 문 예시
	int i = 100, j = 0;
	float result;
	while (1)
	{
		scanf_s("%d", &j);
		if (j == 0);
		{
			break; // 루프의 실행이 중단
		}
		result = i / j;
	}
	
	//continue문 예시
	for (i = 0, sum = 0; i <= n, i++)
	{
		if (i % 2 == 0)
		{
			continue; //루프 조건을 다시 계산하고 참이면 루프본체 다시 실행.
		}
		sum += i;
	}








	return 0;
}