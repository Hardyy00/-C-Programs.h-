#include <stdio.h>
int main()
{
   float l,b,p,ar;
   printf("\nEnter the length of rectangle: ");
   scanf("%f", &l);
   printf("\nEnter the breadth of rectangle: ");
   scanf("%f", &b);

   ar=l*b;
   p=2*(l+b);

   if(ar>p)
          printf("\nArea of rectangle is greater than its preimeter");
    else
        { 
         if(ar==p)
                  printf("\nArea of rectangle is equal to its perimeter");
        else 
            printf("\nArea of rectangle is less than its perimeter");
        }

    return 0;
}