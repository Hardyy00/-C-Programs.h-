#include <stdio.h>
int main()
{
    int i,n,a[100],f=1;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
     
     for(i=0;i<n/2;i++)
         {
             if(a[i]!=a[n-1-i]){
                f=0;
                break;
             }  
         }

    if(f==1)
         printf("\nIts a palindrome array");
    else
        printf("\nIts not a palindrome array");

        return 0;
}