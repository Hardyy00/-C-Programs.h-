#include <math.h>
#include <stdio.h>

int main()
{
   float x,y,r,s;
   printf("Enter Co-ordinate x: \n");
   scanf("%f", &x);
   printf("Enter Co-ordinate y: \n");
   scanf("%f", &y);

   r=sqrt(x*x+y*y);
   s=atan(y/x);
   s=s*180/3.14;    //converting radian to degree
    
    printf("Polar co-ordinates are (%f,%f)\n", r,s);

    return 0;
}