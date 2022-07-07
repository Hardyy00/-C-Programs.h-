#include <stdio.h>
void swap(int *,int *);
int  main()
{
    int a ,b;
    printf("\nEnter the values of a and b respectively :\n");
    scanf("%d%d",&a,&b);

    printf("\nBefore swapping :\n");
    printf("a = %d\nb = %d",a,b);

    swap(&a,&b);

    printf("\nAfter swapping :\n");
    printf("a = %d\nb = %d",a,b);

    return 0;

}

void swap(int *a,int *b)
{
    int z;
    z=*a;
    *a=*b;
    *b=z;
}