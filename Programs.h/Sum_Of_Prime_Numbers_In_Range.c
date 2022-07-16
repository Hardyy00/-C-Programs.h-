#include <stdio.h>
int main()
{
   int num,i,n,sum=0;
   printf("\nEnter till where you want sum of prime numbers : ");
   scanf("%d",&num);

   for(n=1;n<=num;n++)
   {
       for(i=2;i<=n-1;i++)
       {
           if(n%i==0)
                break;
       }

        if(n==i)
               {
                   sum=sum+n;
               }
   }

         printf("\nSum of prime number between 1 to %d = %d",num,sum);
         return 0;
}