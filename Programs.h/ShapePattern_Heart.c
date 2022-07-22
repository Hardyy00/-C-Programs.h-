#include <stdio.h>
int main()
{
    int i,j,k,space;
    
    for(i=1;i<=3;i++)
     {
         for(space=1;space<=3-i;space++)
               printf(" ");
         
         for(j=1;j<=5+(i-1)*2;j++)
                    printf("*");
        
          for(space=1;space<=5-(i-1)*2;space++)
                    printf(" ");
        
          for(j=1;j<=5+(i-1)*2;j++)
                      printf("*");
            printf("\n");
          }

        for(i=1;i<=10;i++)
        {
             for(space=1;space<=i-1;space++)
                   printf(" ");
             for(j=1;j<=19-(i-1)*2;j++)
                  printf("*");

            printf("\n");
           
        }
          return 0;
}