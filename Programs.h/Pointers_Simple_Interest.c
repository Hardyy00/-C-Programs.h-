#include <stdio.h>
int main()
{
    float si,p,n,r;
    float *po=&si;

    printf("\nEnter the values of p,n and r respectively :\n");
      scanf("%f%f%f",&p,&n,&r);

      *po=p*n*r/100;

     printf("\nSimple Interest = %f",si);

     return 0;


}