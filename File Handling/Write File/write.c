#include <stdio.h>

int main()
{
    FILE *fptr;

    
    fptr = fopen("test.txt", "w");

    if (fptr != NULL)
    {
       
        fputs("This is a test file.\n", fptr);
        fputs("It contains multiple lines of text.\n", fptr);
        fputs("Each line will be written to the file.\n", fptr);

        // Close the file after writing
        fclose(fptr);
        printf("File created and content written successfully.\n");
    }
    else
    {
        printf("Failed to create the file.\n");
    }

    return 0;
}
