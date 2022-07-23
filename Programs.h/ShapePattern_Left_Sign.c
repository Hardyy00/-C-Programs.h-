#include <stdio.h>
int main()
{
    int i,j,space;

    for(i=1;i<=5;i++)
    {
        for(space=1;space<=5-i;space++)
           printf(" ");

        for(j=1;j<=i;j++)
           printf("*");

        printf("\n");
    }
       for(i=1;i<=4;i++)
       {
           for(space=1;space<=i;space++)
             printf(" ");

             for(j=1;j<=5-i;j++)
                printf("*");

            printf("\n");
       }
          return 0;
} 
 