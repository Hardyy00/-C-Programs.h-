#include <stdio.h>
int main()
{
    int a[100][100],i,j,r,c,f;
    
    printf("\nEnter the number of rows and columns of the matrix respectively :\n");
    scanf("%d%d",&r,&c);

    printf("\nEnter the element :\n");
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        {
            printf("\nEnter the element a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }

    for(i=0;i<r;i++)
       for(j=0;j<c;j++)
         { 
             if(a[i][j]!=a[j][i])
                     {
                         f=1;
                         break;
                     }           
         }

    if(f==1)
       printf("\nIts not a symmetric matrix");
    else
         printf("\nIts a symmetric matrix");

         return 0;
}