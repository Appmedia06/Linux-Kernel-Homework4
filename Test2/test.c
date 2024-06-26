#include <stdint.h>
#include <stdio.h>

int main()
{
    for (int n = 0; n <= 19; n++) {
        unsigned d2, d1, d0, q, r;
        d0 = q & 0b1;
        d1 = q & 0b11;
        d2 = q & 0b111;
        q = ((((n >> 3) + (n >> 1) + n) << 3) + d0 + d1 + d2) >> 7;
        r = n - (((q << 2) + q) << 1);
        printf("n: %d, q: %d r: %d\n", n, q, r);
    }
    
    return 0;
}
