#include <stdio.h>
int main()
{
    int a[100],b[100]={0},p[100],d=0,i,j,max,n,e[100],f=0,k;

    printf("\nEnter the size of the array : ");
     scanf("%d",&n);

    printf("\nEnter the elements :\n");
     for(i=0;i<n;i++)
       scanf("%d",&a[i]);

     max=a[0];
       for(i=0;i<n;i++)
         if(max<a[i])
           max=a[i];

    max++;
   
   for(i=0;i<n;i++)
      b[a[i]]++;

    for(i=0;i<max;i++)
          if(b[i]>1)
              {
                  e[f]=i;
                  f++;
              }

    for(i=0;i<f;i++)
    {
        d=0;
       
        for(j=0;j<n;j++)
          if(a[j]==e[i])
             {
                 p[d]=j;
                   d++;
             }
        
        for(j=0;j<d;j++)
         {
             for(k=p[j]-j;k<n-1;k++)
                   a[k]=a[k+1];

                n--;
         }
    }

       printf("\nAfter deletion :\n");
        for(i=0;i<n;i++)
          printf("%d\n",a[i]);

         return 0;
}