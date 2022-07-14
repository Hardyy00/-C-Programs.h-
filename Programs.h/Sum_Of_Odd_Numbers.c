#include <stdio.h>
int main()
{
   int i,num,sum=0;
   printf("\nEnter till where you want sum of odd numbers : ");
   scanf("%d",&num);

   for(i=1;i<=num;i++)
   {
       if(i%2!=0)
              sum=sum+i;
   }
     
     printf("\nSum of odd number from 1 to %d is %d",num,sum);

     return 0;

}