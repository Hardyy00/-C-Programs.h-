#include <stdio.h>
int main()
{
   int sum=0,i,num;
   printf("\nEnter till where you want sum of numbers : ");
   scanf("%d",&num);

   for(i=1;i<=num;i++)
   {
      sum=sum+i;
   }
   printf("\nSum of natural numbers from 1 to %d is : %d",num,sum);

   return 0;

}