#include<stdio.h>

//%d : 부호있는 10진수
//%u : 부호없는 10진수
//%o : 정수를 8진수 형식으로 출력
//%x : 정수를 16진수 형식으로 출력
//%f : 실수를 소수점 아래 6자리까지 출력
//%lf : 실수를 소수점 아래 6자리까지 출력
//%c : 문자출력

int main_stdio()
{
	////printf 출력 폭 지정
	//int i = 2;
	//double f = 3.14159265358979323846;
	//char c = 'a';

	//printf("i= %10d\n", i);  //포맷 스트링에서 %다음에  "양의 정수"를 기입하여 출력 폭 지정 
	//printf("f= %10f\n", f);  
	//printf("c= %10c\n", c); 


	////printf 정밀도 지정
	//double pi = 3.14159265358979323846;

	//printf("pi=%10f\n", pi); //포맷스트링에서 %와f사이에 (출력폭이 지정된 경우, 출력폭다음)".양수"형태로 정밀도 지정
	//printf("pi=%10.2f\n", pi);
	//printf("pi=%10.12f\n", pi);

	////scanf_s
	//int n = 0;
	//scanf_s("%d", &n); //scanf_s의 포맷스트링은 문자열을 데이터로 변환함 ??
	//printf("entered n= %d\n", n);
	//printf("double of n=%d\n", n + n);
	//printf("triple of n =%d\n", n + n + n);

	////프롬프트를 사용한 scanf_s
	//int n = 0;
	//printf("정수 n을 입력해주세요 : n="); //이게 프롬프트
	//scanf_s("%d", &n);
	//printf("입력한 n= %d\n", n);
	//printf("n의 두배= %d\n", n+n);
	//printf("n의 세배= %d\n", n+n+n);

	////getchar() putchar() 문자 출력
	//char c;
	//printf("소문자를 입력하세요. : "); //프롬프트
	//c = getchar();
	//putchar(c);
	//printf("의 대문자는 ");
	//putchar(toupper(c)); //toupper : 대문자로 변환하는 함수
	//printf("입니다.\n");

	////gets puts 줄단위 입출력
	//char line[256];
	//printf("한 라인을 입력해 주세요.\n\n");
	//gets(line);
	//printf("\n입력하신 라인은 다음과 같습니다.\n\n");
	//puts(line);



	////flag
	// - 왼쪽 정렬
	// + 부호(sign)출력
	//공백은 공백문자 대신 0으로 채운다, 대신 - 나 정밀도가 지정되면 0은 무시된다
	//#o, #x 8진수 출력시 출력값 앞에 0, 16진수 출력시 출력값 앞에0x를 붙인다
	//int a = 3;
	//printf("[%-6d]\n", a); 
	//printf("[%06d]\n", a); 
	//printf("[%+6d]\n", a); 
	//printf("[%#o]\n", a); 
	//printf("[%#x]\n", a); 


	//printf("\n\n");


	//float b = 1.23456789;
	//printf("[%10.3f*]\n", b); //전체는 10자리,소수점은 3자리 까지,점까지포함해서 10자리
	//printf("[%10.4f*]\n", b); //반올림됨
	//printf("[%-10.3f*]\n", b); //수를 왼쪽 정렬 , *은 오른쪽으로
	//printf("[%.3f*]\n", b);
	//printf("[%.4f*]\n", b);

	return 0;

}