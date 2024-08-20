#include <stdio.h>

int main()
{
    FILE *evenFile, *oddFile;

    evenFile = fopen("even_file.txt", "w");
    oddFile = fopen("odd_file.txt", "w");

    if (evenFile == NULL || oddFile == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(evenFile, "%d\n", i);
        }
        else
        {
            fprintf(oddFile, "%d\n", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);
}
