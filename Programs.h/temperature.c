#include <stdio.h>
int main()
{
   float f,c;

   printf("Enter the Temperature in Fahrenheit: ");
   scanf("%f", &f);

   c=(f-32)*5/9;

   printf("Temperature in Celsius=  %f C ", c);

    return 0;
} 