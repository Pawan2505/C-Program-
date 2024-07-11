#include <stdio.h>

int main()
{
    FILE *fptr;

    // Open the file for appending (a mode will open the file for writing at the end of the file, creating it if it does not exist)
    fptr = fopen("test.txt", "a");

    if (fptr != NULL)
    {
        // Append some content to the file
        fputs("Appending this line to the file.\n", fptr);
        fputs("This is another appended line.\n", fptr);

        // Close the file after appending
        fclose(fptr);
        printf("Content appended to the file successfully.\n");
    }
    else
    {
        printf("Failed to open the file for appending.\n");
    }

    return 0;
}
