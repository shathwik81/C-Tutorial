#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("main.txt", "r");
    // char c = fgetc(ptr);
    // printf("%c\n", c);
    ptr = fopen("main.txt", "a");
    fputc('H', ptr);
    return 0;
}