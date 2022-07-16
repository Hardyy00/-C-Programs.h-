#include <stdio.h>
int main()
{
   int num,i,n;
   printf("\nEnter till where you want prime numbers : ");
   scanf("%d",&num);

   printf("\nPrime numbers between 1 to %d are :\n",num);
   
   for(n=1;n<=num;n++)
   {
      for(i=2;i<=n-1;i++)
      {
         if(n%i==0)
               break;
      } 
       
       if(n==i)
              printf("%d\n",n);

   }

     return 0;
}