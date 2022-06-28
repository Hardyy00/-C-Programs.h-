#include <stdio.h>
int main()
{
    char a[100],ch,*p=a;
    int i,f=0,flag=0;

    printf("\nEnter a string : "); 
      gets(a);

    printf("\nEnter the charater ,you want to find frequnecy of : ");
       scanf("%c",&ch);

    for(i=0;*(p+i)!='\0';i++)
       if(*(p+i)==ch)
          {
              flag=1;
              f++;
          }

    if(flag==0)
       printf("\nCharacter doesn't exist in the string");
    else
       printf("\nFrequency of the character '%c' = %d",ch,f);

       return 0;
    
}