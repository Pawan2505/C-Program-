// #include <stdio.h>

// int main()
// {

//     int arr[6] = {11, 22, 33, 44, 55};

//     int value = 2222;
//     int i;
//     for (i = 5; i > 2; i--)
//     {
//         arr[i] = arr[i - 1];
//     }

//     printf("Update1 Array : \n ");

//     arr[2] = value;

//     for (i = 0; i < 6; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }

// Delete array element at index position

#include <stdio.h>

int main()
{

    int arr[5] = {11, 22, 33, 44, 55};

    int position = 2;
    for (int i = position; i < 4; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("Update1 Array : \n ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }
}