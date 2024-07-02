#include <stdio.h>

int main() {
    int start = 11;  
    int n, i, j, num;

    
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    num = start;

    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
