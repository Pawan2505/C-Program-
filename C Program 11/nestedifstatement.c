#include <stdio.h>
int main()
{
    int marks;
    printf("Please enter your marks : ");
    scanf("%d", &marks);

    if (marks >= 80)
    {
        if (marks >= 90)
        {
            printf("Grade A+");
        }
        else
        {
            printf("Grade A");
        }
    }
    else if (marks >= 60)
    {
        if (marks >= 70)
        {
            printf("Grade B+");
        }
        else
        {
            printf("Grade B");
        }
    }
    else
    {
        printf("Failed!");
    }
}