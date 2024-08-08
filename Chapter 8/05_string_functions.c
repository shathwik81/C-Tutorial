#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Hello";
    // printf("%d\n", strlen(st));

    char tr[30];
    strcpy(tr, st);
    // puts(tr);

    char s1[] = "Hello, ", s2[] = "Hi";
    strcat(s1, s2);
    // puts(s1);

    printf("%d\n", strcmp("far", "joke"));
    printf("%d\n", strcmp("joke", "far"));
    printf("%d\n", strcmp("far", "far"));
    return 0;
}