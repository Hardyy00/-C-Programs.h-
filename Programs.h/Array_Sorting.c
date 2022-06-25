
#include <stdio.h>
int main()
{
    int i,j,swap,a[100],n;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);

   for(i=0;i<n-1;i++)
    {
        for(j=1;j<=n-1-i;j++)
        {
            if(a[i]>a[i+j])
            {
                swap=a[i+j];
                a[i+j]=a[i];
                a[i]=swap;
            }
        }
    }
        printf("\nAfter sorting :\n");
        for(i=0;i<n;i++)
           printf("\n%d",a[i]);

           return 0;
}