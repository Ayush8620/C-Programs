#include <stdio.h>
#include <math.h>

int main() // join: https://t.me/PHOENIXYTM
{
    printf("The prime numbers are :\n");
    for (int n = 1; n <= 100; n++)
    {
        if (n < 2)
            continue;
        else if (n == 2)
            printf("%d\n", n);
        else if (n % 2 == 0)
            continue;
        else
        {
            int isprime = 1;
            for (int i = 3; i <= sqrt(n); i += 2)
            {
                if (n % i == 0)
                {
                    isprime = 0;
                    break;
                }
            }
            if (isprime == 1)
                printf("%d \n", n);
        }
    }
    return 0;
} // join: https://t.me/PHOENIXYTM