#include <stdio.h>

int nonrecurcive(int b)
{
    int a = 1;
    for (int i = 1; i <= b; i++)
    {
        a = a * i;
    }
    return a;
}
int recurcive(int c)
{
    if (c == 1 || c == 0)
    {
        return 1;
    }
    else
    {
        return (c * recurcive(c-1));
    }

}

int main()
{
    int ch, n, a;
    printf("find the factorial of a number\n");
    printf("1.using loops\n2.using non-recursive function\n3.using recursive function\nSelect the Options above:\n");
    scanf("%d", &ch);
    printf("Enter any number\n");
    scanf("%d", &n);

    switch (ch)
    {
    case 1:
        a = 1;
        for (int i = 1; i <= n; i++)
        {
            a = a * i;
        }
        printf("Factorial of %d (using loops) is: %d\n", n, a);

        break;
    case 2:
        printf("Factorial of %d (using non-recursive function) is: %d\n", n, nonrecurcive(n));
        break;
    case 3:
        printf("Factorial of %d (using recursive function) is: %d\n", n, recurcive(n));
        break;
    default:
        printf("Enter correct Choice.");
        break; // join: https://t.me/PHOENIXYTM
    }
    return 0;
}