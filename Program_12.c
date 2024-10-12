#include <stdio.h>

int main()
{
    int ch, n, reversenum;
    printf("To check wheater a number is palindrome or not for\n");
    printf("1. 3-digit number\n2. 4-digit number\nEnter Your Choice: ");
    scanf("%d", &ch);

    switch (ch) 
    {
    case 1:
        printf("Enter Any 3-digit Number\n");// join: https://t.me/PHOENIXYTM
        scanf("%d", &n);
        reversenum = (n % 10) * 100;
        reversenum += ((n / 10) % 10) * 10;
        reversenum += ((n / 10) / 10);
        
        
        if(n == reversenum)
        {
            printf("The number %d is a palindrome number\n", n);
        }
        else
        {
            printf("The number %d is a not palindrome number\n", n);
        }
        
        break;

    case 2:

        printf("Enter Any 4-digit Number\n");
        scanf("%d", &n);
        reversenum = (n % 10) * 1000;
        reversenum += ((n / 10) % 10) * 100;
        reversenum += (((n / 10) / 10) % 10) * 10;// join: https://t.me/PHOENIXYTM
        reversenum += (((n / 10) / 10) / 10);
        
        if(n == reversenum)
        {
            printf("The number %d is a palindrome number\n", n);
        }
        else
        {
            printf("The number %d is a not palindrome number\n", n);
        }
        
        break;
    default:
        printf("Enter correct Choice.");
        break;// join: https://t.me/PHOENIXYTM
    }
    return 0;
}