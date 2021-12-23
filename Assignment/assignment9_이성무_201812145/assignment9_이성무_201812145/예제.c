#include<stdio.h>
#include<stdlib.h>

//실습2
typedef struct
{
	int x, y;
}Point;

int main(void)
{
	////실습1-1
	//char* str;
	//int len;

	//printf("문자열 길이 입력 :");
	//scanf_s("%d", &len);

	////맨마지막에 NULL이 들어가야해서 len+1
	//str = (char*)malloc(sizeof(char) * (len + 1));
	//printf("문자열 입력 : ");
	//scanf_s("%[^\n]",str,sizeof(str)); //줄바꿈을 제외하고 입력받겠다

	//printf("입력한 문자열 : %s\n",str);

	//free(str);

	////실습1-2
	//int height, width;
	//int** arr;
	//printf("Height 입력 : ");
	//scanf_s("%d", &height);

	//printf("Width 입력 : ");
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

	////실습2
	//int angleNum = 0;

	//while (angleNum != -1)
	//{
	//	printf("몇각형 입니까(종료는 -1) : ");
	//	scanf_s("%d", &angleNum);

	//	if (angleNum != -1)
	//	{
	//		Point* points = (Point*)malloc(sizeof(Point) * angleNum);
	//		for (int i = 0; i < angleNum; i++)
	//		{
	//			printf("%d번째 점의 좌표 입력(x,y)", i + 1);
	//			scnaf("%d %d", &(points + i)->x, &(points + i)->y);
	//		}
	//		double area = 0, temp1 = 0, temp2 = 0;
	//		for (int i = 0; i < angleNum; i++)
	//		{
	//			//좌표에 따른 삼각형 넓이 공식
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

	//		printf("넓이는 %f입니다.\n", area);
	//		free(points);
	//	}
	//}



	//연결 리스트(linked list)

	return 0;
}