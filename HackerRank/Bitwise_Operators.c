#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int max_and = (1&2)<k ? 1&2 : 0;
  int max_or = (1|2)<k ? 1|2 : 0;
  int max_xor = (1^2)<k ? 1^2 : 0;
  
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=n;j++){
        if(i!=j){
          if(max_and<(i&j) && (i&j)<k)
            max_and = i&j;
          if(max_or <(i|j) && (i|j)<k)
            max_or = i|j;
            if(max_xor<(i^j) && (i^j)<k)
            max_xor = i^j;
        }
      }
  }
  printf("%d\n",max_and);
  printf("%d\n",max_or);
  printf("%d",max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
