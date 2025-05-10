#include <stdio.h>

int main(void)
{
  /*Table prints out*/
  
  
   /*if counter is divisable by 4 or 400 years and not 100, it s a leap*/
   int year;
   int days = 365;
   int yeararray[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
   for(year = 1922; year <= 2022;year++)
   {
    if(year % 400 == 0 || year % 4 == 0) //Leap year
    {
     yeararray[1] = 29;
     days = 366;
     printf("%d : %d %d %d %d %d %d %d %d %d %d %d %d Total %d\n", year, yeararray[0], yeararray[1], yeararray[2], yeararray[3], yeararray[4], yeararray[5], yeararray[6], yeararray[7], yeararray[8], yeararray[9], yeararray[10], yeararray[11] , days);
    }
    else if (year % 100 == 0) //Not Leap year
    {
      yeararray[1] = 28;
      days = 365;
     printf("%d : %d %d %d %d %d %d %d %d %d %d %d %d Total %d\n", year, yeararray[0], yeararray[1], yeararray[2], yeararray[3], yeararray[4], yeararray[5], yeararray[6], yeararray[7], yeararray[8], yeararray[9], yeararray[10], yeararray[11] , days);
    }
    else //Not Leap year
    {
      yeararray[1] = 28;
      days = 365;
     printf("%d : %d %d %d %d %d %d %d %d %d %d %d %d Total %d\n", year, yeararray[0], yeararray[1], yeararray[2], yeararray[3], yeararray[4], yeararray[5], yeararray[6], yeararray[7], yeararray[8], yeararray[9], yeararray[10], yeararray[11] , days);
    }
   }
  
  return 0;
}