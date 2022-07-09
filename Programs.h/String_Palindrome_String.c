#include <stdio.h>
int main()
{
    char a[100];
    int flag=1,i,l=0;

    printf("\nEnter a string : ");
     gets(a);

    for(i=0;a[i]!=0;i++)
      l++;

    for(i=0;a[i]!=0;i++)
       if(a[i]!=a[l-1-i])
          {
              flag=0;
              break;
          }

    if(flag==0)
            printf("\nIts not a palindrome string");
    else
        printf("\nIts a palindrome string");
    
      return  0;
}