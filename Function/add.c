#include <stdio.h>

int add(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{
  
    int array[] = {12, 34, 6, 76};
    int size = 4;

    add(array, size);
}

