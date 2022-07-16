#include <stdio.h>
int main()
{
   int num,i;
   printf("\nEnter any number : ");
   scanf("%d",&num);

   for(i=2;i<=num-1;i++)
   {
       if(num%i==0)
                {
                    printf("\nIts not a prime number");
                    break;
                }
   }
    
       if(num==i)
               printf("\nIts a prime number");

       return 0;

}