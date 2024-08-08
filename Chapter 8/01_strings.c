#include <stdio.h>

int main()
{
    // char greetings[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greetings[] = "Hello"; // Both are same
    printf("%s\n", greetings);
    for (int i = 0; i <= 5; i++)
    {
        printf("Character in index %d is %c\n", i, greetings[i]);
    }
    return 0;
}