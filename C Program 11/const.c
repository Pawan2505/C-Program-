
// Using const Keyword

// #include <stdio.h>
// int main()
// {
//     const float PI = 3.14;
//     // PI = 20.5; // wrong
//     printf("The value of PI : %.2f", PI);
// }

// Using Macro
// #include <stdio.h>
// #define PI 3.14
// int main()
// {

//     printf("The value of PI : %.2f", PI);
// }

// #include <stdio.h>
// #define A 10
// #define B 20
// int main()
// {
  
//     printf("Value is A : %d", A + B);
// }




#include <stdio.h>
int main()
{
   int bredth;
   printf("Enter the size of breadth : ");
   scanf("%d",&bredth);

   int length;
   printf("Enter the size of length : ");
   scanf("%d",&length);

   int area = bredth*length;

   printf("The value of Area of Reactange : %d",area);
}