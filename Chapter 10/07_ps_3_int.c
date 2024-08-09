#include <stdio.h>

int main()
{
    FILE *file;
    int num1, num2, num3;
    file = fopen("file.txt", "r");
    fscanf(file, "%d %d %d", &num1, &num2, &num3);
    printf("The values are %d %d %d\n", num1, num2, num3);
    fclose(file);
    return 0;
}