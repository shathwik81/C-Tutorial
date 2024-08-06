#include <stdio.h>

int main()
{
    int n = 21;
    for (int i = n; i >= 1; i--)
    {
        if (i == 10)
        {
            break;
        }
        if (i == 12)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}