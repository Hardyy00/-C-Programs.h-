#include <stdio.h>
int main()
{
    char a[100],ch;

    int i,flag=0,p[100],d=0;

    printf("\nEnter a string : ");
      gets(a);

    printf("\nEnter the character that you want to search : ");
     scanf("%c",&ch);

    for(i=0;a[i]!='\0';i++)
      if(a[i]==ch)
        {
            flag=1;
            p[d]=i;
              d++;
        }

    if(flag==0)
        printf("\nThe character doesn't exist in the string");
    else
       {
            printf("\nThe occurence of the character '%c' is at position(s) :\n",ch);
          for(i=0;i<d;i++)
            printf("%d\n",p[i]+1);
       }
        return 0;
}