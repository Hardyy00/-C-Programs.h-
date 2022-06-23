#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,oct=0,rem,p=0;
    
    printf("\nEnter a number : ");
    scanf("%d", &num1);

    num2=num1;

      while(num1>0)
      {
         rem=num1%8;
         num1=num1/8;
         
        oct=oct+rem*pow(10.0,p);

        p++;
      }
      
       printf("\nOctal equivalent of %d = %d", num2, oct);

    return 0;
}