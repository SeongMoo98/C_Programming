#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main(void)
{
	//int* p; //���� �Ҵ�� ����� ����ų ������
	//int n, i;

	//printf("�� ���� ������ �Է��ϰ� �����ʴϱ�?");
	//scanf_s("%d", &n);
	//
	////�Է��� n�� �ùٸ� ������ �˻�
	//if (n <= 0)
	//{
	//	printf("���� : �߸������� �߸� �Է��Ͽ����ϴ�.\n");
	//	printf("���α׷��� �����մϴ�.\n");
	//	return -1;
	//}
	////n���� int�� �Ҵ�
	//p = (int *)malloc(n * sizeof(int));  //�Է��� ������ ������ ������ �������� �Ҵ���
	////malloc�� ���������� �޸𸮿� �Ҵ��Ͽ����� �˻�
	//if (p == NULL)
	//{
	//	printf("���� : �޸𸮰� �����մϴ�.\n");	
	//	printf("���α׷��� �����մϴ�.\n");
	//	return -1;
	//}

	//printf("%d���� ������ �Է��� �ּ���:", n);
	//for (i = 0; i < n; ++i)
	//{
	//	scanf_s("%d", &p[i]);
	//}
	//printf("����� �Է��� ������ �������� ����մϴ�:");
	//for (i = n - 1; i >= 0; --i)
	//{
	//	printf("%2d", p[i]);
	//}
	//printf("\n");





	//assert ��ũ��
	//assert�� �̿��Ͽ� malloc������ �˻��ϴ� ����
	int* p; //���� �Ҵ�� ����� ����ų ������
	int n, i;

	printf("�� ���� ������ �Է��ϰ� �����ʴϱ�?");
	scanf_s("%d", &n);
	
	//�Է��� n�� �ùٸ� ������ �˻�
	if (n <= 0)
	{
		printf("���� : ���� ������ �߸� �Է��Ͽ����ϴ�.\n");
		printf("���α׷��� �����մϴ�.\n");
		return -1;
	}
	//malloc ���Ͱ��� assert�� �˻���
	p = (int *)malloc(n * sizeof(int));  
	assert(p != NULL);

	printf("%d���� ������ �Է��� �ּ���:", n);
	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", &p[i]);
	}
	printf("����� �Է��� ������ �������� ����մϴ�:");
	for (i = n - 1; i >= 0; --i)
	{
		printf("%2d", p[i]);
	}
	printf("\n");
	

	return 0;
}