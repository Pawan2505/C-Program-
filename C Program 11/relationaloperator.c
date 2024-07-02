// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int b = 20;

//     printf("%d", a <= b);
// }

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age : ");
//     scanf("%d", &age);

//     // Conditional Statement

//     if (age <= 18) // bolck of code
//     {
//         printf("You are Eligible for vote!");
//     }
//     else
//     {
//         printf("You are not Eligible for Vote!");
//     }
// }

// Logical Operator =>&& || !

// #include <stdio.h>
// int main()
// {
//     int marks;
//     printf("Enter your marks : ");
//     scanf("%d", &marks);

//     // Conditional Statement

//     if (marks >= 90 && marks <= 100) // bolck of code
//     {
//         printf("Grade A");
//     }
//     else if (marks >= 80 && marks < 90)
//     {
//         printf("Gade B");
//     }
//     else if (marks >= 60 && marks < 80)
//     {
//         printf("Grade C");
//     }
//     else if (marks >= 40 && marks < 60)
//     {
//         printf("Grade D");
//     }
//     else
//     {
//         printf("You are Faild!");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int num1;
//     printf("Enter your num1 : ");
//     scanf("%d", &num1);

//     int num2;
//     printf("Enter your num2 : ");
//     scanf("%d", &num2);
//     // Conditional Statement

//     if (num1 % 3 == 0 || num2 % 5 == 0)
//     {
//         printf(" The value of Sum num1 and num2 :  %d", num1 + num2);
//     }
//     else
//     {
//         printf("Subtract value is : %d", num1 - num2);
//     }
// }


#include <stdio.h>
int main()
{
    int num1;
    printf("Enter your num1 : ");
    scanf("%d", &num1);

    int num2;
    printf("Enter your num2 : ");
    scanf("%d", &num2);
    // Conditional Statement

    if (!(num1>num2))
    {
        printf(" The value of Sum num1 and num2 :  %d", num1 + num2);
    }
    else
    {
        printf("Subtract value is : %d", num1 - num2);
    }
}