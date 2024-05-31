#include <stdio.h>
#include <limits.h>

int maxSubArraySum(int nums[], int size) {
    int max_current = nums[0];
    int max_global = nums[0];

    for (int i = 1; i < size; i++) {
        max_current = nums[i] > (max_current + nums[i]) ? nums[i] : (max_current + nums[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }

    return max_global;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Maximum subarray sum is %d\n", maxSubArraySum(nums, size));
    return 0;
}
