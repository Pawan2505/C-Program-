// #include <stdio.h>

// int main()
// {
//     int a = 10;

//     (a > 20) ? printf(" %d a is greater then 20", a) : printf(" %d a is less then 20", a);
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10;

//     int result = (a > 20) ? 1 : 0;

//     printf("%d", result);
// }

// Nested Terniary Operator

// #include <stdio.h>

// int main()
// {
//     int a = 10;
//     int b = 20;

//     int sum, sub;

//     int result = (a > b) ? (sum = a + b) : (sub = b - a);

//     printf("Result of terniary operator :  %d", result);
// }

// Find the greatest number from three number

#include <stdio.h>

int main()
{
    int a = 100;
    int b = 100;

    int c = 100;

    (a > b && a > c)   ? printf("%d is greatest from all three number!", a)
    : (b > a && b > c) ? printf("%d is greatest from all three number! ", b)
    : (c > a && c > b) ? printf("%d is greatest from all three number!", c)
                       : printf("All numbers are equals!");
}