// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char ch[] = "Hello World";

//     printf("%s", ch);
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char ch[12] = "Hello World";

//     // printf("%c", ch[1]);

//     for (int i = 0; i < 12; i++)
//     {
//         printf("%c", ch[i]);
//     }
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char ch[12] = "Hello World";

//     int start = 0;
//     int end = 11;

//     while(start < end){

//         start++;
//         end--;
//     }

// }

// Input string

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[10];

//     printf("Please Enter String : ");

//     gets(str);

//    printf("%s",str);
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[10];

//     printf("Please Enter String : ");

//     scanf("%[^@]", str);

//     printf("%s", str);
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];

    printf("Please Enter String : ");

    scanf("%[^\n]s", str);

    printf("%s", str);
}


