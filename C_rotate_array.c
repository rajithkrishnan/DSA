#include <stdio.h>

void rotateArray(int nums[], int size, int k) {
    k = k % size;  // In case k is greater than the length of the array
    int rotated[size];
    
    for (int i = 0; i < size; i++) {
        rotated[(i + k) % size] = nums[i];
    }

    for (int i = 0; i < size; i++) {
        nums[i] = rotated[i];
    }
}

void printArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    rotateArray(nums, size, k);
    printf("Rotated array: ");
    printArray(nums, size);

    return 0;
}
