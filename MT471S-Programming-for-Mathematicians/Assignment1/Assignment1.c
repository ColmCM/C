#include <stdio.h>

int main(void)
{
  double s, k,x, t;
  s = 0;
  
    for(k = 2; k < 60000; k++)
    {
      x = 1/((k*k)-1);
       s = s+x;
    }
    printf("%f \n", s);
    
    for(k = 59999; k > 1; k--)
    {
      x = 1/((k*k)-1);
       t = t+x;
    }
   printf("%f \n", t);
   printf("%f \n", s-t);
   printf("%e \n", s-t);
   printf("%g \n", s-t);
  return 0;
}