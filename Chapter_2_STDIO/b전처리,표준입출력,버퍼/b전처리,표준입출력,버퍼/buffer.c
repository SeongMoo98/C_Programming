#include <stdio.h>

//scanf
//%c : 문자하나만(char형) 입력받음 공백도 하나의 문자로 취급
//%s : 공백 문자가 아닌 문자부터 공백문자가 나올때까지를 문자열로 변환하여 입력받음
//%[abc] : 대괄호안에 있는 문자 a,b,c로만 이루어진 문자열을 입력받음
//%[^abc] : 대괄호 안에 있는 문자 a,b,c를 제외한 다른 문자들로 이루어진 문자열을 입력받음
//%[0~9] : 0에서 9까지 범위에 있는 문자들로 이루어진 문자열을 입력받음

int main_buffer()
{
	//입력 버퍼
	int a;
	char c;

	scanf_s("%d",& a);
	scanf_s("%c",& c);
	printf("a = %d\n", a);
	printf("c = %c\n",c);

	//입력버퍼
	int n;
	char c;
	//입력 250 a 
	scanf_s("%d", &n); 
	scanf_s("%c", &c); //c에 공백문자가 저장됨
	printf("n = %d\n", n);
	printf("c = %c\n", c);

	int n;
	char c;
	printf("숫자와 문자를 입력하세요 : ");
	scanf_s("%d %c", & n,& c); //%c의 공백
	printf("%d%c", n, c);
	return 0;

}

