#include <stdio.h>
int main()
{
    int i,j,k,space;

    for(i=0;i<=6;i++)
    {
       for(j=65;j<=71-i;j++)
        {
            printf(" %c", j);

        }
        
        for(space=1;space<=i*2-1;space++)
              printf("  ");

        for(k=71-i;k>=65;k--)
         {
               if(k==71);
              else
                 printf(" %c", k);
         }
          
          printf("\n");

    }
    return 0;
}