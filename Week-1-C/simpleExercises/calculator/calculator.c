#include <stdio.h>

int main(void)
{
    char operator;
    float num1, num2, result;

    printf("Type the operator\n");
    scanf("%c", &operator);

    printf("Type the two numbers\n");
    scanf("%f %f", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%2.f + %2.f = %2.f ", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%2.f - %2.f = %2.f ", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%2.f * %2.f = %2.f ", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("%2.f / %2.f = %2.f ", num1, num2, result);
        break;
    default:
        printf("You didnt type an operator");
    }
}