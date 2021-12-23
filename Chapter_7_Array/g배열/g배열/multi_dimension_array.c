#include<stdio.h>
#include<string.h> // strlen


#define N 3

void readNxN(int a[N][N]);
void SumNxN(const int a[N][N], int rSum[N], int cSum[N]);
void printNxN(const int a[N][N], const int rSum[N], const int cSum[N]);

int main(void)
{

	////2���� �迭
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
	//		printf("2���� �迭 (%d, %d)�� ���� ������ �����ϴ� : %d\n",i,j,x[i][j]);
	//		
	//	}
	//	printf("\n");
	//}

	//2���� �迭 Ȱ��
	int x[N][N];
	int rSum[N] = { 0 }, cSum[N] = { 0 }; // �� �迭 ���Ҹ� 0���� �ʱ�ȭ
	readNxN(x);
	SumNxN(x, rSum, cSum);
	printNxN(x, rSum, cSum);

	return 0;
}
void readNxN(int a[N][N]) //������� a�� �� ���Ҹ� �и�
{
	printf("%d x %d ���� ����� �Է��ϼ���\n", N, N);
	for (int i = 0; i < N ; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
}

//������� a�� �� ���� �� rSum�� �� ���� �� cSum�� ����
void SumNxN(const int a[N][N], int rSum[N], int cSum[N]) //�� const�� ���̴� �ɱ�
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
	const int width = strlen(lseg) - 1; //�� ������ ������� lseg�� ���̺��� �ϳ� �۰� ����?
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%*d", width, a[i][j]); // �� ���� ������� ������ �μ��� ����
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