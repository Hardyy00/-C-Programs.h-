#include <stdio.h>
int main()
{
    int i,a[100],b[100]={0},num,n,max;
    printf("\nEnter the size of the array : ");
      scanf("%d",&n);

    printf("\nEnter the elements :\n");
     for(i=0;i<n;i++)
      scanf("%d",&a[i]);

      printf("\nEnter the element you want to find frequency of :\n");
      scanf("%d",&num);

    max=a[0];
    for(i=0;i<n;i++)
      if(max<a[i])
         max=a[i];

    max++;

    for(i=0;i<n;i++)
      b[a[i]]++;

    if(b[num]>0)
         printf("\nFrequency of %d = %d",num,b[num]);
    else
          printf("\nThe element doesn't exist in the array");       
    
    return 0;
    
}