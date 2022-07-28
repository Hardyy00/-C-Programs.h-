#include <stdio.h>
int main()
{
    char a[100];
    int i,v=0,c=0;

    printf("\nEnter a string : ");
     gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if( (a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122) )
          {
              if(a[i]==97 || a[i]==101 || a[i]==105 || a[i]==111 || a[i]==117
                     || a[i]==65 || a[i]==69 || a[i]==73 || a[i]==79 || a[i]==85)
                    v++;
              else
                  c++;
          }
    }

      printf("\nNumber of Vowels = %d",v);
       printf("\nNumber of Consonants = %d",c);

       return 0;
}