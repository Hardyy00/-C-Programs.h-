#include <stdio.h>
int main()
{
    int max,i,a[100],n;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

    max=a[0];
    
    for(i=0;i<n;i++)
       if(max<a[i])
         max=a[i];

      printf("\nLargest element = %d",max);

      return 0;
}