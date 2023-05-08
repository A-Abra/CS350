#include <stdio.h>
int main (int argc, char **argv) {
    int x=3;
    int exponent;

    exponent = (x << 4) + x;
    printf("k=17 , x=3 x<<4 + x = %d: \n", exponent);

    exponent = (x << 0) - (x << 3);
    printf("k=-7 , x=3 x<<0 - x<<3 = %d: \n", exponent);

    exponent = (x << 6) - (x<<2);
    printf("k=60 , x=3 x<<6 - x<<2 = %d: \n", exponent);

    exponent = (x << 4) - (x<<7);
    printf("k=112 , x=3 x<<4 - x<<7 = %d: \n", exponent);

    return 0;
}
