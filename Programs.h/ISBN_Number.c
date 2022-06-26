#include <stdio.h>
int main()
{
    char dig[20];
    int i,sum=0;

    printf("Enter the 10-digit ISBN : ");
     gets(dig);

     for(i=0;i<10;i++)
     {
         dig[i]=dig[i]-48;

         sum=sum+(i+1)*dig[i];
     }

     if(sum%11==0)
        printf("\nIts a correct ISBN no.");
    else
        printf("\nIts an incorrect ISBN no.");


        return 0;

}