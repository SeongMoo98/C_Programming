#include<stdio.h>
#include<math.h>
int a = 0;
int main(void)
{
	float sum = 0;
	printf("매달 납부할 정기적금 금액을 입력하세요 :");
	scanf_s("%d", &a);
	installment(sum);
	return 0;
}

float installment(double sum)
{
	float r;
	int n;
	printf("이율을 입력하세요(소수점 2자리까지) :");
	scanf_s("%.2f", &r);
	printf("적금납부 기간을 입력해주세요 :");
	scanf_s("%d", &n);
	sum = (a * (1 + r)*(pow(r,n) - 1)) / r; //pow (r,n) = r의 n승

	return sum;
}

