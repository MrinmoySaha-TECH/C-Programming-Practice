#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guessedNumber , guessCount = 0;
    srand(time(NULL)); 
    number = rand() % 100 + 1;
    

    do
    {
        
        printf("Enter Your Guessed Value : ");
        scanf("%d",&guessedNumber);
        guessCount ++;

        if(guessedNumber < number)
        {
            printf("Enter Higher Number :\n");
        } else if (guessedNumber > number)
        {
            printf("Enter Lower Number .\n");
        } else 
        {
            printf ("You Gussed Right Number \n");
        }

    } while (guessedNumber != number);

    printf("Total Guess Count : %d" , guessCount);
    
    return 0;
}