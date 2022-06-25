#include <stdio.h>
void sm(int *,int *,int);
int main()
{
    int a[100],i,s,n;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    
    printf("\nEnter the Elements :\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   
   s=a[0];
    sm(&s,a,n);

    printf("\nSmallest element = %d",s);

    return 0;
}

void sm(int *s,int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
        if(*s>*(a+i))
            *s=*(a+i);
}