//Colm Mooney
//20325583
//Assignment3 - Q1

//Write a program that reads a list of real numbers.
//For each number x in the list, it should check if there is a number y in the list so that x + y = 0. 
//Your program should work with up to 100 numbers.

//E.g, if 0 + 0 = 0 or -7 + 7= 0.

      
#include <stdio.h>
#define MAX_NUMBERS 100 //MAX_NUMBERS 
int main(void)
{
    double numbers[MAX_NUMBERS];
    int i,j, count;
   /*
    * First read in some numbers. We stop when there is a problem
    * or when we run out of space in our array.
    */
    for (count = 0; count < MAX_NUMBERS; count++) 
    {
      if (scanf("%lf", &numbers[count]) != 1)
       break;
    }
    
    //If the user doesn't enter a number, says this.
    if (count == 0) 
    {
     printf("Need at least one number to work on.\n");
     return 0;
    }
    
    //This part calculates x+y=0
    for(i = 0; i < count; i++)
    {
        for(j = 0; j < count; j++)
        {
          if(numbers[i] + numbers[j] == 0)
          {
            printf("The matches are: ");
            //printf("%lf\n",numbers[i]);
            printf("%lf\n",numbers[j]);
              break;
          }
        }
    }
    
    return 0;
 }

