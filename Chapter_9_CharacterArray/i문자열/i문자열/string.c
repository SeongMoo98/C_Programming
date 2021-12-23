#include <stdio.h>

//문자열
#define MAX 81

//포인터 배열
#define MAX_LINE 80
#define MAX_STR 3

int main(void)
{
	////문자열
	//char str[MAX] = "C 프로그래밍 !";

	//printf("%s\n", str); //문자열을 출력할때 %s

	//for (int i = 0; str[i] != '\0'; i++) //문자 배열 원소를 하나씩 출력,  str[i] != '\0' :문자열 마지막에는 \0이 저장됨
	//{
	//	printf("%c", str[i]);
	//}
	//printf("\n");


	////포인터와 문자열
	//char* p;
	//char m[] = "World";
	//p = m;
	//for (int i = 0; i < strlen(m); i++) //배열 첨자를 이용한 문자열
	//{
	//	printf("%c", m[i]);
	//}
	//printf("\n");

	//for (int i = 0; i < strlen(p); i++) //포인터를 이용한 문자 배열의 각 원소를 출력
	//{
	//	printf("%c", *(p+i));
	//}
	//printf("\n");

	//printf("%s\n", m);//배열이름(문자열의 시작 주소)를 이용하여 문자열 출력
	//printf("%s\n", p);//포인터를 이용한 문자열의 출력



	//포인터 배열
	char colors[MAX_STR][MAX_LINE] = { "red", "blue","white" };
	char* ptr[MAX_STR];

	for (int i = 0; i < MAX_STR; i++)
	{
		ptr[i] = colors[i]; //문자열의 주소를 포인터 배열의 각 원소에 대입
	}

	//배열을 이용한 직접참조1
	for(int i = 0; i < MAX_STR; i++)
	{
		printf("%s ", &colors[i][0]);
	}
	printf("\n");

	//배열을 이용한 직접잠조2
	for(int i = 0; i < MAX_STR; i++)
	{
		printf("%s ", colors[i]);
	}
	printf("\n");

	//포인터 배열을 이용한 간접참조
	for(int i = 0; i < MAX_STR; i++)
	{
		printf("%s ", ptr[i]);
	}

	return 0;
}