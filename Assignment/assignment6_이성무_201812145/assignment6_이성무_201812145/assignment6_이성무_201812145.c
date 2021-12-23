#include <stdio.h>
void sorting(int* ptr[], int num);

int main(void)
{

	int arr[10];
	int* parr[10];
	int choice = 0;

	printf("Input 10 numbers :");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
		parr[i] = &arr[i];
	}


	while (1)
	{
		printf("몇 번째로 큰 정수를 출력할까요?<종료=0> : ");
		scanf_s("%d", &choice);
		sorting(parr, choice);
		if (choice == 0)
		{
			printf("프로그램을 종료합니다");
			break;
		}
	}



	return 0;
}

//포인터 변수 오름차순 sorting 함수
void sorting(int* ptr[], int num)
{
	int temp;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (ptr[j] >ptr[j+1])
			{
				temp = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = temp;
			}
		}
	}
	if(num!=0)
	{
		printf("%d번째로 큰 수 : %d\n", num, *ptr[10 - num]);
	}
}