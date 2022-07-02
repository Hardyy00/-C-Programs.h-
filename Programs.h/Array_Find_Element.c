#include <stdio.h>
int main()
{
    int i,n,a[100],p[10]={0},num,d=0;
    
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

    printf("\nEnter the number you want to find : ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
       if(num==a[i])
          {
              p[d]=i;
              d++;
          }
    
    if(p==0)
        printf("\nNot found");
    else
       printf("\nPosition of element %d (with respect to array) is/are :\n",num);
       for(i=0;i<d;i++)
          printf("%d\n",p[i]);

       return 0;
}