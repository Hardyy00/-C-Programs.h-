#include <stdio.h>
int main()
{
   int i,num;
   printf("\nEnter from where you want natural numbers in reverse order: ");
   scanf("%d",&num);
     
   i=num;
    
   printf("\nNatural numbers from %d to 1 are :\n",num);

   while(i>0)
   {
        printf("\n%d",i);
        i--;
   }
          return 0;
}