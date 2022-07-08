#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100],c[100];
    int i;

    printf("\nEnter a string : ");
     gets(a);

    strcpy(b,a);

    printf("\nFunction copied string : %s",b);

    for(i=0;a[i]!=0;i++)
      c[i]=a[i];

      c[i]='\0';

    printf("\nSelf copied string : %s",c);

    return 0;
}