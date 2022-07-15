#include <stdio.h>
int main()
{
   int num,num1,num2,i,d;
   printf("\nEnter any number : ");
   scanf("%d",&num);
    
   num1=num;
   num2=num;

   for(i=0;i<=9;i++)
   {
      d=0;
      while(1)
      { 
         num1=num%10;
         num=num/10;

         if(num1==i)
                d++;
         else if(num==0)
                break;
      }
        printf("\nFrequency of %d = %d",i,d);
        
        num = num2;
   }
      return 0;
}