#include <stdio.h>
int main()
{
    int i,n,a[100],num,p,swap;
    
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter the number and the position at which you want to insert a number:\n");
    scanf("%d%d",&num,&p);

    for(i=n-1;i>=p;i--)
            a[i+1]=a[i];

    a[p]=num;
       
    n++;

    printf("\nAfter insertion :\n");
      for(i=0;i<n;i++)
         printf("%d\n",a[i]);

      return 0;
}