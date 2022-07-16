#include <stdio.h>
int main()
{
   int i,fact,num,num1,sum=0,num2;
   printf("\nEnter any number : ");
   scanf("%d",&num);
    
   num2=num;

   while(num>0)
   {
      num1=num%10;
      num=num/10;
       fact=1;

      for(i=1;i<=num1;i++)
      {
          fact=fact*i;
      }

        sum=sum+fact;
   }
        
        if(sum==num2)
               printf("\n%d is a Strong number",num2);
        else
            printf("\n%d is not a Strong number",num2);

     return 0;
}