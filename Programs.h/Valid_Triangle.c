#include <stdio.h>
int main()
{
  float a,b,c,sa;
  printf("\nEnter the three angles of the triangle\n");
  scanf("%f %f %f", &a, &b, &c);

  sa=a+b+c;
  
  if(sa==180)
            printf("\nIt is a valid triangle\n");
  else
      printf("\nIt is an invalid triangle\n");

    return 0;
}