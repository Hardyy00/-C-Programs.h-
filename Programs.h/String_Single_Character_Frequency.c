#include <stdio.h>
int main()
{
    char a[100],ch;
    int i,flag=0,d=0;

    printf("\nEnter a string : ");
      gets(a);

    printf("\nEnter the character that you want to search : ");
        scanf("%c",&ch);

    for(i=0;a[i]!=0;i++)
        if(a[i]==ch)
             {
                 flag=1;
                 d++;
             }

    if(flag==0)
        printf("\nThe character doesn't exist in the string");
    else
        printf("\nThe character '%c' occurs %d times in the string",ch,d);

        return 0;
}