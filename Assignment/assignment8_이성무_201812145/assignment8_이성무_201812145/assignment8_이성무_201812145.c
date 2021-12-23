#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int getLines();

typedef struct student
{
	char name[10];		    //�̸�
	char ID[20];			//�й�
	char Phone[20];			//��ȣ
	char Address[10];		//�ּ�
}STUDENT;


int main(void)
{
	STUDENT s[50];
	FILE* fp;
	fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		fp=fopen("student.txt.","a");
		printf("student.txt ������ �����Ͽ����ϴ�.\n");
	}
	int len = getLines();

	//�ؽ�Ʈ ���Ͽ� �ִ� �л������� ����ü �迭�� ����
	for (int i = 0; i <len ; i++)
	{
		fscanf(fp,"%s %s %s %s\n", s[i].name, s[i].ID, s[i].Phone, s[i].Address);
	}
	fclose(fp);

	int option;
	int num = 0;
	while (1)
	{
		printf("���� �ɼ��� ������ �ּ���(1. �����Է� |2.��ü �л� ��� |3. ������) : ");
		scanf_s("%d", &option);

		if (option == 1)
		{
			printf("�����Ͻ� �л��� ���� �Է��ϼ���(�ִ� 50��) :");
			scanf_s("%d", &num);
			for (int i = len; i < len+num; i++)
			{
				printf("�̸� : ");
				scanf_s("%s", s[i].name, 10);

				printf("�й� : ");
				scanf_s("%s", s[i].ID, 20);

				printf("��ȣ : ");
				scanf_s("%s", s[i].Phone, 20);

				printf("�ּ� : ");
				scanf_s("%s", s[i].Address, 20);
				printf("\n");
			}
		}
		else if (option == 2)
		{
			printf("��ü �л��� ������ ����մϴ�\n");
			for (int i = 0; i <len+num; i++)
			{
				printf("�̸� : %s\n�й� : %s\n��ȣ : %s\n�ּ� : %s\n", s[i].name, s[i].ID, s[i].Phone, s[i].Address);
			}
			fclose(fp);
			printf("\n");
			break;
		}
		else if (option == 3)
		{
			FILE* fp = fopen("student.txt", "at");
			if (fp == NULL)
			{
				printf("���� ���⿡ �����Ͽ����ϴ�.\n");
				return 1;
			}
			printf("�л������� �����մϴ�.\n");
			//����ü �迭�� �ִ� �����͸� �ؽ�Ʈ ���Ͽ� ����
			for (int i = len; i < len+num; i++)
			{
				fprintf(fp,"%s %s %s %s\n", s[i].name, s[i].ID, s[i].Phone, s[i].Address);
			}
			fclose(fp);
		}
		else
		{
			printf("��ȣ�� �߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���\n");
			continue;
		}

	}

	printf("���α׷��� �����մϴ�.\n");

	return 0;
}



int getLines() 
{
	FILE* fp;
	fp = fopen("student.txt", "r");
	int line = 0;
	char c;
	while ((c = fgetc(fp)) != EOF)
	{
		if (c == '\n')
		{
			line++;
		}
	}
		
	fclose(fp);
	return line;
}

