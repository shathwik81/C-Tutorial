#include <stdio.h>

struct vector
{
    int i, j;
};

int main()
{
    struct vector v = {2, 4};
    printf("The value of vector is %di + %dj\n", v.i, v.j);
    return 0;
}