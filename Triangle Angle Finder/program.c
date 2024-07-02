#include <stdio.h>

int main() {
    float firstAngle, secondAngle, thirdAngle;

    // Input first and second angles
    printf("Enter the first angle: ");
    scanf("%f", &firstAngle);
    printf("Enter the second angle: ");
    scanf("%f", &secondAngle);

    // Calculate the third angle
    thirdAngle = 180 - firstAngle - secondAngle;

    // Display the third angle
    printf("Third angle: %.0f\n", thirdAngle);

    return 0;
}
