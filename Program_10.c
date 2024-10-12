#include <stdio.h>

int main()
{
    int ch;
    float a, b, c;
    printf("find the largest of\n");
    printf("1.Two numbers\n2.Three numbers\nEnter Your Choice: ");
    scanf("%d", &ch);

    switch (ch) // join: https://t.me/PHOENIXYTM
    {
    case 1:
        printf("Enter First Number\n");
        scanf("%f", &a);
        printf("Enter Second Number\n");
        scanf("%f", &b);
        if (a > b)
        {
            printf("%.2f is Greater than %.2f", a, b);
        }
        else
        {
            // join: https://t.me/PHOENIXYTM
            printf("%.2f is Greater than %.2f", b, a);
        }
        break;

    case 2:
        printf("Enter First Number\n");
        scanf("%f", &a);
        printf("Enter Second Number\n");
        scanf("%f", &b);
        printf("Enter Third Number\n");
        scanf("%f", &c);
        if (a > b)
        {
            if (a > c)
            {
                printf("%.2f is Greater than %.2f And %.2f", a, b, c);
            }
            else
            {
                printf("%.2f is Greater than %.2f And %.2f", c, a, b);
            }
        }
        else
        {
            // join: https://t.me/PHOENIXYTM
            if (b > c)
            {
                printf("%.2f is Greater than %.2f And %.2f", b, a, c);
            }
            else
            {
                printf("%.2f is Greater than %.2f And %.2f", c, a, b);
            }
        }
        break;
    default:
        printf("Enter correct Choice.");
        break;
    }
    return 0;
}