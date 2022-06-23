#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float n,q,r,p,a;
    
    for(i=1;i<=10;i++)
    {
      printf("\nEnter the principal amount : ");
      scanf("%f", &p);
      
      printf("\nEnter the compound interest : ");
      scanf("%f", &q);
     
      printf("\nEnter the rate of interest : ");
      scanf("%f", &r);
     
      printf("\nEnter the no. of years : ");
      scanf("%f", &n);
      
       a=p*pow((1+(r/q)),(n*q));

       printf("\nAmount = %f", a);
    }
    return 0;
}