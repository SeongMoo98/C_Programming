#include <stdio.h>
#include<string.h>

#define MAX_CHAR 100
void comma_print(char *str);
void dot_print(char *str);

int main(void)
{
	char str[MAX_CHAR];
	while(1)
	{
		printf("������ �Է��ϼ���. > ");
		scanf_s("%[^\n]s", str, sizeof(str)); //%[^\n]s ������� ���ڿ��� �޾Ƶ���
		while (getchar() != '\n'); //�Է¹���- ���ѷ������°� ������
		if (!strcmp(str, "quit")) //str�� quit �� ��ġ�ϸ� 0 ����
		{
			printf("���α׷��� �����մϴ�");
			break;
		}
		else if(strchr(str, ',')) //Ư�� ���� ã��- ��Ÿ�� ������ ������(�ּ�)��ȯ
		{
			comma_print(str);
		}
		else if (strchr(str, '.'))
		{
			dot_print(str);
		}
		else
		{
			printf("���忡 ',' '.'�� �����ϴ�. �ٽ� �Է����ּ���\n");
		}

	}

	return 0;
}

void comma_print(char *str)
{
	char str1[MAX_CHAR] = " ";
	char str2[MAX_CHAR] = " ";
	sscanf_s(str, "%[^','] , %[^\n]s", str1, sizeof(str1), str2, sizeof(str2));  //%[^','] �޸� ������ ���ڿ��� str1���� , %[^\n]s������� �޾Ƶ���
	strcat_s(str2, sizeof(str2), ","); //���ڿ� ����
	strcat_s(str2, sizeof(str2), str1);
	printf("�������\n");
	printf("%s\n", str2);
}

void dot_print(char *str)
{
	char str1[MAX_CHAR] = " ";
	char str2[MAX_CHAR] = " ";
	sscanf_s(str, "%[^'.'] . %[^\n]s", str1, sizeof(str1), str2, sizeof(str2));
	strcat_s(str1, sizeof(str1), ".\n");
	strcat_s(str1, sizeof(str1), str2);
	printf("�������\n");
	printf("%s\n", str1);
}