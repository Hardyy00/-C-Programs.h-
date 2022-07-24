#include <stdio.h>
int main()
{
    int i,j,space;

    for(i=1;i<=5;i++)
    {
        for(space=1;space<=i-1;space++)
           printf(" ");

            for(j=1;j<=5;j++)
            {
                if(i==1 || i==5)
                   printf("*");
                else
                    {
                        if(j==1 || j==5)
                           printf("*");
                        else
                            printf(" ");
                    }
            }
        printf("\n");
    }
      return 0;
}