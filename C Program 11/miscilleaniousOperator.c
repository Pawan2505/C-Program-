
// sizeof

// #include <stdio.h>

// int main()
// {
//     int a = 10;

//     printf("%d", sizeof(a));
// }

// #include <stdio.h>

// int main()
// {

//     printf("%d\n", sizeof(int));
//     printf("%d\n", sizeof(float));
//     printf("%d\n", sizeof(char));
//     printf("%d\n", sizeof(double));
// }

// & address of

// #include <stdio.h>

// int main()
// {

//     int a = 10;

//     printf("%p", &a);
// }

// #include <stdio.h>

// int main()
// {

//     char ch = 'b';

//     printf("%p", &ch);
// }

// Pointer => *

// #include <stdio.h>

// int main()
// {

//     int a = 10;

//     int *ptr = &a;

//     printf("%p\n", &a);

//     printf("%p\n", ptr);
// }

// Implicit Type Conversion

// #include <stdio.h>

// int main()
// {

//     int a = 10;

//     float b = 5.5;

//     float result = a + b;

//     printf("%.2f", result);
// }

#include <stdio.h>

int main()
{

    int a = 10;

    float b = 5.5;

    int result = a + (int)b;

    printf("%d", result);
}
