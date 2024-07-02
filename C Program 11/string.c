// #include <stdio.h>

// int main()
// {

//     char ch[20];

//     printf("Enter Your String : ");

//     gets(ch);

//     // printf("%s", ch);
//     puts(ch);
// }

// #include <stdio.h>

// int main()
// {

//     char ch[20];

//     printf("Enter Your String : ");

//     // gets(ch);
//     scanf("%[^.]", ch);

//     printf("%s", ch);
//     // puts(ch);
// }

// #include <stdio.h>

// int main()
// {

//     char ch[20];

//     printf("Enter Your String : ");

//     // gets(ch);
//     scanf("%[^.]", ch);

//     printf("%s", ch);
//     // puts(ch);
// }

#include <stdio.h>

int main()
{
    char ch[20];

    printf("Enter Your String: ");
    scanf("%19[^.]", ch); // Limit the input to prevent buffer overflow

    printf("Your input string: %s\n", ch);

    printf("Second character: %c\n", ch[1]);

    return 0;
}

