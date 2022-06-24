#include <stdio.h>
int power(int,int);
int main()
{
  int a,b,p;
  printf("\nEnter the value of a and b respectively:\n");
  scanf("%d%d",&a,&b);

  p=power(a,b);

  printf("\n%d raised to the power of %d is %d",a,b,p);

   return 0;
}
 
 int power(int a,int b)
 {
    int po=1,i;
    for(i=1;i<=b;i++)
    {
       po=po*a;
    }
       return po;
 }