#include<stdio.h>

int main(void)
{
	//��� ������
	int x = 145;
	int y = 20;

	printf("%d + %d =%d\n", x, y, x + y);
	printf("%d - %d =%d\n", x, y, x - y);
	printf("%d * %d =%d\n", x, y, x * y);
	printf("%d / %d =%d\n", x, y, x / y); //��
	printf("%d % %d =%d\n", x, y, x % y); //������

	const int base = 32;
	float celsius, fahrenheit;

	printf("ȭ���µ��� �Է��ϼ��� : \n");
	scanf_s("%f", &fahrenheit);
	celsius = (fahrenheit - base) * 5.0 / 9.0;
	printf("ȭ���µ� %f���� �����µ� %f���Դϴ�.\n", fahrenheit, celsius);

	//���迬���� (1�� �� 0�� ����)
	int x = 10;
	int y = 11;
	printf("(%d > %d)  = %d\n", x, y, x > y);
	printf("(%d >= %d) = %d\n", x, y, x >= y);
	printf("(%d == %d) = %d\n", x, y, x == y);
	printf("(%d != %d) = %d\n", x, y, x != y);
	printf("(%d < %d)  = %d\n", x, y, x < y);
	printf("(%d <= %d) = %d\n", x, y, x <= y);

	//��������
	int score;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);
	if (score >=0 && score <= 100)
	{
		printf("\n%d�� ���� ���� �����Դϴ�.\n",score);
	}
	else
	{
		printf("\n%d�� ���� ���� �߸��� �����Դϴ�.\n",score);
	}

	//��Ʈ������
	int a = 11;
	int b = 17;
	printf("%d<<2=%d\n", a, a << 2);
	printf("%d>>3=%d\n", b, b >> 3);

	short x = 0x1f05; //16���� 4����Ʈ = 0001 1111 0000 0101
	short y = 0x31a1; 

	printf("%x & %x =%x\n", x, y, x & y);
	printf("%x | %x =%x\n", x, y, x | y);
	printf("%x ^ %x =%x\n", x, y, x ^ y);
	printf("~%x = %x\n", x,~x);


	return 0;
}