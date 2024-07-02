#include <stdio.h>

int main() {
    int start = 41;  
    int n, i, j;

    
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%d ", start + j);
        }
        printf("\n");
    }

    return 0;
}
