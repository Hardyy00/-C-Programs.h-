#include <stdio.h>
int main()
{
    char a[100],vowels[100],conso[100],digits[100],special[100];

    int i,v=0,c=0,d=0,s=0;

    printf("\nEnter a string : "); 
          gets(a);

    for(i=0;a[i]!=0;i++)
       {
           if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' 
                || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
                 {
                     vowels[v]=a[i];
                      v++;
                 }
            else if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
                {
                    conso[c]=a[i];
                      c++;
                }
            else if(a[i]>=48 && a[i]<=57)
              {
                  digits[d]=a[i];
                    d++;
              }
            else
                {
                    special[s]=a[i];
                      s++;
                }
       }
          vowels[v]='\0';
          conso[c]='\0';
          digits[d]='\0';
          special[s]='\0';

    printf("\nVowels  are :\n");
       for(i=0;vowels[i]!=0;i++)
         printf("%c\n",vowels[i]);

    printf("\nConsonants are :\n");
      for(i=0;conso[i]!=0;i++)
          printf("%c\n",conso[i]);

    printf("\nDigits are :\n");
      for(i=0;digits[i]!=0;i++)
         printf("%c\n",digits[i]);

    printf("\nSpecial characters are :\n");
      for(i=0;special[i]!=0;i++)
         printf("%c\n",special[i]);

         return 0;
}