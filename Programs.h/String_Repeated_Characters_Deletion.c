#include <stdio.h>
int main()
{
    char a[100];
    int i,j,k,max,b[200]={0},e[100],p[100],f=0,d=0;

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
               e[f]=i;
               f++;
           }

    for(i=0;i<f;i++)
    {
        d=0;
          
        for(j=0;a[j]!=0;j++)
          if(a[j]==e[i])
                 {
                     p[d]=j;
                     d++;
                 }

          for(j=0;j<d;j++)
             for(k=p[j]-j;a[k]!=0;k++)
                a[k]=a[k+1];
    }

       printf("\nString after deletion : %s",a);

       return 0;
}