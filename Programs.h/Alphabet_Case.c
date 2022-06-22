#include <stdio.h>
int main()
{
    char ch;
    printf("\nEnter a Character : ");
    scanf("%c", &ch);
    (ch>=97 && ch<=122 ? printf("\nIts a lower case alphabet") : printf("\nIts not a lower case alphabet"));

    return 0;
}