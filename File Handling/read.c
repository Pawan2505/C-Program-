#include <stdio.h>

int main()
{
    FILE *evenFile, *oddFile;
    int i;
    evenFile = fopen("even_file.txt", "r");
    oddFile = fopen("odd_file.txt", "r");

    if (evenFile == NULL || oddFile == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Even numbers from even_file.txt:\n");
    while (fscanf(evenFile, "%d", &i) == 1)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("Odd numbers from odd_file.txt:\n");

    while (fscanf(oddFile, "%d", &i) == 1)
    {
        printf("%d ", i);
    }
    printf("\n");

    fclose(evenFile);
    fclose(oddFile);

    return 0;
}
