#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::vector<int> arr(size);
    std::cout << "Enter elements of the array separated by space: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    
    std::sort(arr.begin(), arr.end());

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
