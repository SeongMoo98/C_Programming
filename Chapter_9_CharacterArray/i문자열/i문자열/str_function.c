#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define MAX_LINE 81


int main(void)
{
	////���ڿ� ���� �Լ� 
	//int len, count = 0, sum = 0;
	//char str[MAX_LINE];
	//
	//printf("���ڿ����� �Է��ϼ���(-1�� ����)\n");

	//while (gets(str) != NULL)           //���⿡ gets�� �� �� �ֱ��� ���⼭ NULL�� �����?
	//{
	//	len = strlen(str);
	//	printf("���ڿ��� ���� : %d\n", len);
	//	sum = sum + len;
	//	count++;
	//}

	//printf("��ü ���ڿ��� ���� :      %d\n", count);
	//printf("��ü ���ڿ��� ������ �� : %d\n", sum);


	////���ڿ� �����Լ�
	//char s[] = "Hello", t[6];
	//char* p = "World", * q;

	//printf("���ڿ� s = %s\n", s);
	//strcpy(t, s);					//���ڿ� ���� t�� s�� ����
	//printf("���ڿ� t = %s\n", t);
	//
	//printf("���ڿ� p = %s\n", p);
	//q = p;      					//������ ����
	//printf("���ڿ� q = %s\n", q);

	//strcpy(s, "Good");              //s�� ���ο� ���ڿ� ����
	//printf("���ڿ� s = %s\n", s);
	//printf("���ڿ� t = %s\n", t);
	//
	//strcpy(p, "Bye");               //p�� ���ο� ���ڿ� ���� �� ���⼭ �ȵǳ�
	//printf("���ڿ� p = %s\n", p);
	//printf("���ڿ� q = %s\n", q);


	////���ڿ� �����Լ�
	//int count = 0;
	//char str[MAX_LINE], longstr[100 * MAX_LINE] = ""; //���� �̰�

	//printf("���ڿ����� �Է��ϼ���.\n");

	//while (gets(str) != NULL)
	//{
	//	strcat(longstr, str);
	//	count++;
	//}
	//printf("�Էµ� ���ڿ��� ����    :     %d\n", count);
	//printf("���յ� ��ü ���ڿ�      :     %s\n", longstr);
	//printd("���յ� ��ü ���ڿ� ���� :     %d\n", strlen(longstr));
	

	////���ڿ� ���Լ�
	//int result;
	//char str1[100] = "C Language";
	//char str2[] = "C Programming";
	//result = strcmp(str1,str2); //ASCII ���̸� �����Ѵٴµ� �� 1, -1 ,0 �� ���ϵɱ�
	//printf("%d\n", result);

	//strcat_s(str1,sizeof(str1),str2);
	//printf("%s\n",str1);


	////���ڿ� ���� Ư�� ���� �˻� �Լ�
	//char str1[] = "C Programming", * str2;
	//str2 = strchr(str1, 'r');
	//printf("%s\n", str2);

	//str2 = strrchr(str1, 'r');
	//printf("%s", str2);


	////���ڿ� ���� Ư�� ���ڿ� �˻��Լ�
	//char str1[] = "C Language Programming";
	//char str2[] = "Language";
	//char* result;

	//result = strstr(str1, str2);
	//printf("%s", result);


	//���ڿ� ��ȯ �Լ�
	////str->int
	//int sum = 0, count = 0;
	//char num[81];
	//printf("������ �ݾ׵��� �Է��ϼ���.\n");
	//while (gets(num) != NULL)
	//{
	//	count++;
	//	sum += atoi(num);
	//}
	//printf("�� %d���� �����Ͽ��� �Ѿ��� %d �Դϴ�.", count, sum);

	////str->double
	//float sum = 0;
	//int count = 0;
	//char num[81];

	//printf("������ �ݾ׵��� �Է��ϼ���.\n");
	//while (gets(num) != NULL)
	//{
	//	count++;
	//	sum += atof(num);
	//}
	//printf("�� %d ���� �����Ͽ��� �Ѿ��� %6.2f�Դϴ�.\n", count, sum);


	////��ū ����
	//char str[] = "C Language Programming";
	//char *token;
	//token = strtok(str, " ");//ù��° ��ū�и�
	//while(token != NULL)
	//{
	//	printf("%s \n", token);
	//	token = strtok(NULL, " ");
	//}




	return 0;
}