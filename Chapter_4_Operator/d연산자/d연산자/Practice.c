#include<stdio.h>
#include<math.h>

int main(void)
{
	////�ǽ� 1
	//int weight, height;
	//printf("�����Ը� �Է����ּ���(kg)\n");
	//scanf_s("%d", &weight);

	//printf("Ű�� �Է����ּ���(cm)\n");
	//scanf_s("%d", &height);

	//int BMI = (weight * 9998) / (height * height);
	//printf("����� BMI ������ : %d�Դϴ�.\n", BMI);

	////if �� �ƴ϶� ���ǹ� a?b:c �� ���� ������?
	//if (BMI < 20)
	//{
	//	printf("����� ��ü���Դϴ�.");
	//}
	//else if (BMI >= 20 && BMI < 25)
	//{
	//	printf("����� ����ü���Դϴ�");
	//}
	//else if (BMI >= 25 && BMI < 30)
	//{
	//	printf("����� ��ü���Դϴ�.");
	//}
	//else if (BMI >= 30)
	//{
	//	printf("����� ���Դϴ�.");
	//}
	//else
	//{
	//	printf("BMI������ �ùٸ��� �ʽ��ϴ� Ű�� �����Ը� �ٽ� �Է����ֽʽÿ�.");
	//} 




	////�ǽ� 2
	//float a, b, c;
	//printf("���� ������ ����ϱ� ���� ���������� ax^2+bx+c=0�� ��� a b c�� �Է����ּ���.\n");
	//printf("\na�� �Է����ּ���(a != 0) : ");
	//scanf_s("%f", &a);
	//printf("\nb�� �Է����ּ��� : ");
	//scanf_s("%f", &b);
	//printf("\nc�� �Է����ּ��� : ");
	//scanf_s("%f", &c);
	//printf("\n�Է¹��� a : %f, b : %f, c : %f\n", a, b, c);

	//float root = sqrt((b * b) - (4 * a * c));
	//
	//float x1, x2;
	//x1 = ((-b + root) / (2 * a));
	//x2 = ((-b - root) / (2 * a));

	//if (root > 0)
	//{
	//	if (x1 > x2)
	//	{
	//		printf("���� ������ ����Ͽ� ���� ���� %f %f �Դϴ�.", x1, x2);
	//	}
	//	else
	//	{
	//		printf("���� ������ ����Ͽ� ���� ���� %f %f �Դϴ�.", x2, x1);
	//	}
	//}
	//if (root == 0)
	//{
	//	printf("���� ������ ����Ͽ� ���� ���� %f �Դϴ�.", x1);
	//}
	//else if(root<0)
	//{
	//	printf("���̾���");
	//}

	//���ǿ����� ���
	float a, b, c;
	float result1, result2;
	char str;

	printf("���� ������ ����ϱ� ���� ���������� ax^2+bx+c=0�� ��� a b c�� �Է����ּ���.\n");
	printf("\na�� �Է����ּ���(a != 0) : ");
	scanf_s("%f", &a);
	printf("\nb�� �Է����ּ��� : ");
	scanf_s("%f", &b);
	printf("\nc�� �Է����ּ��� : ");
	scanf_s("%f", &c);
	printf("\n�Է¹��� a : %f, b : %f, c : %f\n", a, b, c);

	float root = sqrt((b * b) - (4 * a * c));

	float x1, x2;
	x1 = ((-b + root) / (2 * a));
	x2 = ((-b - root) / (2 * a));

	result1 = (root >= 0) ? ((root == 0) ? x1 : ((x1 > x2) ? (result1 = x2, result2 = x1) : (result1 = x1, result2 = x2))) : NULL; //NULL ��  float��ȯ�� �ȵ�
	str = (root >= 0) ? ((root == 0) ? printf("���� ������ ����Ͽ� ���� ���� %f �Դϴ�.", x1) : ((x1 > x2) ? printf("���� ������ ����Ͽ� ���� ���� % f %f �Դϴ�", x2, x1) : printf("���� ������ ����Ͽ� ���� ���� % f %f �Դϴ�", x1, x2))) : printf("���̾���.");

	return 0;
}