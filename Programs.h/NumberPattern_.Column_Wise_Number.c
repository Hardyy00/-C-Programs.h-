#include <stdio.h>
int main()
{
    int i,j,r,c;
    printf("\nEnter the number of rows and columns : ");
    scanf("%d%d",&r,&c);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d ",j);
        }
           printf("\n");
    }
       return 0;
}