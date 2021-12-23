#include "defineX.h" //일반헤더함수 include

#define MSG "Hello World!" //define : 마지막에 ';'없음
#define DUP(Message) Message Message Message Message\
 Message Message Message\
 Message Message Message\
 Message //\는 매크로 정의가 다음중에도 계속됨을 의미 (마지막엔 \ x and 개행한후 한행 띄워줘야함 아니면 'MessageMessage'로 인식
                        
 
//#define PR(x) printf("x=%d\n",x) //매크로함수의 한계

#define PR(x) printf(#x"=%d\n",x) //매크로 인수 연산 #

#define MERGE(x,y) x ## y //매크로 인수연산 ##

int main(void)
{
	//"defineX.h
	printf("X=%d\n", X);

	//매크로상수 테스트
	puts(MSG);

	//매크로 함수
	 puts(DUP("Hello! "));

	//매크로 함수의 한계
	int x1 = 250, y1= 747;
	PR(x1);
	PR(y1); //x=747로 출력됨 y로 출력이 안된다.

	//매크로 인수연산 #
	int x2 = 250, y2= 747;
	PR(x2);
	PR(y2); 

	//매크로 인수연산 ## ??
	int x, blueberry=5;
	MERGE(x, 2) = 25; //x1=25;로 확장
	MERGE(blue, berry) *= MERGE(x, 2); //blueberry *=x1으로 확장
	printf("x2 = %d\nBlueBerry = %d", x2, blueberry);

	return 0;
}