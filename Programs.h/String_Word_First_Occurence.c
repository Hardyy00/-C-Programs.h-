#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,p,flag=0;

    printf("\nEnter a string : ");
      gets(a);

    printf("\nEnter the word that you want to find : ");
      gets(b);

    for(i=0;a[i]!=0;i++)
     if(a[i]==b[0])
         {
             flag=1;
             for(j=1;b[j]!=0;j++)
                if(a[i+j]!=b[j])
                     flag=0;

             if(flag==1)
                {
                    p=i;
                    break;
                }
         }

        if(flag==0)
          printf("\nThe Word doesn't exist in the string");
        else 
            printf("\nThe first occurence of the word '%s' is at postion %d",b,p+1);

            return 0;
}