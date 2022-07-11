#include <stdio.h>
int main()
{
    char a[100];
    int i,non=-1;

    printf("\nEnter a string : ");
       gets(a);

    for(i=0;a[i]!=0;i++)
      if(a[i]!=' ')
           non=i;

    a[non+1]='\0';

     printf("\nString after trimming trailing white spaces : %s",a);

    
      return 0;

}