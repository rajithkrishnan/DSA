#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n = 10;
    printf("Fibonacci sequence up to %d : ", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
