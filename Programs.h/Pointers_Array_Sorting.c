#include <stdio.h>
int main()
{
    int a[100],i,j,n,swap;
    int *p=a;

    printf("\nEnter the size of the array : ");
     scanf("%d",&n);

     printf("\nEnter  the elements :\n");
      for(i=0;i<n;i++)
        scanf("%d",p+i);

    for(i=0;i<n-1;i++)
       for(j=0;j<n-1-i;j++)
          if(*(p+j)>*(p+j+1))
               {
                   swap=*(p+j+1);
                   *(p+j+1)=*(p+j);
                   *(p+j)=swap;
               }

    printf("\nAfter sorting :\n");
      for(i=0;i<n;i++)
        printf("%d ",*(p+i));

        return 0;
}