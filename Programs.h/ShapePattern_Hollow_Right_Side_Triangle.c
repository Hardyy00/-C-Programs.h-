#include <stdio.h>
int main()
{
    int i,j,space;

    for(i=1;i<=5;i++)
    {
        if(i==5)
             for(j=1;j<=5;j++)
               printf("*");

        else
           {
               for(space=1;space<=5-i;space++)
                  printf(" ");

                printf("*");

                if(i==1);
                else
                {
                    for(space=1;space<=i-2;space++)
                            printf(" ");

                    printf("*");    
                }
            }

        printf("\n");
    }
        return 0;
}