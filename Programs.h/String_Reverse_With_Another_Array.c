#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,d=0;

    printf("\nEnter a string : ");
     gets(a);

    for(i=0;a[i]!='\0';i++)
       d++;

    for(i=0;i<d;i++)
       b[i]=a[d-1-i];

    b[i]='\0';

    printf("Reverse of the string is : %s",b);

    return 0;
}