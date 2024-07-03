#include <stdio.h>
int main()
{

    int row = 4;
    int col = 4;

    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}

