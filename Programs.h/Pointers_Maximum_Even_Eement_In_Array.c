#include <stdio.h>
int main()
{
    int a[100],(*p)[100]=&a,i,max,n;

    printf("\nEnter the size of the array : ");
     scanf("%d",&n);

    printf("\nEnter the elements :\n");
      for(i=0;i<n;i++)
        scanf("%d",p[i]);

    max=*p[0];
    for(i=0;i<n;i++)
      if(max<*p[i] && *p[i]%2==0)
         max=*p[i];

        printf("\nMaximum even element in the array is %d",max);

        return 0;
}