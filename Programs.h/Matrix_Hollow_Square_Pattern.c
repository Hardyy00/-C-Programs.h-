#include <stdio.h>
int main()
{
    int a[100][100],i,j,m,n;
    printf("\nEnter the rows amd columns of the array :\n");
     scanf("%d%d",&m,&n);

     printf("\nEnter the elements :\n");
     for(i=0;i<m;i++)
      for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==m-1 || j==n-1)
                 printf("%3d ",a[i][j]);
            else
               printf("    ");
        }

        printf("\n");
    }

    return 0;
}