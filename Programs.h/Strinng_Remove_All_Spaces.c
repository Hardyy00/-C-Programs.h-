#include <stdio.h>
int main()
{
    char a[100];
    int i,s[100],d=0,j;

    printf("\nEnter a string : ");
       gets(a);

    for(i=0;a[i]!='\0';i++)
        if(a[i]==' ')
              {
                  s[d]=i;
                  d++;
              }

    for(i=0;i<d;i++)
       for(j=s[i]-i;a[j]!='\0';j++)
          a[j]=a[j+1];
        

        printf("\nString after removing spaces : %s",a);

        return 0;
          
}