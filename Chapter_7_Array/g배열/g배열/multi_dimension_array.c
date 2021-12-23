#include<stdio.h>
#include<string.h> // strlen


#define N 3

void readNxN(int a[N][N]);
void SumNxN(const int a[N][N], int rSum[N], int cSum[N]);
void printNxN(const int a[N][N], const int rSum[N], const int cSum[N]);

int main(void)
{

	////2차원 배열
	int arr[][3] = { 1,2,3,4,5,6 };
	int arr1[][3][3] = { 1,2,3,4,5,6,7,8,9 };
	//int x[3][5] = 
	//{
	//	{1,2,3,4,5},
	//	{6,7,8,9,10},
	//	{11,12,13,14,15} 
	//};
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("2차원 배열 (%d, %d)의 값은 다음과 같습니다 : %d\n",i,j,x[i][j]);
	//		
	//	}
	//	printf("\n");
	//}

	//2차원 배열 활용
	int x[N][N];
	int rSum[N] = { 0 }, cSum[N] = { 0 }; // 각 배열 원소를 0으로 초기화
	readNxN(x);
	SumNxN(x, rSum, cSum);
	printNxN(x, rSum, cSum);

	return 0;
}
void readNxN(int a[N][N]) //정방행렬 a의 각 원소를 읽름
{
	printf("%d x %d 정수 행렬을 입력하세요\n", N, N);
	for (int i = 0; i < N ; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
}

//정방행렬 a의 각 행의 합 rSum과 각 열의 합 cSum을 구함
void SumNxN(const int a[N][N], int rSum[N], int cSum[N]) //왜 const를 붙이는 걸까
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			rSum[i] += a[i][j];
			cSum[j] += a[i][j];
		}
	}
}


void printNxN(const int a[N][N], const int rSum[N], const int cSum[N])
{
	const char* lseg = "_______";
	const int width = strlen(lseg) - 1; //각 원소의 출력폭은 lseg의 길이보다 하나 작게 지정?
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%*d", width, a[i][j]); // 각 원소 출력폭을 별도의 인수로 받음
		}
		printf("|%*d\n", width, rSum[i]);
	}
	for (int i = 0; i < N; i++)
	{
		printf("%s", lseg);
	}
	printf("+\n");
	for(int i=0;i<N;i++)
	{
		printf("%*d", width, cSum[i]);
	}
	printf("\n");
}