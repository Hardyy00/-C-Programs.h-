#include <stdio.h>
#include <math.h>
int main()
{
   int num,a,b,d;
   printf("\nEnter any number : ");
   scanf("%d",&num);

   b=num%10;
   
   d=log10(num);
   
     a=num/pow(10,d);

     printf("\nFirst Digit = %d and Last digit = %d",a,b);

     return 0;

}