#include <stdio.h>
int main()
{
    char a[100],ch;
    int i,j,p[100],flag=0,d=0;

    printf("\nEnter the string : ");
     gets(a);

    printf("\nEnter the character that you want to delete from the string : ");
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
           for(i=0;i<d;i++)
             for(j=p[i]-i;a[j]!='\0';j++)
                a[j]=a[j+1];

            printf("\nAfter deletion : %s",a);
       }

        return 0;
}