#include <stdio.h>

int main()
{
    FILE *a;
    a = fopen("main.txt", "a");
    int num = 45;
    fprintf(a, "%d", num);
    fprintf(a, "\n%d", num);
    return 0;
}