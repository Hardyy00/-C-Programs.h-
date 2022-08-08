#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,k,flag=0,p[100],d=0,lenb=0;

    printf("\nEnter a string : ");
     gets(a);

    printf("\nEnter the word that you to delete from the string : ");
      gets(b);

    for(i=0;b[i]!='\0';i++)
       lenb++;

    for(i=0;a[i]!='\0';i++)
     {
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
     }

     if(flag==0)
          printf("\nThe word doesn't exist in the string");

     else
        {
            for(i=0;i<d;i++)
             {
                 for(j=0;j<=lenb;j++)
                  {
                     
                       for(k=p[i]-i*(lenb+1);a[k]!='\0';k++)
                          a[k]=a[k+1];
                       
                     
                  }
             }
              printf("\nAfter deletion : %s",a);
        }

        return 0;
}