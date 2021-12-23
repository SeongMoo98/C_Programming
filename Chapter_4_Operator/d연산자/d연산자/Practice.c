#include<stdio.h>
#include<math.h>

int main(void)
{
	////실습 1
	//int weight, height;
	//printf("몸무게를 입력해주세요(kg)\n");
	//scanf_s("%d", &weight);

	//printf("키를 입력해주세요(cm)\n");
	//scanf_s("%d", &height);

	//int BMI = (weight * 9998) / (height * height);
	//printf("당신의 BMI 지수는 : %d입니다.\n", BMI);

	////if 가 아니라 조건문 a?b:c 로 쓸수 없을까?
	//if (BMI < 20)
	//{
	//	printf("당신은 저체중입니다.");
	//}
	//else if (BMI >= 20 && BMI < 25)
	//{
	//	printf("당신은 정상체중입니다");
	//}
	//else if (BMI >= 25 && BMI < 30)
	//{
	//	printf("당신은 과체중입니다.");
	//}
	//else if (BMI >= 30)
	//{
	//	printf("당신은 비만입니다.");
	//}
	//else
	//{
	//	printf("BMI지수가 올바르지 않습니다 키와 몸무게를 다시 입력해주십시오.");
	//} 




	////실습 2
	//float a, b, c;
	//printf("근의 공식을 사용하기 위해 이차방정식 ax^2+bx+c=0의 계수 a b c를 입력해주세요.\n");
	//printf("\na를 입력해주세요(a != 0) : ");
	//scanf_s("%f", &a);
	//printf("\nb를 입력해주세요 : ");
	//scanf_s("%f", &b);
	//printf("\nc를 입력해주세요 : ");
	//scanf_s("%f", &c);
	//printf("\n입력받은 a : %f, b : %f, c : %f\n", a, b, c);

	//float root = sqrt((b * b) - (4 * a * c));
	//
	//float x1, x2;
	//x1 = ((-b + root) / (2 * a));
	//x2 = ((-b - root) / (2 * a));

	//if (root > 0)
	//{
	//	if (x1 > x2)
	//	{
	//		printf("근의 공식을 사용하여 구한 근은 %f %f 입니다.", x1, x2);
	//	}
	//	else
	//	{
	//		printf("근의 공식을 사용하여 구한 근은 %f %f 입니다.", x2, x1);
	//	}
	//}
	//if (root == 0)
	//{
	//	printf("근의 공식을 사용하여 구한 근은 %f 입니다.", x1);
	//}
	//else if(root<0)
	//{
	//	printf("근이없음");
	//}

	//조건연산자 사용
	float a, b, c;
	float result1, result2;
	char str;

	printf("근의 공식을 사용하기 위해 이차방정식 ax^2+bx+c=0의 계수 a b c를 입력해주세요.\n");
	printf("\na를 입력해주세요(a != 0) : ");
	scanf_s("%f", &a);
	printf("\nb를 입력해주세요 : ");
	scanf_s("%f", &b);
	printf("\nc를 입력해주세요 : ");
	scanf_s("%f", &c);
	printf("\n입력받은 a : %f, b : %f, c : %f\n", a, b, c);

	float root = sqrt((b * b) - (4 * a * c));

	float x1, x2;
	x1 = ((-b + root) / (2 * a));
	x2 = ((-b - root) / (2 * a));

	result1 = (root >= 0) ? ((root == 0) ? x1 : ((x1 > x2) ? (result1 = x2, result2 = x1) : (result1 = x1, result2 = x2))) : NULL; //NULL 을  float변환이 안됨
	str = (root >= 0) ? ((root == 0) ? printf("근의 공식을 사용하여 구한 근은 %f 입니다.", x1) : ((x1 > x2) ? printf("근의 공식을 사용하여 구한 근은 % f %f 입니다", x2, x1) : printf("근의 공식을 사용하여 구한 근은 % f %f 입니다", x1, x2))) : printf("근이없음.");

	return 0;
}