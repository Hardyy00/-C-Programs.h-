#include <stdio.h>
int main()

{
  
  int num,i;
  
  printf("\nEnter the number you want multiplication of : ");
  scanf("%d", &num);
  
  printf("\nMultiplication of %d is as follows :\n", num);
  
  for(i=1;i<=10;i++)
  {
     printf("%d * %d = %d\n", num, i, num*i);
  }
  
  return 0;
}