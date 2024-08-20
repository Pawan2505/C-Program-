
// #include<stdio.h>

// int main(){

//     // Declaration of 2D array
//     int arr[3][3] = {{11,22,33},{111,222,333},{1111,2222,3333}};

// //Outer Loop for creating rows
//     for(int i = 0; i < 3; i++){

//         // Inner Loop for creating columns

//         for(int j = 0; j < 3; j++){
//             printf("%d ",arr[i][j]);
//         }

//         // start from new Line
//         printf("\n");
//     }
// }

// ****************************************************************************************************

// #include<stdio.h>

// int main(){

//     // Declaration of 2D array
//     int arr[3][3];

//     arr[0][0] = 11;
//     arr[0][1] = 22;
//     arr[0][2] = 33;
//     arr[1][0] = 44;
//     arr[1][1] = 55;
//     arr[1][2] = 66;
//     arr[2][0] = 77;
//     arr[2][1] = 88;
//     arr[2][2] = 99;

// //Outer Loop for creating rows
//     for(int i = 0; i < 3; i++){

//         // Inner Loop for creating columns

//         for(int j = 0; j < 3; j++){
//             printf("%d ",arr[i][j]);
//         }

//         // start from new Line
//         printf("\n");
//     }
// }

// ****************************************************************************************************

// #include <stdio.h>

// int main()
// {

//     // Declaration of 2D array
//     int arr[3][3];

//     // Taking Input from User

//     for (int i = 0; i < 3; i++)
//     {

//         // Inner Loop for creating columns

//         for (int j = 0; j < 3; j++)
//         {
//             printf("Enter array element at row = %d and Column = %d index : ", i, j);
//             scanf("%d", &arr[i][j]);
//         }

//         // start from new Line
//         printf("\n");
//     }

//     printf("Array is : ");

//     // Outer Loop for creating rows
//     for (int i = 0; i < 3; i++)
//     {

//         // Inner Loop for creating columns

//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }

//         // start from new Line
//         printf("\n");
//     }
// }

// ***********************************************************************

// Update 2D array

// #include <stdio.h>

// int main()
// {

//     // Declaration of 2D array
//     int arr[3][3];

//     arr[0][0] = 11;
//     arr[0][1] = 22;
//     arr[0][2] = 33;
//     arr[1][0] = 44;
//     arr[1][1] = 55;
//     arr[1][2] = 66;
//     arr[2][0] = 77;
//     arr[2][1] = 88;
//     arr[2][2] = 99;

//     printf("Result : \n");

//     // Outer Loop for creating rows
//     for (int i = 0; i < 3; i++)
//     {

//         // Inner Loop for creating columns

//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }

//         // start from new Line
//         printf("\n");
//     }

//     arr[0][2] = 3344;
//     arr[1][0] = 4455;

//      printf("Result Updated Array : \n");

//      // Outer Loop for creating rows
//     for (int i = 0; i < 3; i++)
//     {

//         // Inner Loop for creating columns

//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }

//         // start from new Line
//         printf("\n");
//     }
// }

// ***********************************************************************

// #include <stdio.h>

// int main()
// {

//     // Declaration of 2D array
//     int arr[3][3];

//     // Taking Input from User

//     for (int i = 0; i < 3; i++)
//     {

//         // Inner Loop for creating columns

//         for (int j = 0; j < 3; j++)
//         {
//             printf("Enter array element at row = %d and Column = %d index : ", i, j);
//             scanf("%d", &arr[i][j]);
//         }

//         // start from new Line
//         printf("\n");
//     }

//     printf("Array is : \n");

//     // Outer Loop for creating rows
//     for (int i = 0; i < 3; i++)
//     {

//         // Inner Loop for creating columns

//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }

//         // start from new Line
//         printf("\n");
//     }

//     // Updating Array

//     for (int i = 0; i < 3; i++)
//     {

//         // Inner Loop for creating columns

//         for (int j = 0; j < 3; j++)
//         {
//             if (i == 2 && j == 2)
//             {
//                 arr[i][j] = 10000;
//             }
//         }

//         // start from new Line
//         printf("\n");
//     }

//     printf("Updated Array is : \n");

//     for (int i = 0; i < 3; i++)
//     {

//         // Inner Loop for creating columns

//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }

//         // start from new Line
//         printf("\n");
//     }
// }

// Inserting element at the position in 2d Array

#include <stdio.h>

int main()
{
    // Declaration and initialization of 2D array
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8}
        };

    // Row and column where the new element is to be inserted
    int row = 1, col = 1;

    // Shift elements to the right and down to make space for new element
    for (int i = 2; i >= row; i--)
    {
        for (int j = 2; j >= col; j--)
        {
            if (i == row && j == col)
            {
                arr[row][col] = 1010;
                break;
            }
            arr[i][j] = arr[i][j - 1];
        }
    }

    printf("Updated Array is : \n");

    // Print the updated array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
