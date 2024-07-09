#include <stdio.h>

int main()
{
    int arr[6] = {11, 22, 33, 44, 55}; // Increased size to 6 to accommodate the new value

    // Insert at position 2
    int value = 56;

    for (int i = 5; i > 2; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[2] = value;

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
