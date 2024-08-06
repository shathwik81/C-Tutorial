#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);
    i += 5;
    printf("The value of i is %d\n", i);
    printf("The value of i++ is %d\n", i++);
    printf("The value of i is %d\n", i);
    printf("The value of ++i is %d\n", ++i);

    int j = 10;
    printf("The value of j is %d\n", j);
    j -= 5;
    printf("The value of j is %d\n", j);
    printf("The value of j-- is %d\n", j--);
    printf("The value of j is %d\n", j);
    printf("The value of --j is %d\n", --j);
    return 0;
}