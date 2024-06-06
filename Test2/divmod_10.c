#include <stdint.h>
#include <stdio.h>

void divmod_10(uint32_t in, uint32_t *div, uint32_t *mod)
{
    uint32_t x = (in | 1) - (in >> 2); /* div = in/10 ==> div = 0.75*in/8 */
    uint32_t q = (x >> 4) + x;
    x = q;
    q = (q >> 8) + x;
    q = (q >> 8) + x;
    q = (q >> 8) + x;
    q = (q >> 8) + x;

    *div = (q >> 3);
    *mod = in - ((q & ~0x7) + (*div << 1));   
}

int main(void)
{
    unsigned div, mod;
    divmod_10(92987, &div, &mod);
    // printf("div = %d, mod = %d\n", div, mod);
    return 0;
}
