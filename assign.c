#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, result;
    char c;
    printf("Enter the first operand\n");
    scanf("%f", &num1);
    printf("Enter the second operand\n");
    scanf("%f", &num2);
    printf("Enter the operation to be performed\n");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        result = num1 + num2;
        printf("The operation is addition\n");
        printf("Result: %f + %f = %f\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("The operation is subtraction\n");
        printf("Result: %f - %f = %f\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("The operation is multiplication\n");
        printf("Result: %f * %f = %f\n", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("The operation is division\n");
        printf("Result: %f / %f = %f\n", num1, num2, result);
        break;
    default:
        printf("The operation entered is undefined.");
        
    }
    return 0;
}

