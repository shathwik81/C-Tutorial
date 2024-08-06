#include <stdio.h>

int main()
{
    int income, x, tax = 0;
    printf("Enter your income\n");
    scanf("%d", &income);

    if (income < 250000)
    {
        tax = 0;
    }
    if (income > 250000 && income <= 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = (500000 - 250000) * 0.05 + (income - 500000) * 0.2;
    }
    else if (income > 1000000)
    {
        tax = (500000 - 250000) * 0.05 + (1000000 - 500000) * 0.2 + (income - 1000000) * 0.3;
    }
    printf("Your tax is %d\n", tax);
    return 0;
}