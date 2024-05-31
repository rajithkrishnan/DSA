def rotate_array(nums, k):
    k = k % len(nums)  # In case k is greater than the length of the array
    nums[:] = nums[-k:] + nums[:-k]
    return nums

# Example usage
nums = [1, 2, 3, 4, 5, 6, 7]
k = 3
print("Rotated array:", rotate_array(nums, k))
