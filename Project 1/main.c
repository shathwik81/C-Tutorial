#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int rand_num = rand() % 100 + 1, guess_num, num_of_guess = 0;

    do
    {
        printf("Guess the number\n");
        scanf("%d", &guess_num);
        if (guess_num > rand_num)
        {
            printf("Lower number please!!\n");
        }
        else if (guess_num < rand_num)
        {
            printf("Higher number please!!\n");
        }
        else
        {
            printf("Congratulations!!\n");
        }
        num_of_guess++;
    } while (rand_num != guess_num);

    printf("You guessed the number %d in %d guesses\n", rand_num, num_of_guess);
    return 0;
}
