#include <stdio.h>

int main()
{
    int arr[5] = {25, 58, 69, 34, 24};

    // printf("%u\n", arr);
    // printf("%u\n", &arr[0]);
    // printf("%u", &arr[1]);

    int *p = arr;

    printf("%d\n", p[2]);
    printf("%p", p);
}

// #include <stdio.h>

// int main()
// {
//     int arr[5] = {25, 58, 69, 34, 24};

//     int *p = arr;
//     printf("%d\n", p);

//     printf("%d\n", *p);

//     printf("%d\n", (p + 1));

//     printf("%d\n", *(p + 1));

//     printf("%d\n", (p + 2));

//     printf("%d\n", *(p + 2));
// }