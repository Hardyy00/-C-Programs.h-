#include <stdio.h>
#include <math.h>
int main()
{
    float theta,sum;
    printf("\nEnter the angle(in degrees) : ");
    scanf("%f", &theta);

    theta=theta*3.14/180;
    sum=pow(sin(theta),2.0)+pow(cos(theta),2.0);
    
    if(sum==1)
              printf("\nSum of squares of sine and cosine of the angle is equal to 1");
    else
          printf("\nSum of squares of sine and cosine of the angle is not equal to 1");
    
    return 0;
}