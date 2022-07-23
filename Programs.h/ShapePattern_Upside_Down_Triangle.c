#include <stdio.h>
int main()
{
    int i,j,space;

    for(i=1;i<=5;i++)
    {
        for(space=1;space<=i-1;space++)
           printf(" ");

        for(j=1;j<=9-(i-1)*2;j++)
           printf("*");

           printf("\n");
    }
      return 0;
}