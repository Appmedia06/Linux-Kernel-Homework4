#include <stdio.h>

/* version1 */
int ilog2_1(int i)
{
    int log = -1;
    while (i) {
        i >>= 1;
        log++;
    }
    return log;
}

/* version2 */
static size_t ilog2_2(size_t i)
{
    size_t result = 0;
    while (i >= 65536) { // 2^16
        result += 16;
        i >>= 16;
    }
    while (i >= 256) { // 2^8
        result += 8;
        i >>= 8;
    }
    while (i >= 16) { // 2^4
        result += 4;
        i >>= 4;
    }
    while (i >= 2) { // 2^2
        result += 1;
        i >>= 1;
    }
    return result;
}

int main(void)
{
    int i = 100;
    printf("log_2(%d) = %ld\n", i, ilog2_2(i));
    return 0;
}
