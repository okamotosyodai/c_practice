#include <stdio.h>
int main(void) {
    float x;
    double y;
    scanf("%f%lf",&x,&y);
    printf("%g == %g : %d\n",x,y,x==y);
    printf("%g != %g : %d\n",x,y,x!=y);
    printf("%g < %g : %d\n",x,y,x<y);
    printf("%g > %g : %d\n",x,y,x>y);
    printf("%g <= %g : %d\n",x,y,x<=y);
    printf("%g >= %g : %d\n",x,y,x>=y);
}
