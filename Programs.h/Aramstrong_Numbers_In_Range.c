#include <stdio.h>
#include <math.h>
int main()
{
  int i,d,num,num1,c;
  float sum=0;
  printf("\nEnter till where you want armstrong numbers : ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
  {
      sum=0;
      d=i;
     
     c=log10(i)+1;

      while(i>0)
      { 
        num1=i%10;
        i=i/10;
        
        sum=sum+pow(num1,c);
      }
         if((int)sum==d)
               printf("%d\n",d);
       i=d; 
  }
      return 0;

}