#include<stdio.h>
#include<math.h>
int a = 0;
int main(void)
{
	float sum = 0;
	printf("�Ŵ� ������ �������� �ݾ��� �Է��ϼ��� :");
	scanf_s("%d", &a);
	installment(sum);
	return 0;
}

float installment(double sum)
{
	float r;
	int n;
	printf("������ �Է��ϼ���(�Ҽ��� 2�ڸ�����) :");
	scanf_s("%.2f", &r);
	printf("���ݳ��� �Ⱓ�� �Է����ּ��� :");
	scanf_s("%d", &n);
	sum = (a * (1 + r)*(pow(r,n) - 1)) / r; //pow (r,n) = r�� n��

	return sum;
}

