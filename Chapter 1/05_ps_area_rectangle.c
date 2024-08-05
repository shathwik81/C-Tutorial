#include <stdio.h>

int main()
{
    float len, wid, area;
    printf("Enter the length\n");
    scanf("%f", &len);

    printf("Enter the width\n");
    scanf("%f", &wid);

    area = len * wid;
    printf("The area is %f\n", area);
    return 0;
}