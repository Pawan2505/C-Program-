#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input[] = "Saurabh";
    int n = strlen(input);

    // Checking lower alphabet in string
    int hasLower = 0, hasUpper = 0;
    int hasDigit = 0, specialChar = 0;
    char normalChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";

    for (int i = 0; i < n; i++)
    {
        if (islower(input[i]))
            hasLower = 1;
        if (isupper(input[i]))
            hasUpper = 1;
        if (isdigit(input[i]))
            hasDigit = 1;

        if (!strchr(normalChars, input[i]))
            specialChar = 1;
    }

    // Strength of password
    printf("Strength of password:- ");
    if (hasLower && hasUpper && hasDigit && specialChar && (n >= 8))
        printf("Strong\n");
    else if ((hasLower || hasUpper) && specialChar && (n >= 6))
        printf("Moderate\n");
    else
        printf("Weak\n");

    return 0;
}
