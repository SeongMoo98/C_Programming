//stack.c 와 같이 컴파일 - stack에 대한 정의가 있다
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"


int main()
{
int data;
	int n, i;
	Stack* ptr;		//스택을 가리킬 포인터

	printf("몇개의 정수를 입력하고 싶으십니까?\n");
	printf("1이상 10이하로 입력해 주세요.");
	scanf_s("%d", &n);
	if (n <= 0 || n > 10)
		error("정수 개수를 잘못 입력하였습니다.");

	ptr = mkStack();		//스택을 생성함

	printf("%d 개의 정수를 입력해 주세요.", n);

	//입력받은 정수를 차례로 스택에 넣음
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &data);
		push(ptr, data);
	}
	printf("당신이 입력한 정수를 역순으로 출력합니다 : ");

	//스택이 빌 때까지 스택에서 원소를 하나씩 꺼내어 출력함
	while (!isEmpty(ptr))
	{
		data = pop(ptr);
		printf("%d ", data);
	}
	printf("\n");



	return 0;
}