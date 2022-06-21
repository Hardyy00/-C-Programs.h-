#include <math.h>
#include <stdio.h>

int main()
{
  float a,b,c,s;
  double area;

  printf("Enter the sides of a Triangle in m: \n");
  scanf("%f %f %f", &a, &b, &c);

  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));

printf("Area of triangle = %f \n", area);

return 0;
}
