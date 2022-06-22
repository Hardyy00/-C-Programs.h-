#include <stdio.h>
int main()
{   
    int a;
    printf("\nEnter the number: ");
    scanf("%d", &a);

    if(a%2==0)
             printf("\nIt is a even number\n");
    else
             printf("\nIt is a odd number\n");        

    return 0;
}