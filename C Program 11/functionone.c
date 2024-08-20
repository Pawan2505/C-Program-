// #include <stdio.h>

// int add(int x, int y)
// {
//     return x + y;
// }

// int subtract(int x, int y)
// {

//     return x - y;
// }

// int main()
// {

//     int a = 10;
//     int b = 20;

//     int result = add(a, b);
//     int result1 = subtract(a, b);

//     printf("%d\n", result);
//     printf("%d", result1);
// }

// #include <stdio.h>

// int add()
// {
//     int x = 5;
//     int y = 10;
//     return x + y;
// }

// int subtract()
// {

//     int a = 10;
//     int b = 6;

//     printf("%d", a - b);
// }

// int main()
// {

//     printf("%d\n", add());
//     subtract();
// }

#include <stdio.h>

int array(int arr[]);
int main()
{

    int arr[5] = {1, 32, 3, 4, 5};

    array(arr);
}

int array(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}