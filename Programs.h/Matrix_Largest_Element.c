#include <stdio.h>
int main()
{
    int i,j,a[100][100],max,r,c;
    printf("\nEnter the number of rows and columns respectively:\n");
    scanf("%d%d",&r,&c);

    printf("\nEnter the elements :\n");
      for(i=0;i<r;i++)
      {
          printf("\nEnter the element in %d numbered row :\n",i);
         for(j=0;j<c;j++)
             scanf("%d",&a[i][j]);
      }
    max=a[0][0];
  
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
         if(max<a[i][j])
           max=a[i][j];

    printf("\nLargest element of the matrix = %d",max);

    return 0;
}