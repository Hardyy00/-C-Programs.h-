#include <stdio.h>
int main()
{
    char a[100];
    int i,d=0;

    printf("\nEnter a string : ");
     gets(a);

    for(i=0;a[i]!='\0';i++)
        if(a[i]==' ')
              d++;
        

    printf("\nNumber of words in the  string = %d",d+1);
}