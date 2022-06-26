#include <stdio.h>
int main()
{
    int a[100][100],i,j,k,b[100][100],m[100][100]={0};
    int r1,r2,c1,c2;

    printf("\nEnter the order of matrix A :\n");
    scanf("%d%d",&r1,&c1);
     printf("\nEnter the order of matrix B :\n");
     scanf("%d%d",&r2,&c2);

     if(c1!=r2)
           printf("\nMultiplication cannot be applied");
    else
       {
           printf("\nEnter the elements of matrix A :\n");
            for(i=0;i<r1;i++)
              for(j=0;j<c1;j++)
                {
                    printf("\nEnter the element a[%d][%d] : ",i,j);
                     scanf("%d",&a[i][j]);
                }
            
            printf("\nEnter the elements of matrix B :\n");
              for(i=0;i<r2;i++)
                for(j=0;j<c2;j++)
                  {
                      printf("\nEnter the element b[%d][%d] : ",i,j);
                       scanf("%d",&b[i][j]);
                  }
           for(i=0;i<r1;i++) 
                 for(j=0;j<c2;j++)
                { 
                    for(k=0;k<r1;k++)
                    m[i][j]+=(a[i][k]*b[k][j]);  
                }
                   

            printf("\nA X B :\n");
            for(i=0;i<r1;i++)
              {
                  for(j=0;j<c2;j++)
                    printf("%d ",m[i][j]);

                    printf("\n");
              }
       }
          return 0;
}