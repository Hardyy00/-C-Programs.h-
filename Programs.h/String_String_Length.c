#include <stdio.h>
int main()
{
    char a[100];
    int i,d=0;

    printf("\nEnter a string : ");
     scanf("%[^\n]s",&a);

   for(i=0;a[i]!='\0';i++)
       d++;


   printf("\nLength of the string = %d ",d);

   return 0;
}