#include <stdio.h>                                         
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define MAX_SIZE 10000

int totalHammingDistance(int* nums, int numsSize) {

    int total_dist = 0;
    int bits = 0;
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < numsSize; j++) {
            bits += (nums[j] >> i) & 1; // 計算第 i 個位元是否是 1
        }
        total_dist += bits * (numsSize - bits); // 計算 hamming distance
        bits = 0;
    }
    return total_dist;
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
