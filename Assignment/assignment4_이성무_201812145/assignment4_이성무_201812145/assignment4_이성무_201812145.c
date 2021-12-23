#include <stdio.h>

//함수 선언
int add(int value1, int value2);
int subtraction(int value1, int vlaue2);
int multiply(int value1, int value2);
float division(float value1, float value2);
int factorial(int value1);

int main(void)
{
    int num1, num2;
    char operator='0'; // operato 초기화

    while (operator!='q')
    {   
        //변수 초기화
        num1 = 0;
        num2 = 0;

        printf("연산자를 입력하세요(+, -, *, /, !):");
        scanf_s(" %c", &operator,sizeof(operator)); // 공백을 사용해 문자를 입력받을때 공백이 입력되는것을 방지
        switch (operator)
        {
        case '+':
            printf("결과값 : %d\n", add(num1, num2));
            break;

        case '-':
            printf("결과값 : %d\n", subtraction(num1, num2));
            break;

        case '*':
            printf("결과값 : %d\n", multiply(num1, num2));
            break;

        case '/':
            printf("결과값 : %.2f\n", division(num1, num2));
            break;

        case '!':
            printf("숫자를 입력하세요(value1) :"); //재귀함수여서 숫자를 입력받는걸 밖으로 뻄
            scanf_s("%d", &num1);
            printf("결과값 : %d\n", factorial(num1));
            break;

        case 'q':
            printf("프로그램을 종료합니다.");
            break;

        default:
            printf("연산자를 잘못 입력하셨습니다.\n");
            break;
        }

    }
    return 0;
}


//함수 정의
int add(int value1, int value2)
{
    printf("두 숫자를 입력하세요(value1 value2) :");
    scanf_s("%d %d", &value1, &value2);
    return value1 + value2;
}


int subtraction(int value1, int value2)
{
    printf("두 숫자를 입력하세요(value1 value2) :");
    scanf_s("%d %d", &value1, &value2);
    return value1 - value2;
}

int multiply(int value1, int value2)
{
    printf("두 숫자를 입력하세요(value1 value2) :");
    scanf_s("%d %d", &value1, &value2);
    return value1 * value2;
}

float division(float value1, float value2)
{
    printf("두 숫자를 입력하세요(value1 value2) :");
    scanf_s("%f %f", &value1, &value2);
    return (value1 / value2);
}

int factorial(int value1)
{
    while (value1 <= 0)
    {
        printf("숫자를 잘못 입력하였습니다.\n");
        printf("숫자를 입력하세요 (value1):");
        scanf_s("%d", &value1);
    }
    if (value1 == 1)
        return 1;
    else
        return value1 * factorial(value1 - 1);
}