//Colm Mooney
//20325583
//Assignment4 - Q1

// Write a program to calculate: 0Zr(sin(αx)/x)dx ...using Simpsons rule.

//The program should read r and α from the user and
//then choose the number of steps by making sure that the step size, h, satisfies
//h ≤ 0.001/α.
//Hint 1: You can get sin(x) using the function sin(x) from math.h.
//Hint 2: Be careful at x = 0!
//dx tells you which variable you're integrating with respect to.

#include <math.h> //This is a must have!!!
#include <stdio.h>

double f(double x, double alpha); //This is our sin function

int main(void) {
    
    int i , steps;
    double a, h, x, r;
    double simp, alpha;
    
    //Asks the user for the value of r
    printf("Please enter a value for r: ");
    if(scanf("%lf",&r) != 1) 
    { 
        //If user enters something not a number:
        printf("Couldn't read a number\n");
        return 1;
    }
    if(r <= 0)
    { 
        //This ensures r is Zero or more.
        printf("r must be bigger than 0!\n");
        return 1;
    }
    
    //Asks the user for the value of alpha
    //Alpha follows the same ruleset as r. Must be a positive number.
    printf("Please enter a value for alpha: ");
    if(scanf("%lf",&alpha) != 1) 
    { 
       printf("Couldn't read a number\n");
        return 1;
    }
    if(alpha <= 0)
    { 
        printf( "alpha must be a positve number!\n");
        return 1 ;
    }


    //Limits and step size for our integration.
    a = 0;
    r = r; //user inputted value of r, just here to help keep track of code.
    steps = ceil(0.001/alpha); //satifies h < 0.001/alpha
    h = (r- a)/steps;
 
    
    
    //Simpson's rule. Note, steps should be even.
    simp = - f(a, alpha);
    x = a;
    for(i = 0; i < steps; i+= 2) 
    {
        simp += 2.0*f(x,alpha)+4.0*f(x+h, alpha);
        x += 2*h;
    }
    simp += f(r, alpha);
    simp *= h/3.0;
    
   //This prints the values from Simpson's rule.
    printf("simp = %lf\n", simp);
    return 0;
    
}
double f(double x, double alpha) 
{ //This is the function that calculates Simpsons rule
    if(x == 0)    
    { 
        //If x is 0, we return alpha
        return alpha; //Return alpha (α)
    }
    //Otherwise we return the function below.
    return sin(x * alpha)/x;
}
