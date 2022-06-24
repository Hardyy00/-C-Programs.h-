#include <stdio.h>
int factorial(int);
int main()
{
   int x,f;
   printf("\nEnter the number you want factorial of : ");
   scanf("%d",&x);

   f=factorial(x);

   printf("\nFactorial of %d is %d",x,f);

   return 0;
}

int factorial(int x)
{
   int fact=1,i;
   for(i=1;i<=x;i++)
   {
      fact=fact*i;
   }
      return fact;
}