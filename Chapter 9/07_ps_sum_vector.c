#include <stdio.h>

typedef struct vector
{
    int i, j;
} v;

v sum_vector(v v1, v v2)
{
    v v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
};

int main()
{
    v v1 = {2, 4};
    v v2 = {3, 6};
    v v3 = sum_vector(v1, v2);
    printf("The sum of vector is %di + %dj\n", v3.i, v3.j);
    return 0;
}