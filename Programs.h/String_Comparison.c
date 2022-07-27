#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,flag=0;

    printf("\nEnter string 1 : ");
     gets(a);

    printf("\nEnter string 2 : "); 
     gets(b);

     for(i=0;a[i]!='\0';i++)
       {
            if(a[i]!=b[i])
               {
                     flag=a[i]-b[i];
                     break;
                }
       }

    if(flag==0)
         printf("\nBoth strings are identical");
    else if(flag>0)
          printf("\nsecond string is alphabetically before the first string");
    else
        printf("\nfirst string is alphabetically before the second string");

        return 0;
}