#include <iostream>
#include <vector>
#include <algorithm>

void rotateArray(std::vector<int>& nums, int k) {
    k = k % nums.size();  // In case k is greater than the length of the array
    std::reverse(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
}

void printArray(const std::vector<int>& nums) {
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotateArray(nums, k);
    std::cout << "Rotated array: ";
    printArray(nums);

    return 0;
}
