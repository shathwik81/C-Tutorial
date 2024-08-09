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
    struct employee e1;
    e1.code = 456;
    strcpy(e1.name, "Tim");
    struct employee *ptr;
    ptr = &e1;
    printf("%d %s\n", (*ptr).code, (*ptr).name);
    return 0;
}