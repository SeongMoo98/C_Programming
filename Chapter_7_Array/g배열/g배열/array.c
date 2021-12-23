#include<stdio.h>


int sum(int a[10]); //배열 인수전달
int sum1(int a[], int length); //배열 크기전달

//매개변수를 통한 배열원소 변경
#define NON 5 //NON=number of number
int sum2(int a[], int length);
void read(int a[], int length);
int main_array(void)
{
	//배열
	//int x[5],i;

	//printf("다섯 개의 정수를 입력해주세요.\n");
	//for (i = 0; i < 5; i++) //배열은 0부터 시작, 배열을 사용하기에는 for문이 제격
	//{
	//	scanf_s("%d", &x[i]);
	//}
	//printf("입력된 정수를 역순으로 출력하면 다음과 같습니다.\n");
	//for (int j = 4; j >= 0; j--)
	//{
	//	printf("%d ", x[j]);
	//}
	//printf("\n");

	////배열 선언과 초기화
	//int x[] = { 1,2,3,4,5 };

	//printf("배열 이름 값		x = %8u\n", x); //배열이름은 배열이 할당된 메모리 공간의 시작주소(base address임
	//printf("배열 전체 크기		sizeof(x)=%8d\n", sizeof(x));
	//printf("배열 원소 크기		sizeof(x[0])=%8d\n", sizeof(x[0])); //int의 메모리 4바이트


	////배열인수전달
	//int x[] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("1 + 2 + ... + 10 = %d\n", sum(x)); //sum(x) 배열이름만 전달


	////배열크기전달
	//int x[] = { 1,2,3,4,5,6,7,8,9,10 };
	//const int xLen = sizeof(x) / sizeof(x[0]); //sizeof(x)->배열의 크기=40byte,sizeof(x[0])->배열 원소의 크기 = 4byte -->배열의 갯수->배열의 크기를 전달 
	//int y[] = { 2,4,6,8,10};
	//const int yLen = sizeof(y) / sizeof(y[0]);

	//printf("1 + 2 + ... + 10 = %d\n", sum1(x, xLen));
	//printf("2 + 4 + ... + 10 = %d\n", sum1(y, yLen));


	//매개변수를 통한 배열 원소 변경
	int x[NON];
	read(x, NON); // read 함수가 x원소 값을 채워추고 sum이 x의 원소합을 구함
	printf("입력한 숫자의 합은 %d입니다.\n", sum2(x, NON));
	return 0;




	return 0;
}
//배열 인수전달
int sum(int a[10])//매개변수 선언시 배열의 크기는 무시됨 <-> int sum(int a[])
{
	int sum = 0, i;
	for (i = 0; i < 10; i++)
	{
		sum += a[i];
	}
	return sum;
}
//배열 크기전달
int sum1(int a[], int length)
{
	int sum1 = 0, i;
	for (i = 0; i < length; i++)
	{
		sum1 += a[i];
	}
	return sum1;
}

//매개변수를 통한 배열 원소 변경
int sum2(int a[], int length)
{
	int sum2 = 0, i;
	for (i = 0; i < length; i++)
	{
		sum2 += a[i];
	}
	return sum2;
}

void read(int a[], int length)
{
	int i;
	printf("%d 개의 정수를 입력하세요 :", length);
	for (i = 0; i < length; i++)
	{
		scanf_s("%d", &a[i]);
	}
}