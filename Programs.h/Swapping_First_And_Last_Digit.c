#include <stdio.h>
#include <math.h>
int main()
{
   int num,a,b,d,sn;
   printf("\nEnter any number : ");
   scanf("%d",&num);

   b=num%10;

   d=log10(num);
   
   a=num/pow(10,d);

     sn = b;
     sn *= pow(10,d);
     sn += num%(int)pow(10,d);
     sn /=10;
     sn *= 10;
     sn += a;

     printf("\nOriginal number = %d\nAfter swaping first and last digit the becomes %d",num,sn);

      return 0;
}