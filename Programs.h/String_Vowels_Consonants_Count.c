#include <stdio.h>
int main()
{
    char a[100];
     int i,v=0,c=0;

     printf("\nEnter a string : ");
       gets(a);

    for(i=0;a[i]!='\0';i++)
      {
          if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' ||a[i]=='I'
                || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
              v++;

        else
           c++;
      }

    printf("\nNumber of vowels : %d",v);
    printf("\nNumber of consonants : %d",c);

    return 0;
}