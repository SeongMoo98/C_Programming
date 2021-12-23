#include <stdio.h>
#define PRINT(x) printIntVar(#x,x) 


void printIntVar(const char* name, int value);

int main(void)
{
	////포인터의 포인터
	//int i = 5;
	//int *pi = &i;
	//int **ppi = &pi; // ppi는 포인터 변수를 가리킬수 있는 포인터

	//PRINT(i);
	//PRINT(*pi);
	//PRINT(**ppi);

	//**ppi += 12340;
	//PRINT(**ppi);
	//PRINT(*pi);
	//PRINT(i);


	//char aa[4][5] = { "This","That","Here","Hour" }; //배열의 배열
	//// [4][5]에서 [5] 배열 마지막에 \0 이 들어가 문자열이 끝났다고 표시 그래서 [5]
	//// T h i s \0
	//// T h a t \0
	//// H e r e \0
	//// H o u r \0
	//char(*ap)[5]; //배열 포인터

	//char** pp;//포인터의 포인터

	//char* pa[4] = { "This", "is","pointer","array" }; //포인터 배열

	//const int n1 = sizeof aa / sizeof * aa;
	//const int n2 = sizeof pa / sizeof * pa;

	//ap = aa; //배열 포인터=배열의 배열
	//pp = pa;//포인터의 포인터 = 포인터 배열

	//printf("[Array Pointer]\n");
	//for (int i = 0; i < n1; ++i)
	//{
	//	printf("%p : %s\n", ap + i, ap[i]); //%p 포인터 형태로 출력 , char* 는 %s로 출력 -문자열 맨 끝 \0에 도달할떄 까지 출력 or .n으로 명시된 정밀도 n문자만큼 출력
	//}

	//printf("\n");

	//printf("[Pointer Pointer}\n");
	//for (int i = 0; i < n2; ++i)
	//{
	//	printf("%p : %s\n", pp + i, pp[i]);
	//}




	return 0;
}

void printIntVar(const char* name, int value)
{
	printf("%s\t=%d\n", name, value);
}