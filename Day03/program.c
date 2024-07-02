#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool value1 = 5 > 2;
    bool value2 = 3 < 1;

    printf("%s\n", value1 ? "true" : "false");
    printf("%s", value2 ? "true" : "false");
    return 0;
}
