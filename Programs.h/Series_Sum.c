#include <stdio.h>
int main()
{
    int i=1,num;
    float sum=0.0,fact;

    for(num=1;num<=7;num++)
    {
        fact=1.0;

       for(i=1;i<=num;i++)
       {
           fact=fact*i;
       }

      sum=sum+(num/fact);

    }

    printf("\nAddition of first seven terms = %f", sum);

    return 0;
}