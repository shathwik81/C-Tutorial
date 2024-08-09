#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr, *ptr2;

    ptr = fopen("main.txt", "r");
    ptr2 = fopen("this.txt", "a");
    while (1)
    {
        ch = fgetc(ptr);
        fprintf(ptr2, "%c", ch);

        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
        }
    }
    return 0;
}