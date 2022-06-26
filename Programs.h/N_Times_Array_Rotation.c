#include <stdio.h>
int main()
{
    int i,r,j,a[100],n,swap;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

    printf("\nEnter the number of positions by which you want to left rotate an array : ");
    scanf("%d",&r);

    for(i=0;i<r;i++)
    {
        swap=a[0];
        for(j=0;j<n-1;j++)
           a[j]=a[j+1];

        a[n-1]=swap;
    }

    printf("\nElements are :\n");
     for(i=0;i<n;i++)
        printf("%d ",a[i]);

        return 0;
}