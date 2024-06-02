#include <math.h>
int i_sqrt(int N)
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

#include <stdio.h>
int main()
{
    int N = 36;
    printf("%d\n", i_sqrt(N));
    return 0;
}

