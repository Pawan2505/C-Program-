#include <stdio.h>
#include <string.h>
int main()
{
    int n;

    printf("Enter n : ");
    scanf("%d", &n);
    getchar();
    char str[n];

    printf("Enter string :- ");
    gets(str);

    int len = strlen(str);

    printf("Length of entered string is %d", len);
    return 0;
}