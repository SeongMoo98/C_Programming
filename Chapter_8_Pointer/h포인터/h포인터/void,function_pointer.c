#include <stdio.h>
#include<math.h>
//void 포인터
void print_addr(const char* name, void* p) //const char *name ??
{
	printf("%s의 주소 = %p\n", name, p);
}

//void포인터에 대한 간접참조
#define INT 0
#define DOUBLE 1
void generic_print(int type, char* name, void* p)
{
	printf("%s =", name);
	switch (type)
	{
	case INT:
		printf("%d\n", *(int*)p);
		break;
	case DOUBLE:
		printf("%f\n", *(double*)p);
		break;
	default:
		printf("...\n");
		break;
	}
}



//함수 포인터
void printDec(int i);
void printOct(int i);

//함수포인터로 평균구하기
double a_mean(double a, double b);
double h_mean(double a, double b);
double g_mean(double a, double b);

int main(void)
{
	////void 포인터
	//int i = 19100829;
	//double f = 3.141592;

	//printf("I의 주소 = %p\n", &i);
	//printf("f의 주소 = %p\n", &f);
	////-> 함수로

	/*int i = 19100829;
	double f = 3.141592;
	print_addr("i", &i);
	print_addr("f", &f);*/



	////void 포인터에 대한 간접찹조
	int i = 19100829;
	double f = 3.141592;
	generic_print(INT, "i", &i);
	generic_print(DOUBLE, "f", &f);



	////함수 포인터
	//void(*fp)(int); //함수 포인터
	//int i;
	//printf("자연수 하나를 입력하세요.");
	//scanf_s("%d", &i);

	//fp = printOct;
	//fp(i);

	//fp = printDec;
	//fp(i);

	
	
	////함수포인터로 평균구하기
	//double x, y;
	//int sel;
	//char* name[] = { "산술평균", "조화평균", "기하평균" };
	//double(*fun[])(double , double ) = { a_mean,h_mean,g_mean }; //함수 포인터 배열 fun
	//int size = sizeof name / sizeof name[0];
	//
	//printf("평균을 구할 두 수를 입력하세요 :");
	//scanf_s("%lf %lf", &x, &y);

	//printf("\n어떤 평균을 구하고 싶으신가요?\n");
	//for (int i=0; i < size; ++i)
	//{
	//	printf("   %d. %s\n", i + 1, name[i]);
	//}
	//printf("번호를 입력해 주세요.");
	//scanf_s("%d", &sel);
	//while (sel < 1 || sel>3)
	//{
	//	printf("다시 번호를 입력해 주세요.");
	//	scanf_s("%d", &sel);
	//}
	//printf("\n선택하신 %s는 %lf", name[sel - 1], fun[sel - 1](x, y));


	return 0;
}




//함수 포인터
void printDec(int i)
{
	printf("십진 표기 : %5d\n",i);
}

void printOct(int i)
{
	printf("팔진 표기 : %5o\n",i);
}

//함수 포인터로 평균 구하기
double a_mean(double a, double b) //산술평균
{
	return (a + b) / 2;
}
double h_mean(double a, double b) //조화평균
{
	return (2 * a * b) / (a + b);
}
double g_mean(double a, double b) //기하평균
{
	return sqrt(a * b);
}