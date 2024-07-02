// #include <stdio.h>

// int factorial(int x)
// {
//     if(x == 0){                     // Base Condition
//         return 1;
//     }

//     return x * factorial(x - 1);  // recursion calling   5 * 4 * 3 * 2 * 1 * 1
// }

// int main()
// {

//     printf("%d", factorial(5));
// }

#include <stdio.h>

int print(int x)
{
    if (x == 10)
    { // Base Condition
        return 10;
    }
    printf("%d\n", x);

    return print(x + 1); // recursion calling   5 * 4 * 3 * 2 * 1 * 1
}

int main()
{

    printf("%d", print(1));
}
