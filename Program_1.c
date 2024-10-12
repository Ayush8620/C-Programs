#include <stdio.h>

int main()
{
    int a, mod;
    int b, c, sum, sub, multi, division;
    
    printf("Enter any two Numbers\n");
    printf("Enter First Numbers\n");
    scanf("%d", &b);
    //https://t.me/PHOENIXYTM
    printf("Enter second Numbers\n");
    scanf("%d", &c);
    sum = b + c;
    sub = b - c;
    multi = b * c;
    division = b / c;
    mod = b % c;
    
    printf("The Sum is %d\nThe sub is %d\nThe multipication is %d\nThe division is %d\nThe modulo is %d", sum, sub, multi, division, mod);
    

    return 0;
}
