#include <stdio.h>
int main()
{
    int i,a[100],p,n,num;
    printf("\nEnter the size of the array : ");
     scanf("%d",&n);

     printf("\nEnter the elements :\n");
      for(i=0;i<n;i++)
       scanf("%d",&a[i]);

    printf("\nEnter the element you want to delete : ");
     scanf("%d",&num);

     for(i=0;i<n;i++)
       if(a[i]==num)
        {
            p=i;
            break;
        }

    for(i=p;i<n-1;i++)
        a[i]=a[i+1];

    n--;

    printf("\nAfter deletion :\n");
      for(i=0;i<n;i++)
         printf("%d\n",a[i]);

         return 0;
}