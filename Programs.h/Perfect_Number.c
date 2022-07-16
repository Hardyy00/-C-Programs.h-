#include <stdio.h>
int main()
{
   int num,i,sum=0;
   printf("\nEnter any number : ");
   scanf("%d",&num);
   
   for(i=1;i<=num-1;i++)
   {
      if(num%i==0)
               sum=sum+i;
   }

      if(sum==num)
             printf("\n%d is a Perfect number",num);
      else  
          printf("\n%d is not a perfect number",num);
        
    return 0;

}