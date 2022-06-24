#include <stdio.h>
#include <math.h>
void series(float ,float *);
int main()
{
    float sum=0,x;
    printf("\nEnter the value of x : ");
    scanf("%f",&x);

    series(x,&sum);

    printf("\nsin(%0.3f) = %f",x,sum);

    return 0;
}

void series(float x,float *sum)
{
    int i,fact,j;
    for(i=1;i<=10;i++)
    {
        fact=1;
       for(j=1;j<=2*i-1;j++)
          fact=fact*j;
        
        *sum=*sum + (pow(-1,i+1)*pow(x,2*i-1))/fact;
    }
}