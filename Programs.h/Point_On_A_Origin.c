#include <stdio.h>
int main()
{
  float x,y;
  printf("\nEnter the x and y co-ordinates of the point:\n");
  scanf("%f %f", &x, &y);

  if(x!=0 && y==0)
                 printf("\nThe point lies on the x-axis\n");
  else  
      {
        if(x==0 && y!=0)
                       printf("\nThe point lies on the y-axis\n");
        else
            {
              if(x==0 && y==0)
                             printf("\nThe point lies on the origin\n");
              else
                  printf("\nThe point lies neither on any axis nor on the origin\n");
            }
      }

    return 0;
}