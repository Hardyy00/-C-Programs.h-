#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    int i,l=0;

    printf("\nWith function :\n");
     
     printf("\nEnter string a : ");
      gets(a);
    printf("\nEnter string b : ");
      gets(b);

     strcat(a,b);

     printf("\nAfter catenation : %s",a);

     printf("\nWithout function :\n");
       
    printf("\nEnter string a : ");
      gets(a);

      printf("\nEnter string b : ");
        gets(b);

    for(i=0;a[i]!=0;i++)
       l++;

       for(i=0;b[i]!=0;i++)
          a[l+i]=b[i];

          a[l+i]='\0';

    printf("\nAfter catenation : %s",a);

    return 0;

}