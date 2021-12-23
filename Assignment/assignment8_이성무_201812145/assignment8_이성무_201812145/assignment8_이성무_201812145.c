#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int getLines();

typedef struct student
{
	char name[10];		    //이름
	char ID[20];			//학번
	char Phone[20];			//번호
	char Address[10];		//주소
}STUDENT;


int main(void)
{
	STUDENT s[50];
	FILE* fp;
	fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		fp = fopen("student.txt.", "a");
		printf("student.txt 파일을 생성하였습니다.\n");
	}
	int len = getLines();

	//텍스트 파일에 있는 학생정보를 구조체 배열에 저장
	for (int i = 0; i < len; i++)
	{
		fscanf(fp, "%s %s %s %s\n", s[i].name, s[i].ID, s[i].Phone, s[i].Address);
	}
	fclose(fp);

	int option;
	int num = 0;
	while (1)
	{
		printf("관리 옵션을 선택해 주세요(1. 정보입력 |2.전체 학생 출력 |3. 끝내기) : ");
		scanf_s("%d", &option);

		if (option == 1)
		{
			printf("저장하실 학생의 수를 입력하세요(최대 50명) :");
			scanf_s("%d", &num);
			for (int i = len; i < len + num; i++)
			{
				printf("이름 : ");
				scanf_s("%s", s[i].name, 10);

				printf("학번 : ");
				scanf_s("%s", s[i].ID, 20);

				printf("번호 : ");
				scanf_s("%s", s[i].Phone, 20);

				printf("주소 : ");
				scanf_s("%s", s[i].Address, 20);
				printf("\n");
			}
		}
		else if (option == 2)
		{
			printf("전체 학생의 정보를 출력합니다\n");
			for (int i = 0; i < len + num; i++)
			{
				printf("이름 : %s\n학번 : %s\n번호 : %s\n주소 : %s\n", s[i].name, s[i].ID, s[i].Phone, s[i].Address);
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
				printf("파일 열기에 실패하였습니다.\n");
				return 1;
			}
			printf("학생정보를 저장합니다.\n");
			//구조체 배열에 있는 데이터를 텍스트 파일에 저장
			for (int i = len; i < len + num; i++)
			{
				fprintf(fp, "%s %s %s %s\n", s[i].name, s[i].ID, s[i].Phone, s[i].Address);
			}
			fclose(fp);
		}
		else
		{
			printf("번호를 잘못입력하셨습니다. 다시 입력해주세요\n");
			continue;
		}

	}

	printf("프로그램을 종료합니다.\n");

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

