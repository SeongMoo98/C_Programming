#include<stdio.h>

void put_string(char* p);

int main(void)
{

	//char lyrics[] = "I am just a poor boy~ \n";
	//printf("%d\n", strlen(lyrics)); //strlen() 문자열의 문자갯수를 세어줌
	//for (int i = 0; i < strlen(lyrics); ++i) 
	//{
	//	printf("%c", lyrics[i]);
	//}

	////배열 첨자연산대신 포인터 간접참조연산을 사용할 수 있다.
	//char lyrics[] = "I am just a poor boy~ \n";
	//char* p = lyrics;
	//for (int i = 0; i < strlen(lyrics); ++i)
	//{
	//	printf("%c", *(p + i));
	//}
	//

	////포인터 제 2법칙
	//char lyrics[] = "I am just a poor boy~ \n";
	//char *p=lyrics;
	//for (int i = 0; i < strlen(lyrics); ++i)
	//{
	//	printf("%c", *(p + i));
	//}
	//for (int i = 0; i < strlen(lyrics); ++i)
	//{
	//	printf("%c", p[i]);
	//}

	
	////포인터 상수에도 적용
	//char lyrics[] = "I am just a poor boy~ \n";
	//
	//for (int i = 0; i < strlen(lyrics); ++i)
	//{
	//	putchar(lyrics[i]);
	//}
	//for (int i = 0; i < strlen(lyrics); ++i)
	//{
	//	putchar(*(lyrics+i));
	//}


	//포인터다운 배열 참조 방식
	//배열 시작위치를 기억할 필요가 없다면 포인터를 증가시켜가며 배열 원소를 참조할 수 있다.
	char lyrics[] = "I am just a poor boy~ \n";
	put_string(lyrics);



	return 0;
}

void put_string(char* p)
{
	while (*p) //(*p) : p가 가리키는 원소가 '참'이면 반복. 즉 p가 가리키는 원소가 '\0'이 아니면 반복
	{
		printf("%c", *p++); // (*p++) p가 가리키는 원소를 참조한후 p를 증가시킴
	}
}