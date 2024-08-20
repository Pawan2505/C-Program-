// #include <stdio.h>
// #include <string.h>

// union Data
// {
//     int i;
//     float f;
//     char str[20];
// };

// int main()
// {
//     union Data data;
//     strcpy(data.str, "C Programming");

//     data.f = 220.5;
//     data.i = 10;

//     printf("data.str: %s \n", data.str);
//     printf("data.i: %d \n", data.i);
//     printf("data.f: %f \n", data.f);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

enum Day
{
    sunday,
    monday,
    Tuesday = 67,
    wednesday,
    Thusday,
    Friday,
    saturday
};

int main()
{
    enum Day today;

    today = wednesday;

    printf("Today : %d \n", today);

    return 0;
}