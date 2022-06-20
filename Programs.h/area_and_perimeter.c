#include <stdio.h>
int main()
{
  float l,b,r;
  float  ar_r,p_r,ar_c,c_c;

  printf("Enter the length of rectangle in meters: " );
  scanf("%f", &l);

  printf("Enter the breadth of rectangle in meters: " );
  scanf("%f", &b);

  printf("Enter the radius of circle in meters: " );
  scanf("%f", &r);

  ar_r=l*b;
  p_r=2*(l+b);
  ar_c= r*r*22/7;
  c_c=2*r*22/7;

  printf("Area of Rectangle=%f m^2\n", ar_r);
  printf("Perimeter of Rectangle=%f m\n", p_r);
  printf("Area of Circle=%f m^2\n", ar_c);
  printf("Circumference of Circle=%f m\n", c_c);

    return 0;
} 