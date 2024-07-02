// #include <stdio.h>

// int main()
// {

//     int arr[5] = {2, 4, 5, 7, 8};

//     printf("%d", arr[]);

//     // for(int i =0; i < 5; i++){
//     //     printf("%d \n",arr[i]);
//     // }
// }

// #include <stdio.h>

// int main()
// {

//     int arr[5] = {2, 4, 5, 7, 8};

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d \n", arr[i]);
//     }
// }

// #include <stdio.h>

// int main()
// {

//     int arr[] = {1, 5, 2, 3, 6, 43, 65, 7887};

//     // arr[0] = 23;
//     // arr[1] = 34;

//     // datatype size = sizeof(array_name) / sizeof(array_name[index]);

//     // int size = sizeof(arr) / sizeof(arr[1]);

//     // printf("Size of array is %d\n", sizeof(arr[0]));

//     // for (int i = 0; i < size; i++)
//     // {
//     //     printf("%d \n", arr[i]);
//     // }
// }

// #include <stdio.h>

// int main()
// {

//     int arr[] = {};
//     arr[0] = 10;
//     arr[1] = 40;

//     printf("%d\n", arr[0]);
//     printf("%d\n", arr[1]);
//     printf("%d", arr[2]);
// }

#include <stdio.h>

int main()
{

    int arr[4] = {12, 33, 55, 44};

    arr[1] = 56;

    for(int i = 0; i < 4; i++){
        printf("%d\n", arr[i]);
    }
}