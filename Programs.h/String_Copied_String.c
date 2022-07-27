#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i;

    printf("\nEnter any string : ");
     scanf("%[^\n]s",&a);

     for(i=0;a[i]!='\0';i++)
       b[i]=a[i];

    b[i]='\0';

    printf("Copied string is : %s",b);

    return 0;
}