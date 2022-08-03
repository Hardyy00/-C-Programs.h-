#include <stdio.h>
int main()
{
    char a[100],ch;
    int i,p,flag=0;

    printf("\nEnter a string : ");
     gets(a);

    printf("\nEnter the character that you want to delete from the string : ");
      scanf("%c",&ch);

    for(i=0;a[i]!='\0';i++)
       if(a[i]==ch)
            {
                p=i;
                flag=1;
            }
    
    if(flag==0)
          printf("\nThe character doesn't exist in the string");
    else 
       {
           for(i=p;a[i]!='\0';i++)
                a[i]=a[i+1];

            printf("\nAfter deletion : %s",a);
       }

       return 0;
}