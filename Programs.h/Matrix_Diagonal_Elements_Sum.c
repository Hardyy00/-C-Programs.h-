#include <stdio.h>
int main()
{
    int i,j,sum=0,a[100][100],m,n;

    printf("\nEnter the order of the matrix :\n");
     scanf("%d%d",&m,&n);

     printf("\nEnter the elements :\n");
     for(i=0;i<m;i++)
       for(j=0;j<n;j++)
        {
            printf("\nEnter the element a[%d][%d] : ",i,j);
             scanf("%d",&a[i][j]);

             if(i==j)
               sum=sum+a[i][j];
        }
      
      printf("\nSum of diagonal elements = %d",sum);
}