#include <stdio.h>
#include <stdlib.h>
#include <time.h> // random number generator
int main()
{
    int randomNumber = 0;
    int guess = 0;
    int numberofguess = 5;
    time_t t;
    srand((unsigned)time(&t));
    randomNumber = rand() % 21;
    printf("\nthis is a guessing game");
    printf("\n i have chosen a number between 0 and 20 which u have to guess");
    for (numberofguess = 5; numberofguess > 0; --numberofguess)
    {
        printf("\nyou have %d tr%s left\n", numberofguess, numberofguess == 1 ? "y" : "ies");
        printf("enter a guess\n");
        scanf("%d", &guess);
        if (guess == randomNumber)
        {
            printf("congratulations u guessed it right\n");
            return 0;
        }
        else if (guess < 0 || guess > 20)
            printf("i told to enter number between 0 and 20\n");
        else if (randomNumber > guess)
            printf("the number %d is lesser than random number", guess);
        else if (randomNumber < guess)
            printf("the number %d is greater  than random number", guess);
    }

    printf("\nyou had five tries and u failed.the number is %d", randomNumber);
}