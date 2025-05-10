#include <stdio.h>

int main(void)
{
  double s, k,x, t, q,y,r;
  double A = 1;
  double B = 2;
  
   /* 0K + 1 = A(k-1) + B(K+1)
      0k + 1 = Ak-A+BK+B
           1 = B-A
           B = 2, A = 1
           */
    for(k = 2; k < 60000; k++)
    {
        x = A/(k-1);
        y = B/(k+1);
        q = x+y;
    }
    printf("%f \n",q);
    for(k = 59999; k > 1; k--)
    {
        x = A/(k-1);
        y = B/(k+1);
        r = x+y;
    }
    printf("%f \n",r);
    
  return 0;
}