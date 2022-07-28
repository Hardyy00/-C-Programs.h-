#include <stdio.h>
int main()
{
    char ch,a[100];
    int i,p[100]={0},d=0;

    printf("\nEnter the string : ");
       gets(a);

   printf("\nEnter the character that you want to search in the string : ");
     scanf("%c",&ch);

    for(i=0;a[i]!='\0';i++)
      if(a[i]==ch)
           {
               p[d]=i+1;
                d++;
           }

    if(p[1]==0)
        printf("\nThe character doesn't exist in the string");
    else
        {
            printf("\nThe character '%c' occur(s) at position(s) :\n",ch);
             for(i=0;i<d;i++)
                printf("%d\n",p[i]);
        }

        return 0;
}