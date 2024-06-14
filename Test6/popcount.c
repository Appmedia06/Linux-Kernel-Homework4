#include <stdio.h>

void printBinary(int number) {
    // Define the number of bits to display (assuming a 32-bit integer)
    int numBits = sizeof(number) * 8;

    // Loop through each bit position, starting from the most significant bit
    for (int i = numBits - 1; i >= 0; i--) {
        // Print the bit (1 or 0)
        printf("%d", (number >> i) & 1);

        // Print a space after every 4 bits for better readability
        if (i % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}


unsigned popcount_naive(unsigned v)
{
    unsigned n = 0;
    while (v)
        v &= (v - 1), n = -(~n);
    return n;
}

unsigned popcount_branchless(unsigned v)
{
    unsigned n;
    n = (v >> 1) & 0x77777777;
    v -= n;
    n = (n >> 1) & 0x77777777;
    v -= n;
    n = (n >> 1) & 0x77777777;
    v -= n;
    printBinary(v);

    v = (v + (v >> 4)) & 0x0F0F0F0F;
    printBinary(v);
    v *= 0x01010101;
    printBinary(v);

    return v >> 24;
}

int main(void)
{   
    unsigned num = 537068566;
    printf("popcount(%d) = %d\n", num, popcount_branchless(num));
    return 0;
}
