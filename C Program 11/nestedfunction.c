#include <stdio.h>
void operator()
{

    int x = 3;
    int y = 8;

    int add()
    {
        printf("%d\n", x + y);
    }
    int subtract()
    {
        printf("%d\n", y - x);
    }
    int multiplication()
    {
        add();
        printf("%d\n", x * y);
        
    }

    multiplication();
}
int main()
{
    operator();
}