#include <stdio.h>
int main()
{
    char a[100];
    int i,d=0;

    printf("Enter a string : ");
    gets(a);

    for(i=0;a[i]!='\0';i++)
       d++;

    printf("\n");

    for(i=d-1;i>=0;i--)
        printf("%c",a[i]);
}