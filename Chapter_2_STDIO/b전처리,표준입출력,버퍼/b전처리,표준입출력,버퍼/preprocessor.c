#include "defineX.h" //�Ϲ�����Լ� include

#define MSG "Hello World!" //define : �������� ';'����
#define DUP(Message) Message Message Message Message\
 Message Message Message\
 Message Message Message\
 Message //\�� ��ũ�� ���ǰ� �����߿��� ��ӵ��� �ǹ� (�������� \ x and �������� ���� �������� �ƴϸ� 'MessageMessage'�� �ν�
                        
 
//#define PR(x) printf("x=%d\n",x) //��ũ���Լ��� �Ѱ�

#define PR(x) printf(#x"=%d\n",x) //��ũ�� �μ� ���� #

#define MERGE(x,y) x ## y //��ũ�� �μ����� ##

int main(void)
{
	//"defineX.h
	printf("X=%d\n", X);

	//��ũ�λ�� �׽�Ʈ
	puts(MSG);

	//��ũ�� �Լ�
	 puts(DUP("Hello! "));

	//��ũ�� �Լ��� �Ѱ�
	int x1 = 250, y1= 747;
	PR(x1);
	PR(y1); //x=747�� ��µ� y�� ����� �ȵȴ�.

	//��ũ�� �μ����� #
	int x2 = 250, y2= 747;
	PR(x2);
	PR(y2); 

	//��ũ�� �μ����� ## ??
	int x, blueberry=5;
	MERGE(x, 2) = 25; //x1=25;�� Ȯ��
	MERGE(blue, berry) *= MERGE(x, 2); //blueberry *=x1���� Ȯ��
	printf("x2 = %d\nBlueBerry = %d", x2, blueberry);

	return 0;
}