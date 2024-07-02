#include <stdio.h>

void squareAndReverseArray(int *arr, int size) {
    // Square the elements of the array
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * arr[i];
    }

    // Print the squared elements in reverse order
    printf("Reversed array elements:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Call function to square and reverse the elements of the array
    squareAndReverseArray(arr, size);

    return 0;
}
