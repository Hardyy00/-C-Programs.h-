#include <stdio.h>
int main()
{
   int m,n,a[100][100],i,j;

   printf("\nEnter the order of the matrix : \n");
   scanf("%d%d",&m,&n);

   printf("\nEnter the elements :\n");
   for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      {
         
           scanf("%d",&a[i][j]);
      }


     printf("\nMatrix is :\n");
       for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
                printf("%d ",a[i][j]);

                printf("\n");
         }
     return 0;
}