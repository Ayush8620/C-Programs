#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e;
    printf("All Armstrong number between 100 to 999 is :\t");

    for (int i = 100; i < 1000; i++)
    {

        b = i % 10;
        c = i / 10;
        d = c % 10;
        e = c / 10;

        if (i == pow(b, 3) + pow(d, 3) + pow(e, 3))
            printf("%d\t", i);
    }

    return 0; // join: https://t.me/PHOENIXYTM
}