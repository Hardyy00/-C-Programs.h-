#include <stdio.h>
int main()
{
     char a[100],b[100];
     int i,j,flag=0,p[100],d=0;

     printf("\nEnter a string : ");
        gets(a);

    printf("\nEnter the word that you want to search : ");
      gets(b);

    for(i=0;a[i]!='\0';i++)
      if(a[i]==b[0])
         {
             flag=1;
               for(j=1;b[j]!='\0';j++)
                 if(a[i+j]!=b[j])
                    flag=0;

            if(flag==1)
                 {
                     p[d]=i;
                     d++;
                 }
         }

        if(flag==0)
           printf("\nThe word doesn't exist in the string");
        else 
           {
               printf("\nThe word '%s' occurs at postion(s) :\n",b);
                 for(i=0;i<d;i++)
                   printf("%d\n",p[i]+1);
           }

           return 0;
}