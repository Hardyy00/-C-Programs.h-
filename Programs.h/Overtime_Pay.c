#include <stdio.h>
int main()
{
    int hr,i=1,otp;
    while(i<=10)
    {
      printf("\nEnter the total hours an employee worked : ");
      scanf("%d", &hr);
      
      otp=(hr-40)*12;

    if(hr>40)
               printf("\nNumber of hours worked = %d and Overtime pay = Rs.%d", hr, otp);
    else
        {
            otp=0;
            printf("\nNumber of hours worked is equal or less than 40 hrs hence no overtime pay\n");
        }
       i++;
    }
    
    return 0;
}