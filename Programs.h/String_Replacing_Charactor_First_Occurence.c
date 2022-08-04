#include <stdio.h>
int main()
{
    char a[100],ch;
    int i,p,flag=0;

    printf("\nEnter a string : ");
     gets(a);

    printf("\nEnter the character that you want to replace : ");
      scanf("%c",&ch);

    for(i=0;a[i]!='\0';i++)
       if(a[i]==ch)
         {
             flag=1;
             p=i;
               break;
         }
    
    if(flag==0)
              printf("\nThe character doesn't exist in the string.");
    else
        {
            fflush(stdin);

           printf("\nEnter the character that you want the character '%c' to be replaced with : ",ch);
              scanf("%c",&ch);

            a[p]=ch;

            printf("\nAfter the replacing , the string is : %s",a);
        }
          
          return 0;
}