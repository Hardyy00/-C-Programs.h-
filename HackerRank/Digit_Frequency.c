#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    scanf("%s",c);
    for(int i=48;i<58;i++){
        int count=0;
        for(int j=0;j<strlen(c);j++){
            if(i==(int)c[j])
                count++;
        }
        printf("%d ",count);
    }
    return 0;
    
}
