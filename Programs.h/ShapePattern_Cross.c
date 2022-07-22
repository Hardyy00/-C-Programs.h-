#include <stdio.h>
int main()
{
    int i,j,space;

    for(i=1;i<=5;i++)
    {
        for(space=1;space<=i-1;space++)
            printf(" ");
        
           printf("*");

        for(space=1;space<=7-(i-1)*2;space++)
           printf(" ");

         if(i==5);
         else
         printf("*");
         
         printf("\n");
    }

    for(i=1;i<=4;i++)
    {
        for(space=1;space<=3-(i-1);space++)
           printf(" ");

           printf("*");

        for(space=1;space<=1+(i-1)*2;space++)
            printf(" ");

        printf("*");

        printf("\n");
    }
       return 0;
}