#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e;
    printf("Check wheather a 3-digit number is Armstrong or Not\n");
    printf("Enter any 3-digit number\n");
    scanf("%d", &a);

    if (a < 100 || a > 999)// join: https://t.me/PHOENIXYTM
    {
        printf("Please enter a valid 3-digit number.\n");
        return 1; // Exit with an error code
    }

    b = a % 10;
    c = a / 10;
    d = c % 10;
    e = c / 10;

    if (a == pow(b, 3) + pow(d, 3) + pow(e, 3))
        printf("The Number %d is a Armstrong Number\n", a);
    else
        printf("The Number %d is a Not Armstrong Number\n", a);

    return 0;// join: https://t.me/PHOENIXYTM
}