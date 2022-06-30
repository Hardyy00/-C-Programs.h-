#include <stdio.h>
int main()
{
    int i,j,m,n,a[100][100],z=0,d=0;

    printf("\nEnter the order of the matrix :\n");
      scanf("%d%d",&m,&n);

    printf("\nEnter the elements :\n");
     for(i=0;i<m;i++)
      for(j=0;j<n;j++)
        {
            printf("\nEnter the element a[%d][%d] : ",i,j);
             scanf("%d",&a[i][j]);

             if(a[i][j]==0)
               z++;
            else 
                d++;
        }

    if(z>d)
        printf("\nIts a spare matrix");
    else 
       printf("\nIts a dense matrix");

       return 0;
}