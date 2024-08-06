#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("%d divided by 97 gives remainder %d\n", num, num % 97);
    return 0;
}