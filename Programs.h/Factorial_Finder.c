#include <stdio.h>
int main()
{
   int fact=1,i,num;
   printf("\nEnter the number you want factorial of : ");
   scanf("%d",&num);

   for(i=1;i<=num;i++)
   {
      fact=fact*i;
   }
     
     printf("\nFactorial of %d is %d",num,fact);

     return 0;

}