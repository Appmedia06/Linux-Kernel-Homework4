#include <stdint.h>
#include <stdio.h>

static void divmod_10(int in, int *div, int *mod)
{
    *div = in / 10;
    *mod = in % 10;
}

int main(void)
{
    unsigned div, mod;
    divmod_10(92987, &div, &mod);
    // printf("div = %d, mod = %d\n", div, mod);
    return 0;
}

