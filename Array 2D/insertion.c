#include <stdio.h>

int main()
{
    int row;
    int col;

    printf("Enter size of row : ");
    scanf("%d", &row);

    printf("Enter size of col : ");
    scanf("%d", &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Please enter array elements : ");
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Original Array is : ");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", arr[i][j]);
            printf(",");
        }
    }

    // Replace array at index arr[0][2]

    printf("\n");

    int element = 23;

    int position = arr[0][2];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if ((i == 0) && (j == 2))
            {
                arr[i][j] = element;
            }

            printf("%d", arr[i][j]);
            printf(",");
        }
    }
}