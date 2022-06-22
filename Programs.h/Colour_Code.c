#include <stdio.h>
int main()
{
    float r,g,b,w=0,c,m,y,k;
    printf("\nEnter the values of R,G,B respectively(0 to 255): ");
    scanf("%f %f %f", &r, &g, &b);

    r=r/255;
    g=g/255;
    b=b/255;
    
    if(r>g && r>b)
         w=r;
    else if(g>r && g>b)
         w=g;
    else if(b>r && b>g)
         w=b;
    
    c=(w-r)/w;
    m=(w-g)/w;
    y=(w-b)/w;
    k=1-w;
    
    printf("\nC : %f\nM : %f\nY : %f\nK : %f", c, m, y, k);

    return 0;
}