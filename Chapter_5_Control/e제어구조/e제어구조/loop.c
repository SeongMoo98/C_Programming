#include <stdio.h>

int main_loop()
{
	//while ��

	//1���� 100���� Ȧ������ ���� ����Ѵ�.
	int odd = 1 , sum = 0;

	while (odd <= 100)
	{
		sum = sum + odd;
		odd += 2;
	}
	printf("1���� 100���� Ȧ���� ���� %d �Դϴ�.", sum);

	//while ������ ����Ͽ� ����ڰ� �Է��� ������ �հ� ����� ����Ѵ�.

	int score = 0 , sum = 0, count = 0;
	float average;
	printf("���� �Է� (0�� ��) : \n");
	scanf_s("%d", &score);

	while (score != 0)	//0�� �Է��ϸ� while�� Ż���ϰ� if�� ������ Ȯ���ؼ� ����
	{
		sum += score;
		count++;
		scanf_s("%d", &score);
	}
	if (count == 0) 
	{
		printf("�Է� ����\n");
	}
	else
	{
		average = (float) sum / count; //����ȯ�� ���� (float)
		printf("���� : %d\n", sum);
		printf("��� : %.2f\n", average);
	}


	//do - while ��
	//do - while ������ ����Ͽ� ���� ū ���� ã�´�.

	int x = 0, max = 0;

	printf("���� �Է��ϼ��� (0�� ��)  : \n");
	do
	{
		scanf_s("%d", &x);
		if (x > max)
		{
			max = x;
		}
	} while (x != 0);
	printf("���� ū ���� %d �Դϴ�.", max);


	//for ��
	//for ������ ����Ͽ� 3�� ����� ����Ʈ�Ѵ�.
	
	//���� �Ѱ� 
	int x = 1 , count = 0;
	printf("3����� � ����Ʈ �ұ��?");
	scanf_s("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		x = 3 * i;
		printf("%d ", x);
	}
	//����
	int count, num; //count �� 3�� ��� num�� ����� 3�� ��� ����
	printf("3����� � ����Ʈ �ұ��?");
	scanf_s("%d", &num);

	for (count = 3; count <= 3 * num; count += 3)
	{
		printf("%d", count);
		if (count % 15 == 0) //1���� ���� ���ڴ�
		{
			printf("\n");
		}
	}


	//for ������ ����Ͽ� ȭ���µ��� �����µ��� ��ȯ�ϴ� ǥ�� �ۼ��Ѵ�

	float celcius, fahrenheit;

	for (fahrenheit = 0; fahrenheit <= 100; fahrenheit += 10)
	{
		celcius = (fahrenheit - 32) * (5.0 / 9.0);
		printf("%.2f �� F = %.2f �� C\n", fahrenheit, celcius);
	}


	//for loop�� ����Ͽ� ������ �հ� ��� ���.
	int score, count, sum;
	float average;
	sum = 0;// sum+=score; �ʱ�ȭ���� ���� �������?? 

	printf("���� �Է� (0�� ��) : ");
	scanf_s("%d", &score);

	for (count = 0; score != 0; count++);
	{
		sum += score;
		scanf_s("%d", &score);
	}
	if (count == 0)
	{
		printf("�Է� ����\n");
	}
	else
	{
		average = (float) sum / count; //����ȯ�� ���� (float)
		printf("���� : %d\n", sum);
		printf("��� : %.2f\n", average);
	}


	//��ø����(nested loop)
	//for ������ ��ø�� ����Ͽ� �������� ����Ʈ�ϴ� ���α׷�.
	int x , y;
	printf("�������� ����!!\n");

	for (x = 1; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			printf("%d�� : %d X  %d = %d\n", x, x, y, x * y);
		}
		printf("\n");
	}


	//���ѷ���(infinite loop)
	while (1) //���ѷ���
	{
		printf("���ѷ���");
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
		printf("���� �ݺ� : %d\n", i);
	}


	//��Ÿ
	
	//break �� ����
	int i = 100, j = 0;
	float result;
	while (1)
	{
		scanf_s("%d", &j);
		if (j == 0);
		{
			break; // ������ ������ �ߴ�
		}
		result = i / j;
	}
	
	//continue�� ����
	for (i = 0, sum = 0; i <= n, i++)
	{
		if (i % 2 == 0)
		{
			continue; //���� ������ �ٽ� ����ϰ� ���̸� ������ü �ٽ� ����.
		}
		sum += i;
	}








	return 0;
}