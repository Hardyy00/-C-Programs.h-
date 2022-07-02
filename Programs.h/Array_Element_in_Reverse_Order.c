#include <stdio.h>
int main()
{
    int i,n,a[100];
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

    printf("\nElements in reverse order :\n");
     for(i=n-1;i>=0;i--)
       printf("%d\n",a[i]);

       return 0;
}