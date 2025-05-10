//Colm Mooney
//20325583
//Assignment4 - Q2
//Write a program that reads a list of real numbers.
//For each number x in the list, it should check if there is a number y in the list so that x + y = 0. 
//Your program should work with up to 100 numbers.
//E.g, if 0 + 0 = 0 or -7 + 7= 0.

//Now make it so the program reads in the file numbers.txt & it should make 2 files.
// One called inverses.txt which has all the inverses
// One called noninverses.txt which has all the non inverses.
// The program should also display how many numbers are in each file.
//Hint: use fopen, fscanf, fprintf, fclose

      
#include <stdio.h>
#define MAX_NUMBERS 100 //MAX_NUMBERS 
int main(void)
{
    double numbers[MAX_NUMBERS];
    int i,j, n, count, countInverse, countNonInverse, n1, n2, n3;
    FILE *in;
    FILE *Inverse; 
    FILE *NonInverse;
    
 
    //Open file numbers.txt
    in = fopen("numbers.txt", "r");
    if (in == NULL) 
    {
        fprintf(stderr, "Couldn’t open numbers.txt.\n");
        return 1;
    }
    
    //This is the file with all the Inverses
    Inverse = fopen("Inverse.txt", "w");
    if (Inverse == NULL) 
    {
        fprintf(stderr, "Couldn’t open Inverse.txt.\n");
        return 1;
    }
    
    // This is the file with all the NonInverses.
    NonInverse = fopen("NonInverse.txt","w");
    if(NonInverse == NULL)
    {
        fprintf(stderr, "Couldn't open NonInverse.txt.\n");
        return 1;
    }

    
   /*
    * Read in Numbers.txt. We stop when there is a problem
    * or when we run out of space in our array.
    * MAX_NUMBERS = 100, a paramenter of the question.
    *So there can't be more than 100 numbers in numbers.txt.
    */
    for (count = 0; count < MAX_NUMBERS; count++) 
    {
      if (fscanf(in,"%lf", &numbers[count]) != 1)
       break;           
    }
    
    if (count == 0) //If numbers.txt has no numbers, it prints this.
    {
     printf("Need at least one number to work on.\n");
     return 0;
    }
    
    //This part calculates x+y=0
    for(i = 0; i < count; i++)
    {
        for(j = 0; j < count; j++)
        {
          if(numbers[i] + numbers[j] == 0) //If there's an inverse, print it to the Inverse file.
          {
              fprintf(Inverse, "%lf\n", numbers[i]);
              n1++; //This keeps count of amount of inverses
              break; //Breaks loop
          }
        }
        if(j == count) //If there's a nonInverse, print that number to the NonInverse file.
        {
           fprintf(NonInverse, "%lf\n", numbers[i]);
            n2++; //This keeps count of amount of Non Inverses.
        } 
    }
 
    n3 = n2+n1; //Amount of numbers in numbers.txt.
    
    //These if else statements are here so the statements make gramatical sense.
    
    if(n1 == 1 && n2 == 1) //If 1 is inverse and 1 number is Inversed and 1 is NonInversed.
    {
     printf("The numbers.txt file had %d number with inverses and %d number without.\n", n1, n2);
    }
    else if(n1 == 1 && n2 != 1) //If 1 number is inverse but more than 1 NonInversed.
    {
     printf("The numbers.txt file had %d number with inverses and %d numbers without.\n", n1, n2);
    }
    else if(n1 != 1 && n2 == 1) //If more than one inversed but 1 NonInversed.
    {
     printf("The numbers.txt file had %d numbers with inverses and %d number without.\n", n1, n2);
    }
    else //Else more than 1 inversed & noninversed.
    {
     printf("The numbers.txt file had %d numbers with inverses and %d numbers without.\n", n1, n2);
    }
    printf("There are %d numbers in numbers.txt\n", n3);
    //Closes all files.
    fclose(in);   
    fclose(Inverse);
    fclose(NonInverse);
 
    return 0;
 }
