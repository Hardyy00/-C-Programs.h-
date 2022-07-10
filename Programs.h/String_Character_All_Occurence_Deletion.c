#include <stdio.h>
int main()
{
    char a[100],ch;
    int i,j,flag=0,p[100],d=0;

    printf("\nEnter a string : ");
      gets(a);

    printf("\nEnter the character that you want to delete : ");
      scanf("%c",&ch);

    for(i=0;a[i]!=0;i++)
        if(a[i]==ch)
           {
               flag=1;
               p[d]=i;
               d++;
           }

    if(flag==0)
        printf("\nThe character doesn't exist in the string.");
    else
       {
           for(i=0;i<d;i++)
            for(j=p[i]-i;a[j]!=0;j++)
              a[j]=a[j+1];

            printf("\nString after deletion : %s",a);
       }

         return 0;
}