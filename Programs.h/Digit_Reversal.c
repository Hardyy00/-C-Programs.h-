#include <stdio.h>
int main()
{
   int num,num1,d,rn=0;
   printf("\nEnter any number : ");
   scanf("%d",&num1);
    d=num1;
  
  while(num1>0)
  {
     num=num1%10;
     num1=num1/10;
     rn=rn*10+num;
  }
   
       printf("\nOriginal number = %d\nAfter reversal of digits it becomes %d",d,rn);
       return 0;
}