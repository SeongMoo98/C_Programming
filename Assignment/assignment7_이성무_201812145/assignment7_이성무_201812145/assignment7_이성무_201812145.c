#include <stdio.h>
#include<string.h>

#define MAX_CHAR 100
void comma_print(char *str);
void dot_print(char *str);

int main(void)
{
	char str[MAX_CHAR];
	while(1)
	{
		printf("문장을 입력하세요. > ");
		scanf_s("%[^\n]s", str, sizeof(str)); //%[^\n]s 공백까지 문자열로 받아들임
		while (getchar() != '\n'); //입력버퍼- 무한루프도는걸 막아줌
		if (!strcmp(str, "quit")) //str과 quit 비교 일치하면 0 리턴
		{
			printf("프로그램을 종료합니다");
			break;
		}
		else if(strchr(str, ',')) //특정 문자 찾기- 나타난 문자의 포인터(주소)반환
		{
			comma_print(str);
		}
		else if (strchr(str, '.'))
		{
			dot_print(str);
		}
		else
		{
			printf("문장에 ',' '.'가 없습니다. 다시 입력해주세요\n");
		}

	}

	return 0;
}

void comma_print(char *str)
{
	char str1[MAX_CHAR] = " ";
	char str2[MAX_CHAR] = " ";
	sscanf_s(str, "%[^','] , %[^\n]s", str1, sizeof(str1), str2, sizeof(str2));  //%[^','] 콤마 전까지 문자열을 str1으로 , %[^\n]s공백까지 받아들임
	strcat_s(str2, sizeof(str2), ","); //문자열 접합
	strcat_s(str2, sizeof(str2), str1);
	printf("결과문장\n");
	printf("%s\n", str2);
}

void dot_print(char *str)
{
	char str1[MAX_CHAR] = " ";
	char str2[MAX_CHAR] = " ";
	sscanf_s(str, "%[^'.'] . %[^\n]s", str1, sizeof(str1), str2, sizeof(str2));
	strcat_s(str1, sizeof(str1), ".\n");
	strcat_s(str1, sizeof(str1), str2);
	printf("결과문장\n");
	printf("%s\n", str1);
}