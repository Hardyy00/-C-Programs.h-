#include <stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=9;i++)
    {
       for(j=1;j<=5;j++)
       {
           if(i==1 || i==5 || i==9)
           {
               if(j==1 || j==5)
                  printf(" ");
               else 
                   printf("*");
           }
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
