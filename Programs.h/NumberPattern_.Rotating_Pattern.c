#include <stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1)
                printf("%d",j);
            else if(i==5)
                printf("%d",i-(j-1));
            else if(j==1)
                printf("%d",i);
           else if(j==2)
                printf("%d",i-1);
            else if(i==4 && j==3)
                printf("2");
            else 
                printf("%d",j-(i-1));
        }
          printf("\n");
    }
      return 0;
}