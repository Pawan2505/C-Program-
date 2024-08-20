// #include <stdio.h>

// int main()
// {
//     FILE *fptr;

//     // Open the file for writing (w mode will create the file if it does not exist)
//     fptr = fopen("test.txt", "w");

//     if (fptr != NULL)
//     {
//         // Write some content to the file
//         fputs("This is a test file.\n", fptr);
//         fputs("It contains multiple lines of text.\n", fptr);
//         fputs("Each line will be written to the file.\n", fptr);
//         fputs("Vija is good girls.\n", fptr);

//         // Close the file after writing
//         fclose(fptr);
//         printf("File created and content written successfully.\n");
//     }
//     else
//     {
//         printf("Failed to create the file.\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main()
{
    FILE *fptr;

    // Open the file for writing (w mode will create the file if it does not exist)
    fptr = fopen("test.txt", "a");

    if (fptr != NULL)
    {
        // Write some content to the file
        fputs("This is C Language Class.\n", fptr);
        fputs("It contains multiple lines of text.\n", fptr);
        fputs("Each line will be written to the file.\n", fptr);
        fputs("Vija is good girls.\n", fptr);

        // Close the file after writing
        // fclose(fptr);
        printf("File created and content written successfully.\n");
    }
    else
    {
        printf("Failed to create the file.\n");
    }

    return 0;
}
