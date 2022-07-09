#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i=0,d=0,swap;

    printf("\nWith function :\n");
     printf("\nEnter a string : ");
       gets(a);

    strrev(a);

    printf("\nReversed string : %s",a);

    printf("\n\nWith fuction :\n");

    printf("\nEnter a string : ");
      gets(a);

    for(i=0;a[i]!=0;i++)
       d++;

    for(i=0;i<=d/2;i++)
       {
           swap=a[d-1-i];
           a[d-1-i]=a[i];
           a[i]=swap;
       }

    printf("\nReversed string : %s",a);

    return 0;
}