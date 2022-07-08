#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
     int i,d=0,p;

     printf("\nWith function :\n");
     printf("\nEnter string a : ");
       gets(a);

    printf("\nEnter string b : ");
      gets(b);

    p=strcmp(a,b);
    if(p==0)
       printf("\nString a is identical to string b");
    else if(p>0)
       printf("\nString a is alphabetically after the string b");
    else
        printf("\nString a is alphabetically before the string b");

    printf("\nWithout function :\n");
      printf("\nEnter string a : ");
       gets(a);

    printf("\nEnter string b : ");
      gets(b);

    for(i=0;a[i]!=0 || b[i]!=0 ;i++)
         if(a[i]!=b[i])
             {
                 d=a[i]-b[i];
                   break;
             }

    if(d==0)
       printf("\nString a is identical to string b");
    else if(d>0)
        printf("\nString a is alphabetically after the string b");
    else
        printf("\nString a is alphabetically before the string b");

        return 0;
}