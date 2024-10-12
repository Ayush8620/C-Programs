#include <stdio.h>
#include <math.h>

int main()// join: https://t.me/PHOENIXYTM
{
    int n;
    printf("Enter Any Number to check if it is prime or not\n");
    scanf("%d", &n);
    if (n < 2)
        printf("%d is Not a prime number\n", n);
    else if (n == 2)
        printf("%d is a prime number\n", n);
    else if (n % 2 == 0 && n != 2)
        printf("%d is Not a prime number\n", n);// join: https://t.me/PHOENIXYTM
    else
    {
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)
            {// join: https://t.me/PHOENIXYTM
                printf("%d is not a prime number\n", n);
                return 0;
            }
        }
        printf("%d is a prime number\n", n);
    }
    return 0;
}// join: https://t.me/PHOENIXYTM