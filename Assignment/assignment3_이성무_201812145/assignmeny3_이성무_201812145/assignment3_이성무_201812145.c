#include <stdio.h>
#include <math.h> 





int main(void)
{
	int num, binary;
	int arr[32];
	int i, k;
	printf("���� ���� ���� �Է����ּ��� :");
	scanf_s("%d", &num);

	printf("i��° ��Ʈ , k��° ��Ʈ�� �Է����ּ���(1~32)");
	scanf_s("%d %d", &i, &k);

	
	if (i > 32 || k > 32) //bit������ ����� ���� �Է¹޾����� ����ó�� �� �ٽ� �Է��� ����
	{
		printf("ó���Ҽ��ִ� ��Ʈ�� ������ �Ѿ���ϴ�.\n");
		printf("i��° ��Ʈ , k��° ��Ʈ�� �Է����ּ���(1~32)\n");
		scanf_s("%d %d", &i, &k);
	}

	//num�� 2������ ��ȯ
	if (num > 0)
	{
		int n = num; //�������� num�� ����ϱ� ���� �������� n ����
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


	//n�� 2������ ���
	printf("\n�Է��Ͻ� ������ 2������ �ٲٸ� ������ �����ϴ�.\n");

	printf("2���� :");
	for (int j = 0; j<=31; j++)
	{
		printf("%d", arr[j]);
	}
	printf("\n\n");


	//i��° ��Ʈ�� ���
	printf("%d��° bit = %d\n\n",i , arr[32-i]);



	//k��° ��Ʈ�� 1�� ��ȯ �� 10������ ���
	if (arr[32 - k] ==1)
	{
		printf("%d��° bit�� 1�̹Ƿ� ������ �������� �����ϴ�.\n\n", k);
	}

	else
	{
		arr[32 - k] = 1;
		printf("\n%d��° bit�� 1�� �ٲٸ� ������ �����ϴ�.\n", k);

		printf("2���� :");
		for (int j = 0; j <= 31; j++)
		{
			printf("%d", arr[j]);
		}
		printf("\n\n");

		int k_power = pow(2, k - 1); //k��° bit�� 1�� �ٲپ 2������ 10������ ����ϴ� ��
		int result = k_power + num;
		printf("10���� : %d", result);
	}
	


	return 0;
}