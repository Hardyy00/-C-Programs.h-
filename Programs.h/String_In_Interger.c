#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char a[100];
    int i=0,num=0,d;
    printf("\nEnter the string :\n");
     gets(a);

     d=strlen(a);

    while(a[i]!='\0')
    {
         num=num+(a[i]-48)*pow(10,(d-1)-i);
         i++;
    }

   printf("\nInteger = %d",num);

   return 0;

}