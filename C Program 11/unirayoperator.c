// #include <stdio.h>

// int main()
// {
//     int a = 10;

//     printf("%d", a);
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10;
//         a++; // a = a+1;
//     printf("%d", a);
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10;
//         a--; // a = a-1;
//     printf("%d", a);
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10;
//         ++a; // a = a+1;
//     printf("%d", a);
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10;
//     --a; // a = a+1;
//     printf("%d", a);
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10;
//      a = a++ + ++a;
//     printf("%d", a);
// }

// Pre-Increment => ++a;

// Post-Increment => a++;

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;
    int c = a + ++a + ++a + ++a + ++a + b + ++b;
    printf("%d\n", a);
    printf("%d", c);
}

