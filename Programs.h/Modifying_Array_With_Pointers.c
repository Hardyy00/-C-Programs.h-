#include <stdio.h>
void modify(int *,int );
int main()
{
    int i,n,a[100];
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

    modify(a,n);

       printf("\nAfter modifying :\n");
    for(i=0;i<n;i++)
       printf("%d\n",a[i]);
       
       return  0;
}
void modify(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
        *(a+i)=3**(a+i);
}