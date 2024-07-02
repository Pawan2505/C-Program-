#include <stdio.h>

int main()
{
    int score;
    char grade;
    char *comment;
    int eligibleForNextLevel;

    printf("Enter the score (0-100): ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' : (score >= 80) ? 'B'
                              : (score >= 70)   ? 'C'
                              : (score >= 60)   ? 'D'
                                                : 'F';

    switch (grade)
    {
    case 'A':
        comment = "Excellent Bhai!";
        break;
    case 'B':
        comment = "Very Good!";
        break;
    case 'C':
        comment = "Good!";
        break;
    case 'D':
        comment = "Needs Improvement.";
        break;
    case 'F':
        comment = "Failed.";
        break;
    default:
        comment = "Invalid grade.";
        break;
    }

    // Check eligibility for the next level using if-else statement
    if (grade == 'A' || grade == 'B' || grade == 'C')
    {
        eligibleForNextLevel = 1; // Eligible
    }
    else
    {
        eligibleForNextLevel = 0; // Not eligible
    }

    // Output the results
    printf("Score: %d\n", score);
    printf("Grade: %c\n", grade);
    printf("Comment: %s\n", comment);
    if (eligibleForNextLevel)
    {
        printf("You are eligible for the next level.\n");
    }
    else
    {
        printf("You are not eligible for the next level.\n");
    }

    return 0;
}
