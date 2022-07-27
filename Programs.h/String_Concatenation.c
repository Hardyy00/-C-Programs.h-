#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,d=0;

    printf("\nEnter string 1 : ");
     gets(a);

    printf("\nEnter string 2 : ");
    gets(b);

    for(i=0;a[i]!='\0';i++)
       d++;

    for(i=0;b[i]!='\0';i++)
       a[d+i]=b[i];

       a[d+i]='\0';

    printf("\nString 2 Concatenated to string 1 : %s",a);
       
    return 0;
     
}