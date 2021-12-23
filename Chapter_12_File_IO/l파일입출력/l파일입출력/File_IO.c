#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main()
{

	////키보드에서 문자를 입력받아 모니터에 출력
	//int c;

	//c = fgetc(stdin); // 키보드로부터 입력 받은 문자의 아스키코드
	//while (c != EOF)
	//{
	//	fputc(c, stdout); //fp가 가리치는 파일에 문자 c출력
	//	c = fgetc(stdin); //키보드로부터 문자를 읽어 c에 저장
	//}



	//키보드에서 문자를 입력받아 모니터에 출력
	FILE* fp;
	int c;

	fp = fopen("message.txt", "w");
	c = fgetc(stdin); // 키보드로부터 입력 받은 문자의 아스키코드
	while (c != EOF)
	{
		putc(c, stdout); //fp가 가리치는 파일에 문자 c출력
		c = fgetc(stdin); //키보드로부터 문자를 읽어 c에 저장
	}
	fclose(fp);
	printf("message.txt 파일에 저장 완료");

	return 0;
}