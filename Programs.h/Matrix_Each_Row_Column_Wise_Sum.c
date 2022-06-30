#include <stdio.h>
int main()
{
    int a[100][100],i,j,m,n,sum;
    
    printf("\nEnter the rows and columns of the array :\n");
    scanf("%d%d",&m,&n);

    printf("\nEnter the elements :\n");
     for(i=0;i<m;i++)
      for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
           
    for(i=0;i<m;i++)
     {
         sum=0;
         for(j=0;j<n;j++)
          sum=sum+a[i][j];

          printf("\nSum of elements of row no. %d = %d",i+1,sum);
     }

    for(i=0;i<n;i++)
      {
           sum=0;

          for(j=0;j<m;j++)
            sum=sum+a[j][i];

          printf("\nSum of elements of column no. %d = %d",i+1,sum);
      }
         return 0;    
}