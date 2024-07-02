#include <stdio.h>

int main()
{
    signed char signedChar;
    unsigned char unsignedChar;

    signedChar = 127;
    printf("signedChar = 127: %d\n", signedChar);

    signedChar = -128;
    printf("signedChar = -128: %d\n", signedChar);

    signedChar = 255;
    printf("signedChar = 255: %d\n", signedChar);

    unsignedChar = 255;
    printf("unsignedChar = 255: %u\n", unsignedChar);

    unsignedChar = 0;
    printf("unsignedChar = 0: %u\n", unsignedChar);

    unsignedChar = -1;
    printf("unsignedChar = -1: %u\n", unsignedChar);

    return 0;
}
