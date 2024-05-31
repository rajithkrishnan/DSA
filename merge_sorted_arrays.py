def merge_sorted_arrays(nums1, m, nums2, n):
    nums1[m:] = nums2
    nums1.sort()
    return nums1

# Example usage
nums1 = [1, 2, 3, 0, 0, 0]
m = 3
nums2 = [2, 5, 6]
n = 3
print("Merged sorted array:", merge_sorted_arrays(nums1, m, nums2, n))
