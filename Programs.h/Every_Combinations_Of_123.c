#include <stdio.h>
int main()
{
   int num,a,b,c;
   printf("\nEvery Combination of 1,2 and 3 are :\n");

   for(a=1;a<=3;a++)
   {
      for(b=1;b<=3;b++)
      {
        for(c=1;c<=3;c++)
        { 
          num=a*100+b*10+c;
          printf("%d\n", num);
        }
      }
   }
    return 0;
} 