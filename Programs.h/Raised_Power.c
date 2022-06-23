#include <stdio.h>
int main()
{
   int i=1;
   float x,y;
   double power=1;

   printf("\nEnter 1st number : ");
   scanf("%f", &x);
   printf("\nEnter 2st number : ");
   scanf("%f", &y);

   while(i<=y)
   {
      power=power*x;
      i++;
   }
        printf("\n%f raised to the power of %f = %f", x, y, power);
    return 0;
}