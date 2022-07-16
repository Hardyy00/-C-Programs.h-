#include <stdio.h>
int main()
{
   int num,i,j,num1;
   printf("\nEnter any number : ");
   scanf("%d",&num);

   printf("\nPrime factors of %d are :\n",num);
 
   for(i=1;i<=num;i++)
   {
       if(num%i==0)
             {
                 num1=i;
                 for(j=2;j<=num1-1;j++)
                 {
                     if(num1%j==0)
                     break;
                 }
                
                if(j==num1)
                         printf("%d\n",i);
             }
   }

     return 0;
}