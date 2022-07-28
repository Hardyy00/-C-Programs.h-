#include <stdio.h>
int main()
{
    char a[100];
    int i,al=0,d=0,sc=0;

    printf("\nEnter a string : ");
     gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
           al++;
        else if(a[i]>=48 && a[i]<=57)
            d++;
        else
            sc++;
    }

      printf("\nNumber of alphabets = %d",al);
       printf("\nNumber of digits = %d",d);
       printf("\nNumber of special symbols = %d",sc);

       return 0;
}