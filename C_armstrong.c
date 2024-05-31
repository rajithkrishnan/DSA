#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original_num = num;
    int num_digits = 0;
    int sum = 0;

    // Count number of digits
    while (num != 0) {
        num /= 10;
        num_digits++;
    }

    // Reset num for calculations
    num = original_num;

    // Calculate sum of digits raised to the power of num_digits
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, num_digits);
        num /= 10;
    }

    return sum == original_num;
}

int main() {
    int num = 153;
    printf("%d is an Armstrong number? %s\n", num, isArmstrong(num) ? "Yes" : "No");
    return 0;
}
