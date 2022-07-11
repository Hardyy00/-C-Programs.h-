#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,k,flag=0,p[100],d=0,f=0;

    printf("\nEnter a string : ");
      gets(a);

    printf("\nEnter the word that you want to delete : ");
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
                          p[f]=i;
                          f++;
                      }
            }

        if(flag==0)
          printf("\nThe word doesn't exist in the string.");
        else
           {
               for(i=0;b[i]!='\0';i++)
                  d++;

                for(i=0;i<f;i++)
                  for(j=0;j<=d;j++)
                    for(k=p[i]-i*(d+1);a[k]!='\0';k++)
                       a[k]=a[k+1];

                printf("\nString after deletion : %s",a);
           }

           return 0;
}