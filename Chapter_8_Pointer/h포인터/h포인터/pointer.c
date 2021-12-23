#include <stdio.h>


//포인터
void printIntVar(char* name, int value);

//포인터 인수전달
void printAB(int a, int b);
void swap(int a, int b);
void swap1(int* p, int* q);

int main(void)
{
	
	////포인터
	//int one = 1;
	//int* to_one;
	//to_one = &one;

	//printIntVar("one", one);
	//*to_one = one + 1;
	//printIntVar("one", one);
	//*to_one = one + 1;
	//printIntVar("one", one);
	//(*to_one)++;
	//printIntVar("one", one);

	/*int n;

	printf("숫자 n을 입력해 주세요 :");
	scanf_s("%d", &n);

	printIntVar("n", n);
	printIntVar("*&n", *&n);*/


	//포인터 인수 전달로 변수값 교환
	//int a = 2, b = 3;
	//int temp;
	//printAB(a, b);
	//temp = a; //temp값에 a를 넣음
	//a = b; //a값에 b값을 넣음
	//b = temp; //temp값에 a가 있으니까 b에 temp를 넣음
	//printAB(a, b);


	//int a = 2 , b = 3;
	//printAB(a, b);
	//swap(a, b);
	//printAB(a, b);
	////이러면 교환이 되지않는다
	////왜? swap함수의 a,b는 main의 a,b가 아니라 main의 복사된 값일 뿐이다.


	//int a = 2 , b = 3;
	//printAB(a, b);
	//swap1(&a, &b);
	//printAB(a, b);
	////swap1에서 main의 a,b의 주소를 알고있으므로 이들 변수값을 변경할수 있다.


	return 0;
}
void printIntVar(char* name, int value)
{
	printf("%s\t=%d\n", name, value);
}

void printAB(int a, int b)
{
	printf("두 변수 값을 순서대로 출력하면 %d, %d입니다.\n",a, b);
}

void swap(int a, int b)
{
	int temp;

	temp = a; 
	a = b; 
	b = temp; 
}
void swap1(int *p, int *q)
{
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}