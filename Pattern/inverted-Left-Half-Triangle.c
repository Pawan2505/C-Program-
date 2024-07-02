#include <stdio.h>

int main() {
    int i, j;
    int lines = 5; 

    for (i = 0; i < lines; i++) {
        // Print  spaces
        for (j = 0; j < i; j++) {
            printf("  "); // Two spaces for each step
        }
        
        // Print the alternating 1 and 0 pattern
        for (j = 0; j < lines - i; j++) {
            printf("%d ", j % 2);
        }
        
        printf("\n");
    }

    return 0;
}
