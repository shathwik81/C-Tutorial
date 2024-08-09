#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("int.txt", "r");
    fscanf(ptr, "%d", &num);
    num *= 2;
    ptr = fopen("int.txt", "w");
    fprintf(ptr, "%d", num);
    return 0;
}