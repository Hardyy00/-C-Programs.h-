#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,num,d=0;

    printf("\nMenu :\n");
     printf("\n1. Find length of a string : ");
     printf("\n2. Copy of one string into another");
     printf("\n3. Capitalize all letters of a string");
     printf("\n4. Reverse a string");
     printf("\n5. Comparison of two strings");

     printf("\nChoose a function : ");
       scanf("%d",&num);

    switch(num)
    {
        case 1  : 
             d=0;
             fflush(stdin);
           printf("\nEnter a string : ");
             gets(a);
        for(i=0;a[i]!='\0';i++)
           d++;

        printf("\nLength of the string = %d",d);
          break;

        case 2 :
              fflush(stdin);
             printf("\nEnter a string : ");
               gets(a);

            for(i=0;a[i]!='\0';i++)
                 b[i]=a[i];

                b[i]='\0';
            printf("\nCopied string : %s",b);
             break;

         case 3:
            fflush(stdin);
              printf("\nEnter a string : ");
                gets(a);

              for(i=0;a[i]!='\0';i++)
                if(a[i]>=97 && a[i]<=122)
                    a[i]-=32;

                printf("\nString is : %s",a);
                break;

            case 4 :
              fflush(stdin);
                printf("Enter a string : ");
                  gets(a);
                
              for(i=0;a[i]!='\0';i++)
                 d++;

                printf("\nReversed string is : ");
                   for(i=d-1;i>=0;i--)
                     printf("%c",a[i]);
                 break;

            case 5:
              fflush(stdin);
                 printf("\nEnter string 1: ");
                    gets(a);
                printf("\nEnter string 2: ");
                   gets(b);

                for(i=0;a[i]!='\0' || b[i]!='\0';i++)
                    if(a[i]!=b[i])
                         {
                             d=a[i]-b[i];
                              break;
                         }

                if(d==0)
                    printf("\nString 1 and String 2 are identical");
                else if(d>0)
                    printf("\nString 1 is alphabetically after the string 2");
                else
                   printf("\nString 1 is alphabetically before the string 2");
    }

        return 0;
}