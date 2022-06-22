#include <stdio.h>
#include <math.h>
int main()
{
  float x,y,a,dis,d;
  printf("\nEnter the x and y co-ordinates of the point:\n");
  scanf("%f %f", &x, &y);
  printf("\nEnter the radius of the circle: ");
  scanf("%f", &a);

  dis=pow(x,2.0)+pow(y,2.0);
  d=pow(a,2.0);

   if(dis>d)
             printf("\nThe point lies outside the circle\n");
    else 
        {
            if(dis==d)
                                                printf("\nThe point lies on the circle\n");
            else
                printf("\nThe point lies inside the circle\n");                               
        }

    return 0;
}