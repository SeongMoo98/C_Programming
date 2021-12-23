#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack2.h"


int main()
{
	int data;
	int n, i;
	Stack* s;		//스택을 가리킬 포인터

	printf("몇개의 정수를 입력하고 싶으십니까?");
	scanf_s("%d", &n);
	if (n <= 0)
		error("정수 개수를 잘못 입력하였습니다.");

	s = mkStack(n);		//필요한 크기로 스택을 생성함

	printf("%d 개의 정수를 입력해 주세요.", n);

	//입력받은 정수를 차례로 스택에 넣음
	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", &data);
		push(s, data);
	}
	printf("당신이 입력한 정수를 역순으로 출력합니다 : ");
	
	//스택이 빌 때까지 스택에서 원소를 하나씩 꺼내어 출력함
	while (!isEmpty(s))
	{
		data = pop(s);
		printf("%d ", data);

	} 

	printf("\n");



	return 0;
}