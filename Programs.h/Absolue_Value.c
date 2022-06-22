#include <stdio.h>
#include <stdlib.h>     //used to avail abs function
int main()
{
  int n,abv;
  printf("\nEnter the number: \n");
  scanf("%d", &n);

  abv=abs(n);
  printf("Absolute value of the number = %d", abv);

  return 0;

}