#include<stdio.h>

//��ȣ��� ����
#define hourpay1 9200
#define hourpay2 6200
#define tax1 0.12
#define tax2 0.09

int main()
{
	//����� ����� �̸��� �ٹ��ð� ����
	char name1[256]; //�����̸��� �ٹ��ð�
	int time1;
	char name2[256]; //����̸��� �ٹ��ð�
	int time2;
	//���� ����� ���� ����
	int salary1 = 0, salary2 = 0;


	printf("������ �̸��� �Է��ϼ��� :");
	scanf_s("%s", name1, sizeof(name1));
	printf("������ �ٹ��ð��� �Է��ϼ��� :");
	scanf_s("%d", &time1);

	printf("\n");
	printf("����� �̸��� �Է��ϼ��� :");
	scanf_s("%s", name2, sizeof(name2));
	printf("����� �ٹ��ð��� �Է��ϼ��� :");
	scanf_s("%d", &time2);

	salary1 = (((hourpay1) * (time1)) * (1 - tax1));
	salary2 = (((hourpay2) * (time2)) * (1 - tax2));

	printf("\n");
	printf("======================================================\n");
	printf("%s ������� ������ %d�� �Դϴ�.\n", name1, salary1);
	printf("%s ������� ������ %d�� �Դϴ�.\n", name2, salary2);
	printf("======================================================\n");
	printf("ȸ�簡 ������ �� ������ %d�� �Դϴ�.", salary1 + salary2);

	return 0;
}
