#include <stdio.h>
int main()
{
    char a[100],ch;
    int i,flag=0,p;

    printf("\nEnter a string : ");
      gets(a);

    printf("\nEnter the character that you want to search : ");
      scanf("%c",&ch);

    for(i=0;a[i]!=0;i++)
      if(a[i]==ch)
        {
            flag=1;
            p=i;
        }

    if(flag==0)
         printf("\nThe character doesn't exist in the string");
    else
         printf("\nLast occurence of character '%c' is at position %d",ch,p+1);

         return 0;
}