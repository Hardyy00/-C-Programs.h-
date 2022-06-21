#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,*pr,sum=0;
    scanf("%d",&n);
    
    pr=(int *)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++)
       scanf("%d",pr+i);
       
    for(i=0;i<n;i++)
      sum= sum+*(pr+i);
      
    printf("%d",sum);
    
    free(pr);
    
    return 0;
}
