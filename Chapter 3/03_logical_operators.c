#include <stdio.h>

int main()
{
    int a = 1, b = 0;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);
    printf("The value of not(a) is %d\n", !a);
    printf("The value of not(b) is %d\n", !b);
    printf("%d\n", !(1));
    // !(1) = 0 and !(0) = 1
    // 0 = False and 1 = True
    return 0;
}