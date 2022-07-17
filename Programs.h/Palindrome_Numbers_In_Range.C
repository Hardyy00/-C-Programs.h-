#include <stdio.h>
int main()
{
   int i,num,num1,rn,num2;
   printf("\nEnter limit : ");
   scanf("%d",&num);

   for(i=1;i<=num;i++)
   {
         rn=0;
         num2=i;

         while(i>0)
         {
             num1=i%10;
             i=i/10;

             rn=rn*10+num1;

         }
              if(rn==num2)
                       printf("%d\n",num2);
            i=num2;
   }
        return 0;
}