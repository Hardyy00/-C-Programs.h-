#include <stdio.h>
int main()
{
   float distance;

   printf("Enter the distance between cities in km:\n");
   scanf("%f", &distance);


   printf("Distance between cities in meters=%f m\n", distance*1000);
   printf("Distance between cities in centimeters=%f cm\n", distance*100000);
   printf("Distance between cities in feets=%f ft\n", distance*3281);
   printf("Distance between cities in inches=%f inch\n", distance*39370);
  
    return 0;
}