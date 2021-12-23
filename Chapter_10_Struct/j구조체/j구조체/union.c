#include<stdio.h>


int main(void)
{
	////Union
	//union price
	//{
	//	int won;
	//	float dollar;
	//	float euro;
	//};

	//union price book_price;
	//book_price.won = 10000;
	//
	//book_price.dollar = 39.99;
	////멤버 변수 won, dollar, euro가 모두 한 기억공간을 공유
	////-> 공용체 내의 다른 멤버변수에 새로 데이터를 대입하면 기존의 데이터는 지워진다.
	//printf("%.2f", book_price.dollar);
	//printf("%d", book_price.won);

	////공용체 배열,포인터

	////공용체 배열 선언
	//union price book_prices[10];
	////공용체 포인터 및 변수 선언
	//union price book_price, * price_ptr;
	////공용체 주소를 공용체 포인터 변수에 대입
	//price_ptr = & book_price







	return 0;
}