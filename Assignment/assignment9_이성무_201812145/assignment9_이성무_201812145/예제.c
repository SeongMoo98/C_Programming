#include<stdio.h>
#include<stdlib.h>

//�ǽ�2
typedef struct
{
	int x, y;
}Point;

int main(void)
{
	////�ǽ�1-1
	//char* str;
	//int len;

	//printf("���ڿ� ���� �Է� :");
	//scanf_s("%d", &len);

	////�Ǹ������� NULL�� �����ؼ� len+1
	//str = (char*)malloc(sizeof(char) * (len + 1));
	//printf("���ڿ� �Է� : ");
	//scanf_s("%[^\n]",str,sizeof(str)); //�ٹٲ��� �����ϰ� �Է¹ްڴ�

	//printf("�Է��� ���ڿ� : %s\n",str);

	//free(str);

	////�ǽ�1-2
	//int height, width;
	//int** arr;
	//printf("Height �Է� : ");
	//scanf_s("%d", &height);

	//printf("Width �Է� : ");
	//scanf_s("%d", &width);

	//arr = (int**)malloc(sizeof(int*) * height);
	//for (int i = 0; i < height; i++)
	//{
	//	*(arr + i) = (int*)malloc(sizeof(int) * width);
	//}
	//for (int i = 0; i < height; i++)
	//{
	//	for (int j = 0; j < width; j++)
	//	{
	//		arr[i][j] = 0;
	//		printf("%d", arr[i][j]);
	//	}
	//	printf("\n");
	//}
	//free(arr);

	////�ǽ�2
	//int angleNum = 0;

	//while (angleNum != -1)
	//{
	//	printf("��� �Դϱ�(����� -1) : ");
	//	scanf_s("%d", &angleNum);

	//	if (angleNum != -1)
	//	{
	//		Point* points = (Point*)malloc(sizeof(Point) * angleNum);
	//		for (int i = 0; i < angleNum; i++)
	//		{
	//			printf("%d��° ���� ��ǥ �Է�(x,y)", i + 1);
	//			scnaf("%d %d", &(points + i)->x, &(points + i)->y);
	//		}
	//		double area = 0, temp1 = 0, temp2 = 0;
	//		for (int i = 0; i < angleNum; i++)
	//		{
	//			//��ǥ�� ���� �ﰢ�� ���� ����
	//			if (i < angleNum - 1)
	//			{
	//				temp1 += (points + i)->x * (points + i+1)->y;
	//				temp2 += (points + i)->y * (points + i+1)->x;
	//			}
	//			else
	//			{
	//				temp1 += (points + i)->x * points->y;
	//				temp2 += (points + i)->y * points->x;
	//			}
	//		}
	//		area = (temp1 - temp2) / 2;
	//		if (area < 0)
	//			area *= -1;

	//		printf("���̴� %f�Դϴ�.\n", area);
	//		free(points);
	//	}
	//}



	//���� ����Ʈ(linked list)

	return 0;
}