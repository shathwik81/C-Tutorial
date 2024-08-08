#include <stdio.h>

void encrypt_string(char *str)
{
    while (*str != '\0')
    {
        *str = *str + 1;
        str++;
    }
}

int main()
{
    char text[100];
    printf("Enter a string to encrypt: ");
    fgets(text, sizeof(text), stdin);
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n')
    {
        text[len - 1] = '\0';
    }
    encrypt_string(text);
    printf("Encrypted string: %s\n", text);
    return 0;
}
