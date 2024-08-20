#include <stdio.h>

int main()
{
    FILE *fptr;
    char buffer[100]; 


    fptr = fopen("test.txt", "r");

    if (fptr != NULL)
    {

        while (fgets(buffer, sizeof(buffer), fptr) != NULL)
        {
            printf("%s\n", buffer);
        }
        
    }

}
