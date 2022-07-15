#include <stdio.h>
int main()
{
   int num,num1,num2,sum=0;
   printf("\nEnter any number : ");
   scanf("%d",&num);

   num2=num;

   while(num>0)
   {
      num1=num%10;
      num=num/10;

      sum=sum+num1;
   }
       printf("\nThe sum of digits of number %d is %d",num2,sum);

       return 0;


}