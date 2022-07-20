#include <stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==5 || j==5 || (i==3 && j==4) || (i==4 && (j==3 || j==4)) )
               printf("5");
            
            else if(j==1)
                 printf("%d",i);

            else if(j==2)
                  printf("%d",i+1);
            
            else if(j==3)
                   printf("%d",i+2);

            else if(j==4)
                  printf("%d",i+3);        
        }
          printf("\n");
    }
       return 0;
}