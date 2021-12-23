#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define MAX_LINE 81


int main(void)
{
	////문자열 길이 함수 
	//int len, count = 0, sum = 0;
	//char str[MAX_LINE];
	//
	//printf("문자열들을 입력하세요(-1은 종료)\n");

	//while (gets(str) != NULL)           //여기에 gets가 들어갈 수 있구나 여기서 NULL을 어떻게함?
	//{
	//	len = strlen(str);
	//	printf("문자열의 길이 : %d\n", len);
	//	sum = sum + len;
	//	count++;
	//}

	//printf("전체 문자열의 개수 :      %d\n", count);
	//printf("전체 문자열의 길이의 합 : %d\n", sum);


	////문자열 복사함수
	//char s[] = "Hello", t[6];
	//char* p = "World", * q;

	//printf("문자열 s = %s\n", s);
	//strcpy(t, s);					//문자열 복사 t에 s를 복사
	//printf("문자열 t = %s\n", t);
	//
	//printf("문자열 p = %s\n", p);
	//q = p;      					//포인터 대입
	//printf("문자열 q = %s\n", q);

	//strcpy(s, "Good");              //s에 새로운 문자열 복사
	//printf("문자열 s = %s\n", s);
	//printf("문자열 t = %s\n", t);
	//
	//strcpy(p, "Bye");               //p에 새로운 문자열 복사 왜 여기서 안되노
	//printf("문자열 p = %s\n", p);
	//printf("문자열 q = %s\n", q);


	////문자열 접합함수
	//int count = 0;
	//char str[MAX_LINE], longstr[100 * MAX_LINE] = ""; //뭐고 이건

	//printf("문자열들을 입력하세요.\n");

	//while (gets(str) != NULL)
	//{
	//	strcat(longstr, str);
	//	count++;
	//}
	//printf("입력된 문자열의 개수    :     %d\n", count);
	//printf("접합된 전체 문자열      :     %s\n", longstr);
	//printd("접합된 전체 문자열 길이 :     %d\n", strlen(longstr));
	

	////문자열 비교함수
	//int result;
	//char str1[100] = "C Language";
	//char str2[] = "C Programming";
	//result = strcmp(str1,str2); //ASCII 차이를 리턴한다는데 왜 1, -1 ,0 만 리턴될까
	//printf("%d\n", result);

	//strcat_s(str1,sizeof(str1),str2);
	//printf("%s\n",str1);


	////문자열 내의 특정 문자 검색 함수
	//char str1[] = "C Programming", * str2;
	//str2 = strchr(str1, 'r');
	//printf("%s\n", str2);

	//str2 = strrchr(str1, 'r');
	//printf("%s", str2);


	////문자열 내의 특저 문자열 검색함수
	//char str1[] = "C Language Programming";
	//char str2[] = "Language";
	//char* result;

	//result = strstr(str1, str2);
	//printf("%s", result);


	//문자열 변환 함수
	////str->int
	//int sum = 0, count = 0;
	//char num[81];
	//printf("구매한 금액들을 입력하세요.\n");
	//while (gets(num) != NULL)
	//{
	//	count++;
	//	sum += atoi(num);
	//}
	//printf("총 %d개를 구매하였고 총액은 %d 입니다.", count, sum);

	////str->double
	//float sum = 0;
	//int count = 0;
	//char num[81];

	//printf("구매한 금액들을 입력하세요.\n");
	//while (gets(num) != NULL)
	//{
	//	count++;
	//	sum += atof(num);
	//}
	//printf("총 %d 개를 구매하였고 총액은 %6.2f입니다.\n", count, sum);


	////토큰 추출
	//char str[] = "C Language Programming";
	//char *token;
	//token = strtok(str, " ");//첫번째 토큰분리
	//while(token != NULL)
	//{
	//	printf("%s \n", token);
	//	token = strtok(NULL, " ");
	//}




	return 0;
}