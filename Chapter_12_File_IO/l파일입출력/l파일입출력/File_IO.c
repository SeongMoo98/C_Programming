#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main()
{

	////Ű���忡�� ���ڸ� �Է¹޾� ����Ϳ� ���
	//int c;

	//c = fgetc(stdin); // Ű����κ��� �Է� ���� ������ �ƽ�Ű�ڵ�
	//while (c != EOF)
	//{
	//	fputc(c, stdout); //fp�� ����ġ�� ���Ͽ� ���� c���
	//	c = fgetc(stdin); //Ű����κ��� ���ڸ� �о� c�� ����
	//}



	//Ű���忡�� ���ڸ� �Է¹޾� ����Ϳ� ���
	FILE* fp;
	int c;

	fp = fopen("message.txt", "w");
	c = fgetc(stdin); // Ű����κ��� �Է� ���� ������ �ƽ�Ű�ڵ�
	while (c != EOF)
	{
		putc(c, stdout); //fp�� ����ġ�� ���Ͽ� ���� c���
		c = fgetc(stdin); //Ű����κ��� ���ڸ� �о� c�� ����
	}
	fclose(fp);
	printf("message.txt ���Ͽ� ���� �Ϸ�");

	return 0;
}