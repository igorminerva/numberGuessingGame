#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(0));
    int answer = rand () % 100 + 1;
    int guess;
    int min =1;
    int max = 100;

    int guesses = 0;

    do
    {
        printf("Guess the number: ");
        scanf("\n%d",&guess);
        if (guess<min || guess > max)
        {
            printf("The number is between 1 and 100\n");
        }else
        {
            if (guess < answer)
            {
                printf("Too low\n");

            } else if (guess > answer)
            {
                printf("Too High\n");
            }
        
        }

        guesses +=1;
  
    } while (guess != answer);
    
    printf("Good! You guessed!\n");
    printf("You needed %d guessues",guesses);

    return 0;
}