#include <stdio.h>
int main()
{
   char a[100];
   int i,j,k,b[200]={0},p[100],d=0,max,e[100],f=0;

   printf("\nEnter a string : ");
    gets(a);

    max=a[0];
    for(i=0;a[i]!='\0';i++)
      if(max<a[i])
           max=a[i];
    
      max++;

      for(i=0;a[i]!='\0';i++)
         b[a[i]]++;

         
    
    for(i=0;i<max;i++)
        if(b[i]>1)
          {
              e[d]=i;
              d++;
          }

     for(i=0;i<d;i++)
     {
         f=0;
         for(j=0;a[j]!='\0';j++)
              if(a[j]==e[i])
                 {
                     p[f]=j;
                     f++;
                 }

         for(j=0;j<f;j++)
           for(k=p[j]-j;a[k]!='\0';k++)
                a[k]=a[k+1];
     }

     printf("\nAfter deletion : %s",a);

     return 0;
}