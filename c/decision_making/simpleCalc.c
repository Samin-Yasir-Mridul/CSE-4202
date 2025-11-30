#include<stdio.h>
int main()
{
    float n1, n2;
    char operation;

    printf("Enter an Operation (+, -, *, /): ");
    scanf("%c", &operation);

    printf("Enter first number: ");
    scanf("%f", &n1);

    printf("Enter second number: ");
    scanf("%f", &n2);

    switch(operation)
    {
        case '+':
        printf("%.2f + %.2f = %.2f", n1, n2, n1+n2);
        break;

        case '-':
        printf("%.2f - %.2f = %.2f", n1, n2, n1-n2);
        break;

        case '*':
        printf("%.2f * %.2f = %.2f", n1, n2, n1*n2);
        break;

        case '/':
        printf("%.2f / %.2f = %.2f", n1, n2, n1/n2);
        break;

        default:
        printf("Syntax error!");
        break;
    }
    return 0;
}