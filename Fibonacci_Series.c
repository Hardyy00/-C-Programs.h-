#include <stdio.h>
int main()
{
   int num,t1,t2,sum=0,i=1;
   printf("\nEnter the nth term of Fibonacci series : ");
   scanf("%d",&num);
   printf("\nFibonacci series upto %d term is :\n",num);
   
   t1=0;
   t2=1;
   sum=t1+t2;
   printf("%d , %d ",t1,t2);

   while(i<=num-2)
   {
      printf(", %d ",sum);

      t1=t2;
      t2=sum;

      sum=t1+t2;
       i++;
   }

       return 0;
}