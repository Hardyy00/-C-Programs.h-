#include <stdio.h>
int main()
{
    int n,i,swap;
    scanf("%d",&n);
    
    int a[n];
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      
    for(i=0;i<n-i;i++)
    {
        swap=a[i];
        a[i]=a[(n-1)-i];
        a[(n-1)-i]=swap;
    }
    
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
     
     return 0;
    
}
