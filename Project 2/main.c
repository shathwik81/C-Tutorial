#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int you, comp;
    // 0 -> Snake
    // 1 -> Water
    // 2 -> Gun
    srand(time(0));
    comp = rand() % 4;

    puts("Chose Snake(0), Water(1), Gun(2)");
    scanf("%d", &you);

    if (comp == you)
    {
        puts("Tie!!!!");
    }
    else if (comp == 0 & you == 1)
    {
        puts("You Lost! Computer choose Snake");
    }
    else if (comp == 1 & you == 2)
    {
        puts("You Lost! Computer chose Water");
    }
    else if (comp == 2 & you == 0)
    {
        puts("You Lost! Computer chose Gun");
    }
    else if (you == 0 & comp == 1)
    {
        puts("You Win! Computer choose Snake");
    }
    else if (you == 1 & comp == 2)
    {
        puts("You Win! Computer chose Water");
    }
    else if (you == 2 & comp == 0)
    {
        puts("You Win! Computer chose Gun");
    }
    else
    {
        puts("Enter valid number");
    }
    return 0;
}