#include <stdio.h>
int main()
{
    char a[100];
    int i,space=0;

    printf("\nEnter a string : ");
      gets(a);

     for(i=0;a[i]!='\0';i++)
     {
         if( a[i]==' ' && a[i+1]!=' ')
             space++;
     }

     
     printf("\nNumber of words = %d",space+1);

     return 0;

}