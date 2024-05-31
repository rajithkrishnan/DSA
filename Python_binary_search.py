def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = left + (right - left) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1

# Example usage
arr = [1, 3, 5, 7, 9, 11, 13]
target = 9
print("Index of", target, "is", binary_search(arr, target))
