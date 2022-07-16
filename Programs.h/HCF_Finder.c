#include <stdio.h>
int main()
{
   int a,b,min,hcf,i;
   printf("\nEnter any two number :\n");
   scanf("%d%d",&a,&b);

   min=a<b?a:b;

   for(i=1;i<=min;i++)
   {
      if(a%i==0 && b%i==0)
              hcf=i;
   }   
       printf("\nHCF of number %d and %d is %d",a,b,hcf);

       return 0;

}