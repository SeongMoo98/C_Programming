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
		printf("�� ��°�� ū ������ ����ұ��?<����=0> : ");
		scanf_s("%d", &choice);
		sorting(parr, choice);
		if (choice == 0)
		{
			printf("���α׷��� �����մϴ�");
			break;
		}
	}



	return 0;
}

//������ ���� �������� sorting �Լ�
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
		printf("%d��°�� ū �� : %d\n", num, *ptr[10 - num]);
	}
}