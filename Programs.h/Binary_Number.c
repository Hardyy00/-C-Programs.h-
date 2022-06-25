#include <stdio.h>
#include <math.h>
int main()
{
    int i,num,num1,d;
    unsigned be=0;
    printf("\nEnter any number : ");
    scanf("%d",&num);

    d=num;

   for(i=0;num>0;i++)
    {
        num1=num%2;
        num/=2;
        be = be + (pow(10.0,i)*num1);
    }
   
   num=d;
    printf("\nBinary Equivalent of %d is %d",num,be);

    return 0;
} 