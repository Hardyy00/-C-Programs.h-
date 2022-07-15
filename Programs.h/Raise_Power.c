#include <stdio.h>
int main()
{
    int i,num=1,x,y;
    printf("\nEnter the value of Base and Exponent respectively :\n");
    scanf("%d%d",&x,&y);

    for(i=1;i<=y;i++)
    {
        num=num*x;
    }
       printf("%d to the power of %d is %d",x,y,num);
            return 0;
       }