//Colm Mooney
//20325583
//Assignment3 - Q2

//The adjacency matrix A of a multigraph has entries aij , where this is the number
//of edges between vertex i and vertex j. Each entry is a whole number. You can
//calculate the number of walks from vertex i to vertex j of length n by finding A^n.
//Write a program that reads the adjacency matrix of a graph with 4 vertices. 
//It should output A^5 and the total number of walks of length 5.

#include <stdio.h>
#define DIM 4
int main(void) 
{
    double a[DIM][DIM];
    double a2[DIM][DIM];
    double a3[DIM][DIM];
    double a4[DIM][DIM];
    double a5[DIM][DIM];
    int i, j ,k, walk;
    walk = 0;
    /*
    * Read in the matrix.
    */
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++) 
        {
            if (scanf("%lf", &a[i][j]) != 1) 
            {
                printf("Couldn’t read element %d, %d\n", i, j);
                return 1;
            }
        }
    }
    //The next few for loops are matrix multiplication
      //A2
    for(i = 0; i < DIM; i++)
    {
        for(j = 0; j < DIM; j++)
        {
          a2[i][j] = 0.0;
          for(k = 0; k < DIM; k++)
          {
              a2[i][j] += a[i][k] * a[k][j];
          }
        }
    } //A3
    for(i = 0; i < DIM; i++)
    {
        for(j = 0; j < DIM; j++)
        {
          a3[i][j] = 0.0;
          for(k = 0; k < DIM; k++)
          {
              a3[i][j] += a2[i][k] * a[k][j]; 
          } 
        }
    }//A4
    for(i = 0; i < DIM; i++)
    {
        for(j = 0; j < DIM; j++)
        {
          a4[i][j] = 0.0;
          for(k = 0; k < DIM; k++)
          {
              a4[i][j] += a3[i][k] * a[k][j]; 
          }  
        }
    }//A5
    for(i = 0; i < DIM; i++)
    {
        for(j = 0; j < DIM; j++)
        {
          a5[i][j] = 0.0;
          for(k = 0; k < DIM; k++)
          {
              a5[i][j] += a4[i][k] * a[k][j];
          }  
            walk += a5[i][j]; //This calculates amount of walks taken
        } 
    }
        
        
                       
    //Print result.
    for(i = 0; i < DIM; i++)
    {
        for(j = 0; j < DIM; j++)
        {
          printf("%lf ", a5[i][j]);
        }
        printf("\n");
    }
    printf("%i\n",walk);
    return 0;
}

