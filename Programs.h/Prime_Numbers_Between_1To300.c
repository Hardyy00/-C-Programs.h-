#include <stdio.h>
int main()
{
    int i=2,n;
    printf("\nPrime numbers from 1 to 300 are :\n");
    while(i<=300)
    {
      n=2;
      while(n<i)
      {
        if(i%n==0)
                  break;
        else
            n++;          
      }
        if(i==n)
               printf("%d\n", i);
        i++;
    }
    return 0;
}