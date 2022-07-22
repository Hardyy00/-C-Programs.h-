#include <stdio.h>
int main()
{
    int i,j,space;

    for(i=1;i<=5;i++)
    {
        if(i==5)
            for(j=1;j<=9;j++)
               printf("*");
        else
            {
                for(space=1;space<=4;space++)
                    printf(" ");
                
                printf("*");
            }
        printf("\n");
    }
      
    for(i=1;i<=4;i++)
         {
             for(space=1;space<=4;space++)
               printf(" ");

               printf("*");

               printf("\n");
         }
       return 0;
}