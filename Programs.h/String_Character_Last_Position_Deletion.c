#include <stdio.h>
int main()
{
    char a[100],ch;

    int i,flag=0,p;

    printf("\nEnter a string : ");
      gets(a);

    printf("\nEnter the character that you want to delete : ");
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
         {
             for(i=p;a[i]!='\0';i++)
                  a[i]=a[i+1];

             
             printf("\nString after deletion : %s",a);
         }

         return 0;
}