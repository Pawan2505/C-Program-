#include <stdio.h>

int main()
{

    int a = 20;
    int b = 10;
    char ch;
    printf("Please input arithmentic operaor : ");
    scanf("%c", &ch);
    int result = 0;
    switch (ch)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;

    default:
        printf("Please Enter Valid Operator!\n");
        break;
    }

    printf("Result : %d", result);
}