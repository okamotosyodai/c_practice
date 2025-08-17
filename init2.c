#include <stdio.h>
int main(void) {
    int price_food = 980,price_drink = 480;
    double discount_rate = 0.3;
    printf("%g\n",(price_food+price_drink)*(1-discount_rate));
}
