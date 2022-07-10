#include <stdio.h>
int main()
{
    char a[100];
    int i,max,b[200]={0};

    printf("\nEnter a string : ");
      gets(a);

    max=a[0];
    for(i=0;a[i]!=0;i++)
       if(max<a[i])
           max=a[i];

    max++;

    for(i=0;a[i]!=0;i++)
        b[a[i]]++;

    for(i=0;i<max;i++)
       if(b[i]>0)
         printf("\nFrequency of '%c' = %d",i,b[i]);


        return 0;
}