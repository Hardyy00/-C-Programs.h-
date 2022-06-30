#include <stdio.h>
int main()
{
    int i,j,a[100][100],m,n,swap;
    printf("\nEnter the order of the matrix :\n");
      scanf("%d%d",&m,&n);

    printf("\nEnter the elements :\n");
     for(i=0;i<m;i++)
       for(j=0;j<n;j++)
       {
           printf("\nEnter the element a[%d][%d] : ",i,j);
           scanf("%d",&a[i][j]);
       }

    for(i=0;i<m;i++)
      for(j=0;j<n-i;j++)
     {
         swap=a[i][j+i];
         a[i][j+i]=a[j+i][i];
          a[j+i][i]=swap;
     }

     printf("\nTranspose of the matrix :\n");
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
          printf("%d ",a[i][j]);

          printf("\n");
      }

      return 0;
        
}