#include<stdio.h>

//typedef
typedef int IntType;
typedef double RealType;


int main(void)
{
	//typedef
	int i = 5;
	IntType j = 7, k;
	RealType x;

	k = i + j;
	printf("%d + %d = %d\n", i, j, k);
	x = (RealType)i / j;
	printf("%d / %d = %f\n", i, j, x);



	return 0;
}

