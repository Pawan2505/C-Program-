#include <stdio.h>

int main() {
    int i, j;
    int lines = 5; 

    for (i = 1; i <= lines; i++) {
        // Print  spaces
        for (j = lines; j > i; j--) {
            printf("  "); // Two spaces for each step
        }
        
        // Print the increasing part of the pattern
        for (j = 6 - i; j <= 5; j++) {
            printf("%d ", j);
        }
        
        // Print the decreasing part of the pattern
        for (j = 5 - 1; j >= 6 - i; j--) {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
