#include <stdio.h>
#include <math.h> //sqrt�� �������� ������� include

int main()
{
	//���Թ�
	int a = 0, b = 0;

	printf("�ʱ��� a�� b�� ���Դϴ�.\n");
	printf("	a=  %d, b = %d\n", a, b);

	a = a + 1; //���Կ�����
	printf("a = a + 1; �� �����߽��ϴ�\n");
	printf("	a = %d, b = %d\n", a, b);

	b = a = 2; //���Ӵ���
	printf("b = a = 2; �� �����߽��ϴ�.\n");
	printf("	a = %d, b = %d\n", a, b);

	//�������� ������
	int a = 0;
	printf("�ʱ��� a���Դϴ�.\n");
	printf("\t a = %d\n\n", a);

	a += 1;
	printf("a += 1; �� �����߽��ϴ�.\n");
	printf("\t a = %d\n\n", a);

	a += a + 1;
	printf("a += a + 1; �� �����߽��ϴ�.\n");
	printf("\t a = %d\n\n", a);

	a *= a * a;
	printf("a *= a*a �� �����߽��ϴ�.\n");
	printf("\t a = %d\n\n", a);


	//����������
	//����������
	//��ġ
	int a, b;
	a = b = 5;

	printf("�ʱ��� a �� b�� ���Դϴ�.\n");
	printf("a = %d, b = %d\n\n", a, b);

	b = 2 * a++; //b = 2*5�� �����ϰ� a = a+1
	printf("b = 2 * a++; �� �����մϴ�.\n");
	printf("a = %d, b = %d\n", a, b);


	//��ġ
	int x, y;
	x = y = 5;

	printf("\n\n�ʱ��� x �� y�� ���Դϴ�.\n");
	printf("x = %d, y = %d\n\n", x, y);

	y = 2 * ++x; // y = 2*(1+x)
	printf("y = 2 * ++x; �� �����մϴ�.\n");
	printf("x = %d, y = %d\n", x, y);

	//���ǿ�����
	//�ܶ�ȸ��
	int sum, n;
	sum = 100;
	printf("���ڸ� �Է��ϼ���.(0~100)\n");
	scanf_s("%d", &n);
	int result = (n != 0) ? sum / n : 1; //���ο� ������ ��������� �ϴ±���
	printf("%d", result);


	return 0;
}