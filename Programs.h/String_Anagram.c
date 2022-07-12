#include <stdio.h>
int main()
{
    char a[100],b[100],e[100];
    int i,j,len1=0,len2=0,flag=0,d=0;

    printf("\nEnter 1st string : ");
      gets(a);

    printf("\nEnter 2nd string : ");
       gets(b);

     for(i=0;a[i]!='\0';i++)
        len1++;

    for(i=0;b[i]!='\0';i++)
       len2++;

    if(len1!=len2)
       printf("\nStrings are not anagram.");
    else
        {
               for(i=0;a[i]!=0;i++)
                   {
                       e[d]=a[i];
                       d++;
                   }

                for(i=0;i<d;i++)
                   {
                       flag=0;
                       for(j=0;b[j]!='\0';j++)
                         if(a[i]==b[j])
                            flag=1;

                        if(flag==0)
                             break;
                   }

                   if(flag==0)
                      printf("\nThe strings are not anagram");
                    else
                      printf("\nThe strings are anagram");
        }

         return 0;
            
}