// #include <stdio.h>

// struct Program
// {
//     int a;

// }p;

// int main()
// {

//     p.a = 10;

//     printf("%d", p.a);
// }

// #include <stdio.h>

// struct Program
// {
//     int a;

// };

// int main()
// {
//     struct Program p;
//     p.a = 10;

//     printf("%d", p.a);
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
//     strcpy(e1.name, "Sonoo Jaiswal"); 
//     printf("employee 1 id : %d\n", e1.id);
//     printf("employee 1 name : %s\n", e1.name);
//     return 0;
// }


#include <stdio.h>
#include <string.h>


struct Person {
    char name[50];
    int age;
};

int main() {
   
    struct Person person;

  
    strcpy(person.name, "Alice");
    person.age = 30;

    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);

    return 0;
}

