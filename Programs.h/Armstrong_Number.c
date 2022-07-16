#include <stdio.h>
#include <math.h>
int main()
{
   int num,num1,d,c;
   int sum=0;
   printf("\nEnter any number : ");
   scanf("%d",&num);

   d=num;
   c=log10(num) + 1;
   
   while(num>0)
   {
      num1=num%10;
      num=num/10;

      sum=sum+pow(num1,c);
   } 
      if(d==sum)
              printf("\n%d is a Armstrong number",d);
      else
         printf("\n%d is not a Armstrong number",d);
        return 0;
}