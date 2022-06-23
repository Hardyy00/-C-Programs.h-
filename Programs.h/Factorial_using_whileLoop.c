#include <stdio.h>
int main()
{
  int num,i=1;
  unsigned long int fact=1;
  
  printf("\nEnter a number(less than 33) : ");
  scanf("%d", &num);
  
  while(i<=num)
  {
    fact=fact*i;
    i++;
  }
    printf("\nFactorial of %d = %lu", num, fact);
  
  return 0;
}