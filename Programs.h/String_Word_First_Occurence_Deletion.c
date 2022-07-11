#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,p,flag=0,d=0;

    printf("\nEnter a string : ");
      gets(a);

    printf("\nEnter the word that you want to delete : ");
       gets(b);

    for(i=0;a[i]!='\0';i++)
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
           printf("\nThe word doesn't exist in the string");
        else
           {
             
               for(i=0;b[i]!=0;i++)
                  d++;
                printf("\nP =%d\nd= %d",p+1,d);
               
               for(i=0;i<=d;i++)   //deletes even an following space
                  for(j=p;a[j]!=0;j++)
               
                    a[j]=a[j+1];
                 printf("\nString after deletion : %s",a);
           }

            return 0;
}