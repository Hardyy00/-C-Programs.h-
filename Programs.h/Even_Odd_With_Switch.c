#include <stdio.h>
int main()
{
    int num;
    printf("\nEnter any number : ");
    scanf("%d",&num);

    switch(num%2)
    {
        case 1 :
        printf("\nIts an odd number.");
        break;
        
        case 0 :
        printf("\nIts an even number");
    }

       return 0;
}