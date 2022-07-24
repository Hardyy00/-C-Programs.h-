#include <stdio.h>
int main()
{
    int i,j,space;

    for(i=1;i<=5;i++)
    {
        for(space=1;space<=5-i;space++)
           printf(" ");

        if(i==1 || i==5)
              for(j=1;j<=5;j++)
                 printf("*");
        
        else
           {
               printf("*");

               for(space=1;space<=3;space++)
                  printf(" ");

               printf("*");
           }
        printf("\n");
    }   
       return 0;
}