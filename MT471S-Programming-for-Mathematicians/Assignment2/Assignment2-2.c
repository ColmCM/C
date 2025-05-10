//This is a program that's asks for a user input to try get X amount of Heads or Tails in a row.
//If Tails X amount of times, Bob wins, if heads X amount of times, Alice wins
//Colm Mooney
//20325583
//Assignment 2-2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int count1 = 0; //Tails.
    int count2 = 0; //Heads.
    int guess = 0;
    int tries = 0;
    //in this case, Guess is used to ask how many T's or H's person want in a sequence.
    srand(time(NULL));
    
    printf("Please enter how much a player must lead by to win: ");
    if (scanf("%d", &guess) != 1) //if it isn't a number, enter one.
    {
       printf("That wasn't a number!\n");
       return 1;
    }
    
    for(tries = 0; ; tries++)
    {   
        int number = (rand()%100) + 1;
        
        
        
        if(guess <= 0) //If number is 0 or negative, do it again
        {
         printf("Please enter a positive number!\n");
         return 1;
        }
        if(number <= 50) //If the RNG is between 0 and 50, it's Tails.
        {
         printf("T");
         count1++;
         count2 = 0; //Count for Heads resets if it lands on Tails.
        }
        else //If the RNG is between 50 & 100, it's Heads.
        {
         printf("H");
         count2++;
         count1 = 0; //The count for Tails resets if it lands on Heads.
        }
        if(count1 == guess)
        {
            printf("\nBob wins in %d coin tosses\n", tries);
            return 0;
        }
        if(count2 == guess)
        {
            printf("\nAlice wins in %d coin tosses\n", tries);
            return 0;
        }
    }
}
       