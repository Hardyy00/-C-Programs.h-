#include <stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2,a[100][100],b[100][100],m[100][100]={0};

    printf("\nEnter the order of the matrix 1 :\n");
      scanf("%d%d",&r1,&c1);
    printf("\nEnter the order of the matrix 2 :\n");
      scanf("%d%d",&r2,&c2);

    if(c1!=r2)
        printf("\nMultiplication is not possible.");
    else
    {
       printf("\nEnter the elements of matrix 1:\n");
          for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
        {
            printf("\nEnter the element a[%d][%d] : ",i,j);
              scanf("%d",&a[i][j]);
        }

        printf("\nEnter the elements of matrix 2 :\n");
         for(i=0;i<r2;i++)
          for(j=0;j<c2;j++)
          {
              printf("\nEnter the element b[%d][%d] : ",i,j);
               scanf("%d",&b[i][j]);
          }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
             {
                 for(k=0;k<c1;k++)
                  m[i][j]+=a[i][k]*b[k][j];
   
             }
        }

        printf("\nA x B :\n");
         for(i=0;i<r1;i++)
         {
           for(j=0;j<c2;j++)
             printf("%3d ",m[i][j]);

             printf("\n");
         }
             
         
  }

    return 0;
}