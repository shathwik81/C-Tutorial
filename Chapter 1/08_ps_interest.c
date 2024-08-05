#include <stdio.h>

int main()
{
    float si, p, r, t;
    printf("Enter the principal amount\n");
    scanf("%f", &p);

    printf("Enter the interest rate\n");
    scanf("%f", &r);

    printf("Enter the time (in years)\n");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    printf("The simple interest is %f\n", si);
    return 0;
}