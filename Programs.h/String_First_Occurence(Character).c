#include <stdio.h>
int main()
{
    char a[100],ch;
    int i,p=0;

    printf("\nEnter a string : ");
     gets(a);
    
    printf("\nEnter the character that you want to search : ");
     scanf("%c",&ch);

     for(i=0;a[i]!='\0';i++)
      if(a[i]==ch)
       {
            p=i;
            break;
       }

     if(p!=0)
            printf("\nFirst occurence of the character '%c' is at position %d",ch,i+1);
     else
        printf("\nThe character doesn't exist in the string");

            return 0;
}