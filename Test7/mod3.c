#include <stdio.h>

unsigned popcount(unsigned v)
{   
    unsigned n;
    n = (v >> 1) & 0x77777777;
    v -= n;
    n = (n >> 1) & 0x77777777;
    v -= n;
    n = (n >> 1) & 0x77777777;
    v -= n;
   
    v = (v + (v >> 4)) & 0x0F0F0F0F;
    v *= 0x01010101;
    
    return v >> 24;
}

int mod3(unsigned n)
{
    n = popcount(n ^ 0xAAAAAAAA) + 23;
    n = popcount(n ^ 0x2A) - 3;
    return n + ((n >> 31) & 3);
}

int main(void)
{
    int n = 10;
    printf("mod(%d) = %d\n", n, mod3(n));
    return 0;
}
