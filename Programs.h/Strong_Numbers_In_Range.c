#include <stdio.h>
int main()
{
    int i,j,num,num1,num2,fact,sum;
    
    printf("\nEnter till where you want strong numbers : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        num2=i;
        sum=0;
       
        while(i>0)
        {
           num1=i%10;
           i=i/10;
           fact=1;

           for(j=1;j<=num1;j++)
           {
               fact=fact*j;
           }
              sum=sum+fact;    
        }
            if(sum==num2)
                       printf("\n%d",num2);
            i=num2;
    }
        return 0;
}