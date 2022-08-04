#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,flag=0,p;

    printf("\nEnter a string : ");
     gets(a);

    printf("\nEnter the word that you want to search in the string : ");
         scanf("%s",&b);
        
    for(i=0;a[i]!='\0';i++)
        if(a[i]==b[0])
           {
              flag=1;
                for(j=1;b[j]!='\0';j++)
                  {
                      if(a[i+j]!=b[j])
                         flag=0;
                  }

                if(flag==1)
                     {
                         p=i;
                         break;
                     }    
           }

    if(flag==0)
           printf("\nThe word doesn't exist in the string.");
    else
        printf("\nThe First occurence of the word '%s' is at position %d in the string",b,p+1);
        
        return 0;

}