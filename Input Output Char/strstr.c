#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "this is tavatpoint with c and java";

    char *sub = strstr(str, "java");

    if (sub != NULL)
    {
        printf("Substring is: %s", sub);
    }
    else
    {
        printf("Substring not found.");
    }

    return 0;
}