#include<stdio.h>

void put_string(char* p);

int main(void)
{

	//char lyrics[] = "I am just a poor boy~ \n";
	//printf("%d\n", strlen(lyrics)); //strlen() ���ڿ��� ���ڰ����� ������
	//for (int i = 0; i < strlen(lyrics); ++i) 
	//{
	//	printf("%c", lyrics[i]);
	//}

	////�迭 ÷�ڿ����� ������ �������������� ����� �� �ִ�.
	//char lyrics[] = "I am just a poor boy~ \n";
	//char* p = lyrics;
	//for (int i = 0; i < strlen(lyrics); ++i)
	//{
	//	printf("%c", *(p + i));
	//}
	//

	////������ �� 2��Ģ
	//char lyrics[] = "I am just a poor boy~ \n";
	//char *p=lyrics;
	//for (int i = 0; i < strlen(lyrics); ++i)
	//{
	//	printf("%c", *(p + i));
	//}
	//for (int i = 0; i < strlen(lyrics); ++i)
	//{
	//	printf("%c", p[i]);
	//}

	
	////������ ������� ����
	//char lyrics[] = "I am just a poor boy~ \n";
	//
	//for (int i = 0; i < strlen(lyrics); ++i)
	//{
	//	putchar(lyrics[i]);
	//}
	//for (int i = 0; i < strlen(lyrics); ++i)
	//{
	//	putchar(*(lyrics+i));
	//}


	//�����ʹٿ� �迭 ���� ���
	//�迭 ������ġ�� ����� �ʿ䰡 ���ٸ� �����͸� �������Ѱ��� �迭 ���Ҹ� ������ �� �ִ�.
	char lyrics[] = "I am just a poor boy~ \n";
	put_string(lyrics);



	return 0;
}

void put_string(char* p)
{
	while (*p) //(*p) : p�� ����Ű�� ���Ұ� '��'�̸� �ݺ�. �� p�� ����Ű�� ���Ұ� '\0'�� �ƴϸ� �ݺ�
	{
		printf("%c", *p++); // (*p++) p�� ����Ű�� ���Ҹ� �������� p�� ������Ŵ
	}
}