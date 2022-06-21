#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    scanf("%[^\n]%*c",s);
    int count =0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]== ' '){
            for(int j=count;j<i;j++)
                {
                    printf("%c",s[j]);
                }
                printf("\n");
            count=i+1;
        }
                   
    }
    for(int i=count;i<strlen(s);i++)
        printf("%c",s[i]);
    return 0;
}
