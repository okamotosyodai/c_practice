#include <stdio.h>
int main(void) {
    const double PI=3.14;
    double r;
    printf("r:");
    scanf("%lf",&r);
    printf("球の体積:%g\n",4*PI*r*r*r/3);
}
