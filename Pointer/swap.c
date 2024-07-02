#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    // Input the values of x and y
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Display values before swapping
    printf("Before swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    // Call the swap function
    swap(&x, &y);

    // Display values after swapping
    printf("After swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}
