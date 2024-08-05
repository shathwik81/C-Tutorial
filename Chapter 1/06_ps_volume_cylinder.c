#include <stdio.h>

int main()
{
    float rad, hei, pi = 3.14, vol;
    printf("Enter the radius\n");
    scanf("%f", &rad);

    printf("Enter the height\n");
    scanf("%f", &hei);

    vol = pi * rad * rad * hei;
    printf("The volume is %f\n", vol);
    return 0;
}