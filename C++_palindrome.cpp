#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string& s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        while (!isalnum(s[left]) && left < right) {
            left++;
        }
        while (!isalnum(s[right]) && left < right) {
            right--;
        }
        if (tolower(s[left++]) != tolower(s[right--])) {
            return false;  // Not a palindrome
        }
    }

    return true;  // Palindrome
}

int main() {
    std::string s = "A man, a plan, a canal: Panama";
    std::cout << "Is '" << s << "' a palindrome? " << (isPalindrome(s) ? "Yes" : "No") << std::endl;
    return 0;
}
