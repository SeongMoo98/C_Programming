#include <stdio.h>


int main()
{
	int won, rate = 960;
	float dollar;

	won = 35000;
	
	//묵시적 형 변환
	dollar = won / rate;
	printf("won : %d  dollar : %6.4f\n", won, dollar);  

	//->dollar = 36.0000
	//명시적 형변환
	dollar = (float)won / rate;
	printf("won : %d  dollar : %6.4f\n", won, dollar);

	//dollar 36.4583
	//
	won = dollar * rate;
	printf("won : %d  dollar : %6.4f\n", won, dollar);

	won = (int)(dollar * rate);
	printf("won : %d  dollar : %6.4f\n", won, dollar);

	won = (int)dollar * rate;
	printf("won : %d  dollar : %6.4f\n", won, dollar);







	return 0;
}