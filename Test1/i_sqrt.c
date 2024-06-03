#include <math.h>
#include <stdio.h>

int fls(int word) {
    int r = 32;
    if (!word) return 0;
    if (!(word & 0xFFFF0000u)) { word <<= 16; r -= 16; }
    if (!(word & 0xFF000000u)) { word <<= 8; r -= 8; }
    if (!(word & 0xF0000000u)) { word <<= 4; r -= 4; }
    if (!(word & 0xC0000000u)) { word <<= 2; r -= 2; }
    if (!(word & 0x80000000u)) { r -= 1; }
    return r;
}

int i_sqrt1(int N)
{
    int msb = (int) log2(N);
    int a = 1 << msb;
    int result = 0;
    while (a != 0) {
        if ((result + a) * (result + a) <= N)
            result += a;
        a >>= 1;
    }
    return result;
}

int i_sqrt2(int N)
{
    int msb = 0;
    int n = N;
    while (n > 1) {
        n >>= 1;
        msb++;
    }
    int a = 1 << msb;
    int result = 0;
    while (a != 0) {
        if ((result + a) * (result + a) <= N)
            result += a;
        a >>= 1;
    }
    return result;
}

int i_sqrt3(int x)
{
    if (x <= 1) /* Assume x is always positive */
        return x;

    int z = 0;
    for (int m = 1UL << ((fls(x) - 1) & ~1UL); m; m >>= 2) {
        int b = z + m;
        z >>= 1;
        if (x >= b)
            x -= b, z += m;
    }
    return z;
}

int main()
{
    int N = 36;
    printf("%d\n", i_sqrt3(N));
    return 0;
}

