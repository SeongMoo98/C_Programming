#include<stdio.h>
#include"stack3.h"

int main()
{
	int data;
	int n, i;
	Stack* s;		//Stack=List

	printf("��� ������ �Է��ϰ� �����ʴϱ�?");
	scanf_s("%d", &n);
	if (n <= 0)
		error("���� ������ �߸� �Է��Ͽ����ϴ�.");

	s = mkStack();		//�ʿ��� ũ��� ������ ������

	printf("%d ���� ������ �Է��� �ּ���.", n);

	//�Է¹��� ������ ���ʷ� ���ÿ� ����
	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", &data);
		push(s, data);
	}
	printf("����� �Է��� ������ �������� ����մϴ� : ");

	//������ �� ������ ���ÿ��� ���Ҹ� �ϳ��� ������ �����
	while (!isEmpty(s))
	{
		data = pop(s);
		printf("%d ", data);

	}

	printf("\n");









	return 0;
}

