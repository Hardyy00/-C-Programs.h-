#include <stdio.h>
#include <stdlib.h>
int  main()
{
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    fflush(stdin);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    fflush(stdout);
    printf("%s",sen);
    
    return 0;
    
    
}
