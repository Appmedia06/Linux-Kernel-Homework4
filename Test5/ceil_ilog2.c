#include <stdio.h>
#include <stdint.h>

int ceil_ilog2(uint32_t x)
{
    uint32_t r, shift;

    x = x - (!!x);
    r = (x > 0xFFFF) << 4;
    x >>= r;
    shift = (x > 0xFF) << 3;
    x >>= shift;
    r |= shift;
    shift = (x > 0xF) << 2;
    x >>= shift;
    r |= shift;
    shift = (x > 0x3) << 1;
    x >>= shift;
    return (r | shift | x > 1) + 1; // GGGG = 1
}

int main(void)
{
    uint32_t x = 18;
    printf("ceil_ilog(%d) = %d\n", x, ceil_ilog2(x));
    return 0;
}
