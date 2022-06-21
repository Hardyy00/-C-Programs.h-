#include <math.h>
#include <stdio.h>
int main()
{
  float g1,g2,l1,l2;
  float D;
  
  printf("Enter the Latitude and Longitude of Place 1: \n");
  scanf("%f %f", &l1,&g1);
  printf("Enter the Latitude and Longitude of Place 2: \n");
  scanf("%f %f", &l2,&g2);

  l1=l1*3.14/180;
  l2=l2*3.14/180;
  g1=g1*3.14/180;
  g2=g2*3.14/180;

  D=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));

  printf("Distance between the two places = %f miles \n",D);

    return 0;
}