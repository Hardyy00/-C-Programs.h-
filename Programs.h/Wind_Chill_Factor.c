#include <math.h>
#include <stdio.h>

int main()
{
   float t,v;
   float wcf;

   printf("Enter the temperature: \n");
   scanf("%f", &t);
   printf("Enter the wind velocity: \n");
   scanf("%f", &v);

   v=pow(v,0.16);    
   wcf=35.74+0.6215*t+(0.4275*t-35.75)*v;

   printf("Wind Chill Factor = %f\n", wcf);

    return 0;
}