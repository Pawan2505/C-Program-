

// Type : 1 Take nothing and return nothing

// #include <stdio.h>

// int sum() // Function Definition
// {
//     int a = 129;
//     int b = 12;

//     printf("%d", a + b);
// }

// int main()
// {
//     sum(); // function Calling
// }

// #include <stdio.h>

// int sum();
// int main()
// {
//     // sum(); // function Calling

//     printf("%d", sum());
// }

// int sum() // Function Definition
// {
//     int a = 412;
//     int b = 965;

//     printf("%d\n", a + b);
//     // return a + b;
// }

// #include <stdio.h>

// int elementfind(int arr[], int target)
// {

//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] == target)
//         {
//             return 1;
//         }
//     }

//     return 0;
// }

// int main()
// {
//     int arr[10] = {12, 34, 65, 76, 87, 2, 3, 4, 5, 6};

//     int target = 14;
//     int result = elementfind(arr, target);

//     printf("%d", result);
// }

#include <stdio.h>

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    printf("%d\n", arr);

    printf("%u\n", &arr[0]);
    printf("%u", &arr[1]);
}
