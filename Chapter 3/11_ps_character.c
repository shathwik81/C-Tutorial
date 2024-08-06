#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character\n");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
    {
        printf("%c is lowercase\n", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("%c is uppercase\n", c);
    }
    else
    {
        printf("%c is not a alphabet\n", c);
    }
    return 0;
}