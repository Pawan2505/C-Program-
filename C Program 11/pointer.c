// #include <stdio.h>

// int main()
// {
//     int a = 4;

//     int *ptr = &a;

//     printf("%d\n", *ptr);
//     printf("%p\n", ptr);
//     printf("%p", &a);
// }

// #include <stdio.h>

// int main()
// {
//     int a = 4;

//     int *ptr = &a;

//     printf("%d\n", a);

//     *ptr = 10;

//     printf("%d\n", *ptr);
//     printf("%d\n", a);
// }

// #include <stdio.h>

// int main()
// {

//     int *ptr;   // without initialisition pointer variable pointer declaration not allowed.

//     printf("%d\n", *ptr);

// }

// #include <stdio.h>

// int main()
// {

//     int *ptr;
//     *ptr = 9;  // Not Ok

//     printf("%d\n", *ptr);

// }

// #include <stdio.h>

// int main()
// {

//     int a = 22;

//     int *ptr1, *ptr2;

//     ptr1 = &a;

//     ptr2 = ptr1;

//     printf("%d\n", *ptr1);
//     printf("%d\n", *ptr2);

// }

// #include <stdio.h>

// int main()
// {

//    int arr[] = {11,22,33,44,55,66};

//    int *ptr = arr;

//    printf("%d\n",&arr[0]);
//    printf("%d\n", ptr);

//    printf("%d\n", ptr+1);
//    printf("%d\n",&arr[1]);

// }

// #include <stdio.h>

// int main()
// {

//     int arr[] = {11, 22, 33, 44, 55, 66};

//     int(*ptr)[6] = &arr;

//     printf("%d\n", *ptr);
//     printf("%d\n", &arr[0]);

//     printf("%d\n", *(*ptr + 2));
// }

// #include <stdio.h>

// int main()
// {

//     int arr[] = {11, 22, 33, 44, 55, 66};

//     int *ptr, sum = 0;

//     for (ptr = arr; ptr < arr + 6; ptr++)
//     {
//         sum += *ptr;
//     }

//     printf("%d", sum);
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5;

//     int *p1 = &a;

//     int **p2 = &p1;
//     printf("%d\n", *p1);
//     printf("%d\n", *p2);
//     printf("%d\n", **p2);
// }

// #include <stdio.h>

// int add(int *ptr1, int *ptr2)   // UDF pointer
// {
//     printf("%d", *ptr1 + *ptr2);
// }
// int main()
// {
//     int a = 5;
//     int b = 23;

//     add(&a, &b); // argument is address
// }

// #include <stdio.h>

// int add(char *ptr, int n) // UDF pointer
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c", *(ptr + i));
//     }
// }
// int main()
// {
//     char arr[] = {'a', 'b', 'c', 'd'};

//     int size = sizeof(arr) / sizeof(arr[0]);

//     add(arr, size); // argument is address
// }

// #include<stdio.h>

// int  main(){

//     int arr[2][3] = {11,22,33,44,55,66};

//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d\n", arr[i][j]);
//         }
//     }
// }

// #include <stdio.h>

// int main()
// {

//     int arr[2][3] = {11, 22, 33, 44, 55, 66};

//     int(*ptr)[3] = arr;

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d\n", *(*ptr + i));
//     }
// }



#include<stdio.h>
 
int main()
{
  int arr[3][4] = { 
                    {10, 11, 12, 13}, 
                    {20, 21, 22, 23}, 
                    {30, 31, 32, 33} 
                  };
  int (*ptr)[4];
  ptr = arr;
  printf("%p %p %p\n", ptr, ptr + 1, ptr + 2);
  printf("%p %p %p\n", *ptr, *(ptr + 1), *(ptr + 2));
  printf("%d %d %d\n", **ptr, *(*(ptr + 1) + 2), *(*(ptr + 2) + 3));
  printf("%d %d %d\n", ptr[0][0], ptr[1][2], ptr[2][3]);
  return 0;
}
