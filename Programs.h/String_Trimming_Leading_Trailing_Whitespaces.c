#include <stdio.h>
int main()
{
    char a[100];
    int i,j,s=0,non=-1;

     printf("\nEnter a string : ");
         gets(a);

    for(i=0;a[i]==' ';i++)
       s++;

    for(i=1;i<=s;i++)
      for(j=0;a[j]!='\0';j++)
        a[j]=a[j+1];

    for(i=0;a[i]!='\0';i++)
        if(a[i]!=' ')
              non=i;

    a[non+1]='\0';

    printf("\nString after trimming : %s",a);

    return 0;
}