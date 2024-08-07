#include <stdio.h>

double calculateForce(double mass)
{
    double g = 9.8;
    return mass * g;
}

int main()
{
    double mass;

    printf("Enter the mass of the body (in kg): ");
    scanf("%lf", &mass);

    double force = calculateForce(mass);

    printf("The force of attraction on the body is: %.2f N\n", force);
    return 0;
}
