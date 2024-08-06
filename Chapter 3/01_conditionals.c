#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if (age >= 0 && age <= 18)
    {
        printf("You can not vote!\n");
    }
    else if (age >= 18 && age <= 125)
    {
        printf("Print you can vote!\n");
    }
    else
    {
        printf("Enter valid age...\n");
    }
    if (age % 5 == 0)
    {
        printf("Your age is divisible by 5\n");
    }
    if (age % 2 == 0)
    {
        printf("Your age is divisible by 2\n");
    }
    else
    {
        printf("Your age is not divisible by 2\n");
    }
    return 0;
}