#include <stdio.h>

int main()
{
    int ch, n;
    float a, b, c;
    printf("Select the option below:\n");
    printf("1. check whether a number is odd or even\n2. find the largest of two numbers\n3. find the largest of three numbers\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Enter Any Number\n");
        scanf("%d", &n);
        n % 2 == 0 ? printf("%d is EVEN\n", n) : printf("%d is ODD\n", n);

        break;
    case 2:
        printf("Enter First number\n");
        scanf("%f", &a);
        printf("Enter Second number\n");
        scanf("%f", &b);

        a > b ? printf("%.2f is is greater\n", a) : printf("%.2f is greater\n", b);
        break;

    case 3:
        printf("Enter First number\n");
        scanf("%f", &a);
        printf("Enter Second number\n");
        scanf("%f", &b);
        printf("Enter Third number\n");
        scanf("%f", &c);

        a > b && a > c? printf("%.2f is is greater\n", a) : b > a && b > c ? printf("%.2f is greater\n", b) : printf("%.2f is greater\n", c);
        break;
    default:
        printf("Enter correct Choice.");
        break; // join: https://t.me/PHOENIXYTM
    }
    return 0;
}