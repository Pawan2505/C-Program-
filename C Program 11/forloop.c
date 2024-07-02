// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d\n", i * 2);
//     }
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     // char ch[10];

//     int arr[10];

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("Please enter character : ");
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }

#include <stdio.h>
#include <string.h>
int main()
{

    char ch[10];

    for (int i = 1; i <= 10; i++)
    {
        printf("Please enter character : ");
        scanf("%s", &ch[i]);
    }

    for (int i = 1; i <= 10; i++)
    {
        printf("%c\n", ch[i]);
    }
}