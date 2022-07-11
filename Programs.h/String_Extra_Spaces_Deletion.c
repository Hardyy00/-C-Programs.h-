#include <stdio.h>
int main()
{
    char a[100];
    int i,j,p[100],d=0;

    printf("\nEnter a string : ");
      gets(a);

    if(a[0]==' ')
       {
        p[0]=0;
         d++;
       }

    for(i=0;a[i]!='\0';i++)
       if(a[i]==' ' && a[i+1]==' ')
            {
                p[d]=i+1;
                d++;
            }

    for(i=0;i<d;i++)
      for(j=p[i]-i;a[j]!=0;j++)
         a[j]=a[j+1];

    printf("\nString after extra spaces : %s",a);

     return 0;
}