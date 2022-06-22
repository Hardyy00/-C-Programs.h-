#include <stdio.h>
int main()
{
    char ch;
    printf("\nEnter a Character : ");
    scanf("%c", &ch);

    ( (ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127) )? printf("\nIts a special symbol") : printf("\nIts not a special symbol");
   
    return 0;
}