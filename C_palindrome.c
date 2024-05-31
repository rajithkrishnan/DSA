#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *s) {
    int left = 0, right = strlen(s) - 1;

    while (left < right) {
        while (!isalnum(s[left]) && left < right) {
            left++;
        }
        while (!isalnum(s[right]) && left < right) {
            right--;
        }
        if (tolower(s[left++]) != tolower(s[right--])) {
            return 0;  // Not a palindrome
        }
    }

    return 1;  // Palindrome
}

int main() {
    const char *s = "A man, a plan, a canal: Panama";
    printf("Is '%s' a palindrome? %s\n", s, isPalindrome(s) ? "Yes" : "No");
    return 0;
}
