#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,d=0,flag=0;

     printf("\nEnter a string : ");
      gets(a);

    printf("\nEnter a word that you to search : ");
      gets(b);


    for(i=0;a[i]!='\0';i++)
      if(a[i]==b[0])
        {
            flag=1;

            for(j=1;b[j]!='\0';j++)
               if(a[i+j]!=b[j])
                  flag=0;

            if(flag==1)
                 d++;
        }

        if(flag==0)
          printf("\nThe word exist in the string ");
        else
           printf("\nNumber of times the word '%s' repeated = %d",b,d);

           return 0;
}