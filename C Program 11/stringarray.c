// #include <stdio.h>

// int main()
// {
//     char ch = 'a';
//     printf("%c", ch);
// }

// ASCII Value

// #include <stdio.h>

// int main()
// {
//     char ch = 'a';
//     printf("%d", ch);
// }

// #include <stdio.h>

// int main()
// {
//     char ch = 'z';
//     printf("%d", ch);
// }

// #include <stdio.h>

// int main()
// {
//     char ch = '0';
//     printf("%d", ch);
// }

// #include <stdio.h>

// int main()
// {
//     char ch = '9';
//     printf("%d", ch);
// }

// #include <stdio.h>

// int main()
// {
//     char ch[5] = {'a', 'b', 'c', 'd', 'e'};

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%c\n", ch[i]);
//     }
// }

// #include <stdio.h>

// int main()
// {
//     char ch[5];

//     ch[0] = 'p';

//     ch[1] = 'o';

//     ch[2] = 'r';

//     ch[3] = 't';

//     ch[4] = 'y';

//     // ch[5] = 'i';

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%c\n", ch[i]);
//     }
// }

// #include <stdio.h>

// int main()
// {
//     char ch[] = "Vijak";
//     int i = 0;

//     while (ch[i] == '\0')
//     {
//         printf("%c\n", ch[i]);
//         i++;
//     }
// }

// #include <stdio.h>

// int main()
// {
//     char ch[5];

//     // User Input
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Please enter value at index %d : ", i);

//         scanf("%s", &ch[i]);
//     }

//     // Output Array

//     printf("Array is : ");

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%c", ch[i]);
//     }
// }

// #include <stdio.h>

// int main()
// {
//     char ch[15];

//     printf("Enter String value : ");
//     gets(ch);  // input string

//     printf("String is : ");

//     puts(ch);  // print string
// }

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter character value : ");
    
    ch = getchar();

    printf("character is : ");

    putchar(ch);
}