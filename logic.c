#include <stdio.h>
int main(void) {
    int hour;
    printf("hour : ");
    scanf("%d",&hour);
    printf("open : %d\n",8<=hour && hour<=22);
    printf("close : %d\n",hour<8 || hour>22);
    printf("open : %d\n",!(hour<8 || hour>22));
    printf("closed : %d\n",!(8<=hour && hour<=22));
}
