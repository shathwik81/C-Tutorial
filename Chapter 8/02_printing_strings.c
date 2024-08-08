#include <stdio.h>

int main()
{
    // char st[] = {'G', 'o', 'o', 'd', ' ', 'M', 'o', 'r', 'n', 'i', 'n', 'g', '\n'};
    // int size = sizeof(st) / sizeof(st[0]);
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%c", st[i]);
    // }
    char st[] = "Good Morning";
    printf("%p\n", &st);
    return 0;
}