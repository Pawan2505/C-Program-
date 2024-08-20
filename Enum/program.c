#include <stdio.h>

enum Days
{
    sunday,
    monday,
    wednessday = 10,
    tuesday = 9,
    thusday,
    friday,
    saturday
};

int main()
{
    enum Days today;

    printf("%d\n", sunday);

    printf("%d", friday);
}