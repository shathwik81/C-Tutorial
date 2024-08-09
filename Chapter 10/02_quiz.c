#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("main.txt", "r");

    if (ptr == NULL)
    {
        printf("The file does not exist\n");
    }
    else
    {
        printf("The exists\n");
    }
    fclose(ptr);
    return 0;
}