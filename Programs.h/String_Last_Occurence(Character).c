#include <stdio.h>
int main()
{
    char a[100],ch;
    int i,max,p,flag=0;

    printf("\nEnter the string : "); 
      gets(a);

    printf("\nEnter the character you want to search in the string : ");
      scanf("%c",&ch);

    for(i=0;a[i]!='\0';i++)
      if(a[i]==ch)
         {
             p=i+1;
             flag=1;
         }

    if(flag==0)
             printf("\nThe character doesn't exist in the string");
    else
        printf("\nThe last occurence of the character '%c' is at position %d",ch,p);

        return 0;
}