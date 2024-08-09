#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("main.txt", "w");
    int num = 32;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}