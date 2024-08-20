// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *str = "Pawan Maurya";

//     int length = strlen(str);

//     printf("%d", length);

//     return 0;
// }

#include <stdio.h>

int main()
{
    char str[] = "Pawan Maurya";
    int length = 0;
    char *ptr = str;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}
