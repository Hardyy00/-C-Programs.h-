#include <stdio.h>
int main()
{
    char a[100];
    int i,j,flag=0;

    printf("\nEnter a string : ");  
      gets(a);

    for(i=0;i<26;i++)
      {
          flag=0;

           for(j=0;a[j]!='\0';j++)
              if((97+i)==a[j] || (65+i)==a[j])
                  flag=1;

            if(flag==0)
                 break;    
      }

    if(flag==0)
        printf("\nThe string is not pangram");
    else
       printf("\nThe string is pangram");

       return 0;
        
}