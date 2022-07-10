#include <stdio.h>
int main()
{
    char a[100],ch;
    int i,flag=0,p[100],d=0;

    printf("\nEnter a string : ");
      gets(a);

    printf("\nEnter the character that you want to replace : ");
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
             fflush(stdin);
     printf("\nEnter the character that you want the character '%c' to be replaced with : ",ch);
               scanf("%c",&ch);

               for(i=0;i<d;i++)
                a[p[i]]=ch;

                printf("\nAfter the replacing : %s",a);
         }

         return 0;
}