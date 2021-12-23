#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main(void)
{
	//int* p; //동적 할당된 블록을 가리킬 포인터
	//int n, i;

	//printf("몇 개의 정수를 입력하고 싶으십니까?");
	//scanf_s("%d", &n);
	//
	////입력한 n이 올바른 값인지 검사
	//if (n <= 0)
	//{
	//	printf("오류 : 잘못개수를 잘목 입력하였습니다.\n");
	//	printf("프로그램을 종료합니다.\n");
	//	return -1;
	//}
	////n개의 int를 할당
	//p = (int *)malloc(n * sizeof(int));  //입력할 정수를 저장할 변수를 동적으로 할당함
	////malloc이 성공적으로 메모리에 할당하였는지 검사
	//if (p == NULL)
	//{
	//	printf("오류 : 메모리가 부족합니다.\n");	
	//	printf("프로그램을 종료합니다.\n");
	//	return -1;
	//}

	//printf("%d개의 정수를 입력해 주세요:", n);
	//for (i = 0; i < n; ++i)
	//{
	//	scanf_s("%d", &p[i]);
	//}
	//printf("당신이 입력한 정수를 역순으로 출력합니다:");
	//for (i = n - 1; i >= 0; --i)
	//{
	//	printf("%2d", p[i]);
	//}
	//printf("\n");





	//assert 매크로
	//assert를 이용하여 malloc오류를 검사하는 버전
	int* p; //동적 할당된 블록을 가리킬 포인터
	int n, i;

	printf("몇 개의 정수를 입력하고 싶으십니까?");
	scanf_s("%d", &n);
	
	//입력한 n이 올바른 값인지 검사
	if (n <= 0)
	{
		printf("오류 : 정수 개수를 잘못 입력하였습니다.\n");
		printf("프로그램을 종료합니다.\n");
		return -1;
	}
	//malloc 리터값을 assert로 검사함
	p = (int *)malloc(n * sizeof(int));  
	assert(p != NULL);

	printf("%d개의 정수를 입력해 주세요:", n);
	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", &p[i]);
	}
	printf("당신이 입력한 정수를 역순으로 출력합니다:");
	for (i = n - 1; i >= 0; --i)
	{
		printf("%2d", p[i]);
	}
	printf("\n");
	

	return 0;
}