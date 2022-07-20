#include <stdio.h>
int main()
{
    int i,j,r,c;
    printf("\nEnter the number of rows and columns :\n");
    scanf("%d%d",&r,&c);

    for(i=1;i<=r;i++)
    {
        for(j=0;j<=c-1;j++)
        {
           printf("%d ",i+j);
        }
          printf("\n");
    }
       return 0;
}