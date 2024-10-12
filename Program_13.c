#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float d, e, f;
    printf("To find Roots of Quadratic equations\n");
    printf("Format is a(x^2) + bx + c \n");
    printf("Enter value of a\n");
    scanf("%d", &a);
    printf("Enter value of b\n");
    scanf("%d", &b);
    printf("Enter value of c\n");
    scanf("%d", &c);

    d = pow(b, 2) - (4 * a * c);

    if (d > 0)
    {
        // for +
        e = (-b + sqrt(d)) / (2.0 * a);
        // for -
        f = (-b - sqrt(d)) / (2.0 * a);
        printf("The roots are %.2f and %.2f", e, f);
    }
    else if (d < 0)
    {
        printf("Roots are not real\n");
    }
    else
    {
        e = -b / (2.0 * a);
        printf("The roots are %.2f\n", e);
    }
    return 0;
}