#include <stdio.h>
int main()
{
    char ch,a[100];
    int i,d=0;

    printf("\nEnter the string : ");
     gets(a);

    printf("\nEnter the character that you want to search in the string : ");
      scanf("%c",&ch);

    for(i=0;a[i]!='\0';i++)
       if(a[i]==ch)
           d++;

    if(d==0)
        printf("\nThe character doesn't occur in the string");
    else
        printf("\nNumber of occurrences of the charcater '%c' in the string = %d",ch,d);

        return 0;
}