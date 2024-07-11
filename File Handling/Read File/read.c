#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("test.txt", "r");

    if (fptr != NULL)
    {
        printf("File Open Successful\n");
        fclose(fptr);
    }
    else
    {
        printf("File Open Unsuccessful\n");
    }

    return 0;
}
