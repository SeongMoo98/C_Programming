#include <stdio.h>

//�Լ� ����
int add(int value1, int value2);
int subtraction(int value1, int vlaue2);
int multiply(int value1, int value2);
float division(float value1, float value2);
int factorial(int value1);

int main(void)
{
    int num1, num2;
    char operator='0'; // operato �ʱ�ȭ

    while (operator!='q')
    {   
        //���� �ʱ�ȭ
        num1 = 0;
        num2 = 0;

        printf("�����ڸ� �Է��ϼ���(+, -, *, /, !):");
        scanf_s(" %c", &operator,sizeof(operator)); // ������ ����� ���ڸ� �Է¹����� ������ �ԷµǴ°��� ����
        switch (operator)
        {
        case '+':
            printf("����� : %d\n", add(num1, num2));
            break;

        case '-':
            printf("����� : %d\n", subtraction(num1, num2));
            break;

        case '*':
            printf("����� : %d\n", multiply(num1, num2));
            break;

        case '/':
            printf("����� : %.2f\n", division(num1, num2));
            break;

        case '!':
            printf("���ڸ� �Է��ϼ���(value1) :"); //����Լ����� ���ڸ� �Է¹޴°� ������ �M
            scanf_s("%d", &num1);
            printf("����� : %d\n", factorial(num1));
            break;

        case 'q':
            printf("���α׷��� �����մϴ�.");
            break;

        default:
            printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
            break;
        }

    }
    return 0;
}


//�Լ� ����
int add(int value1, int value2)
{
    printf("�� ���ڸ� �Է��ϼ���(value1 value2) :");
    scanf_s("%d %d", &value1, &value2);
    return value1 + value2;
}


int subtraction(int value1, int value2)
{
    printf("�� ���ڸ� �Է��ϼ���(value1 value2) :");
    scanf_s("%d %d", &value1, &value2);
    return value1 - value2;
}

int multiply(int value1, int value2)
{
    printf("�� ���ڸ� �Է��ϼ���(value1 value2) :");
    scanf_s("%d %d", &value1, &value2);
    return value1 * value2;
}

float division(float value1, float value2)
{
    printf("�� ���ڸ� �Է��ϼ���(value1 value2) :");
    scanf_s("%f %f", &value1, &value2);
    return (value1 / value2);
}

int factorial(int value1)
{
    while (value1 <= 0)
    {
        printf("���ڸ� �߸� �Է��Ͽ����ϴ�.\n");
        printf("���ڸ� �Է��ϼ��� (value1):");
        scanf_s("%d", &value1);
    }
    if (value1 == 1)
        return 1;
    else
        return value1 * factorial(value1 - 1);
}