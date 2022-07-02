#include <stdio.h>
int main()
{
    int i,n,a[100];
    printf("\nEnte the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

printf("\nElements are :\n");
       for(i=0;i<n;i++)
      printf("%d\n",a[i]);

      return 0;

}