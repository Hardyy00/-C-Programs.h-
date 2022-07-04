#include <stdio.h>
int main()
{
    int a[100],i,de,n,p;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter the position of the element(with respect to array),you want to delete : ");
    scanf("%d",&p);

    de=a[p];

    for(i=p;i<n-1;i++)
       a[i]=a[i+1];

    n--;

    printf("\nDeleted element : %d",de);
    printf("\nAfter deletion :\n");
      for(i=0;i<n;i++)
         printf("%d\n",a[i]);

         return 0;
}