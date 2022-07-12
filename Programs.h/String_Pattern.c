#include <stdio.h>
int main()
{
    char a[100];
    int i,j,len=0;

    printf("\nEnter a word : ");
      scanf("%s",a);

    for(i=0;a[i]!='\0';i++)
       len++;

    for(i=0;i<len;i++)
     {
         for(j=0;j<=i;j++)
           printf("%c ",a[j]);

           printf("\n");
     }

       return 0;
}