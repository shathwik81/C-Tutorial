#include <stdio.h>

size_t my_strlen(const char *str)
{
    size_t length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    const char *text = "Hello, World!";
    printf("The length of the string is: %zu\n", my_strlen(text));
    return 0;
}
