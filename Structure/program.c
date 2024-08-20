// #include <stdio.h>

// struct Program
// {
//     int a;
//     int b;

// } p;

// int main()
// {

//     p.a = 10;
//     p.b = 20;
//     printf("%d\n", p.a);
//     printf("%d\n", p.b);
// }

// #include <stdio.h>

// struct Program
// {
//     int a;
//     int b;
// };

// int main()
// {
//     struct Program p;
//     p.a = 10;
//     p.b = 30;
//     printf("%d", p.a);
//     printf("%d", p.b);
// }

// #include <stdio.h>
// #include <string.h>
// struct employee
// {
//     int id;
//     char name[50];
// } e1;
// int main()
// {

//     e1.id = 101;
//     // e1.name = "Pawan Maurya";
//     strcpy(e1.name, "Sonoo Jaiswal");
//     printf("employee 1 id : %d\n", e1.id);
//     printf("employee 1 name : %s\n", e1.name);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{

    struct Person Person;

    strcpy(Person.name, "Alice");
    Person.age = 30;

    printf("Name: %s\n", Person.name);
    printf("Age: %d\n", Person.age);

    return 0;
}
