#include <stdio.h>

int main()
{
    for (int i = 0; i < 2; i++)
    {
        char name[10];
        int sal;
        puts("Enter your name");
        scanf("%s", name);

        puts("Enter your salary");
        scanf("%d", &sal);

        FILE *emp;
        emp = fopen("emp.txt", "a");
        fprintf(emp, "%s, %d\n", name, sal);
    }

    return 0;
}