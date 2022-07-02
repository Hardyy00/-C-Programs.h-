#include <stdio.h>
int main()
{
    int i,j,m,n,a[100][100];

    printf("\nEnter the order of the matrix :\n");
     scanf("%d%d",&m,&n);

    printf("\nEnter the elements :\n");
     for(i=0;i<m;i++)
      for(j=0;j<n;j++)
          {
              printf("\nEnter the element a[%d][%d] : ",i,j);
                scanf("%d",&a[i][j]);
          }

    printf("\nMatrix in zig-zag order :\n");
     for(i=0;i<m;i++)
       {
           if(i%2==0)
             {
                 for(j=0;j<n;j++)
                   printf("%d ",a[i][j]);
             }
            else
               {
                   for(j=n-1;j>=0;j--)
                     printf("%d ",a[i][j]);
               }

               printf("\n");
       }

         return 0;
 }