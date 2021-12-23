#include<stdio.h>

int PrimeFactor[1000];
int count = 0; //�迭�� ����

int IfPrimeNumber(int num);
void PrimeNumber(int num);
void NotPrimeNumber(int num);
void PrintPrimeNumber(int num);

int main(void)
{
	int InputNum;
	int result;
	printf("���� �Է� : ");
	scanf_s("%d", &InputNum);

	result = IfPrimeNumber(InputNum);

	if (result == 1)			//�Ҽ��� �ƴ� ��
	{
		NotPrimeNumber(InputNum);
		PrintPrimeNumber(InputNum);
	}
	else if (result == 0)		//�Ҽ��� ��
	{
		PrimeNumber(InputNum);
	}

	return 0;
}



//�Ҽ� �Ǻ��Լ�
int IfPrimeNumber(int num)
{
	int i;
	int index=0;  //�Ҽ����� �ƴ��� �Ǻ��ϱ� ���� �� ���� ��
	if (num == 1)
	{
		printf("1�� �ռ����� �Ҽ��� �ƴմϴ�.");
		return ; //��ȯ�� ����
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
	printf("%d�� �Ҽ��Դϴ�.",num);
}

void NotPrimeNumber(int num)
{
	
	if (num == 1) //����Լ��� ����ȣ���� �������� return
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
	NotPrimeNumber((num / j)); //����Լ�
	
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
