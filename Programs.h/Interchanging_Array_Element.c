#include  <stdio.h>
int main()
{
    int a[100],n,i,swap;
    printf("\nEnter the size of  the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     printf("\nAfter interchanging :\n");
    for(i=0;i<n;i++)
    {
        if((a[i]%2==0 && a[i+1]%2!=0) || (a[i]%2!=0 && a[i+1]%2==0))
        {
            swap=a[i];
            a[i]=a[i+1];
            a[i+1]=swap;
        }
          i++;
    }
    
    for(i=0;i<n;i++)
      printf("%d\n",a[i]);

       return 0;
}