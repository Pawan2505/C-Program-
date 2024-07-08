#include <stdio.h>

int main()
{
    FILE *fptr;
    char buffer[100];  // Buffer to store each line

    // Open the file for reading
    fptr = fopen("test.txt", "r");

    if (fptr != NULL)
    {
        // Read and print each line from the file
        while (fgets(buffer, sizeof(buffer), fptr) != NULL)
        {
            printf("%s", buffer);
        }

        // Close the file after reading
        fclose(fptr);
    }
    else
    {
        printf("Failed to open the file.\n");
    }

    return 0;
}
