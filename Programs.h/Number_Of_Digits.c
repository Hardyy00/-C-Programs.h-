#include <stdio.h>
#include <math.h>
int main()
{
  int num;
  printf("\nEnter any number : ");
  scanf("%d",&num);

   int d=log10(num) + 1;
   
     printf("\nNumber of digits = %d",d);
     return 0;

}