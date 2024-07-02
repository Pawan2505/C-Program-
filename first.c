// #include<stdio.h>

// int main(){

// //    unary Operator

// int x = 10;
// x++;   // x = x+1;
// printf("Value of x :%d",x);
// }

// #include<stdio.h>

// int main(){

// //    unary Operator

// int x = 10;
// x++;
// int y = 10+x;

// printf("Value of x :%d\n",x);

// printf("Value of x :%d",y);
// }

// #include<stdio.h>

// int main(){

// //    unary Operator

// int x = 10;
// ++x;
// printf("Value of x :%d\n",x);
// int y = 10+x;

// printf("Value of x :%d",y);
// }

// decriment --

// #include<stdio.h>

// int main(){

// //    unary Operator

// int x = 10;
// x--;
// printf("Value of x :%d\n",x);

// }

// #include<stdio.h>

// int main(){

// //    unary Operator

// int x = 10;
// x--;
// printf("Value of x :%d\n",x);

// int y = 20+x;

// printf("This is y value :%d",y);

// }

// #include<stdio.h>

// int main(){

// //    unary Operator

// float x = 10.75;
// x--;
// printf("Value of x :%f\n",x);

// int y = 20 + (int)x;

// printf("This is y value :%d",y);

// }

// #include<stdio.h>

// int main(){

// //    unary Operator

// float x = 10.75;
// --x;
// printf("Value of x :%f\n",x);

// int y = 20 + (int)x;

// printf("This is y value :%d",y);

// }

// #include<stdio.h>

// int main(){

// //    Arithmatic

// int a =10;
// int b = 2;

// int result = a*b;

// printf("Result : %d",result);

// }

// #include<stdio.h>
// #include <stdbool.h>
// int main(){
//     bool isProgrammingFun = 1;
//     bool isFishTasty = false;

//     printf("This is about bool : %d",isProgrammingFun);

// }

// #include<stdio.h>

// int main(){

// //    Arithmatic

// int a =60;
// int b = 70;

// int result = a != b;

// printf("Result : %d",result);

// }

// (x+y)**2

// #include<stdio.h>

// int main(){

// //    Arithmatic

// int x = 10;
// int y = 20;

// int result = (x+y)*(x+y);

// printf("Result : %d",result);

// }

// This is code for add

// #include <stdio.h>     // It increase readbility of program

// int main() {
//     int a, b;

//     // Input values
//     printf("Enter value for a: ");
//     scanf("%d", &a);
//     printf("Enter value for b: ");
//     scanf("%d", &b);

//     // Display initial values
//     printf("Before swapping: a = %d, b = %d\n", a, b);

//     // Swap without using a third variable
//     a = a + b;
//     b = a - b;
//     a = a - b;

//     // Display swapped values
//     printf("After swapping: a = %d, b = %d\n", a, b);

//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     printf("This is printf. Int main() stdio.h #include<stdio.h>\n");

//     printf("Hello World!");
//     printf("Hello World!");
//     printf("Hello World!\n");
//     printf("Hello\tWorld!");
// printf("*\t\t\t\t\t\t\t\t**");
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a = 5;
//     int b = 10;
//     int temp;
//     temp = a;

//     a = b;
//     b = temp;

//     printf("This is value of a : %d\n",a);
//     printf("This is value of b :%d",b);

// }

// num1 = 50;
// num2 = 130;

// #include<stdio.h>
// int main(){
//     int a = 20;
//     int b = 30;

//     a = a+b;
//     b =a-b;
//     a = a-b;

//     printf("This is the value of a :%d\n",a);
//     printf("This is value of b :%d",b);
// }

// #include <stdio.h>

// int main()
// {

//     int b = 10;

//     int a = b++ + ++b;  // 10+ 12

//         printf("%d", a);
// }

// #include <stdio.h>

// int main()
// {

//     int i = 2, k;

//  //   k = i++ * ++i * ++i; // 2 * 4 * 5 = 40

//     k = ++i * i++ * ++i; // 3 * 3 * 5

//     printf("%d\n", i);
//     printf("%d", k);
// }

// Arithmetic

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Please enter value of a :");
//     scanf("%d",&a);
//     int b;
//     printf("Please enter value of b : ");
//     scanf("%d",&b);

//     int result = a + b;

//     printf("Result of a and b is : %d", result);
// }

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Please enter value of a :");
//     scanf("%d",&a);
//     int b;
//     printf("Please enter value of b : ");
//     scanf("%d",&b);

//     int result = a - b;

//     printf("Result of a and b is : %d", result);
// }

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Please enter value of a :");
//     scanf("%d",&a);
//     int b;
//     printf("Please enter value of b : ");
//     scanf("%d",&b);

//     int result = a * b;

//     printf("Result of a and b is : %d", result);
// }

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Please enter value of a :");
//     scanf("%d", &a);
//     int b;
//     printf("Please enter value of b : ");
//     scanf("%d", &b);

//     int result = a % b;

//     printf("Result of a and b is : %d", result);
// }

// If Statement

// #include <stdio.h>

// int main()
// {
//     int marks;
//     printf("Please enter value of Marks :");
//     scanf("%d", &marks);

// if(marks> 33){
//     printf("You are Pass!");
// }
// else{
//     printf("You are Failed!");
// }

// }

// Relational Operator

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Please enter value of a :");
//     scanf("%d", &a);
//     int b;
//     printf("Please enter value of b : ");
//     scanf("%d", &b);

//     // printf("%d", a>b);

//     if (a != b)
//     {
//         printf("You are greater!");
//     }
//     else
//     {
//         printf("You are less!");
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int marks;
//     printf("Please enter value of marks :");
//     scanf("%d", &marks);

//     if (marks > 90 && marks >= 100)
//     {
//         printf("Grade A");
//     }
//     else if (marks >= 80 && marks <= 90)
//     {
//         printf(" Grade B");
//     }
//     else if (marks > 70 && marks <= 80)
//     {
//         printf(" Grade C");
//     }
//     else if (marks > 60 && marks <= 70)
//     {
//         printf(" Grade D");
//     }
//     else
//     {
//         printf("You are Faild!");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Please enter value of a :");
//     scanf("%d", &a);
//       int b;
//     printf("Please enter value of b :");
//     scanf("%d", &b);

//     if (a<110 || b>220)
//     {
//         printf("Grade A");
//     }
//     else if (a<220 || b>330)
//     {
//         printf(" Grade B");
//     }
//     else if (a<440 || b>550)
//     {
//         printf(" Grade C");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int number;
//     printf("Please enter value of a :");
//     scanf("%d", &number);

//     // (number % 2 == 0) ? printf("Even Number") : printf("Odd Number");

//     if ((number % 2 == 0) ? 1 : 0)
//     {
//         printf("Even Number");
//     }
//     else
//     {
//         printf("Odd Number");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c;
//     int number;
//     printf("Please enter value of a :");
//     scanf("%d", &number);

//     // (number % 2 == 0) ? printf("Even Number") : printf("Odd Number");

//     (number > 0) ? (c = a + b) > 10 ? printf("Greater than 10 ") : printf("less than 10") : (c = b - a);

//     printf("%d", c);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     float result;
//     char ch;
//     printf("Enter first number = ");
//     scanf("%d", &num1);
//     printf("Enter second number = ");
//     scanf("%d", &num2);
//     printf("Choose operator to perform operations = ");
//     scanf(" %c", &ch);
//     result = 0;
//     switch (ch)
//     {
//     case '+':
//         result = num1 + num2;
//         break;
//     case '-':
//         result = num1 - num2;
//         break;
//     case '*':
//         result = num1 * num2;
//         break;
//     case '/':
//         result = num1 / num2;
//         break;
//     default:
//         printf("Invalid operation\n");
//     }
//     printf("Result: %d %c %d = %f\n", num1, ch, num2, result);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int date;
//     printf("Please enter value of date :");
//     scanf("%d", &date);

//     switch (date)
//     {
//     case 1:
//         printf("Monday");
//         break;
//     case 2:
//         printf("Tuesday");
//         break;
//     case 3:
//         printf("Wednesday");
//         break;
//     case 4:
//         printf("Thusday");
//         break;

//     case 5:
//         printf("Friday");
//         break;
//     case 6:
//         printf("saturday");
//         break;
//     case 7:
//         printf("Sunday");
//         break;

//         default:
//             printf("Invalid Date!");
//             break;
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int num1;
    printf("Please enter value of num1 :");
    scanf("%d", &num1);

    int num2;
    printf("Please enter value of num2 :");
    scanf("%d", &num2);

    char ch;
    printf("Please enter value of Operator :");
    scanf(" %c", &ch);

    float result = 0;
    switch (ch)
    {
    case '+':
        // printf("The value of Expression %d", (num1 + num2));
        result = num1 + num2;
        break;
    case '-':
        // printf("The value of Expression %d", (num1 - num2));
        result = num1 - num2;
        break;
    case '*':
        // printf("The value of Expression %d", (num1 * num2));
        result = num1 * num2;
        break;
    case '/':
        // printf("The value of Expression %d", (num1 / num2));
        result = num1 / num2;
        break;

    default:
        printf("Invalid Operator!\n");
        break;
    }

    printf("%f", result);
    return 0;
}