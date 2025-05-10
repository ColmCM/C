//Colm Mooney
//20325583
//Assignment3 - Q3

//You have a list of student IDs that may contain duplicates, as sometimes students registered twice.
//Write a program that reads the list of student numbers and prints out:
//(1) a list of distinct student numbers and (2) how many pizzas you should order. You can
//assume there are less that 300 student IDs on the list.

#include <stdio.h>
#define MAX_NUMBERS 299

int main(void) 
{
    
    int i, j, temp, count,mod, dupecount;
    double numbers[MAX_NUMBERS];
    dupecount = 0;
    
    for(count = 0; count < MAX_NUMBERS; count++)
    {
     if(scanf("%lf", &numbers[count]) != 1)
     break; //Breaks out of the nearest loop.
    }
    
    for(i = 0; i < count; i++)
    { //It's a patch job...but it works..sometimes?
      if(numbers[i] == numbers[i+1] || numbers[i] == numbers[i+2] || numbers[i] == numbers[i+3] || numbers[i] == numbers[i+4] || numbers[i] == numbers[i+5] || numbers[i] == numbers[i+6] || numbers[i] == numbers[i+7] || numbers[i] == numbers[i+8] || numbers[i] == numbers[i+9] || numbers[i] == numbers[i+10])
      {
        printf("Duplicate student numbers: ");
        printf("%lf\n",numbers[i]);
        dupecount++;
      }
    }
    //This simply prints out the student numbers.
    printf("The student numbers are:\n");
    for( i = 0; i < count; i++)
    {
       printf("%lf \n",numbers[i]);
    }
   
    //This mod determines whether or not a pizza is added if there is an odd number of folks entering.
    mod = count % 2;
    if(dupecount/2 == 1) //If there are 3 instances of a number...
    {
     printf("%d Amount of pizzas are needed \n",((count/2)+mod-1));
    }
    else if(dupecount/2 == 0.5) //If there are 2 instances...
    {
     printf("%d Amount of pizzas are needed \n",((count/2)+mod));
    }
    else
    {
    printf("%d Amount of pizzas are needed \n",((count/2)+mod));
    }
    return 0;
}

