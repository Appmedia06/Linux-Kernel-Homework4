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
    int diff = popcount(n ^ 0xAAAAAAAA) - 16;

    return (diff % 3 + 3) % 3;
}

int main(void)
{
    for(int i = 0; i < 50; i++) {
        printf("mod(%d) = %d\n", i, mod3(i));
    }
    return 0;
}
