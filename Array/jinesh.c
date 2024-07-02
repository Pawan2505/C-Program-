#include <stdio.h>

int main()
{
    int n, ans = 0, no_ways = 0;

    printf("Enter any natural number to know whether it can be expressed as a sum of two prime numbers or not: ");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("The entered number is not a valid natural number. Please retry entering a natural number: ");
        scanf("%d", &n);
    }

    int prime[n], index = 0;

    // Find all prime numbers less than n
    for (int l = 2; l < n; l++)
    {
        int primechk = 1;
        for (int i = 2; i <= l / 2; i++)
        {
            if (l % i == 0)
            {
                primechk = 0;
                break;
            }
        }
        if (primechk == 1)
        {
            prime[index] = l;
            index++;
        }
    }

    // Check if n can be expressed as the sum of two prime numbers
    for (int l = 0; l < index; l++)
    {
        int new_n = n - prime[l];
        int primechk2 = 1;

        if (new_n < 2)
        {
            primechk2 = 0;
        }
        else
        {
            for (int i = 2; i <= new_n / 2; i++)
            {
                if (new_n % i == 0)
                {
                    primechk2 = 0;
                    break;
                }
            }
        }

        if (primechk2 == 1)
        {
            ans = 1;
            printf("%d can be expressed as a sum of two prime numbers: %d + %d = %d\n", n, prime[l], new_n, n);
            no_ways++;
        }
    }

    if (ans == 0)
    {
        printf("%d cannot be expressed as a sum of 2 prime numbers.\n", n);
    }

    printf("Number of ways: %d\n", no_ways);

    return 0;
}
