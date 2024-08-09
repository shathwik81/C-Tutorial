#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;

int main()
{
    // typedef struct employee emp;
    emp tim;
    emp *ptr = &tim;
    tim.code = 23;
    tim.salary = 434343;
    strcpy(tim.name, "Tim");

    printf("%d %f %s\n", tim.code, tim.salary, tim.name);
    ptr->code = 3;
    printf("%d\n", tim.code);
    return 0;
}