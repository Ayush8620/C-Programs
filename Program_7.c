#include <stdio.h>

int main()
{
    int ch, n, a, b, c, d, e, f, sum;
    printf("find the sum of\n");
    printf("1. 3-digit number\n2. 4-digit number\nEnter Your Choice: ");
    scanf("%d", &ch);

    switch (ch) //join: https://t.me/PHOENIXYTM
    {
    case 1:
        printf("Enter Any 3-digit Number\n");
        scanf("%d", &n);
        a = n % 10;
        b = n / 10;
        c = b % 10;
        //join: https://t.me/PHOENIXYTM
        d = b / 10;
        sum = a + c + d;
        printf("The Sum of 3-digit number is %d", sum);
        break;

    case 2:

        printf("Enter Any 4-digit Number\n");
        scanf("%d", &n);
        a = n % 10;
        b = n / 10;
        c = b % 10;
        d = b / 10;
        e = d % 10;
        f = d / 10;
        sum = a + c + e + f;
        //join: https://t.me/PHOENIXYTM
        printf("The Sum of 3-digit number is %d", sum);
        break;
    default:
        printf("Enter correct Choice.");
        break;
    }
    return 0;
}