#include <stdio.h>
int main()
{
    char a[100];
    int i;

    printf("\nEnter a string : ");
     gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97 && a[i]<=122)
           a[i]=a[i]-32;
    }

    printf("\nThe string is : %s",a);

    return 0;
}