#include <stdio.h>
int main()
{
    char a[100];
    int i,d=0,flag=1;
    
    printf("\nEnter the string : ");
      gets(a);

    for(i=0;a[i]!='\0';i++)
       d++;

    for(i=0;i<d;i++)
    {
        if(a[i]!=a[d-1-i])
            {
                  flag=0;
                break;
            }
    }

    if(flag==1)
        printf("\nIts a palindrome string");
    else if(flag==0)
        printf("\nIts not a palindrome string");

}