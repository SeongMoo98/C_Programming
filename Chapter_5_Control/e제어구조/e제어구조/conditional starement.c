#include <stdio.h>

int main_condition()
{
	//���ǹ� 
	//if, if-else

	//���չ� {}
	int a, b, min, max;
	printf("�Է�1 : ");
	scanf_s("%d", &a);
	printf("�Է�2 : ");
	scanf_s("%d", &b);

	if (a < b)
	{
		min = a;
		max = b;
	}
	else
	{
		min = b;
		max = a;
	}
	printf("ū �� : %d ", max);
	printf("���� �� : %d", min);



	//��ø�� if(nested if)
	int score;
	char grade;

	printf("���� �Է� : ");
	scanf_s("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score > 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("���� : %d\t ���� %c\t", score, grade);



	//switch��
	//switch���� �̿��� ���� �� ��� ����
	int ACount = 0, BCount = 0, CCount = 0, DCount = 0, FCount = 0;
	switch (grade)
	{
	case 'A': //case ��� : (���ڿ��� ����� ���°ǰ�??)
		ACount = ACount + 1;
		printf("���� : %d\t ���� : %c\t", score, grade);
		break;
	case 'B':
		BCount = BCount + 1;
		printf("���� : %d\t ���� : %c\t", score, grade);
		break;
	case 'C':
		CCount = CCount + 1;
		printf("���� : %d\t ���� : %c\t", score, grade);
		break;
	case 'D':
		DCount = DCount + 1;
		printf("���� : %d\t ���� : %c\t", score, grade);
		break;
	case 'F':
		FCount = FCount + 1;
		printf("���� : %d\t ���� : %c\t", score, grade);
		break;
	default:
		printf("���� : %c������ �����ϴ�.", grade);
	}
	int score, category;
	char grade;

	printf("���� �Է�(0~100) : ");
	scanf_s("%d", &score);
	if (score < 0 || score>100)
	{
		printf("�߸��� �����Դϴ�.\n");
		printf("���� �Է�(0~100) : ");
		scanf_s("%d", &score);
	}

	category = score / 10; //int ���̿��� -> ���� ����

	switch (category) 
	{
	case 10 :
		grade = 'A';
		break;
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
	}
	printf("���� : %d\t ���� : %c\n", score, grade);


	return 0;
}