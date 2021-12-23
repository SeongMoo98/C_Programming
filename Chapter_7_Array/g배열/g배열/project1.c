#include <stdio.h>
#include <time.h>



double sum(double a[], int NUM);
void to_pdf(double a[], int NUM, double sum);
void normalize(double a[], double b[], int NUM);
void histogram(double a[], int NUM, int scale);



int main(void)
{
	srand((unsigned int)time(NULL));







	return 0;
}



double sum(double a[], int NUM)
{
	printf("모집단의 크기를 입력하세요 :");
	scanf_s("%d", &NUM);
	for (int i = 0; i < NUM; i++)
	{
		a[i] = rand();
	}

}

void to_pdf(double a[], int NUM, double sum)
{




}

void normalize(double a[], double b[], int NUM)
{



}


void histogram(double a[], int NUM, int scale)
{





}