

// Type : 1 - Take something and return something

// #include <stdio.h>

// int add(int a, int b) // Parameter
// {

//     return a + b; // 10+20 = 30
// }

// int main()
// {

//     int a = 10;
//     int b = 20;

//     // int result = add(a, b); // argument
//     // printf("%d", result);

//     printf("%d", add(a, b));
// }

// Type : 2 - Take something and return Nothing

// #include <stdio.h>

// void add(int x, int y) // Parameter
// {

//     printf("Sum of a and b %d", x + y);
// }

// int main()
// {

//     int a = 10;
//     int b = 20;

//     add(a, b);
// }

// Type : 3 - Take nothing and return Nothing

// #include <stdio.h>

// void add() // Parameter
// {

//     int x = 20;
//     int y = 30;

//     int result = x * y;

//     printf("Multiplication of two number : %d", result);
// }

// int main()
// {

//     add();
// }

// Type : 3 - Take nothing and return something

// #include <stdio.h>

// int add() // Parameter
// {

//     int x = 20;
//     int y = 30;

//     return x * y;
// }

// int main()
// {

//     // add();

//     printf("%d", add());
// }

// Nested Function

#include <stdio.h>

int nestedfun()
{
    int x = 5; // global variable for nested fun.
    int y = 10;

    void add()
    {
        printf("%d\n", x + y);
    }

    void sub()
    {
        printf("%d\n", x - y);
        add();
    }

    void multiple()
    {
        printf("%d\n", x * y);
        sub();
    }
    void divide()
    {
        printf("%d\n", x / y);
        multiple();
    }
    divide();
}

int main()
{

    nestedfun();
}