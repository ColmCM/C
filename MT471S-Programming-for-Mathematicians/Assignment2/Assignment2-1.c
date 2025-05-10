#include <stdio.h>
#include <math.h>

//Write a program using brackets & bisection to find a root of f(x) = 0 to 5 decimal places.
//I can get e^x using exp(x)

double f(double x);
int main(void)
{
    
    double neg_end, pos_end, middle;
    double value;
    
    
    while(fabs(pos_end-neg_end) > 0.000001)
    {
    value = f(middle);
    if(value >= 0.0)
    {
       pos_end = middle;
    }
    if(value <= 0.0)
    {
       neg_end = middle;
    }
    }
    printf("Answer: %f\n", (neg_end+pos_end)/2.0);
        return 0;
 //x = -.42?
    
}

double f(double x)
{
    int A,B,C,D;
    A = 2;
    B = 0;
    C = 3;
    D = 2;
   return (((x + A + C) * exp(x)) - (D + B + 1));
}