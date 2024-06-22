#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define MAX_SIZE 10000

int totalHammingDistance(int* nums, int numsSize)
{
    int total = 0;;
    for (int i = 0;i < numsSize;i++)
        for (int j = 0; j < numsSize;j++)
            total += __builtin_popcount(nums[i] ^ nums[j]);
    return total >> 1;
}

int main(void)
{
    int nums[MAX_SIZE];
    srand(time(NULL));
    for(int i = 0; i < MAX_SIZE; i++) {
        nums[i] = rand() % INT_MAX;
    }
    printf("Hamming Distance is %d\n", totalHammingDistance(nums, MAX_SIZE)); 
    return 0;
}
