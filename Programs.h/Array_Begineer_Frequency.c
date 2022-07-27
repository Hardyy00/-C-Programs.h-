#include <stdio.h>
#define size 100
int main()
{
    int a[size],b[size]={0},i,max,n;
    printf("\nEnter the size of the arrray : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    max=a[0];

    for(i=0;i<n;i++)
     {
         if(max<a[i])
            max=a[i];
     }

     max++;

     for(i=0;i<n;i++)
     {
         b[a[i]]++;
     }

     printf("\nFrequency :\n");
     for(i=0;i<max;i++)
           printf("\nFrequency of %d = %d",i,b[i]);

    return 0;
    

}