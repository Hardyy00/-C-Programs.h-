#include <stdio.h>
int main()
{
    int i,j,space;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-(i-1);j++)
           printf("*");

        for(space=1;space<=(i-1)*2;space++)
            printf(" ");

       for(j=1;j<=5-(i-1);j++)
           printf("*");

           printf("\n");
    }

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
           printf("*");

        for(space=1;space<=8-(i-1)*2;space++)
           printf(" ");

        for(j=1;j<=i;j++)
           printf("*");

           printf("\n");
    }
       return 0;
}
