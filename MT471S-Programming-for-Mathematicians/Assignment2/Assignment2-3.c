#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int C(int n, int k);

int main(void)
{
    int number1 = 0;
    int number2 = 0;
    
    printf("Please enter a value for n & k: \n");
    
    if(scanf("%d", &number1 == 0)
     {
       printf("0\n")
     }
    if(number1 == 1)
     {
        printf(number2);
     }
     else
     {
       printf(C);
     }
}
int C(int n, int k)
{
   if(n < 0 || k < 0 || k > n)
    {
        return 0;
    }
    else if(k == 0)
    {
        return 1;
    }
    else if(k == 1)
    {
        return n;
    }
    else
    {
      return C(n,k-1) + C(n-1,k);
    }
}