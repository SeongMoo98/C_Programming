#include <stdio.h>

int main(void) //�� �ҽ������� �����Ű���� ���߿� int main���� �������
{
	int score = 7; // ���� �ʱ�ȭ

	printf("ù ��° ������ %d\n", score);

	score = 10; //���Թ� 
	printf("�� ��° ������ %d\n", score);

	score = 8; //���Թ� 
	printf("�� ��° ������ %d\n", score);

	//������ ����

	int sum = 0, score;
	score = 7;
	sum = sum + score;
	printf("ù ��° ���� : %d ������ : %d\n", score, sum);

	score = 10;
	sum = sum + score; 
	printf("�� ��° ���� : %d ������ : %d\n", score, sum);
	
	score = 8;
	sum = sum + score;
	printf("�� ��° ���� : %d ������ : %d\n", score, sum);

	

	return 0;
}