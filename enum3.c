#include <stdio.h>
int main(void) {
    enum DAY {SUN,MON,TUE,WED,THU,FRI,SAT} day=TUE;
    printf("%d\n",day);
    printf("%d\n",FRI-day);
}
