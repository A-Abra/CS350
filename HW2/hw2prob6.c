#define TMAX 2147483647
#define TMIN (-TMAX -1)
#include <stdio.h>

int main(){
    int total = saturating_add(5, 10);
    printf("Total number of Is : %d\n",total);
}
int saturating_add(int x, int y)
{
        int w = sizeof(x) << 3;
        int sum = x + y;
        int mask = 1 << (w - 1);
        int x_msb = x & mask;
        int y_msb = y & mask;
        int sum_msb = sum & mask;
        int pos_ovf = ~x_msb & ~y_msb & sum_msb;
        int neg_ovf = x_msb & y_msb & !sum_msb;
        (pos_ovf) && (sum = TMAX);
        (neg_ovf) && (sum = TMIN);

        return sum;
}