#include <stdio.h>
#include <string.h>

void decrypt_string(char *str)
{
    while (*str != '\0')
    {
        *str = *str - 1;
        str++;
    }
}

int main()
{
    char text[100];
    printf("Enter an encrypted string to decrypt: ");
    fgets(text, sizeof(text), stdin);
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n')
    {
        text[len - 1] = '\0';
    }
    decrypt_string(text);
    printf("Decrypted string: %s\n", text);
    return 0;
}