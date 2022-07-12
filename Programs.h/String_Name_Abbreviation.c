#include <stdio.h>
int main()
{
    char a[100];
    int i;

    printf("\nEnter a name : ");
       gets(a);

   printf("%c.",a[0]);

    for(i=0;a[i]!=0;i++)
        if(a[i]==' ')
           {
               printf("%c.",a[i+1]);
           }

            return 0;
}