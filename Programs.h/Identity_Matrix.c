#include <stdio.h>
int main()
{
    int i,j,m,n,a[100][100],flag=1;

   printf("\nEnter the order m x n of the matrix :\n");
     scanf("%d%d",&m,&n);

    printf("\nEnter the elements :\n");
      for(i=0;i<m;i++)
        for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);

    for(i=0;i<m;i++)
         for(j=0;j<n;j++)
            {
                if( i==j && a[i][i]!=1)
                     {
                         flag=0;
                          break;
                     }

                else if(i!=j && a[i][j]!=0)
                    {
                        flag=0;
                        break;
                    }
                     
                
            }

    if(flag==0)
       printf("\nNo");
    else
       printf("\nYes");

       return 0;
}