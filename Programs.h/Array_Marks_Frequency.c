#include <stdio.h>
int main()
{
    int i,n,a[500],b[101]={0},max;
    printf("\nEnter the number of students for whom you want to enter marks : ");
    scanf("%d",&n);

    printf("\nEnter the marks of %d students :\n",n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

    max=100;

    max++;

    for(i=0;i<n;i++)
        b[a[i]]++;
    
    
    for(i=0;i<max;i++)
        if(i>60)
         printf("\nFrequency of %d = %d",i,b[i]);

         return 0;
}