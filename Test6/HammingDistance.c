#include <stdio.h>

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
    int nums[3] = {4, 14, 4};
    printf("Hamming Distance of [%d, %d, %d] is %d\n", nums[0], nums[1], nums[2], totalHammingDistance(nums, 3)); 
    return 0;
}
