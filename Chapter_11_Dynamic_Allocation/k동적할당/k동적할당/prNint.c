//stack.c �� ���� ������ - stack�� ���� ���ǰ� �ִ�
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"


int main()
{
int data;
	int n, i;
	Stack* ptr;		//������ ����ų ������

	printf("��� ������ �Է��ϰ� �����ʴϱ�?\n");
	printf("1�̻� 10���Ϸ� �Է��� �ּ���.");
	scanf_s("%d", &n);
	if (n <= 0 || n > 10)
		error("���� ������ �߸� �Է��Ͽ����ϴ�.");

	ptr = mkStack();		//������ ������

	printf("%d ���� ������ �Է��� �ּ���.", n);

	//�Է¹��� ������ ���ʷ� ���ÿ� ����
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &data);
		push(ptr, data);
	}
	printf("����� �Է��� ������ �������� ����մϴ� : ");

	//������ �� ������ ���ÿ��� ���Ҹ� �ϳ��� ������ �����
	while (!isEmpty(ptr))
	{
		data = pop(ptr);
		printf("%d ", data);
	}
	printf("\n");



	return 0;
}