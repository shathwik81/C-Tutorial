#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee google[5];
    strcpy(google[1].name, "Tom");
    google[2].code = 69;
    printf("%s %d\n", google[1].name, google[2].code);

    struct employee Bill = {20, 200000, "Bill"};
    printf("%d %f %s\n", Bill.code, Bill.salary, Bill.name);
    return 0;
}