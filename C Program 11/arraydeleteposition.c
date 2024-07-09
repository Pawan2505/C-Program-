#include <stdio.h>

int main()
{
    int arr[5] = {12, 34, 5, 6, 7};

    int target = 2;

    for (int i = target; i < 5; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }
}