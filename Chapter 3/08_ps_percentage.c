#include <stdio.h>

int main()
{
    int math, sci, jap, result;
    printf("Enter your marks in mathematics\n");
    scanf("%d", &math);
    printf("Enter your marks in science\n");
    scanf("%d", &sci);
    printf("Enter your marks in japanese\n");
    scanf("%d", &jap);

    if (math < 33 || sci < 33 || jap < 33)
    {
        result = 0;
    }
    if (((math + sci + jap) / 3) < 40)
    {
        result = 0;
    }

    if (result == 0)
    {
        printf("You are fail:(\n");
    }
    else
    {
        printf("You are pass:)\n");
    }
    return 0;
}