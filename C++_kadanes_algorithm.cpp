#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int maxSubArraySum(const std::vector<int>& nums) {
    int max_current = nums[0];
    int max_global = nums[0];

    for (size_t i = 1; i < nums.size(); i++) {
        max_current = std::max(nums[i], max_current + nums[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }

    return max_global;
}

int main() {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout << "Maximum subarray sum is " << maxSubArraySum(nums) << std::endl;
    return 0;
}
