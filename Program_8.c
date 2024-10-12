#include <stdio.h>

int main()
{
    int ch, n, reversenum;
    printf("find the reverse of \n");
    printf("1. 3-digit number\n2. 4-digit number\nEnter Your Choice: ");
    scanf("%d", &ch);

    switch (ch) // join: https://t.me/PHOENIXYTM
    {
    case 1:
        printf("Enter Any 3-digit Number\n");
        scanf("%d", &n);
        reversenum = (n % 10) * 100;
        reversenum += ((n / 10) % 10) * 10;
        reversenum += ((n / 10) / 10);
        // join: https://t.me/PHOENIXYTM
        printf("The Reverse of 3-digit number is %d", reversenum);
        break;

    case 2:

        printf("Enter Any 4-digit Number\n");
        scanf("%d", &n);
        reversenum = (n % 10) * 1000;
        reversenum += ((n / 10) % 10) * 100;
        reversenum += (((n / 10) / 10) % 10) * 10;
        reversenum += (((n / 10) / 10) / 10);
        // join: https://t.me/PHOENIXYTM
        printf("The Reverse of 4-digit number is %d", reversenum);
        break;
    default:
        printf("Enter correct Choice.");
        break;
    }
    return 0;
}