#include <stdio.h>
void main()
{

    int i;
    char string[40];

    printf("Enter the string : ");
    gets(string);

    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 65 && string[i] <= 90)
        {
            string[i] = string[i] + 32;
        }
    }
    printf("The converted lower case string is : ");
    puts(string);
}