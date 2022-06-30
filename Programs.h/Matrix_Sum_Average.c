#include <stdio.h>
int main()
{
    int i,j,m,n,a[100][100];
    float sum=0,av;

    printf("\nEnter the order of the matrix :\n");
    scanf("%d%d",&m,&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            
            sum=sum+a[i][j];
        }

    av=sum/(m*n);
    printf("\nSum of elements = %f\nAverage of all elements = %f",sum,av);
    
     return 0;
}


