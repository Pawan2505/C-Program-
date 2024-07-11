// #include <stdio.h>

// int main()
// {
//     for (int row = 0; row < 4; row++)
//     {

//         // Space

//         for (int space = 0; space <= row; space++)
//         {
//             printf(" ");
//         }

//         // Star

//         for (int star = 0; star < 5; star++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
// }


// #include <stdio.h>

// int main()
// {
//     for (int row = 0; row < 4; row++)
//     {

//         // Space

//         for (int space = 3-row; space > 0; space--)
//         {
//             printf(" ");
//         }

//         // Star

//         for (int star = 0; star < 5; star++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
// }



#include <stdio.h>

int main()
{
    for (int row = 0; row < 4; row++)
    {

        // Star

        for (int star = 0; star < row+1; star++)
        {
            printf("*");
        }

        printf("\n");
    }
}