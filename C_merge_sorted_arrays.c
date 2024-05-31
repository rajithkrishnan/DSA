#include <stdio.h>

void mergeSortedArrays(int nums1[], int m, int nums2[], int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

void printArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int m = 3;
    int nums2[] = {2, 5, 6};
    int n = 3;

    mergeSortedArrays(nums1, m, nums2, n);
    printf("Merged sorted array: ");
    printArray(nums1, m + n);

    return 0;
}
