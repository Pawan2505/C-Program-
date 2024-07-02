#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rowPos = 1, colPos = 1, newElement = 99;

    // Print the original array
    printf("Original array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Insert the new element
    int lastElement = arr[ROWS - 1][COLS - 1];
    for (int i = ROWS - 1; i >= 0; i--) {
        for (int j = COLS - 1; j >= 0; j--) {
            if (i > rowPos || (i == rowPos && j >= colPos)) {
                if (j == 0 && i > 0) {
                    arr[i][j] = arr[i - 1][COLS - 1];
                } else if (j > 0) {
                    arr[i][j] = arr[i][j - 1];
                }
            }
        }
    }
    arr[rowPos][colPos] = newElement;

    // Print the array after insertion
    printf("Array after insertion:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
