#include <stdio.h>

int ilog2(int i)
{
    int log = -1;
    while (i) {
        i >>= 1;
        log++;
    }
    return log;
}

int main(void)
{
    int i = 100;
    printf("log_2(%d) = %d\n", i, ilog2(i));
    return 0;
}
