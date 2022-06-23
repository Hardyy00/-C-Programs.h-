#include <stdio.h>
int main()
{
    int i=1,a,b,c;
    printf("\nArmstrong numbers between 1 to 500 are :\n");
    while(i<=500)
    {
      c=i%10;
      b=(i/10)%10;
      a=(i/100)%10;
    
    if((a*a*a)+(b*b*b)+(c*c*c)==i)
            printf("\n%d", i);

      i++;
    }

    return 0;
}