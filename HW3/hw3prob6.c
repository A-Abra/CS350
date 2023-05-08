#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int binToDec(int);
double fracDec(char *);

int main (int argc, char **argv) {
    double s=atoi(argv[1]);
    int exp = binToDec( atoll(argv[2]) );
    double man = fracDec( argv[3] );

    printf("sign=%f, exponent=%d mantissa=%f \n", s, exp, man);
    double floatNum = pow(-1.0, s) *(1 + man) * pow(2, exp-127);
    printf("floating number is %f \n", floatNum);
    return 0;
}

int binToDec(int bin) {
    int decimal = 0, p = 0, rem;
    while (bin != 0) {
        rem = bin % 10;
        decimal += rem * pow(2, p);
        bin /= 10;
        p++;
    }
    return decimal;
}

double fracDec(char* s) {
    double dfactor = 2;
    double decimal = 0;
    for (int p = 0; p<23; p++){
        decimal += (s[p] - '0') / dfactor;
        dfactor *= 2.0;
    }
    return decimal;
}
