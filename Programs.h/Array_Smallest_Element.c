#include <stdio.h>
int main()
{
    int i,min,a[100],n;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);

    min=a[0];
    for(i=0;i<n;i++)
       if(min>a[i])
           min=a[i];
    

    printf("\nSmallest Element = %d",min);

    return 0;
}