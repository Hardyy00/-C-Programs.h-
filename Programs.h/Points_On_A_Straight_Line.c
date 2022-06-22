#include <stdio.h>
int main()
{
   float x1,x2,x3,y1,y2,y3;

   printf("\nEnter the co-ordinates of 1st point:\n");
   scanf("%f %f", &x1, &y1);
   printf("\nEnter the co-ordinates of 2nd point:\n");
   scanf("%f %f", &x2, &y2);
   printf("\nEnter the co-ordinates of 3rd point:\n");
   scanf("%f %f", &x3, &y3);

   if((y3-y1)/(y2-y1)==(x3-x1)/(x2-x1))
                                       printf("\nAll three points lie on a straight line");
    else 
        printf("\nAll three points do not lie on a straight line");

    return 0;
}