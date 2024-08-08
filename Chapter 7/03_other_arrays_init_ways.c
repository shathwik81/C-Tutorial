#include <stdio.h>

int main()
{
    int cgpa[3] = {7, 6, 9};
    for (int i = 0, j = 1; i < 3, j <= 3; i++, j++)
    {
        printf("The cgpa of student %d is %d\n", j, cgpa[i]);
    }
    return 0;
}