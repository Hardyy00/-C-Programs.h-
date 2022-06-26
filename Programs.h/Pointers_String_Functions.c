#include <stdio.h>
int main()
{
    char a[100],*p=a,ch;
    int i,num,count=0;

    printf("\nEnter a string : ");
      gets(a);

    printf("\nMenu :\n");
    printf("1. Find length of the string\n");
    printf("2. Reverse the string\n");
    printf("3. Check for string palindrome\n");
    printf("4. Count a particular character\n");
     
    printf("\nEnter the serial number of the function you have chosen : ");
      scanf("%d",&num);

    switch(num)
    {
        case 1 :
          for(i=0;*(p+i)!=0;i++)
             count++;

            printf("\nLength of the string : %d",count);

            break;
            
        case 2 :
            for(i=0;*(p+i)!=0;i++)
              count++;

            for(i=count-1;i>=0;i--)
              printf("%c",*(p+i));

              break;

        case 3 :
          {
              int flag=1;
             for(i=0;*(p+i)!=0;i++)
                count++;

            for(i=0;i<count;i++)
              if(*(p+i)!=*(p+count-1-i))
                   flag=0;

               if(flag==0)
                 printf("\nString is not Palindrome");
                 else
                   printf("\nString is palindrome");

                   break;

          }

          case 4:
            fflush(stdin);
             printf("\nEnter the Character you want to find : ");
               scanf("%c",&ch);

            for(i=0;*(p+i)!=0;i++)
                if(*(p+i)==ch)
                    count++;

                if(count==0)
                   printf("\nCharacter does't exist in the array");
                else
                   printf("\nNumber of times Character '%c' occurs in the string = %d",ch,count);

    }
           return 0;
}