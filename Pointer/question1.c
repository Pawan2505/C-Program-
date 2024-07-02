#include <stdio.h>

void squareArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i));
    }
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Call function to square the elements of the array
    squareArray(arr, size);

    // Print the squared elements of the array
    printf("Square of each element:\n");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
