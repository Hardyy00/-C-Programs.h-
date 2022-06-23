#include <stdio.h>
int main()
{
    int year=0,invest,alternate;
 
      do   
    {
         year++;
      
       // 9 percent of annum = 9% of 1000 = 9*1000/100 = 90
       alternate=year*90;

       //invest=1000*year-6000+2000
       invest=(1000*year)-4000;

    } while(alternate>invest);
    
    printf("\nMinimum life of machine is %d years", year);

    return 0;
}