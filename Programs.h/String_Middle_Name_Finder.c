
#include <stdio.h>
int main()
{
   char a[100];
   int i,p,d=0;

   printf("\nEnter a name :\n");
      gets(a);

   for(i=0;a[i]!=0;i++)
      if(a[i]==' ')
           {
              p=i;
              break;
           }

  printf("\nMiddle name is : ");
   for(i=p+1;a[i]!=' ';i++)
      printf("%c",a[i]);
      return 0;
}