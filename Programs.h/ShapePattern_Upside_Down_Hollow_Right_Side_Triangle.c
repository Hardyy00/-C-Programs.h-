#include <stdio.h>
int main()
{
    int i,j,space;

    for(i=1;i<=5;i++)
    {
       if(i==1)
           for(j=1;j<=5;j++)
              printf("*");

        else 
           {
               for(space=1;space<=i-1;space++)
                 printf(" ");

                printf("*");

                for(space=1;space<=2-(i-2);space++)
                  printf(" ");

                  if(i==5);
                  else 
                     printf("*");
           }
        printf("\n");
    }
       return 0;
}