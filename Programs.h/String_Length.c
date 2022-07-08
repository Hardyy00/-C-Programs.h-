#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i,d=0;

    printf("\nEnter a string : "); 
      gets(a);

    for(i=0;a[i]!=0;i++)
       d++;

    printf("\nLength of the string with function = %d",strlen(a));

    printf("\nLength of the string without function = %d",d);

    return 0;

}