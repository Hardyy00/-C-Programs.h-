#include <stdio.h>
int main()
{
    int i,fact=1,num,*p=&num;
       printf("\nEnter the number : ");
         scanf("%d",&num);

      for(i=1;i<=*p;i++)
           fact=fact*i;

          printf("\nFactorial of %d = %d",*p,fact);

          return 0;        
}
