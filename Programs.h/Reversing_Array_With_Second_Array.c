#include <stdio.h>
int main()
{
    int n,i,a[100],b[100];
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
     
    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    
     for(i=n-1;i>=0;i--)
        b[i]=a[(n-1)-i];

    printf("\nElements of the second array are :\n");
      for(i=0;i<n;i++)
         printf("%d\n",b[i]);
         
    return 0;
}

