#include <stdio.h>
int main()
{
   int num,i,j,sum,num1;
   printf("\nEnter till where you want perfect numbers : ");
   scanf("%d",&num);

   for(i=1;i<=num;i++)
   {
      sum=0;
      num1=i;
      for(j=1;j<=i-1;j++)
      {
         if(i%j==0)
               sum=sum+j;
      }
       if(sum==i)
              printf("\n%d is a Perfect number",i);
   }
      return 0;
}