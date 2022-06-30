#include <stdio.h>
int main()
{
    int i,j,m,n,a[100][100],det;

      printf("\nEnter the elements :\n");
       for(i=0;i<3;i++)
         for(j=0;j<3;j++)
           {
               printf("\nEnter the element a[%d][%d] : ",i,j);
                scanf("%d",&a[i][j]);
           }

     det=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2]) - a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]) 
             + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
             

        printf("\nDeterminent of the matrix = %d",det);

        return 0;
}
   