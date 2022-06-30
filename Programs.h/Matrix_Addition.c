#include <stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j,m,n;

    printf("\nEnter the order of the matrices :\n");
     scanf("%d%d",&m,&n);

     printf("\nEnter the elements of matrix 1 :\n");
      for(i=0;i<m;i++)
       for(j=0;j<n;j++)
         {
             printf("\nEnter the element a[%d][%d] : ",i,j);
              scanf("%d",&a[i][j]);
         }

    printf("\nEnter the elements of matrix 2 :\n");
     for(i=0;i<m;i++)
      for(j=0;j<n;j++)
       {
           printf("\nEnter the element b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);

            a[i][j]=a[i][j]+b[i][j];
       }

    printf("\nAfter addition :\n");
      for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
             printf("%d ",a[i][j]);

             printf("\n");
       }

       return 0;
}