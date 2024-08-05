#include <stdio.h>

int main()
{
    int cel, fah;
    printf("Enter the temperature(C)\n");
    scanf("%d", &cel);

    fah = (cel * 1.8) + 32;
    printf("The temperature is %d(F)\n", fah);
    return 0;
}