#include <stdio.h>

int main()
{
    int marks;
    char grade;
    printf("Enter the marks(100)\n");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        grade = 'A';
    }
    else if (marks >= 80 && marks <= 90)
    {
        grade = 'B';
    }
    else if (marks >= 70 && marks <= 80)
    {
        grade = 'C';
    }
    else if (marks >= 60 && marks <= 70)
    {
        grade = 'D';
    }
    else if (marks >= 50 && marks <= 60)
    {
        grade = 'E';
    }
    else if (marks < 50 && marks < 100 && marks >= 0)
    {
        grade = 'F';
    }
    else
    {
        grade = '!';
    }
    printf("Your grade is %c\n", grade);
    return 0;
}