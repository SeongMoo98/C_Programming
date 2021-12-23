#include<stdio.h>

int PrimeFactor[1000];
int count = 0; //배열의 원소

int IfPrimeNumber(int num);
void PrimeNumber(int num);
void NotPrimeNumber(int num);
void PrintPrimeNumber(int num);

int main(void)
{
	int InputNum;
	int result;
	printf("정수 입력 : ");
	scanf_s("%d", &InputNum);

	result = IfPrimeNumber(InputNum);

	if (result == 1)			//소수가 아닐 때
	{
		NotPrimeNumber(InputNum);
		PrintPrimeNumber(InputNum);
	}
	else if (result == 0)		//소수일 때
	{
		PrimeNumber(InputNum);
	}

	return 0;
}



//소수 판별함수
int IfPrimeNumber(int num)
{
	int i;
	int index=0;  //소수인지 아닌지 판별하기 위한 참 거짓 값
	if (num == 1)
	{
		printf("1은 합성수도 소수도 아닙니다.");
		return ; //반환값 없음
	}
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			index = 1;
			break;
		}
		else
			index = 0;
	}
	return index;
}

void PrimeNumber(int num)
{
	printf("%d는 소수입니다.",num);
}

void NotPrimeNumber(int num)
{
	
	if (num == 1) //재귀함수의 무한호출을 막기위한 return
		return;

	int j;
	for (j = 2; j <= num; j++)
	{
		if (num % j == 0)
		{
			PrimeFactor[count] = j;
			count++;
			break;
		}
	}
	NotPrimeNumber((num / j)); //재귀함수
	
}

void PrintPrimeNumber(int num)
{
	printf("%d = ", num);
	for (int i = 0; i < count; i++)
	{
		printf("%d", PrimeFactor[i]);
		if (i != count - 1) printf(" * ");
	}
}
