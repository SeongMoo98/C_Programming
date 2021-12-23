#include <stdio.h>
#include <math.h> 





int main(void)
{
	int num, binary;
	int arr[32];
	int i, k;
	printf("기준 정수 값을 입력해주세요 :");
	scanf_s("%d", &num);

	printf("i번째 비트 , k번째 비트를 입력해주세요(1~32)");
	scanf_s("%d %d", &i, &k);

	
	if (i > 32 || k > 32) //bit범위를 벗어나는 값을 입력받았을때 예외처리 후 다시 입력을 받음
	{
		printf("처리할수있는 비트의 범위를 넘어섰습니다.\n");
		printf("i번째 비트 , k번째 비트를 입력해주세요(1~32)\n");
		scanf_s("%d %d", &i, &k);
	}

	//num을 2진수로 변환
	if (num > 0)
	{
		int n = num; //마지막에 num을 사용하기 위해 지역변수 n 선언
		int j = 31;
		while (n > 0)
		{
			
			binary = n % 2;
			arr[j] = binary;
			n = n / 2;
			j--;
		}
		for (int a = j; a >=0; a--)
		{
			arr[a] = 0;
		}
	}


	//n을 2진수로 출력
	printf("\n입력하신 정수를 2진수로 바꾸면 다음과 같습니다.\n");

	printf("2진수 :");
	for (int j = 0; j<=31; j++)
	{
		printf("%d", arr[j]);
	}
	printf("\n\n");


	//i번째 비트를 출력
	printf("%d번째 bit = %d\n\n",i , arr[32-i]);



	//k번째 비트를 1로 변환 후 10진수로 출력
	if (arr[32 - k] ==1)
	{
		printf("%d번째 bit는 1이므로 원래의 이진수와 같습니다.\n\n", k);
	}

	else
	{
		arr[32 - k] = 1;
		printf("\n%d번째 bit를 1로 바꾸면 다음과 같습니다.\n", k);

		printf("2진수 :");
		for (int j = 0; j <= 31; j++)
		{
			printf("%d", arr[j]);
		}
		printf("\n\n");

		int k_power = pow(2, k - 1); //k번째 bit를 1로 바꾸어서 2진수를 10진수로 계산하는 식
		int result = k_power + num;
		printf("10진수 : %d", result);
	}
	


	return 0;
}