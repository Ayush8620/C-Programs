#include <stdio.h>

int main()
{
    int ch, n;
    printf("Check whether a\n");
    printf("1. Number is odd or even\n2. Year is leap year or not\nEnter Your Choice: ");
    scanf("%d", &ch);

    switch (ch) 
    {
    case 1:// join: https://t.me/PHOENIXYTM
        printf("Enter Any Number\n");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("The number %d is EVEN\n", n);
        }
        else
        {
            printf("The number %d is ODD\n", n);
        }
        break;
// join: https://t.me/PHOENIXYTM
    case 2:
        printf("Enter Year\n");
        scanf("%d", &n);
        if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
        {
            printf("The Year %d is A LEAP YEAR\n", n);
        }
        else
        {
            printf("The Year %d is NOT A LEAP YEAR\n", n);
        }
        break;

    default:
        printf("Enter correct Choice.\n");
        break;
    }
    return 0;// join: https://t.me/PHOENIXYTM
}
