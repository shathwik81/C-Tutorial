#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    int salary;
    float height;
};

int main()
{
    struct employee e1, e2, e3;
    strcpy(e1.name, "Tim");
    e1.salary = 100000;
    e1.height = 171.32;

    strcpy(e2.name, "Bill");
    e2.salary = 110000;
    e2.height = 169.32;

    strcpy(e3.name, "Rock");
    e3.salary = 99000;
    e3.height = 174.32;

    printf("%s %d %f\n", e1.name, e1.salary, e1.height);
    printf("%s %d %f\n", e2.name, e2.salary, e2.height);
    printf("%s %d %f\n", e3.name, e3.salary, e3.height);
    return 0;
}