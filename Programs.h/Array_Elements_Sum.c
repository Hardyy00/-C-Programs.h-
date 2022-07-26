#include <stdio.h>
int main()
{
    int size,sum=0,i;
    printf("\nEnter the size of the array : ");
    scanf("%d",&size);

    int a[size];

    printf("\nEnter the elements :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    printf("\nSum of elements = %d",sum);

    return 0;

}