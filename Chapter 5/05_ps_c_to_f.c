#include <stdio.h>

int c_to_f(int c);

int main()
{
    int c;
    printf("Enter the temperature(c)\n");
    scanf("%d", &c);
    printf("The temperature in fahrenheit is %d\n", c_to_f(c));
    return 0;
}

int c_to_f(int c)
{
    return (c * 1.8) + 32;
}