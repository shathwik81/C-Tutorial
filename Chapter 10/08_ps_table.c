#include <stdio.h>

int main()
{
    FILE *ptr;
    int n = 4;
    ptr = fopen("table.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}