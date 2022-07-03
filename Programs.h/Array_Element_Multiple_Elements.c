#include <stdio.h>
int main()
{
    int i,n,a[100],p[100]={0},d=0,num;
   
    printf("\nEnter the size of the array : ");
     scanf("%d",&n);

    printf("\nEnter the elements :\n");
      for(i=0;i<n;i++)
         scanf("%d",&a[i]);

    printf("\nEnter the number that u want to search : ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
        if(a[i]==num)
          {
              p[d]=i;
              d++;
          }

    if(d==0)
         printf("\nNot found");
    else 
        {
            printf("\nPosition(s) of %d (with respect to array) is/are :\n",num);
            for(i=0;i<d;i++)
                printf("%d\n",p[i]);
        }   

        return 0;
}