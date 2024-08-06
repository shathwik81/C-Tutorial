#include <stdio.h>

int main()
{
    if (1)
    {
        printf("This if is executed!\n");
    }
    if (0)
    {
        printf("This if will not execute!\n");
    }
    if (23)
    {
        printf("This if is also executed!\n");
    }
    if ('$')
    {
        printf("This if is also executed!\n");
    }
    if (6.9)
    {
        printf("This if is also executed!\n");
    }
    return 0;
}